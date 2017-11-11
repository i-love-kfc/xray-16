#pragma once

class IRender;
class IRenderFactory;
class IDebugRender;
class CDUInterface;
struct xr_token;
class IUIRender;
class CGameMtlLibrary;
class CRender;
class CScriptEngine;
class AISpaceBase;

class XRAPI_API EngineGlobalEnvironment
{
public:
#ifdef _EDITOR
    CRender* Render;
#else
    IRender* Render;
    IDebugRender* DRender;
    CDUInterface* DU;
    xr_token* vid_mode_token;
    IUIRender* UIRender;
    CGameMtlLibrary* PGMLib;
#endif
    IRenderFactory* RenderFactory;
    CScriptEngine* ScriptEngine;
    AISpaceBase* AISpace;

    bool isDedicatedServer;
};

extern XRAPI_API EngineGlobalEnvironment GEnv;
