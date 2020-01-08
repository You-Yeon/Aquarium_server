﻿  






// Generated by PIDL compiler.
// Do not modify this file, but modify the source .pidl file.
   
#pragma once


#include "S2C2S_common.h"

     
namespace S2C2S {


	class Stub : public ::Proud::IRmiStub
	{
	public:
               
		virtual bool RequestLogin ( ::Proud::HostID, ::Proud::RmiContext& , const std::wstring & , const std::wstring & )		{ 
			return false;
		} 

#define DECRMI_S2C2S_RequestLogin bool RequestLogin ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const std::wstring & id, const std::wstring & password) PN_OVERRIDE

#define DEFRMI_S2C2S_RequestLogin(DerivedClass) bool DerivedClass::RequestLogin ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const std::wstring & id, const std::wstring & password)
#define CALL_S2C2S_RequestLogin RequestLogin ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const std::wstring & id, const std::wstring & password)
#define PARAM_S2C2S_RequestLogin ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const std::wstring & id, const std::wstring & password)
               
		virtual bool NotifyLoginSuccess ( ::Proud::HostID, ::Proud::RmiContext& )		{ 
			return false;
		} 

#define DECRMI_S2C2S_NotifyLoginSuccess bool NotifyLoginSuccess ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ) PN_OVERRIDE

#define DEFRMI_S2C2S_NotifyLoginSuccess(DerivedClass) bool DerivedClass::NotifyLoginSuccess ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext )
#define CALL_S2C2S_NotifyLoginSuccess NotifyLoginSuccess ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext )
#define PARAM_S2C2S_NotifyLoginSuccess ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext )
               
		virtual bool NotifyLoginFailed ( ::Proud::HostID, ::Proud::RmiContext& , const std::wstring & )		{ 
			return false;
		} 

#define DECRMI_S2C2S_NotifyLoginFailed bool NotifyLoginFailed ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const std::wstring & reason) PN_OVERRIDE

#define DEFRMI_S2C2S_NotifyLoginFailed(DerivedClass) bool DerivedClass::NotifyLoginFailed ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const std::wstring & reason)
#define CALL_S2C2S_NotifyLoginFailed NotifyLoginFailed ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const std::wstring & reason)
#define PARAM_S2C2S_NotifyLoginFailed ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const std::wstring & reason)
 
		virtual bool ProcessReceivedMessage(::Proud::CReceivedMessage &pa, void* hostTag) PN_OVERRIDE;
		static const PNTCHAR* RmiName_RequestLogin;
		static const PNTCHAR* RmiName_NotifyLoginSuccess;
		static const PNTCHAR* RmiName_NotifyLoginFailed;
		static const PNTCHAR* RmiName_First;
		virtual ::Proud::RmiID* GetRmiIDList() PN_OVERRIDE { return g_RmiIDList; }
		virtual int GetRmiIDListCount() PN_OVERRIDE { return g_RmiIDListCount; }
	};

#ifdef SUPPORTS_CPP11 
	
	class StubFunctional : public Stub 
	{
	public:
               
		std::function< bool ( ::Proud::HostID, ::Proud::RmiContext& , const std::wstring & , const std::wstring & ) > RequestLogin_Function;
		virtual bool RequestLogin ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const std::wstring & id, const std::wstring & password) 
		{ 
			if (RequestLogin_Function==nullptr) 
				return true; 
			return RequestLogin_Function(remote,rmiContext, id, password); 
		}

               
		std::function< bool ( ::Proud::HostID, ::Proud::RmiContext& ) > NotifyLoginSuccess_Function;
		virtual bool NotifyLoginSuccess ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ) 
		{ 
			if (NotifyLoginSuccess_Function==nullptr) 
				return true; 
			return NotifyLoginSuccess_Function(remote,rmiContext); 
		}

               
		std::function< bool ( ::Proud::HostID, ::Proud::RmiContext& , const std::wstring & ) > NotifyLoginFailed_Function;
		virtual bool NotifyLoginFailed ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const std::wstring & reason) 
		{ 
			if (NotifyLoginFailed_Function==nullptr) 
				return true; 
			return NotifyLoginFailed_Function(remote,rmiContext, reason); 
		}

	};
#endif

}


