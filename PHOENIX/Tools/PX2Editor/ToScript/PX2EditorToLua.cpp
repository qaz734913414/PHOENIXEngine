/*
** Lua binding: PX2Editor
** Generated automatically by tolua++-1.0.92 on 05/19/18 13:25:27.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_PX2Editor_open (lua_State* tolua_S);

#include "PX2EditorToLua.hpp"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_Sizef (lua_State* tolua_S)
{
 Sizef* self = (Sizef*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_EU_ResGridFrame (lua_State* tolua_S)
{
 EU_ResGridFrame* self = (EU_ResGridFrame*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_ShowType (lua_State* tolua_S)
{
 ShowType* self = (ShowType*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_EU_TimeLineFrame (lua_State* tolua_S)
{
 EU_TimeLineFrame* self = (EU_TimeLineFrame*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_EU_ContentFrame (lua_State* tolua_S)
{
 EU_ContentFrame* self = (EU_ContentFrame*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_EU_ProjectTree (lua_State* tolua_S)
{
 EU_ProjectTree* self = (EU_ProjectTree*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_EU_SimuFrame (lua_State* tolua_S)
{
 EU_SimuFrame* self = (EU_SimuFrame*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_EU_StageFrame (lua_State* tolua_S)
{
 EU_StageFrame* self = (EU_StageFrame*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_APoint (lua_State* tolua_S)
{
 APoint* self = (APoint*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_EU_ResTree (lua_State* tolua_S)
{
 EU_ResTree* self = (EU_ResTree*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_EU_ConcoleFrame (lua_State* tolua_S)
{
 EU_ConcoleFrame* self = (EU_ConcoleFrame*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_EU_InspectorFrame (lua_State* tolua_S)
{
 EU_InspectorFrame* self = (EU_InspectorFrame*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"Sizef");
 tolua_usertype(tolua_S,"Canvas");
 tolua_usertype(tolua_S,"EU_StageFrame");
 tolua_usertype(tolua_S,"UITree");
 tolua_usertype(tolua_S,"EU_ContentFrame");
 tolua_usertype(tolua_S,"Movable");
 tolua_usertype(tolua_S,"UIFrame");
 tolua_usertype(tolua_S,"APoint");
 tolua_usertype(tolua_S,"Event");
 tolua_usertype(tolua_S,"UIGridFrame");
 tolua_usertype(tolua_S,"EU_InspectorFrame");
 tolua_usertype(tolua_S,"Visitor");
 tolua_usertype(tolua_S,"EU_SimuFrame");
 tolua_usertype(tolua_S,"CanvasInputData");
 tolua_usertype(tolua_S,"EU_ResGridFrame");
 tolua_usertype(tolua_S,"ShowType");
 tolua_usertype(tolua_S,"EU_TimeLineFrame");
 tolua_usertype(tolua_S,"std::vector<std::string>");
 tolua_usertype(tolua_S,"SelectResData");
 tolua_usertype(tolua_S,"EU_ProjectTree");
 tolua_usertype(tolua_S,"UIItem");
 tolua_usertype(tolua_S,"Object");
 tolua_usertype(tolua_S,"Edit");
 tolua_usertype(tolua_S,"TimeLineEdit");
 tolua_usertype(tolua_S,"EU_Manager");
 tolua_usertype(tolua_S,"EU_ConcoleFrame");
 tolua_usertype(tolua_S,"EU_ResTree");
}

/* method: SetEditType of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_SetEditType00
static int tolua_PX2Editor_Edit_SetEditType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
  Edit::EditType type = ((Edit::EditType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetEditType'", NULL);
#endif
  {
   self->SetEditType(type);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetEditType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetEditType of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_GetEditType00
static int tolua_PX2Editor_Edit_GetEditType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Edit* self = (const Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetEditType'", NULL);
#endif
  {
   Edit::EditType tolua_ret = (Edit::EditType)  self->GetEditType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetEditType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CanDoEdit of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_CanDoEdit00
static int tolua_PX2Editor_Edit_CanDoEdit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Edit* self = (const Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CanDoEdit'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->CanDoEdit();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CanDoEdit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetEditAxisMode of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_SetEditAxisMode00
static int tolua_PX2Editor_Edit_SetEditAxisMode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
  Edit::EditAxisMode mode = ((Edit::EditAxisMode) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetEditAxisMode'", NULL);
#endif
  {
   self->SetEditAxisMode(mode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetEditAxisMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetEdtiAxisMode of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_GetEdtiAxisMode00
static int tolua_PX2Editor_Edit_GetEdtiAxisMode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Edit* self = (const Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetEdtiAxisMode'", NULL);
#endif
  {
   Edit::EditAxisMode tolua_ret = (Edit::EditAxisMode)  self->GetEdtiAxisMode();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetEdtiAxisMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetEditMode of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_SetEditMode00
static int tolua_PX2Editor_Edit_SetEditMode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
  Edit::EditMode mode = ((Edit::EditMode) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetEditMode'", NULL);
#endif
  {
   self->SetEditMode(mode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetEditMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetEditMode of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_GetEditMode00
static int tolua_PX2Editor_Edit_GetEditMode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Edit* self = (const Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetEditMode'", NULL);
#endif
  {
   Edit::EditMode tolua_ret = (Edit::EditMode)  self->GetEditMode();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetEditMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetPickPos of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_SetPickPos00
static int tolua_PX2Editor_Edit_SetPickPos00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const APoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
  const APoint* pos = ((const APoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetPickPos'", NULL);
#endif
  {
   self->SetPickPos(*pos);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetPickPos'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetPickPos of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_GetPickPos00
static int tolua_PX2Editor_Edit_GetPickPos00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Edit* self = (const Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetPickPos'", NULL);
#endif
  {
   const APoint& tolua_ret = (const APoint&)  self->GetPickPos();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const APoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetPickPos'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetPickLocalPos of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_GetPickLocalPos00
static int tolua_PX2Editor_Edit_GetPickLocalPos00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Movable",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
  Movable* nodeParent = ((Movable*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetPickLocalPos'", NULL);
#endif
  {
   APoint tolua_ret = (APoint)  self->GetPickLocalPos(nodeParent);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((APoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"APoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(APoint));
     tolua_pushusertype(tolua_S,tolua_obj,"APoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetPickLocalPos'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: FocusOnSelection of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_FocusOnSelection00
static int tolua_PX2Editor_Edit_FocusOnSelection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'FocusOnSelection'", NULL);
#endif
  {
   self->FocusOnSelection();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'FocusOnSelection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: DeleteSelection of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_DeleteSelection00
static int tolua_PX2Editor_Edit_DeleteSelection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'DeleteSelection'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->DeleteSelection();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'DeleteSelection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ChangeSelectResDir of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_ChangeSelectResDir00
static int tolua_PX2Editor_Edit_ChangeSelectResDir00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
  const std::string path = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  Edit::ChangeDirType cdt = ((Edit::ChangeDirType) (int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ChangeSelectResDir'", NULL);
#endif
  {
   self->ChangeSelectResDir(path,cdt);
   tolua_pushcppstring(tolua_S,(const char*)path);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ChangeSelectResDir'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetSelectedResDir of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_GetSelectedResDir00
static int tolua_PX2Editor_Edit_GetSelectedResDir00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Edit* self = (const Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetSelectedResDir'", NULL);
#endif
  {
   const std::string tolua_ret = (const std::string)  self->GetSelectedResDir();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetSelectedResDir'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetSelectPath_ChildFilenames of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_SetSelectPath_ChildFilenames00
static int tolua_PX2Editor_Edit_SetSelectPath_ChildFilenames00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const std::vector<std::string>",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
  const std::vector<std::string>* filenamess = ((const std::vector<std::string>*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetSelectPath_ChildFilenames'", NULL);
#endif
  {
   self->SetSelectPath_ChildFilenames(*filenamess);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetSelectPath_ChildFilenames'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetSelectPath_ChildPaths of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_SetSelectPath_ChildPaths00
static int tolua_PX2Editor_Edit_SetSelectPath_ChildPaths00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const std::vector<std::string>",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
  const std::vector<std::string>* paths = ((const std::vector<std::string>*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetSelectPath_ChildPaths'", NULL);
#endif
  {
   self->SetSelectPath_ChildPaths(*paths);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetSelectPath_ChildPaths'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetSelectPath_ChildFilenames of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_GetSelectPath_ChildFilenames00
static int tolua_PX2Editor_Edit_GetSelectPath_ChildFilenames00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Edit* self = (const Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetSelectPath_ChildFilenames'", NULL);
#endif
  {
   const std::vector<std::string>& tolua_ret = (const std::vector<std::string>&)  self->GetSelectPath_ChildFilenames();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const std::vector<std::string>");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetSelectPath_ChildFilenames'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetSelectPath_ChildPaths of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_GetSelectPath_ChildPaths00
static int tolua_PX2Editor_Edit_GetSelectPath_ChildPaths00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Edit* self = (const Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetSelectPath_ChildPaths'", NULL);
#endif
  {
   const std::vector<std::string>& tolua_ret = (const std::vector<std::string>&)  self->GetSelectPath_ChildPaths();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const std::vector<std::string>");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetSelectPath_ChildPaths'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetSelectedResource of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_SetSelectedResource00
static int tolua_PX2Editor_Edit_SetSelectedResource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const SelectResData",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
  const SelectResData* data = ((const SelectResData*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetSelectedResource'", NULL);
#endif
  {
   self->SetSelectedResource(*data);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetSelectedResource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetSelectedResource of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_GetSelectedResource00
static int tolua_PX2Editor_Edit_GetSelectedResource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Edit* self = (const Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetSelectedResource'", NULL);
#endif
  {
   const SelectResData& tolua_ret = (const SelectResData&)  self->GetSelectedResource();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const SelectResData");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetSelectedResource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CopySelectResourcePath of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_CopySelectResourcePath00
static int tolua_PX2Editor_Edit_CopySelectResourcePath00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CopySelectResourcePath'", NULL);
#endif
  {
   self->CopySelectResourcePath();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CopySelectResourcePath'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: FindSelectInProjTree of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_FindSelectInProjTree00
static int tolua_PX2Editor_Edit_FindSelectInProjTree00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'FindSelectInProjTree'", NULL);
#endif
  {
   self->FindSelectInProjTree();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'FindSelectInProjTree'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: FindSelectInResTree of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_FindSelectInResTree00
static int tolua_PX2Editor_Edit_FindSelectInResTree00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'FindSelectInResTree'", NULL);
#endif
  {
   self->FindSelectInResTree();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'FindSelectInResTree'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Undo of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_Undo00
static int tolua_PX2Editor_Edit_Undo00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Undo'", NULL);
#endif
  {
   self->Undo();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Undo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Redo of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_Redo00
static int tolua_PX2Editor_Edit_Redo00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Redo'", NULL);
#endif
  {
   self->Redo();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Redo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetCopyObject of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_SetCopyObject00
static int tolua_PX2Editor_Edit_SetCopyObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
  Object* obj = ((Object*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetCopyObject'", NULL);
#endif
  {
   self->SetCopyObject(obj);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetCopyObject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCopyObject of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_GetCopyObject00
static int tolua_PX2Editor_Edit_GetCopyObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCopyObject'", NULL);
#endif
  {
   Object* tolua_ret = (Object*)  self->GetCopyObject();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Object");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCopyObject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CopyObject of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_CopyObject00
static int tolua_PX2Editor_Edit_CopyObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CopyObject'", NULL);
#endif
  {
   self->CopyObject();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CopyObject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: PasteCopyedObject of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_PasteCopyedObject00
static int tolua_PX2Editor_Edit_PasteCopyedObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'PasteCopyedObject'", NULL);
#endif
  {
   self->PasteCopyedObject();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'PasteCopyedObject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CloneSelectedObject of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_CloneSelectedObject00
static int tolua_PX2Editor_Edit_CloneSelectedObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CloneSelectedObject'", NULL);
#endif
  {
   self->CloneSelectedObject();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CloneSelectedObject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetCopyText of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_SetCopyText00
static int tolua_PX2Editor_Edit_SetCopyText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
  const std::string copyText = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetCopyText'", NULL);
#endif
  {
   self->SetCopyText(copyText);
   tolua_pushcppstring(tolua_S,(const char*)copyText);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetCopyText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCopyText of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_GetCopyText00
static int tolua_PX2Editor_Edit_GetCopyText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Edit* self = (const Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCopyText'", NULL);
#endif
  {
   const std::string tolua_ret = (const std::string)  self->GetCopyText();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCopyText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AnimResetPlay of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_AnimResetPlay00
static int tolua_PX2Editor_Edit_AnimResetPlay00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AnimResetPlay'", NULL);
#endif
  {
   self->AnimResetPlay();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AnimResetPlay'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AnimPlay of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_AnimPlay00
static int tolua_PX2Editor_Edit_AnimPlay00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AnimPlay'", NULL);
#endif
  {
   self->AnimPlay();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AnimPlay'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AnimStop of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_AnimStop00
static int tolua_PX2Editor_Edit_AnimStop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AnimStop'", NULL);
#endif
  {
   self->AnimStop();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AnimStop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AnimReset of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_AnimReset00
static int tolua_PX2Editor_Edit_AnimReset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AnimReset'", NULL);
#endif
  {
   self->AnimReset();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AnimReset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsAnimPlaying of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_IsAnimPlaying00
static int tolua_PX2Editor_Edit_IsAnimPlaying00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsAnimPlaying'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsAnimPlaying();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsAnimPlaying'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AnimPlayStop of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_AnimPlayStop00
static int tolua_PX2Editor_Edit_AnimPlayStop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AnimPlayStop'", NULL);
#endif
  {
   self->AnimPlayStop();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AnimPlayStop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: MakeSelectTimeLineEdit of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_MakeSelectTimeLineEdit00
static int tolua_PX2Editor_Edit_MakeSelectTimeLineEdit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'MakeSelectTimeLineEdit'", NULL);
#endif
  {
   self->MakeSelectTimeLineEdit();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MakeSelectTimeLineEdit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: TimeLine_UIGroup_Delete of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_TimeLine_UIGroup_Delete00
static int tolua_PX2Editor_Edit_TimeLine_UIGroup_Delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'TimeLine_UIGroup_Delete'", NULL);
#endif
  {
   self->TimeLine_UIGroup_Delete();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'TimeLine_UIGroup_Delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: TimeLine_UIGroup_DeleteAll of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_TimeLine_UIGroup_DeleteAll00
static int tolua_PX2Editor_Edit_TimeLine_UIGroup_DeleteAll00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'TimeLine_UIGroup_DeleteAll'", NULL);
#endif
  {
   self->TimeLine_UIGroup_DeleteAll();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'TimeLine_UIGroup_DeleteAll'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: TimeLine_AddPoint of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_TimeLine_AddPoint00
static int tolua_PX2Editor_Edit_TimeLine_AddPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'TimeLine_AddPoint'", NULL);
#endif
  {
   self->TimeLine_AddPoint();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'TimeLine_AddPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: TimeLine_DeletePoint of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_TimeLine_DeletePoint00
static int tolua_PX2Editor_Edit_TimeLine_DeletePoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'TimeLine_DeletePoint'", NULL);
#endif
  {
   self->TimeLine_DeletePoint();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'TimeLine_DeletePoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: TimeLine_SetInValue of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_TimeLine_SetInValue00
static int tolua_PX2Editor_Edit_TimeLine_SetInValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'TimeLine_SetInValue'", NULL);
#endif
  {
   self->TimeLine_SetInValue();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'TimeLine_SetInValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: TimeLine_SetOutValue of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_TimeLine_SetOutValue00
static int tolua_PX2Editor_Edit_TimeLine_SetOutValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'TimeLine_SetOutValue'", NULL);
#endif
  {
   self->TimeLine_SetOutValue();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'TimeLine_SetOutValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddOpenedFile of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_AddOpenedFile00
static int tolua_PX2Editor_Edit_AddOpenedFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
  const std::string path = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddOpenedFile'", NULL);
#endif
  {
   self->AddOpenedFile(path);
   tolua_pushcppstring(tolua_S,(const char*)path);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddOpenedFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsAddedOpenedFile of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_IsAddedOpenedFile00
static int tolua_PX2Editor_Edit_IsAddedOpenedFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
  const std::string path = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsAddedOpenedFile'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsAddedOpenedFile(path);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)path);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsAddedOpenedFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: RemoveOpenedFile of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_RemoveOpenedFile00
static int tolua_PX2Editor_Edit_RemoveOpenedFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
  const std::string path = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'RemoveOpenedFile'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->RemoveOpenedFile(path);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)path);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RemoveOpenedFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetActivateOpenedFile of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_SetActivateOpenedFile00
static int tolua_PX2Editor_Edit_SetActivateOpenedFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
  const std::string path = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetActivateOpenedFile'", NULL);
#endif
  {
   self->SetActivateOpenedFile(path);
   tolua_pushcppstring(tolua_S,(const char*)path);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetActivateOpenedFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetActivateOpenedFile of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_GetActivateOpenedFile00
static int tolua_PX2Editor_Edit_GetActivateOpenedFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Edit* self = (const Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetActivateOpenedFile'", NULL);
#endif
  {
   const std::string tolua_ret = (const std::string)  self->GetActivateOpenedFile();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetActivateOpenedFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: BroadCastEditorEventRefreshRes of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_BroadCastEditorEventRefreshRes00
static int tolua_PX2Editor_Edit_BroadCastEditorEventRefreshRes00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'BroadCastEditorEventRefreshRes'", NULL);
#endif
  {
   self->BroadCastEditorEventRefreshRes();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'BroadCastEditorEventRefreshRes'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: BraodCastEditorEventClearRes of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_BraodCastEditorEventClearRes00
static int tolua_PX2Editor_Edit_BraodCastEditorEventClearRes00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'BraodCastEditorEventClearRes'", NULL);
#endif
  {
   self->BraodCastEditorEventClearRes();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'BraodCastEditorEventClearRes'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: BroadCastEditorEventUp of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_BroadCastEditorEventUp00
static int tolua_PX2Editor_Edit_BroadCastEditorEventUp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'BroadCastEditorEventUp'", NULL);
#endif
  {
   self->BroadCastEditorEventUp();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'BroadCastEditorEventUp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: BroadCastEditorEventDown of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_BroadCastEditorEventDown00
static int tolua_PX2Editor_Edit_BroadCastEditorEventDown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'BroadCastEditorEventDown'", NULL);
#endif
  {
   self->BroadCastEditorEventDown();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'BroadCastEditorEventDown'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: BroadCastEditorEventPlayInWindow of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_BroadCastEditorEventPlayInWindow00
static int tolua_PX2Editor_Edit_BroadCastEditorEventPlayInWindow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'BroadCastEditorEventPlayInWindow'", NULL);
#endif
  {
   self->BroadCastEditorEventPlayInWindow();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'BroadCastEditorEventPlayInWindow'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: BroadCastEditorSaveText of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_BroadCastEditorSaveText00
static int tolua_PX2Editor_Edit_BroadCastEditorSaveText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'BroadCastEditorSaveText'", NULL);
#endif
  {
   self->BroadCastEditorSaveText();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'BroadCastEditorSaveText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OpenResIn of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_OpenResIn00
static int tolua_PX2Editor_Edit_OpenResIn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
  const std::string pathFilename = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OpenResIn'", NULL);
#endif
  {
   self->OpenResIn(pathFilename);
   tolua_pushcppstring(tolua_S,(const char*)pathFilename);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OpenResIn'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OpenResOut of class  Edit */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_Edit_OpenResOut00
