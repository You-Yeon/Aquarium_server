﻿



  
// Generated by PIDL compiler.
// Do not modify this file, but modify the source .pidl file.

#pragma once


#include "S2C2S_common.h"

namespace S2C2S {


	class Proxy : public ::Proud::IRmiProxy
	{
	public:
	virtual bool RequestLogin ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const std::wstring & id, const std::wstring & password) PN_SEALED; 
	virtual bool RequestLogin ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext, const std::wstring & id, const std::wstring & password)   PN_SEALED;  
	virtual bool NotifyLoginSuccess ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ) PN_SEALED; 
	virtual bool NotifyLoginSuccess ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext)   PN_SEALED;  
	virtual bool NotifyLoginFailed ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const std::wstring & reason) PN_SEALED; 
	virtual bool NotifyLoginFailed ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext, const std::wstring & reason)   PN_SEALED;  
	virtual bool JoinGameRoom ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const int & character_num) PN_SEALED; 
	virtual bool JoinGameRoom ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext, const int & character_num)   PN_SEALED;  
	virtual bool LeaveGameRoom ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ) PN_SEALED; 
	virtual bool LeaveGameRoom ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext)   PN_SEALED;  
	virtual bool Room_Appear ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const int & hostID, const std::wstring & id, const int & character_num, const std::wstring & team_color, const int & team_num) PN_SEALED; 
	virtual bool Room_Appear ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext, const int & hostID, const std::wstring & id, const int & character_num, const std::wstring & team_color, const int & team_num)   PN_SEALED;  
	virtual bool Room_Disappear ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const int & team_num) PN_SEALED; 
	virtual bool Room_Disappear ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext, const int & team_num)   PN_SEALED;  
	virtual bool GameStart ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext ) PN_SEALED; 
	virtual bool GameStart ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext)   PN_SEALED;  
	virtual bool PlayerInfo ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const int & team_num, const int & character_num, const float & px, const float & py, const float & pz, const float & rx, const float & ry, const float & rz) PN_SEALED; 
	virtual bool PlayerInfo ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext, const int & team_num, const int & character_num, const float & px, const float & py, const float & pz, const float & rx, const float & ry, const float & rz)   PN_SEALED;  
static const PNTCHAR* RmiName_RequestLogin;
static const PNTCHAR* RmiName_NotifyLoginSuccess;
static const PNTCHAR* RmiName_NotifyLoginFailed;
static const PNTCHAR* RmiName_JoinGameRoom;
static const PNTCHAR* RmiName_LeaveGameRoom;
static const PNTCHAR* RmiName_Room_Appear;
static const PNTCHAR* RmiName_Room_Disappear;
static const PNTCHAR* RmiName_GameStart;
static const PNTCHAR* RmiName_PlayerInfo;
static const PNTCHAR* RmiName_First;
		Proxy()
		{
			if(m_signature != 1)
				::Proud::ShowUserMisuseError(::Proud::ProxyBadSignatureErrorText);
		}

		virtual ::Proud::RmiID* GetRmiIDList() PN_OVERRIDE { return g_RmiIDList; } 
		virtual int GetRmiIDListCount() PN_OVERRIDE { return g_RmiIDListCount; }
	};

}



