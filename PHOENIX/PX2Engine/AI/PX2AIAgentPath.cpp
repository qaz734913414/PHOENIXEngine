// PX2AIAgentPath.cpp

#include "PX2AIAgentPath.hpp"
using namespace PX2;

//----------------------------------------------------------------------------
AIAgentPath::AIAgentPath() : 
PolylinePathway()
{
}
//----------------------------------------------------------------------------
AIAgentPath::AIAgentPath(const std::vector<APoint> &points,
	float radius, bool cyclic)
{
	OpenSteer::Vec3 vec3Point[MAX_PATH_POINTS];

	assert(points.size() < MAX_PATH_POINTS);

	std::vector<APoint>::const_iterator it;
	int count = 0;

	for (it = points.begin(); it != points.end(); ++it)
	{
		const APoint& vec = *it;

		vec3Point[count].x = vec.X();
		vec3Point[count].y = vec.Y();
		vec3Point[count].z = vec.Z();

		++count;
	}

	initialize(count, vec3Point, static_cast<float>(radius), cyclic);
}
//----------------------------------------------------------------------------
AIAgentPath::~AIAgentPath()
{
}
//----------------------------------------------------------------------------
AIAgentPath::AIAgentPath(const AIAgentPath& path)
{
	initialize(path.pointCount, path.points, path.radius, path.cyclic);
}
//----------------------------------------------------------------------------
AIAgentPath& AIAgentPath::operator=(const AIAgentPath& path)
{
	initialize(path.pointCount, path.points, path.radius, path.cyclic);
	return *this;
}
//----------------------------------------------------------------------------
void AIAgentPath::AddPoint(const APoint &pt)
{
	mPoints.push_back(pt);
}
//----------------------------------------------------------------------------
void AIAgentPath::ConfigPoints(float radius, bool cyclic)
{
	OpenSteer::Vec3 vec3Point[MAX_PATH_POINTS];

	assert(mPoints.size() < MAX_PATH_POINTS);

	std::vector<APoint>::const_iterator it;
	int count = 0;

	for (it = mPoints.begin(); it != mPoints.end(); ++it)
	{
		const APoint& vec = *it;

		vec3Point[count].x = vec.X();
		vec3Point[count].y = vec.Y();
		vec3Point[count].z = vec.Z();

		++count;
	}

	initialize(count, vec3Point, radius, cyclic);
}
//----------------------------------------------------------------------------
int AIAgentPath::GetNumberOfPathPoints() const
{
	return pointCount;
}
//----------------------------------------------------------------------------
float AIAgentPath::GetPathLength() const
{
	return (float)totalPathLength;
}
//----------------------------------------------------------------------------
void AIAgentPath::GetPathPoints(std::vector<APoint>& outPoints) const
{
	outPoints.clear();

	const size_t pathPoints = GetNumberOfPathPoints();

	for (size_t index = 0; index < pathPoints; ++index)
	{
		const OpenSteer::Vec3& vec3 = points[index];
		outPoints.push_back(APoint(vec3.x, vec3.y, vec3.z));
	}
}
//----------------------------------------------------------------------------
float AIAgentPath::GetDistanceAlongPath(const APoint& position) const
{
	const OpenSteer::Vec3 vec3(position.X(), position.Y(), position.Z());

	return const_cast<AIAgentPath*>(this)->mapPointToPathDistance(vec3);
}
//----------------------------------------------------------------------------
APoint AIAgentPath::GetNearestPointOnPath(const APoint& position) const
{
	const OpenSteer::Vec3 vec3(position.X(), position.Y(), position.Z());
	OpenSteer::Vec3 tangent;
	float outside;

	const OpenSteer::Vec3 pointOnPath =
		const_cast<AIAgentPath*>(this)->mapPointToPath(vec3, tangent, outside);

	return APoint(pointOnPath.x, pointOnPath.y, pointOnPath.z);
}
//----------------------------------------------------------------------------
APoint AIAgentPath::GetPointOnPath(const float distance) const
{
	const OpenSteer::Vec3 pointOnPath =
		const_cast<AIAgentPath*>(this)->mapPathDistanceToPoint(distance);

	return APoint(pointOnPath.x, pointOnPath.y, pointOnPath.z);
}
//----------------------------------------------------------------------------
float AIAgentPath::GetRadius() const
{
	return radius;
}
//----------------------------------------------------------------------------
unsigned int AIAgentPath::GetSegmentCount() const
{
	return static_cast<unsigned int>(pointCount)-1;
}
//----------------------------------------------------------------------------