static int tolua_PX2Editor_Edit_OpenResOut00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Edit",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Edit* self = (Edit*)  tolua_tousertype(tolua_S,1,0);
  const std::string pathFilename = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OpenResOut'", NULL);
#endif
  {
   self->OpenResOut(pathFilename);
   tolua_pushcppstring(tolua_S,(const char*)pathFilename);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OpenResOut'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetSelectResType of class  SelectResData */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_SelectResData_GetSelectResType00
static int tolua_PX2Editor_SelectResData_GetSelectResType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SelectResData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SelectResData* self = (const SelectResData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetSelectResType'", NULL);
#endif
  {
   SelectResData::SelectResType tolua_ret = (SelectResData::SelectResType)  self->GetSelectResType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetSelectResType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ResPathname of class  SelectResData */
#ifndef TOLUA_DISABLE_tolua_get_SelectResData_ResPathname
static int tolua_get_SelectResData_ResPathname(lua_State* tolua_S)
{
  SelectResData* self = (SelectResData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'ResPathname'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->ResPathname);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: ResPathname of class  SelectResData */
#ifndef TOLUA_DISABLE_tolua_set_SelectResData_ResPathname
static int tolua_set_SelectResData_ResPathname(lua_State* tolua_S)
{
  SelectResData* self = (SelectResData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'ResPathname'",NULL);
  if (!tolua_iscppstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->ResPathname = ((std::string)  tolua_tocppstring(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: EleName of class  SelectResData */
#ifndef TOLUA_DISABLE_tolua_get_SelectResData_EleName
static int tolua_get_SelectResData_EleName(lua_State* tolua_S)
{
  SelectResData* self = (SelectResData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'EleName'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->EleName);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: EleName of class  SelectResData */
#ifndef TOLUA_DISABLE_tolua_set_SelectResData_EleName
static int tolua_set_SelectResData_EleName(lua_State* tolua_S)
{
  SelectResData* self = (SelectResData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'EleName'",NULL);
  if (!tolua_iscppstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->EleName = ((std::string)  tolua_tocppstring(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsTheObjectTex of class  SelectResData */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_SelectResData_IsTheObjectTex00
static int tolua_PX2Editor_SelectResData_IsTheObjectTex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SelectResData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SelectResData* self = (const SelectResData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsTheObjectTex'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsTheObjectTex();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsTheObjectTex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTheObjectTexSize of class  SelectResData */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_SelectResData_GetTheObjectTexSize00
static int tolua_PX2Editor_SelectResData_GetTheObjectTexSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SelectResData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SelectResData* self = (const SelectResData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTheObjectTexSize'", NULL);
#endif
  {
   Sizef tolua_ret = (Sizef)  self->GetTheObjectTexSize();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Sizef)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Sizef");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Sizef));
     tolua_pushusertype(tolua_S,tolua_obj,"Sizef");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetTheObjectTexSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: NewProject of class  EU_Manager */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_Manager_NewProject00
static int tolua_PX2Editor_EU_Manager_NewProject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_Manager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_Manager* self = (EU_Manager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'NewProject'", NULL);
#endif
  {
   self->NewProject();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'NewProject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OpenProject of class  EU_Manager */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_Manager_OpenProject00
static int tolua_PX2Editor_EU_Manager_OpenProject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_Manager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_Manager* self = (EU_Manager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OpenProject'", NULL);
#endif
  {
   self->OpenProject();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OpenProject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SaveProject of class  EU_Manager */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_Manager_SaveProject00
static int tolua_PX2Editor_EU_Manager_SaveProject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_Manager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_Manager* self = (EU_Manager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SaveProject'", NULL);
#endif
  {
   self->SaveProject();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SaveProject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CloseProject of class  EU_Manager */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_Manager_CloseProject00
static int tolua_PX2Editor_EU_Manager_CloseProject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_Manager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_Manager* self = (EU_Manager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CloseProject'", NULL);
#endif
  {
   self->CloseProject();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CloseProject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: NewScene of class  EU_Manager */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_Manager_NewScene00
static int tolua_PX2Editor_EU_Manager_NewScene00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_Manager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_Manager* self = (EU_Manager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'NewScene'", NULL);
#endif
  {
   self->NewScene();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'NewScene'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OpenScene of class  EU_Manager */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_Manager_OpenScene00
static int tolua_PX2Editor_EU_Manager_OpenScene00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_Manager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_Manager* self = (EU_Manager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OpenScene'", NULL);
#endif
  {
   self->OpenScene();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OpenScene'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SaveScene of class  EU_Manager */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_Manager_SaveScene00
static int tolua_PX2Editor_EU_Manager_SaveScene00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_Manager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_Manager* self = (EU_Manager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SaveScene'", NULL);
#endif
  {
   self->SaveScene();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SaveScene'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SaveSceneAs of class  EU_Manager */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_Manager_SaveSceneAs00
static int tolua_PX2Editor_EU_Manager_SaveSceneAs00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_Manager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_Manager* self = (EU_Manager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SaveSceneAs'", NULL);
#endif
  {
   self->SaveSceneAs();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SaveSceneAs'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CloseScene of class  EU_Manager */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_Manager_CloseScene00
static int tolua_PX2Editor_EU_Manager_CloseScene00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_Manager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_Manager* self = (EU_Manager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CloseScene'", NULL);
#endif
  {
   self->CloseScene();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CloseScene'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Exit of class  EU_Manager */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_Manager_Exit00
static int tolua_PX2Editor_EU_Manager_Exit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_Manager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_Manager* self = (EU_Manager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Exit'", NULL);
#endif
  {
   self->Exit();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Exit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Import of class  EU_Manager */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_Manager_Import00
static int tolua_PX2Editor_EU_Manager_Import00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_Manager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_Manager* self = (EU_Manager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Import'", NULL);
#endif
  {
   self->Import();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Import'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Export of class  EU_Manager */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_Manager_Export00
static int tolua_PX2Editor_EU_Manager_Export00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_Manager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_Manager* self = (EU_Manager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Export'", NULL);
#endif
  {
   self->Export();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Export'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateEditMenu of class  EU_Manager */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_Manager_CreateEditMenu00
static int tolua_PX2Editor_EU_Manager_CreateEditMenu00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_Manager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const APoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_Manager* self = (EU_Manager*)  tolua_tousertype(tolua_S,1,0);
  const std::string whereStr = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const APoint* pos = ((const APoint*)  tolua_tousertype(tolua_S,3,0));
  EU_Manager::EditMenuType menuType = ((EU_Manager::EditMenuType) (int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CreateEditMenu'", NULL);
#endif
  {
   self->CreateEditMenu(whereStr,*pos,menuType);
   tolua_pushcppstring(tolua_S,(const char*)whereStr);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CreateEditMenu'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetEidtMenuType of class  EU_Manager */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_Manager_GetEidtMenuType00
static int tolua_PX2Editor_EU_Manager_GetEidtMenuType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_Manager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_Manager* self = (EU_Manager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetEidtMenuType'", NULL);
#endif
  {
   EU_Manager::EditMenuType tolua_ret = (EU_Manager::EditMenuType)  self->GetEidtMenuType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetEidtMenuType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetLogicCanvas of class  EU_Manager */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_Manager_SetLogicCanvas00
static int tolua_PX2Editor_EU_Manager_SetLogicCanvas00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_Manager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Canvas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_Manager* self = (EU_Manager*)  tolua_tousertype(tolua_S,1,0);
  Canvas* logicCanvas = ((Canvas*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetLogicCanvas'", NULL);
#endif
  {
   self->SetLogicCanvas(logicCanvas);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetLogicCanvas'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetLogicCanvas of class  EU_Manager */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_Manager_GetLogicCanvas00
static int tolua_PX2Editor_EU_Manager_GetLogicCanvas00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_Manager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_Manager* self = (EU_Manager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetLogicCanvas'", NULL);
#endif
  {
   Canvas* tolua_ret = (Canvas*)  self->GetLogicCanvas();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Canvas");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetLogicCanvas'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetInspectorView of class  EU_Manager */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_Manager_SetInspectorView00
static int tolua_PX2Editor_EU_Manager_SetInspectorView00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_Manager",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_Manager* self = (EU_Manager*)  tolua_tousertype(tolua_S,1,0);
  int val = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetInspectorView'", NULL);
#endif
  {
   self->SetInspectorView(val);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetInspectorView'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetProjectTreeLevel of class  EU_Manager */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_Manager_SetProjectTreeLevel00
static int tolua_PX2Editor_EU_Manager_SetProjectTreeLevel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_Manager",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_Manager* self = (EU_Manager*)  tolua_tousertype(tolua_S,1,0);
  int level = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetProjectTreeLevel'", NULL);
#endif
  {
   self->SetProjectTreeLevel(level);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetProjectTreeLevel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddTool of class  EU_Manager */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_Manager_AddTool00
static int tolua_PX2Editor_EU_Manager_AddTool00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_Manager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_Manager* self = (EU_Manager*)  tolua_tousertype(tolua_S,1,0);
  const std::string whereStr = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string icon = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  std::string script = ((std::string)  tolua_tocppstring(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddTool'", NULL);
#endif
  {
   self->AddTool(whereStr,icon,script);
   tolua_pushcppstring(tolua_S,(const char*)whereStr);
   tolua_pushcppstring(tolua_S,(const char*)icon);
   tolua_pushcppstring(tolua_S,(const char*)script);
  }
 }
 return 3;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddTool'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddTool of class  EU_Manager */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_Manager_AddTool01
static int tolua_PX2Editor_EU_Manager_AddTool01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_Manager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  EU_Manager* self = (EU_Manager*)  tolua_tousertype(tolua_S,1,0);
  const std::string whereStr = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string icon = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  std::string script = ((std::string)  tolua_tocppstring(tolua_S,4,0));
  const std::string helpStr = ((const std::string)  tolua_tocppstring(tolua_S,5,0));
  int type = ((int)  tolua_tonumber(tolua_S,6,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddTool'", NULL);
#endif
  {
   self->AddTool(whereStr,icon,script,helpStr,type);
   tolua_pushcppstring(tolua_S,(const char*)whereStr);
   tolua_pushcppstring(tolua_S,(const char*)icon);
   tolua_pushcppstring(tolua_S,(const char*)script);
   tolua_pushcppstring(tolua_S,(const char*)helpStr);
  }
 }
 return 4;
tolua_lerror:
 return tolua_PX2Editor_EU_Manager_AddTool00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddToolChoose of class  EU_Manager */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_Manager_AddToolChoose00
static int tolua_PX2Editor_EU_Manager_AddToolChoose00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_Manager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_Manager* self = (EU_Manager*)  tolua_tousertype(tolua_S,1,0);
  const std::string whereStr = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string script = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const std::string choose0 = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddToolChoose'", NULL);
#endif
  {
   self->AddToolChoose(whereStr,script,choose0);
   tolua_pushcppstring(tolua_S,(const char*)whereStr);
   tolua_pushcppstring(tolua_S,(const char*)script);
   tolua_pushcppstring(tolua_S,(const char*)choose0);
  }
 }
 return 3;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddToolChoose'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddToolChoose of class  EU_Manager */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_Manager_AddToolChoose01
static int tolua_PX2Editor_EU_Manager_AddToolChoose01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_Manager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  EU_Manager* self = (EU_Manager*)  tolua_tousertype(tolua_S,1,0);
  const std::string whereStr = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string script = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const std::string choose0 = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
  const std::string choose1 = ((const std::string)  tolua_tocppstring(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddToolChoose'", NULL);
#endif
  {
   self->AddToolChoose(whereStr,script,choose0,choose1);
   tolua_pushcppstring(tolua_S,(const char*)whereStr);
   tolua_pushcppstring(tolua_S,(const char*)script);
   tolua_pushcppstring(tolua_S,(const char*)choose0);
   tolua_pushcppstring(tolua_S,(const char*)choose1);
  }
 }
 return 4;
tolua_lerror:
 return tolua_PX2Editor_EU_Manager_AddToolChoose00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddToolChoose of class  EU_Manager */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_Manager_AddToolChoose02
static int tolua_PX2Editor_EU_Manager_AddToolChoose02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_Manager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,5,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  EU_Manager* self = (EU_Manager*)  tolua_tousertype(tolua_S,1,0);
  const std::string whereStr = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string script = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const std::string choose0 = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
  const std::string choose1 = ((const std::string)  tolua_tocppstring(tolua_S,5,0));
  const std::string choose2 = ((const std::string)  tolua_tocppstring(tolua_S,6,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddToolChoose'", NULL);
#endif
  {
   self->AddToolChoose(whereStr,script,choose0,choose1,choose2);
   tolua_pushcppstring(tolua_S,(const char*)whereStr);
   tolua_pushcppstring(tolua_S,(const char*)script);
   tolua_pushcppstring(tolua_S,(const char*)choose0);
   tolua_pushcppstring(tolua_S,(const char*)choose1);
   tolua_pushcppstring(tolua_S,(const char*)choose2);
  }
 }
 return 5;
tolua_lerror:
 return tolua_PX2Editor_EU_Manager_AddToolChoose01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddToolChoose of class  EU_Manager */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_Manager_AddToolChoose03
static int tolua_PX2Editor_EU_Manager_AddToolChoose03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_Manager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,5,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,6,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  EU_Manager* self = (EU_Manager*)  tolua_tousertype(tolua_S,1,0);
  const std::string whereStr = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string script = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const std::string choose0 = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
  const std::string choose1 = ((const std::string)  tolua_tocppstring(tolua_S,5,0));
  const std::string choose2 = ((const std::string)  tolua_tocppstring(tolua_S,6,0));
  const std::string choose3 = ((const std::string)  tolua_tocppstring(tolua_S,7,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddToolChoose'", NULL);
#endif
  {
   self->AddToolChoose(whereStr,script,choose0,choose1,choose2,choose3);
   tolua_pushcppstring(tolua_S,(const char*)whereStr);
   tolua_pushcppstring(tolua_S,(const char*)script);
   tolua_pushcppstring(tolua_S,(const char*)choose0);
   tolua_pushcppstring(tolua_S,(const char*)choose1);
   tolua_pushcppstring(tolua_S,(const char*)choose2);
   tolua_pushcppstring(tolua_S,(const char*)choose3);
  }
 }
 return 6;
tolua_lerror:
 return tolua_PX2Editor_EU_Manager_AddToolChoose02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddToolChoose of class  EU_Manager */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_Manager_AddToolChoose04
static int tolua_PX2Editor_EU_Manager_AddToolChoose04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_Manager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,5,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,6,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,7,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,8,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,9,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  EU_Manager* self = (EU_Manager*)  tolua_tousertype(tolua_S,1,0);
  const std::string whereStr = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string script = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const std::string choose0 = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
  const std::string choose1 = ((const std::string)  tolua_tocppstring(tolua_S,5,0));
  const std::string choose2 = ((const std::string)  tolua_tocppstring(tolua_S,6,0));
  const std::string choose3 = ((const std::string)  tolua_tocppstring(tolua_S,7,0));
  const std::string choose4 = ((const std::string)  tolua_tocppstring(tolua_S,8,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddToolChoose'", NULL);
#endif
  {
   self->AddToolChoose(whereStr,script,choose0,choose1,choose2,choose3,choose4);
   tolua_pushcppstring(tolua_S,(const char*)whereStr);
   tolua_pushcppstring(tolua_S,(const char*)script);
   tolua_pushcppstring(tolua_S,(const char*)choose0);
   tolua_pushcppstring(tolua_S,(const char*)choose1);
   tolua_pushcppstring(tolua_S,(const char*)choose2);
   tolua_pushcppstring(tolua_S,(const char*)choose3);
   tolua_pushcppstring(tolua_S,(const char*)choose4);
  }
 }
 return 7;
tolua_lerror:
 return tolua_PX2Editor_EU_Manager_AddToolChoose03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddToolSeparater of class  EU_Manager */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_Manager_AddToolSeparater00
static int tolua_PX2Editor_EU_Manager_AddToolSeparater00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_Manager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_Manager* self = (EU_Manager*)  tolua_tousertype(tolua_S,1,0);
  const std::string whereStr = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddToolSeparater'", NULL);
#endif
  {
   self->AddToolSeparater(whereStr);
   tolua_pushcppstring(tolua_S,(const char*)whereStr);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddToolSeparater'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddToolStretch of class  EU_Manager */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_Manager_AddToolStretch00
static int tolua_PX2Editor_EU_Manager_AddToolStretch00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_Manager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_Manager* self = (EU_Manager*)  tolua_tousertype(tolua_S,1,0);
  const std::string whereStr = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddToolStretch'", NULL);
#endif
  {
   self->AddToolStretch(whereStr);
   tolua_pushcppstring(tolua_S,(const char*)whereStr);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddToolStretch'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  EU_ResTree */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ResTree_new00
static int tolua_PX2Editor_EU_ResTree_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_ResTree",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_ResTree::ResTreeType rtt = ((EU_ResTree::ResTreeType) (int)  tolua_tonumber(tolua_S,2,EU_ResTree::RTT_DIR));
  {
   EU_ResTree* tolua_ret = (EU_ResTree*)  Mtolua_new((EU_ResTree)(rtt));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_ResTree");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  EU_ResTree */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ResTree_new00_local
static int tolua_PX2Editor_EU_ResTree_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_ResTree",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_ResTree::ResTreeType rtt = ((EU_ResTree::ResTreeType) (int)  tolua_tonumber(tolua_S,2,EU_ResTree::RTT_DIR));
  {
   EU_ResTree* tolua_ret = (EU_ResTree*)  Mtolua_new((EU_ResTree)(rtt));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_ResTree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  EU_ResTree */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ResTree_delete00
static int tolua_PX2Editor_EU_ResTree_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_ResTree",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_ResTree* self = (EU_ResTree*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: New of class  EU_ResTree */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ResTree_New00
static int tolua_PX2Editor_EU_ResTree_New00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_ResTree",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   EU_ProjectTree* tolua_ret = (EU_ProjectTree*)  EU_ResTree::New();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_ProjectTree");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'New'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: New of class  EU_ResTree */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ResTree_New01
static int tolua_PX2Editor_EU_ResTree_New01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_ResTree",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  {
   EU_ProjectTree* tolua_ret = (EU_ProjectTree*)  EU_ResTree::New(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_ProjectTree");
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 2;
tolua_lerror:
 return tolua_PX2Editor_EU_ResTree_New00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddItem of class  EU_ResTree */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ResTree_AddItem00
static int tolua_PX2Editor_EU_ResTree_AddItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_ResTree",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIItem",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_ResTree* self = (EU_ResTree*)  tolua_tousertype(tolua_S,1,0);
  UIItem* parentItem = ((UIItem*)  tolua_tousertype(tolua_S,2,0));
  const std::string label = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddItem'", NULL);
#endif
  {
   UIItem* tolua_ret = (UIItem*)  self->AddItem(parentItem,label);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UIItem");
   tolua_pushcppstring(tolua_S,(const char*)label);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddItem'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddItem of class  EU_ResTree */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ResTree_AddItem01
static int tolua_PX2Editor_EU_ResTree_AddItem01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_ResTree",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIItem",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,5,"Object",1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  EU_ResTree* self = (EU_ResTree*)  tolua_tousertype(tolua_S,1,0);
  UIItem* parentItem = ((UIItem*)  tolua_tousertype(tolua_S,2,0));
  const std::string label = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
  Object* obj = ((Object*)  tolua_tousertype(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddItem'", NULL);
#endif
  {
   UIItem* tolua_ret = (UIItem*)  self->AddItem(parentItem,label,name,obj);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UIItem");
   tolua_pushcppstring(tolua_S,(const char*)label);
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 3;
tolua_lerror:
 return tolua_PX2Editor_EU_ResTree_AddItem00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnSelected of class  EU_ResTree */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ResTree_OnSelected00
static int tolua_PX2Editor_EU_ResTree_OnSelected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_ResTree",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIItem",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_ResTree* self = (EU_ResTree*)  tolua_tousertype(tolua_S,1,0);
  UIItem* item = ((UIItem*)  tolua_tousertype(tolua_S,2,0));
  bool isDouble = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnSelected'", NULL);
#endif
  {
   self->OnSelected(item,isDouble);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnSelected'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: RefreshItems of class  EU_ResTree */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ResTree_RefreshItems00
static int tolua_PX2Editor_EU_ResTree_RefreshItems00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_ResTree",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIItem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_ResTree* self = (EU_ResTree*)  tolua_tousertype(tolua_S,1,0);
  UIItem* parent = ((UIItem*)  tolua_tousertype(tolua_S,2,0));
  EU_ResTree::RefreshType type = ((EU_ResTree::RefreshType) (int)  tolua_tonumber(tolua_S,3,0));
  bool isExpand = ((bool)  tolua_toboolean(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'RefreshItems'", NULL);
#endif
  {
   self->RefreshItems(parent,type,isExpand);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RefreshItems'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ClearItems of class  EU_ResTree */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ResTree_ClearItems00
static int tolua_PX2Editor_EU_ResTree_ClearItems00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_ResTree",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_ResTree* self = (EU_ResTree*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ClearItems'", NULL);
#endif
  {
   self->ClearItems();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ClearItems'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  EU_ResGridFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ResGridFrame_new00
static int tolua_PX2Editor_EU_ResGridFrame_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_ResGridFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   EU_ResGridFrame* tolua_ret = (EU_ResGridFrame*)  Mtolua_new((EU_ResGridFrame)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_ResGridFrame");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  EU_ResGridFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ResGridFrame_new00_local
static int tolua_PX2Editor_EU_ResGridFrame_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_ResGridFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   EU_ResGridFrame* tolua_ret = (EU_ResGridFrame*)  Mtolua_new((EU_ResGridFrame)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_ResGridFrame");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  EU_ResGridFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ResGridFrame_delete00
static int tolua_PX2Editor_EU_ResGridFrame_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_ResGridFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_ResGridFrame* self = (EU_ResGridFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: New of class  EU_ResGridFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ResGridFrame_New00
static int tolua_PX2Editor_EU_ResGridFrame_New00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_ResGridFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   EU_ResGridFrame* tolua_ret = (EU_ResGridFrame*)  EU_ResGridFrame::New();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_ResGridFrame");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'New'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: New of class  EU_ResGridFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ResGridFrame_New01
static int tolua_PX2Editor_EU_ResGridFrame_New01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_ResGridFrame",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  {
   EU_ResGridFrame* tolua_ret = (EU_ResGridFrame*)  EU_ResGridFrame::New(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_ResGridFrame");
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 2;
tolua_lerror:
 return tolua_PX2Editor_EU_ResGridFrame_New00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  EU_ConcoleFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ConcoleFrame_new00
static int tolua_PX2Editor_EU_ConcoleFrame_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_ConcoleFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   EU_ConcoleFrame* tolua_ret = (EU_ConcoleFrame*)  Mtolua_new((EU_ConcoleFrame)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_ConcoleFrame");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  EU_ConcoleFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ConcoleFrame_new00_local
static int tolua_PX2Editor_EU_ConcoleFrame_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_ConcoleFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   EU_ConcoleFrame* tolua_ret = (EU_ConcoleFrame*)  Mtolua_new((EU_ConcoleFrame)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_ConcoleFrame");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  EU_ConcoleFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ConcoleFrame_delete00
static int tolua_PX2Editor_EU_ConcoleFrame_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_ConcoleFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_ConcoleFrame* self = (EU_ConcoleFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: New of class  EU_ConcoleFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ConcoleFrame_New00
static int tolua_PX2Editor_EU_ConcoleFrame_New00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_ConcoleFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   EU_ConcoleFrame* tolua_ret = (EU_ConcoleFrame*)  EU_ConcoleFrame::New();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_ConcoleFrame");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'New'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: New of class  EU_ConcoleFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ConcoleFrame_New01
static int tolua_PX2Editor_EU_ConcoleFrame_New01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_ConcoleFrame",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  {
   EU_ConcoleFrame* tolua_ret = (EU_ConcoleFrame*)  EU_ConcoleFrame::New(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_ConcoleFrame");
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 2;
tolua_lerror:
 return tolua_PX2Editor_EU_ConcoleFrame_New00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  EU_ProjectTree */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ProjectTree_new00
static int tolua_PX2Editor_EU_ProjectTree_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_ProjectTree",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   EU_ProjectTree* tolua_ret = (EU_ProjectTree*)  Mtolua_new((EU_ProjectTree)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_ProjectTree");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  EU_ProjectTree */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ProjectTree_new00_local
static int tolua_PX2Editor_EU_ProjectTree_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_ProjectTree",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   EU_ProjectTree* tolua_ret = (EU_ProjectTree*)  Mtolua_new((EU_ProjectTree)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_ProjectTree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  EU_ProjectTree */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ProjectTree_delete00
static int tolua_PX2Editor_EU_ProjectTree_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_ProjectTree",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_ProjectTree* self = (EU_ProjectTree*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: New of class  EU_ProjectTree */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ProjectTree_New00
static int tolua_PX2Editor_EU_ProjectTree_New00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_ProjectTree",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   EU_ProjectTree* tolua_ret = (EU_ProjectTree*)  EU_ProjectTree::New();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_ProjectTree");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'New'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: New of class  EU_ProjectTree */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ProjectTree_New01
static int tolua_PX2Editor_EU_ProjectTree_New01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_ProjectTree",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  {
   EU_ProjectTree* tolua_ret = (EU_ProjectTree*)  EU_ProjectTree::New(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_ProjectTree");
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 2;
tolua_lerror:
 return tolua_PX2Editor_EU_ProjectTree_New00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetShowType of class  EU_ProjectTree */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ProjectTree_SetShowType00
static int tolua_PX2Editor_EU_ProjectTree_SetShowType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_ProjectTree",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ShowType",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_ProjectTree* self = (EU_ProjectTree*)  tolua_tousertype(tolua_S,1,0);
  ShowType st = *((ShowType*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetShowType'", NULL);
#endif
  {
   self->SetShowType(st);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetShowType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetShowType of class  EU_ProjectTree */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ProjectTree_GetShowType00
static int tolua_PX2Editor_EU_ProjectTree_GetShowType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const EU_ProjectTree",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const EU_ProjectTree* self = (const EU_ProjectTree*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetShowType'", NULL);
#endif
  {
   ShowType tolua_ret = (ShowType)  self->GetShowType();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((ShowType)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"ShowType");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ShowType));
     tolua_pushusertype(tolua_S,tolua_obj,"ShowType");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetShowType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddItem of class  EU_ProjectTree */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ProjectTree_AddItem00
static int tolua_PX2Editor_EU_ProjectTree_AddItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_ProjectTree",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIItem",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_ProjectTree* self = (EU_ProjectTree*)  tolua_tousertype(tolua_S,1,0);
  UIItem* parentItem = ((UIItem*)  tolua_tousertype(tolua_S,2,0));
  const std::string label = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddItem'", NULL);
#endif
  {
   UIItem* tolua_ret = (UIItem*)  self->AddItem(parentItem,label);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UIItem");
   tolua_pushcppstring(tolua_S,(const char*)label);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddItem'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddItem of class  EU_ProjectTree */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ProjectTree_AddItem01
static int tolua_PX2Editor_EU_ProjectTree_AddItem01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_ProjectTree",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIItem",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,5,"Object",1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  EU_ProjectTree* self = (EU_ProjectTree*)  tolua_tousertype(tolua_S,1,0);
  UIItem* parentItem = ((UIItem*)  tolua_tousertype(tolua_S,2,0));
  const std::string label = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
  Object* obj = ((Object*)  tolua_tousertype(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddItem'", NULL);
#endif
  {
   UIItem* tolua_ret = (UIItem*)  self->AddItem(parentItem,label,name,obj);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UIItem");
   tolua_pushcppstring(tolua_S,(const char*)label);
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 3;
tolua_lerror:
 return tolua_PX2Editor_EU_ProjectTree_AddItem00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnEvent of class  EU_ProjectTree */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ProjectTree_OnEvent00
static int tolua_PX2Editor_EU_ProjectTree_OnEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_ProjectTree",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Event",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_ProjectTree* self = (EU_ProjectTree*)  tolua_tousertype(tolua_S,1,0);
  Event* ent = ((Event*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnEvent'", NULL);
#endif
  {
   self->OnEvent(ent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnSelected of class  EU_ProjectTree */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ProjectTree_OnSelected00
static int tolua_PX2Editor_EU_ProjectTree_OnSelected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_ProjectTree",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIItem",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_ProjectTree* self = (EU_ProjectTree*)  tolua_tousertype(tolua_S,1,0);
  UIItem* item = ((UIItem*)  tolua_tousertype(tolua_S,2,0));
  bool isDouble = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnSelected'", NULL);
#endif
  {
   self->OnSelected(item,isDouble);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnSelected'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OnSizeNodePicked of class  EU_ProjectTree */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ProjectTree_OnSizeNodePicked00
static int tolua_PX2Editor_EU_ProjectTree_OnSizeNodePicked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_ProjectTree",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CanvasInputData",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_ProjectTree* self = (EU_ProjectTree*)  tolua_tousertype(tolua_S,1,0);
  const CanvasInputData* inputData = ((const CanvasInputData*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OnSizeNodePicked'", NULL);
#endif
  {
   self->OnSizeNodePicked(*inputData);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OnSizeNodePicked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  EU_InspectorFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_InspectorFrame_new00
static int tolua_PX2Editor_EU_InspectorFrame_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_InspectorFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   EU_InspectorFrame* tolua_ret = (EU_InspectorFrame*)  Mtolua_new((EU_InspectorFrame)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_InspectorFrame");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  EU_InspectorFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_InspectorFrame_new00_local
static int tolua_PX2Editor_EU_InspectorFrame_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_InspectorFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   EU_InspectorFrame* tolua_ret = (EU_InspectorFrame*)  Mtolua_new((EU_InspectorFrame)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_InspectorFrame");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  EU_InspectorFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_InspectorFrame_delete00
static int tolua_PX2Editor_EU_InspectorFrame_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_InspectorFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_InspectorFrame* self = (EU_InspectorFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: New of class  EU_InspectorFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_InspectorFrame_New00
static int tolua_PX2Editor_EU_InspectorFrame_New00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_InspectorFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   EU_InspectorFrame* tolua_ret = (EU_InspectorFrame*)  EU_InspectorFrame::New();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_InspectorFrame");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'New'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: New of class  EU_InspectorFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_InspectorFrame_New01
static int tolua_PX2Editor_EU_InspectorFrame_New01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_InspectorFrame",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  {
   EU_InspectorFrame* tolua_ret = (EU_InspectorFrame*)  EU_InspectorFrame::New(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_InspectorFrame");
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 2;
tolua_lerror:
 return tolua_PX2Editor_EU_InspectorFrame_New00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetInspType of class  EU_InspectorFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_InspectorFrame_SetInspType00
static int tolua_PX2Editor_EU_InspectorFrame_SetInspType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_InspectorFrame",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_InspectorFrame* self = (EU_InspectorFrame*)  tolua_tousertype(tolua_S,1,0);
  EU_InspectorFrame::InspType type = ((EU_InspectorFrame::InspType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetInspType'", NULL);
#endif
  {
   self->SetInspType(type);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetInspType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetInspType of class  EU_InspectorFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_InspectorFrame_GetInspType00
static int tolua_PX2Editor_EU_InspectorFrame_GetInspType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const EU_InspectorFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const EU_InspectorFrame* self = (const EU_InspectorFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetInspType'", NULL);
#endif
  {
   EU_InspectorFrame::InspType tolua_ret = (EU_InspectorFrame::InspType)  self->GetInspType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetInspType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  EU_SimuFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_SimuFrame_new00
static int tolua_PX2Editor_EU_SimuFrame_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_SimuFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   EU_SimuFrame* tolua_ret = (EU_SimuFrame*)  Mtolua_new((EU_SimuFrame)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_SimuFrame");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  EU_SimuFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_SimuFrame_new00_local
static int tolua_PX2Editor_EU_SimuFrame_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_SimuFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   EU_SimuFrame* tolua_ret = (EU_SimuFrame*)  Mtolua_new((EU_SimuFrame)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_SimuFrame");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  EU_SimuFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_SimuFrame_delete00
static int tolua_PX2Editor_EU_SimuFrame_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_SimuFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_SimuFrame* self = (EU_SimuFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: New of class  EU_SimuFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_SimuFrame_New00
static int tolua_PX2Editor_EU_SimuFrame_New00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_SimuFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   EU_SimuFrame* tolua_ret = (EU_SimuFrame*)  EU_SimuFrame::New();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_SimuFrame");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'New'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: New of class  EU_SimuFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_SimuFrame_New01
static int tolua_PX2Editor_EU_SimuFrame_New01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_SimuFrame",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  {
   EU_SimuFrame* tolua_ret = (EU_SimuFrame*)  EU_SimuFrame::New(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_SimuFrame");
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 2;
tolua_lerror:
 return tolua_PX2Editor_EU_SimuFrame_New00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __Visitor__ of class  EU_SimuFrame */
#ifndef TOLUA_DISABLE_tolua_get_EU_SimuFrame___Visitor__
static int tolua_get_EU_SimuFrame___Visitor__(lua_State* tolua_S)
{
  EU_SimuFrame* self = (EU_SimuFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__Visitor__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<Visitor*>(self), "Visitor");
#else
   tolua_pushusertype(tolua_S,(void*)((Visitor*)self), "Visitor");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  EU_StageFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_StageFrame_new00
static int tolua_PX2Editor_EU_StageFrame_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_StageFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   EU_StageFrame* tolua_ret = (EU_StageFrame*)  Mtolua_new((EU_StageFrame)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_StageFrame");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  EU_StageFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_StageFrame_new00_local
static int tolua_PX2Editor_EU_StageFrame_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_StageFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   EU_StageFrame* tolua_ret = (EU_StageFrame*)  Mtolua_new((EU_StageFrame)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_StageFrame");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  EU_StageFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_StageFrame_delete00
static int tolua_PX2Editor_EU_StageFrame_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_StageFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_StageFrame* self = (EU_StageFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: New of class  EU_StageFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_StageFrame_New00
static int tolua_PX2Editor_EU_StageFrame_New00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_StageFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   EU_StageFrame* tolua_ret = (EU_StageFrame*)  EU_StageFrame::New();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_StageFrame");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'New'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: New of class  EU_StageFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_StageFrame_New01
static int tolua_PX2Editor_EU_StageFrame_New01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_StageFrame",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  {
   EU_StageFrame* tolua_ret = (EU_StageFrame*)  EU_StageFrame::New(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_StageFrame");
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 2;
tolua_lerror:
 return tolua_PX2Editor_EU_StageFrame_New00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __Visitor__ of class  EU_StageFrame */
#ifndef TOLUA_DISABLE_tolua_get_EU_StageFrame___Visitor__
static int tolua_get_EU_StageFrame___Visitor__(lua_State* tolua_S)
{
  EU_StageFrame* self = (EU_StageFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__Visitor__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<Visitor*>(self), "Visitor");
#else
   tolua_pushusertype(tolua_S,(void*)((Visitor*)self), "Visitor");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  EU_TimeLineFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_TimeLineFrame_new00
static int tolua_PX2Editor_EU_TimeLineFrame_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_TimeLineFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   EU_TimeLineFrame* tolua_ret = (EU_TimeLineFrame*)  Mtolua_new((EU_TimeLineFrame)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_TimeLineFrame");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  EU_TimeLineFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_TimeLineFrame_new00_local
static int tolua_PX2Editor_EU_TimeLineFrame_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_TimeLineFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   EU_TimeLineFrame* tolua_ret = (EU_TimeLineFrame*)  Mtolua_new((EU_TimeLineFrame)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_TimeLineFrame");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  EU_TimeLineFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_TimeLineFrame_delete00
static int tolua_PX2Editor_EU_TimeLineFrame_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_TimeLineFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_TimeLineFrame* self = (EU_TimeLineFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: New of class  EU_TimeLineFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_TimeLineFrame_New00
static int tolua_PX2Editor_EU_TimeLineFrame_New00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_TimeLineFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   EU_TimeLineFrame* tolua_ret = (EU_TimeLineFrame*)  EU_TimeLineFrame::New();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_TimeLineFrame");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'New'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: New of class  EU_TimeLineFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_TimeLineFrame_New01
static int tolua_PX2Editor_EU_TimeLineFrame_New01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_TimeLineFrame",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  {
   EU_TimeLineFrame* tolua_ret = (EU_TimeLineFrame*)  EU_TimeLineFrame::New(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_TimeLineFrame");
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 2;
tolua_lerror:
 return tolua_PX2Editor_EU_TimeLineFrame_New00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  EU_ContentFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ContentFrame_new00
static int tolua_PX2Editor_EU_ContentFrame_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_ContentFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   EU_ContentFrame* tolua_ret = (EU_ContentFrame*)  Mtolua_new((EU_ContentFrame)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_ContentFrame");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  EU_ContentFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ContentFrame_new00_local
static int tolua_PX2Editor_EU_ContentFrame_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_ContentFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   EU_ContentFrame* tolua_ret = (EU_ContentFrame*)  Mtolua_new((EU_ContentFrame)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_ContentFrame");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  EU_ContentFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ContentFrame_delete00
static int tolua_PX2Editor_EU_ContentFrame_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_ContentFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_ContentFrame* self = (EU_ContentFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: New of class  EU_ContentFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ContentFrame_New00
static int tolua_PX2Editor_EU_ContentFrame_New00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_ContentFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   EU_ContentFrame* tolua_ret = (EU_ContentFrame*)  EU_ContentFrame::New();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_ContentFrame");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'New'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: New of class  EU_ContentFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ContentFrame_New01
static int tolua_PX2Editor_EU_ContentFrame_New01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EU_ContentFrame",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  {
   EU_ContentFrame* tolua_ret = (EU_ContentFrame*)  EU_ContentFrame::New(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EU_ContentFrame");
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 2;
tolua_lerror:
 return tolua_PX2Editor_EU_ContentFrame_New00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetActive of class  EU_ContentFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ContentFrame_SetActive00
static int tolua_PX2Editor_EU_ContentFrame_SetActive00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_ContentFrame",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_ContentFrame* self = (EU_ContentFrame*)  tolua_tousertype(tolua_S,1,0);
  bool act = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetActive'", NULL);
#endif
  {
   self->SetActive(act);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetActive'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetCont of class  EU_ContentFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ContentFrame_SetCont00
static int tolua_PX2Editor_EU_ContentFrame_SetCont00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_ContentFrame",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_ContentFrame* self = (EU_ContentFrame*)  tolua_tousertype(tolua_S,1,0);
  EU_ContentFrame::ContentType type = ((EU_ContentFrame::ContentType) (int)  tolua_tonumber(tolua_S,2,0));
  const std::string filename = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetCont'", NULL);
#endif
  {
   self->SetCont(type,filename);
   tolua_pushcppstring(tolua_S,(const char*)filename);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetCont'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetContString of class  EU_ContentFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ContentFrame_SetContString00
static int tolua_PX2Editor_EU_ContentFrame_SetContString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_ContentFrame",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_ContentFrame* self = (EU_ContentFrame*)  tolua_tousertype(tolua_S,1,0);
  const std::string str = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetContString'", NULL);
#endif
  {
   self->SetContString(str);
   tolua_pushcppstring(tolua_S,(const char*)str);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetContString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetContAcceptKeyboardInput of class  EU_ContentFrame */
#ifndef TOLUA_DISABLE_tolua_PX2Editor_EU_ContentFrame_SetContAcceptKeyboardInput00
static int tolua_PX2Editor_EU_ContentFrame_SetContAcceptKeyboardInput00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EU_ContentFrame",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EU_ContentFrame* self = (EU_ContentFrame*)  tolua_tousertype(tolua_S,1,0);
  bool accept = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetContAcceptKeyboardInput'", NULL);
#endif
  {
   self->SetContAcceptKeyboardInput(accept);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetContAcceptKeyboardInput'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
 int tolua_PX2Editor_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_cclass(tolua_S,"Edit","Edit","",NULL);
  tolua_beginmodule(tolua_S,"Edit");
   tolua_constant(tolua_S,"ET_SCENE",Edit::ET_SCENE);
   tolua_constant(tolua_S,"ET_TERRAIN",Edit::ET_TERRAIN);
   tolua_constant(tolua_S,"ET_UI",Edit::ET_UI);
   tolua_constant(tolua_S,"ET_SIMULATE",Edit::ET_SIMULATE);
   tolua_constant(tolua_S,"ET_PLAY",Edit::ET_PLAY);
   tolua_constant(tolua_S,"ET_MAXTYPE",Edit::ET_MAXTYPE);
   tolua_function(tolua_S,"SetEditType",tolua_PX2Editor_Edit_SetEditType00);
   tolua_function(tolua_S,"GetEditType",tolua_PX2Editor_Edit_GetEditType00);
   tolua_function(tolua_S,"CanDoEdit",tolua_PX2Editor_Edit_CanDoEdit00);
   tolua_constant(tolua_S,"EAM_WORLD",Edit::EAM_WORLD);
   tolua_constant(tolua_S,"EAM_LOCAL",Edit::EAM_LOCAL);
   tolua_constant(tolua_S,"EAM_PARENT",Edit::EAM_PARENT);
   tolua_constant(tolua_S,"EMA_MAX_MODE",Edit::EMA_MAX_MODE);
   tolua_function(tolua_S,"SetEditAxisMode",tolua_PX2Editor_Edit_SetEditAxisMode00);
   tolua_function(tolua_S,"GetEdtiAxisMode",tolua_PX2Editor_Edit_GetEdtiAxisMode00);
   tolua_constant(tolua_S,"EM_NONE",Edit::EM_NONE);
   tolua_constant(tolua_S,"EM_SELECT",Edit::EM_SELECT);
   tolua_constant(tolua_S,"EM_TRANSLATE",Edit::EM_TRANSLATE);
   tolua_constant(tolua_S,"EM_ROTATE",Edit::EM_ROTATE);
   tolua_constant(tolua_S,"EM_SCALE",Edit::EM_SCALE);
   tolua_constant(tolua_S,"EM_MAX_MODE",Edit::EM_MAX_MODE);
   tolua_function(tolua_S,"SetEditMode",tolua_PX2Editor_Edit_SetEditMode00);
   tolua_function(tolua_S,"GetEditMode",tolua_PX2Editor_Edit_GetEditMode00);
   tolua_function(tolua_S,"SetPickPos",tolua_PX2Editor_Edit_SetPickPos00);
   tolua_function(tolua_S,"GetPickPos",tolua_PX2Editor_Edit_GetPickPos00);
   tolua_function(tolua_S,"GetPickLocalPos",tolua_PX2Editor_Edit_GetPickLocalPos00);
   tolua_function(tolua_S,"FocusOnSelection",tolua_PX2Editor_Edit_FocusOnSelection00);
   tolua_function(tolua_S,"DeleteSelection",tolua_PX2Editor_Edit_DeleteSelection00);
   tolua_constant(tolua_S,"CDT_ONLYSELECT",Edit::CDT_ONLYSELECT);
   tolua_constant(tolua_S,"CDT_TREE_REFRESH",Edit::CDT_TREE_REFRESH);
   tolua_constant(tolua_S,"CDT_GRID_REFRESH",Edit::CDT_GRID_REFRESH);
   tolua_constant(tolua_S,"CDT_MAX_TYPE",Edit::CDT_MAX_TYPE);
   tolua_function(tolua_S,"ChangeSelectResDir",tolua_PX2Editor_Edit_ChangeSelectResDir00);
   tolua_function(tolua_S,"GetSelectedResDir",tolua_PX2Editor_Edit_GetSelectedResDir00);
   tolua_function(tolua_S,"SetSelectPath_ChildFilenames",tolua_PX2Editor_Edit_SetSelectPath_ChildFilenames00);
   tolua_function(tolua_S,"SetSelectPath_ChildPaths",tolua_PX2Editor_Edit_SetSelectPath_ChildPaths00);
   tolua_function(tolua_S,"GetSelectPath_ChildFilenames",tolua_PX2Editor_Edit_GetSelectPath_ChildFilenames00);
   tolua_function(tolua_S,"GetSelectPath_ChildPaths",tolua_PX2Editor_Edit_GetSelectPath_ChildPaths00);
   tolua_function(tolua_S,"SetSelectedResource",tolua_PX2Editor_Edit_SetSelectedResource00);
   tolua_function(tolua_S,"GetSelectedResource",tolua_PX2Editor_Edit_GetSelectedResource00);
   tolua_function(tolua_S,"CopySelectResourcePath",tolua_PX2Editor_Edit_CopySelectResourcePath00);
   tolua_function(tolua_S,"FindSelectInProjTree",tolua_PX2Editor_Edit_FindSelectInProjTree00);
   tolua_function(tolua_S,"FindSelectInResTree",tolua_PX2Editor_Edit_FindSelectInResTree00);
   tolua_function(tolua_S,"Undo",tolua_PX2Editor_Edit_Undo00);
   tolua_function(tolua_S,"Redo",tolua_PX2Editor_Edit_Redo00);
   tolua_function(tolua_S,"SetCopyObject",tolua_PX2Editor_Edit_SetCopyObject00);
   tolua_function(tolua_S,"GetCopyObject",tolua_PX2Editor_Edit_GetCopyObject00);
   tolua_function(tolua_S,"CopyObject",tolua_PX2Editor_Edit_CopyObject00);
   tolua_function(tolua_S,"PasteCopyedObject",tolua_PX2Editor_Edit_PasteCopyedObject00);
   tolua_function(tolua_S,"CloneSelectedObject",tolua_PX2Editor_Edit_CloneSelectedObject00);
   tolua_function(tolua_S,"SetCopyText",tolua_PX2Editor_Edit_SetCopyText00);
   tolua_function(tolua_S,"GetCopyText",tolua_PX2Editor_Edit_GetCopyText00);
   tolua_function(tolua_S,"AnimResetPlay",tolua_PX2Editor_Edit_AnimResetPlay00);
   tolua_function(tolua_S,"AnimPlay",tolua_PX2Editor_Edit_AnimPlay00);
   tolua_function(tolua_S,"AnimStop",tolua_PX2Editor_Edit_AnimStop00);
   tolua_function(tolua_S,"AnimReset",tolua_PX2Editor_Edit_AnimReset00);
   tolua_function(tolua_S,"IsAnimPlaying",tolua_PX2Editor_Edit_IsAnimPlaying00);
   tolua_function(tolua_S,"AnimPlayStop",tolua_PX2Editor_Edit_AnimPlayStop00);
   tolua_function(tolua_S,"MakeSelectTimeLineEdit",tolua_PX2Editor_Edit_MakeSelectTimeLineEdit00);
   tolua_function(tolua_S,"TimeLine_UIGroup_Delete",tolua_PX2Editor_Edit_TimeLine_UIGroup_Delete00);
   tolua_function(tolua_S,"TimeLine_UIGroup_DeleteAll",tolua_PX2Editor_Edit_TimeLine_UIGroup_DeleteAll00);
   tolua_function(tolua_S,"TimeLine_AddPoint",tolua_PX2Editor_Edit_TimeLine_AddPoint00);
   tolua_function(tolua_S,"TimeLine_DeletePoint",tolua_PX2Editor_Edit_TimeLine_DeletePoint00);
   tolua_function(tolua_S,"TimeLine_SetInValue",tolua_PX2Editor_Edit_TimeLine_SetInValue00);
   tolua_function(tolua_S,"TimeLine_SetOutValue",tolua_PX2Editor_Edit_TimeLine_SetOutValue00);
   tolua_function(tolua_S,"AddOpenedFile",tolua_PX2Editor_Edit_AddOpenedFile00);
   tolua_function(tolua_S,"IsAddedOpenedFile",tolua_PX2Editor_Edit_IsAddedOpenedFile00);
   tolua_function(tolua_S,"RemoveOpenedFile",tolua_PX2Editor_Edit_RemoveOpenedFile00);
   tolua_function(tolua_S,"SetActivateOpenedFile",tolua_PX2Editor_Edit_SetActivateOpenedFile00);
   tolua_function(tolua_S,"GetActivateOpenedFile",tolua_PX2Editor_Edit_GetActivateOpenedFile00);
   tolua_function(tolua_S,"BroadCastEditorEventRefreshRes",tolua_PX2Editor_Edit_BroadCastEditorEventRefreshRes00);
   tolua_function(tolua_S,"BraodCastEditorEventClearRes",tolua_PX2Editor_Edit_BraodCastEditorEventClearRes00);
   tolua_function(tolua_S,"BroadCastEditorEventUp",tolua_PX2Editor_Edit_BroadCastEditorEventUp00);
   tolua_function(tolua_S,"BroadCastEditorEventDown",tolua_PX2Editor_Edit_BroadCastEditorEventDown00);
   tolua_function(tolua_S,"BroadCastEditorEventPlayInWindow",tolua_PX2Editor_Edit_BroadCastEditorEventPlayInWindow00);
   tolua_function(tolua_S,"BroadCastEditorSaveText",tolua_PX2Editor_Edit_BroadCastEditorSaveText00);
   tolua_function(tolua_S,"OpenResIn",tolua_PX2Editor_Edit_OpenResIn00);
   tolua_function(tolua_S,"OpenResOut",tolua_PX2Editor_Edit_OpenResOut00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"SM_SINGLE",SM_SINGLE);
  tolua_constant(tolua_S,"SM_MULTI",SM_MULTI);
  tolua_constant(tolua_S,"SM_MAX_TYPE",SM_MAX_TYPE);
  tolua_constant(tolua_S,"RVT_SCENEUI",RVT_SCENEUI);
  tolua_constant(tolua_S,"RVT_LOGIC",RVT_LOGIC);
  tolua_constant(tolua_S,"RVT_RES",RVT_RES);
  tolua_constant(tolua_S,"RVT_PREVIEW",RVT_PREVIEW);
  tolua_constant(tolua_S,"RVT_TIMELINE",RVT_TIMELINE);
  tolua_constant(tolua_S,"PVT_PROJECT",PVT_PROJECT);
  tolua_constant(tolua_S,"RVT_MAX_TYPE",RVT_MAX_TYPE);
  tolua_cclass(tolua_S,"SelectResData","SelectResData","",NULL);
  tolua_beginmodule(tolua_S,"SelectResData");
   tolua_constant(tolua_S,"RT_NORMAL",SelectResData::RT_NORMAL);
   tolua_constant(tolua_S,"RT_TEXPACKELEMENT",SelectResData::RT_TEXPACKELEMENT);
   tolua_constant(tolua_S,"RT_MAX_TYPE",SelectResData::RT_MAX_TYPE);
   tolua_function(tolua_S,"GetSelectResType",tolua_PX2Editor_SelectResData_GetSelectResType00);
   tolua_variable(tolua_S,"ResPathname",tolua_get_SelectResData_ResPathname,tolua_set_SelectResData_ResPathname);
   tolua_variable(tolua_S,"EleName",tolua_get_SelectResData_EleName,tolua_set_SelectResData_EleName);
   tolua_function(tolua_S,"IsTheObjectTex",tolua_PX2Editor_SelectResData_IsTheObjectTex00);
   tolua_function(tolua_S,"GetTheObjectTexSize",tolua_PX2Editor_SelectResData_GetTheObjectTexSize00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"TimeLineEdit","TimeLineEdit","",NULL);
  tolua_beginmodule(tolua_S,"TimeLineEdit");
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"EU_Manager","EU_Manager","",NULL);
  tolua_beginmodule(tolua_S,"EU_Manager");
   tolua_function(tolua_S,"NewProject",tolua_PX2Editor_EU_Manager_NewProject00);
   tolua_function(tolua_S,"OpenProject",tolua_PX2Editor_EU_Manager_OpenProject00);
   tolua_function(tolua_S,"SaveProject",tolua_PX2Editor_EU_Manager_SaveProject00);
   tolua_function(tolua_S,"CloseProject",tolua_PX2Editor_EU_Manager_CloseProject00);
   tolua_function(tolua_S,"NewScene",tolua_PX2Editor_EU_Manager_NewScene00);
   tolua_function(tolua_S,"OpenScene",tolua_PX2Editor_EU_Manager_OpenScene00);
   tolua_function(tolua_S,"SaveScene",tolua_PX2Editor_EU_Manager_SaveScene00);
   tolua_function(tolua_S,"SaveSceneAs",tolua_PX2Editor_EU_Manager_SaveSceneAs00);
   tolua_function(tolua_S,"CloseScene",tolua_PX2Editor_EU_Manager_CloseScene00);
   tolua_function(tolua_S,"Exit",tolua_PX2Editor_EU_Manager_Exit00);
   tolua_function(tolua_S,"Import",tolua_PX2Editor_EU_Manager_Import00);
   tolua_function(tolua_S,"Export",tolua_PX2Editor_EU_Manager_Export00);
   tolua_constant(tolua_S,"EMT_PROJTREE",EU_Manager::EMT_PROJTREE);
   tolua_constant(tolua_S,"EMT_SCENE",EU_Manager::EMT_SCENE);
   tolua_constant(tolua_S,"EMT_UI",EU_Manager::EMT_UI);
   tolua_constant(tolua_S,"EMT_BP",EU_Manager::EMT_BP);
   tolua_constant(tolua_S,"EMT_MAX_TYPE",EU_Manager::EMT_MAX_TYPE);
   tolua_function(tolua_S,"CreateEditMenu",tolua_PX2Editor_EU_Manager_CreateEditMenu00);
   tolua_function(tolua_S,"GetEidtMenuType",tolua_PX2Editor_EU_Manager_GetEidtMenuType00);
   tolua_function(tolua_S,"SetLogicCanvas",tolua_PX2Editor_EU_Manager_SetLogicCanvas00);
   tolua_function(tolua_S,"GetLogicCanvas",tolua_PX2Editor_EU_Manager_GetLogicCanvas00);
   tolua_function(tolua_S,"SetInspectorView",tolua_PX2Editor_EU_Manager_SetInspectorView00);
   tolua_function(tolua_S,"SetProjectTreeLevel",tolua_PX2Editor_EU_Manager_SetProjectTreeLevel00);
   tolua_function(tolua_S,"AddTool",tolua_PX2Editor_EU_Manager_AddTool00);
   tolua_function(tolua_S,"AddTool",tolua_PX2Editor_EU_Manager_AddTool01);
   tolua_function(tolua_S,"AddToolChoose",tolua_PX2Editor_EU_Manager_AddToolChoose00);
   tolua_function(tolua_S,"AddToolChoose",tolua_PX2Editor_EU_Manager_AddToolChoose01);
   tolua_function(tolua_S,"AddToolChoose",tolua_PX2Editor_EU_Manager_AddToolChoose02);
   tolua_function(tolua_S,"AddToolChoose",tolua_PX2Editor_EU_Manager_AddToolChoose03);
   tolua_function(tolua_S,"AddToolChoose",tolua_PX2Editor_EU_Manager_AddToolChoose04);
   tolua_function(tolua_S,"AddToolSeparater",tolua_PX2Editor_EU_Manager_AddToolSeparater00);
   tolua_function(tolua_S,"AddToolStretch",tolua_PX2Editor_EU_Manager_AddToolStretch00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"EU_ResTree","EU_ResTree","UITree",tolua_collect_EU_ResTree);
  #else
  tolua_cclass(tolua_S,"EU_ResTree","EU_ResTree","UITree",NULL);
  #endif
  tolua_beginmodule(tolua_S,"EU_ResTree");
   tolua_constant(tolua_S,"RTT_DIR",EU_ResTree::RTT_DIR);
   tolua_constant(tolua_S,"RTT_MAX_TYPE",EU_ResTree::RTT_MAX_TYPE);
   tolua_function(tolua_S,"new",tolua_PX2Editor_EU_ResTree_new00);
   tolua_function(tolua_S,"new_local",tolua_PX2Editor_EU_ResTree_new00_local);
   tolua_function(tolua_S,".call",tolua_PX2Editor_EU_ResTree_new00_local);
   tolua_function(tolua_S,"delete",tolua_PX2Editor_EU_ResTree_delete00);
   tolua_function(tolua_S,"New",tolua_PX2Editor_EU_ResTree_New00);
   tolua_function(tolua_S,"New",tolua_PX2Editor_EU_ResTree_New01);
   tolua_function(tolua_S,"AddItem",tolua_PX2Editor_EU_ResTree_AddItem00);
   tolua_function(tolua_S,"AddItem",tolua_PX2Editor_EU_ResTree_AddItem01);
   tolua_function(tolua_S,"OnSelected",tolua_PX2Editor_EU_ResTree_OnSelected00);
   tolua_constant(tolua_S,"RT_DIR",EU_ResTree::RT_DIR);
   tolua_constant(tolua_S,"RT_DIR_FILES",EU_ResTree::RT_DIR_FILES);
   tolua_constant(tolua_S,"RT_DIR_ALL",EU_ResTree::RT_DIR_ALL);
   tolua_constant(tolua_S,"RT_DIR_ALL_NOCHILDREN",EU_ResTree::RT_DIR_ALL_NOCHILDREN);
   tolua_constant(tolua_S,"RT_MAX_TYPE",EU_ResTree::RT_MAX_TYPE);
   tolua_function(tolua_S,"RefreshItems",tolua_PX2Editor_EU_ResTree_RefreshItems00);
   tolua_function(tolua_S,"ClearItems",tolua_PX2Editor_EU_ResTree_ClearItems00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"EU_ResGridFrame","EU_ResGridFrame","UIGridFrame",tolua_collect_EU_ResGridFrame);
  #else
  tolua_cclass(tolua_S,"EU_ResGridFrame","EU_ResGridFrame","UIGridFrame",NULL);
  #endif
  tolua_beginmodule(tolua_S,"EU_ResGridFrame");
   tolua_function(tolua_S,"new",tolua_PX2Editor_EU_ResGridFrame_new00);
   tolua_function(tolua_S,"new_local",tolua_PX2Editor_EU_ResGridFrame_new00_local);
   tolua_function(tolua_S,".call",tolua_PX2Editor_EU_ResGridFrame_new00_local);
   tolua_function(tolua_S,"delete",tolua_PX2Editor_EU_ResGridFrame_delete00);
   tolua_function(tolua_S,"New",tolua_PX2Editor_EU_ResGridFrame_New00);
   tolua_function(tolua_S,"New",tolua_PX2Editor_EU_ResGridFrame_New01);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"EU_ConcoleFrame","EU_ConcoleFrame","UIFrame",tolua_collect_EU_ConcoleFrame);
  #else
  tolua_cclass(tolua_S,"EU_ConcoleFrame","EU_ConcoleFrame","UIFrame",NULL);
  #endif
  tolua_beginmodule(tolua_S,"EU_ConcoleFrame");
   tolua_function(tolua_S,"new",tolua_PX2Editor_EU_ConcoleFrame_new00);
   tolua_function(tolua_S,"new_local",tolua_PX2Editor_EU_ConcoleFrame_new00_local);
   tolua_function(tolua_S,".call",tolua_PX2Editor_EU_ConcoleFrame_new00_local);
   tolua_function(tolua_S,"delete",tolua_PX2Editor_EU_ConcoleFrame_delete00);
   tolua_function(tolua_S,"New",tolua_PX2Editor_EU_ConcoleFrame_New00);
   tolua_function(tolua_S,"New",tolua_PX2Editor_EU_ConcoleFrame_New01);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"EU_ProjectTree","EU_ProjectTree","UITree",tolua_collect_EU_ProjectTree);
  #else
  tolua_cclass(tolua_S,"EU_ProjectTree","EU_ProjectTree","UITree",NULL);
  #endif
  tolua_beginmodule(tolua_S,"EU_ProjectTree");
   tolua_function(tolua_S,"new",tolua_PX2Editor_EU_ProjectTree_new00);
   tolua_function(tolua_S,"new_local",tolua_PX2Editor_EU_ProjectTree_new00_local);
   tolua_function(tolua_S,".call",tolua_PX2Editor_EU_ProjectTree_new00_local);
   tolua_function(tolua_S,"delete",tolua_PX2Editor_EU_ProjectTree_delete00);
   tolua_function(tolua_S,"New",tolua_PX2Editor_EU_ProjectTree_New00);
   tolua_function(tolua_S,"New",tolua_PX2Editor_EU_ProjectTree_New01);
   tolua_function(tolua_S,"SetShowType",tolua_PX2Editor_EU_ProjectTree_SetShowType00);
   tolua_function(tolua_S,"GetShowType",tolua_PX2Editor_EU_ProjectTree_GetShowType00);
   tolua_function(tolua_S,"AddItem",tolua_PX2Editor_EU_ProjectTree_AddItem00);
   tolua_function(tolua_S,"AddItem",tolua_PX2Editor_EU_ProjectTree_AddItem01);
   tolua_function(tolua_S,"OnEvent",tolua_PX2Editor_EU_ProjectTree_OnEvent00);
   tolua_function(tolua_S,"OnSelected",tolua_PX2Editor_EU_ProjectTree_OnSelected00);
   tolua_function(tolua_S,"OnSizeNodePicked",tolua_PX2Editor_EU_ProjectTree_OnSizeNodePicked00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"EU_InspectorFrame","EU_InspectorFrame","UIFrame",tolua_collect_EU_InspectorFrame);
  #else
  tolua_cclass(tolua_S,"EU_InspectorFrame","EU_InspectorFrame","UIFrame",NULL);
  #endif
  tolua_beginmodule(tolua_S,"EU_InspectorFrame");
   tolua_function(tolua_S,"new",tolua_PX2Editor_EU_InspectorFrame_new00);
   tolua_function(tolua_S,"new_local",tolua_PX2Editor_EU_InspectorFrame_new00_local);
   tolua_function(tolua_S,".call",tolua_PX2Editor_EU_InspectorFrame_new00_local);
   tolua_function(tolua_S,"delete",tolua_PX2Editor_EU_InspectorFrame_delete00);
   tolua_function(tolua_S,"New",tolua_PX2Editor_EU_InspectorFrame_New00);
   tolua_function(tolua_S,"New",tolua_PX2Editor_EU_InspectorFrame_New01);
   tolua_constant(tolua_S,"IT_PROP",EU_InspectorFrame::IT_PROP);
   tolua_constant(tolua_S,"IT_RES",EU_InspectorFrame::IT_RES);
   tolua_constant(tolua_S,"IT_EDIT",EU_InspectorFrame::IT_EDIT);
   tolua_constant(tolua_S,"IT_MAX_TYPE",EU_InspectorFrame::IT_MAX_TYPE);
   tolua_function(tolua_S,"SetInspType",tolua_PX2Editor_EU_InspectorFrame_SetInspType00);
   tolua_function(tolua_S,"GetInspType",tolua_PX2Editor_EU_InspectorFrame_GetInspType00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"EU_SimuFrame","EU_SimuFrame","UIFrame",tolua_collect_EU_SimuFrame);
  #else
  tolua_cclass(tolua_S,"EU_SimuFrame","EU_SimuFrame","UIFrame",NULL);
  #endif
  tolua_beginmodule(tolua_S,"EU_SimuFrame");
   tolua_function(tolua_S,"new",tolua_PX2Editor_EU_SimuFrame_new00);
   tolua_function(tolua_S,"new_local",tolua_PX2Editor_EU_SimuFrame_new00_local);
   tolua_function(tolua_S,".call",tolua_PX2Editor_EU_SimuFrame_new00_local);
   tolua_function(tolua_S,"delete",tolua_PX2Editor_EU_SimuFrame_delete00);
   tolua_function(tolua_S,"New",tolua_PX2Editor_EU_SimuFrame_New00);
   tolua_function(tolua_S,"New",tolua_PX2Editor_EU_SimuFrame_New01);
   tolua_variable(tolua_S,"__Visitor__",tolua_get_EU_SimuFrame___Visitor__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"EU_StageFrame","EU_StageFrame","UIFrame",tolua_collect_EU_StageFrame);
  #else
  tolua_cclass(tolua_S,"EU_StageFrame","EU_StageFrame","UIFrame",NULL);
  #endif
  tolua_beginmodule(tolua_S,"EU_StageFrame");
   tolua_function(tolua_S,"new",tolua_PX2Editor_EU_StageFrame_new00);
   tolua_function(tolua_S,"new_local",tolua_PX2Editor_EU_StageFrame_new00_local);
   tolua_function(tolua_S,".call",tolua_PX2Editor_EU_StageFrame_new00_local);
   tolua_function(tolua_S,"delete",tolua_PX2Editor_EU_StageFrame_delete00);
   tolua_function(tolua_S,"New",tolua_PX2Editor_EU_StageFrame_New00);
   tolua_function(tolua_S,"New",tolua_PX2Editor_EU_StageFrame_New01);
   tolua_variable(tolua_S,"__Visitor__",tolua_get_EU_StageFrame___Visitor__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"EU_TimeLineFrame","EU_TimeLineFrame","UIFrame",tolua_collect_EU_TimeLineFrame);
  #else
  tolua_cclass(tolua_S,"EU_TimeLineFrame","EU_TimeLineFrame","UIFrame",NULL);
  #endif
  tolua_beginmodule(tolua_S,"EU_TimeLineFrame");
   tolua_function(tolua_S,"new",tolua_PX2Editor_EU_TimeLineFrame_new00);
   tolua_function(tolua_S,"new_local",tolua_PX2Editor_EU_TimeLineFrame_new00_local);
   tolua_function(tolua_S,".call",tolua_PX2Editor_EU_TimeLineFrame_new00_local);
   tolua_function(tolua_S,"delete",tolua_PX2Editor_EU_TimeLineFrame_delete00);
   tolua_function(tolua_S,"New",tolua_PX2Editor_EU_TimeLineFrame_New00);
   tolua_function(tolua_S,"New",tolua_PX2Editor_EU_TimeLineFrame_New01);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"EU_ContentFrame","EU_ContentFrame","UIFrame",tolua_collect_EU_ContentFrame);
  #else
  tolua_cclass(tolua_S,"EU_ContentFrame","EU_ContentFrame","UIFrame",NULL);
  #endif
  tolua_beginmodule(tolua_S,"EU_ContentFrame");
   tolua_function(tolua_S,"new",tolua_PX2Editor_EU_ContentFrame_new00);
   tolua_function(tolua_S,"new_local",tolua_PX2Editor_EU_ContentFrame_new00_local);
   tolua_function(tolua_S,".call",tolua_PX2Editor_EU_ContentFrame_new00_local);
   tolua_function(tolua_S,"delete",tolua_PX2Editor_EU_ContentFrame_delete00);
   tolua_function(tolua_S,"New",tolua_PX2Editor_EU_ContentFrame_New00);
   tolua_function(tolua_S,"New",tolua_PX2Editor_EU_ContentFrame_New01);
   tolua_function(tolua_S,"SetActive",tolua_PX2Editor_EU_ContentFrame_SetActive00);
   tolua_constant(tolua_S,"CT_TEXT",EU_ContentFrame::CT_TEXT);
   tolua_constant(tolua_S,"CT_PREVIEW",EU_ContentFrame::CT_PREVIEW);
   tolua_constant(tolua_S,"CT_MAX_TYPE",EU_ContentFrame::CT_MAX_TYPE);
   tolua_function(tolua_S,"SetCont",tolua_PX2Editor_EU_ContentFrame_SetCont00);
   tolua_function(tolua_S,"SetContString",tolua_PX2Editor_EU_ContentFrame_SetContString00);
   tolua_function(tolua_S,"SetContAcceptKeyboardInput",tolua_PX2Editor_EU_ContentFrame_SetContAcceptKeyboardInput00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_PX2Editor (lua_State* tolua_S) {
 return tolua_PX2Editor_open(tolua_S);
};
#endif

