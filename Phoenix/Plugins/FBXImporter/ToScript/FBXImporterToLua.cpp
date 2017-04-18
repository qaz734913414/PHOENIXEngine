/*
** Lua binding: FBXImporter
** Generated automatically by tolua++-1.0.92 on 04/18/17 12:38:59.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_FBXImporter_open (lua_State* tolua_S);

#include "FBXImporterToLua.hpp"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_FBXImporter (lua_State* tolua_S)
{
 FBXImporter* self = (FBXImporter*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"FBXImporter");
 tolua_usertype(tolua_S,"Node");
}

/* method: new of class  FBXImporter */
#ifndef TOLUA_DISABLE_tolua_FBXImporter_FBXImporter_new00
static int tolua_FBXImporter_FBXImporter_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"FBXImporter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   FBXImporter* tolua_ret = (FBXImporter*)  Mtolua_new((FBXImporter)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"FBXImporter");
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

/* method: new_local of class  FBXImporter */
#ifndef TOLUA_DISABLE_tolua_FBXImporter_FBXImporter_new00_local
static int tolua_FBXImporter_FBXImporter_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"FBXImporter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   FBXImporter* tolua_ret = (FBXImporter*)  Mtolua_new((FBXImporter)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"FBXImporter");
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

/* method: delete of class  FBXImporter */
#ifndef TOLUA_DISABLE_tolua_FBXImporter_FBXImporter_delete00
static int tolua_FBXImporter_FBXImporter_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"FBXImporter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  FBXImporter* self = (FBXImporter*)  tolua_tousertype(tolua_S,1,0);
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

/* method: Import of class  FBXImporter */
#ifndef TOLUA_DISABLE_tolua_FBXImporter_FBXImporter_Import00
static int tolua_FBXImporter_FBXImporter_Import00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"FBXImporter",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  FBXImporter* self = (FBXImporter*)  tolua_tousertype(tolua_S,1,0);
  const std::string filename = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Import'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Import(filename);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)filename);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Import'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetScene of class  FBXImporter */
#ifndef TOLUA_DISABLE_tolua_FBXImporter_FBXImporter_GetScene00
static int tolua_FBXImporter_FBXImporter_GetScene00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"FBXImporter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  FBXImporter* self = (FBXImporter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetScene'", NULL);
#endif
  {
   Node* tolua_ret = (Node*)  self->GetScene();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Node");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetScene'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ClearScene of class  FBXImporter */
#ifndef TOLUA_DISABLE_tolua_FBXImporter_FBXImporter_ClearScene00
static int tolua_FBXImporter_FBXImporter_ClearScene00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"FBXImporter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  FBXImporter* self = (FBXImporter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ClearScene'", NULL);
#endif
  {
   self->ClearScene();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ClearScene'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_FBXImporter_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"FBXImporter","FBXImporter","",tolua_collect_FBXImporter);
  #else
  tolua_cclass(tolua_S,"FBXImporter","FBXImporter","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"FBXImporter");
   tolua_function(tolua_S,"new",tolua_FBXImporter_FBXImporter_new00);
   tolua_function(tolua_S,"new_local",tolua_FBXImporter_FBXImporter_new00_local);
   tolua_function(tolua_S,".call",tolua_FBXImporter_FBXImporter_new00_local);
   tolua_function(tolua_S,"delete",tolua_FBXImporter_FBXImporter_delete00);
   tolua_function(tolua_S,"Import",tolua_FBXImporter_FBXImporter_Import00);
   tolua_function(tolua_S,"GetScene",tolua_FBXImporter_FBXImporter_GetScene00);
   tolua_function(tolua_S,"ClearScene",tolua_FBXImporter_FBXImporter_ClearScene00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_FBXImporter (lua_State* tolua_S) {
 return tolua_FBXImporter_open(tolua_S);
};
#endif

