﻿




// Generated by PIDL compiler.
// Do not modify this file, but modify the source .pidl file.


#include "S2C2S_proxy.h"

namespace S2C2S {


        
	bool Proxy::RequestLogin ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const std::wstring & id, const std::wstring & password)	{
		::Proud::CMessage __msg;
__msg.UseInternalBuffer();
__msg.SetSimplePacketMode(m_core->IsSimplePacketMode());

::Proud::RmiID __msgid=(::Proud::RmiID)Rmi_RequestLogin;
__msg.Write(__msgid); 
	
__msg << id;
__msg << password;
		
		return RmiSend(&remote,1,rmiContext,__msg,
			RmiName_RequestLogin, (::Proud::RmiID)Rmi_RequestLogin);
	}

	bool Proxy::RequestLogin ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext, const std::wstring & id, const std::wstring & password)  	{
		::Proud::CMessage __msg;
__msg.UseInternalBuffer();
__msg.SetSimplePacketMode(m_core->IsSimplePacketMode());

::Proud::RmiID __msgid=(::Proud::RmiID)Rmi_RequestLogin;
__msg.Write(__msgid); 
	
__msg << id;
__msg << password;
		
		return RmiSend(remotes,remoteCount,rmiContext,__msg,
			RmiName_RequestLogin, (::Proud::RmiID)Rmi_RequestLogin);
	}
        
	bool Proxy::NotifyLoginSuccess ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext )	{
		::Proud::CMessage __msg;
__msg.UseInternalBuffer();
__msg.SetSimplePacketMode(m_core->IsSimplePacketMode());

::Proud::RmiID __msgid=(::Proud::RmiID)Rmi_NotifyLoginSuccess;
__msg.Write(__msgid); 
	
		
		return RmiSend(&remote,1,rmiContext,__msg,
			RmiName_NotifyLoginSuccess, (::Proud::RmiID)Rmi_NotifyLoginSuccess);
	}

	bool Proxy::NotifyLoginSuccess ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext)  	{
		::Proud::CMessage __msg;
__msg.UseInternalBuffer();
__msg.SetSimplePacketMode(m_core->IsSimplePacketMode());

::Proud::RmiID __msgid=(::Proud::RmiID)Rmi_NotifyLoginSuccess;
__msg.Write(__msgid); 
	
		
		return RmiSend(remotes,remoteCount,rmiContext,__msg,
			RmiName_NotifyLoginSuccess, (::Proud::RmiID)Rmi_NotifyLoginSuccess);
	}
        
	bool Proxy::NotifyLoginFailed ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const std::wstring & reason)	{
		::Proud::CMessage __msg;
__msg.UseInternalBuffer();
__msg.SetSimplePacketMode(m_core->IsSimplePacketMode());

::Proud::RmiID __msgid=(::Proud::RmiID)Rmi_NotifyLoginFailed;
__msg.Write(__msgid); 
	
__msg << reason;
		
		return RmiSend(&remote,1,rmiContext,__msg,
			RmiName_NotifyLoginFailed, (::Proud::RmiID)Rmi_NotifyLoginFailed);
	}

	bool Proxy::NotifyLoginFailed ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext, const std::wstring & reason)  	{
		::Proud::CMessage __msg;
__msg.UseInternalBuffer();
__msg.SetSimplePacketMode(m_core->IsSimplePacketMode());

::Proud::RmiID __msgid=(::Proud::RmiID)Rmi_NotifyLoginFailed;
__msg.Write(__msgid); 
	
__msg << reason;
		
		return RmiSend(remotes,remoteCount,rmiContext,__msg,
			RmiName_NotifyLoginFailed, (::Proud::RmiID)Rmi_NotifyLoginFailed);
	}
        
	bool Proxy::JoinGameRoom ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const int & character_num)	{
		::Proud::CMessage __msg;
__msg.UseInternalBuffer();
__msg.SetSimplePacketMode(m_core->IsSimplePacketMode());

::Proud::RmiID __msgid=(::Proud::RmiID)Rmi_JoinGameRoom;
__msg.Write(__msgid); 
	
__msg << character_num;
		
		return RmiSend(&remote,1,rmiContext,__msg,
			RmiName_JoinGameRoom, (::Proud::RmiID)Rmi_JoinGameRoom);
	}

	bool Proxy::JoinGameRoom ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext, const int & character_num)  	{
		::Proud::CMessage __msg;
__msg.UseInternalBuffer();
__msg.SetSimplePacketMode(m_core->IsSimplePacketMode());

::Proud::RmiID __msgid=(::Proud::RmiID)Rmi_JoinGameRoom;
__msg.Write(__msgid); 
	
__msg << character_num;
		
		return RmiSend(remotes,remoteCount,rmiContext,__msg,
			RmiName_JoinGameRoom, (::Proud::RmiID)Rmi_JoinGameRoom);
	}
        
	bool Proxy::LeaveGameRoom ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext )	{
		::Proud::CMessage __msg;
__msg.UseInternalBuffer();
__msg.SetSimplePacketMode(m_core->IsSimplePacketMode());

::Proud::RmiID __msgid=(::Proud::RmiID)Rmi_LeaveGameRoom;
__msg.Write(__msgid); 
	
		
		return RmiSend(&remote,1,rmiContext,__msg,
			RmiName_LeaveGameRoom, (::Proud::RmiID)Rmi_LeaveGameRoom);
	}

	bool Proxy::LeaveGameRoom ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext)  	{
		::Proud::CMessage __msg;
__msg.UseInternalBuffer();
__msg.SetSimplePacketMode(m_core->IsSimplePacketMode());

::Proud::RmiID __msgid=(::Proud::RmiID)Rmi_LeaveGameRoom;
__msg.Write(__msgid); 
	
		
		return RmiSend(remotes,remoteCount,rmiContext,__msg,
			RmiName_LeaveGameRoom, (::Proud::RmiID)Rmi_LeaveGameRoom);
	}
        
	bool Proxy::Room_Appear ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const int & hostID, const std::wstring & id, const int & character_num, const std::wstring & team_color, const int & team_num)	{
		::Proud::CMessage __msg;
__msg.UseInternalBuffer();
__msg.SetSimplePacketMode(m_core->IsSimplePacketMode());

::Proud::RmiID __msgid=(::Proud::RmiID)Rmi_Room_Appear;
__msg.Write(__msgid); 
	
__msg << hostID;
__msg << id;
__msg << character_num;
__msg << team_color;
__msg << team_num;
		
		return RmiSend(&remote,1,rmiContext,__msg,
			RmiName_Room_Appear, (::Proud::RmiID)Rmi_Room_Appear);
	}

	bool Proxy::Room_Appear ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext, const int & hostID, const std::wstring & id, const int & character_num, const std::wstring & team_color, const int & team_num)  	{
		::Proud::CMessage __msg;
__msg.UseInternalBuffer();
__msg.SetSimplePacketMode(m_core->IsSimplePacketMode());

::Proud::RmiID __msgid=(::Proud::RmiID)Rmi_Room_Appear;
__msg.Write(__msgid); 
	
__msg << hostID;
__msg << id;
__msg << character_num;
__msg << team_color;
__msg << team_num;
		
		return RmiSend(remotes,remoteCount,rmiContext,__msg,
			RmiName_Room_Appear, (::Proud::RmiID)Rmi_Room_Appear);
	}
        
	bool Proxy::Room_Disappear ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const int & team_num)	{
		::Proud::CMessage __msg;
__msg.UseInternalBuffer();
__msg.SetSimplePacketMode(m_core->IsSimplePacketMode());

::Proud::RmiID __msgid=(::Proud::RmiID)Rmi_Room_Disappear;
__msg.Write(__msgid); 
	
__msg << team_num;
		
		return RmiSend(&remote,1,rmiContext,__msg,
			RmiName_Room_Disappear, (::Proud::RmiID)Rmi_Room_Disappear);
	}

	bool Proxy::Room_Disappear ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext, const int & team_num)  	{
		::Proud::CMessage __msg;
__msg.UseInternalBuffer();
__msg.SetSimplePacketMode(m_core->IsSimplePacketMode());

::Proud::RmiID __msgid=(::Proud::RmiID)Rmi_Room_Disappear;
__msg.Write(__msgid); 
	
__msg << team_num;
		
		return RmiSend(remotes,remoteCount,rmiContext,__msg,
			RmiName_Room_Disappear, (::Proud::RmiID)Rmi_Room_Disappear);
	}
        
	bool Proxy::GameStart ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext )	{
		::Proud::CMessage __msg;
__msg.UseInternalBuffer();
__msg.SetSimplePacketMode(m_core->IsSimplePacketMode());

::Proud::RmiID __msgid=(::Proud::RmiID)Rmi_GameStart;
__msg.Write(__msgid); 
	
		
		return RmiSend(&remote,1,rmiContext,__msg,
			RmiName_GameStart, (::Proud::RmiID)Rmi_GameStart);
	}

	bool Proxy::GameStart ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext)  	{
		::Proud::CMessage __msg;
__msg.UseInternalBuffer();
__msg.SetSimplePacketMode(m_core->IsSimplePacketMode());

::Proud::RmiID __msgid=(::Proud::RmiID)Rmi_GameStart;
__msg.Write(__msgid); 
	
		
		return RmiSend(remotes,remoteCount,rmiContext,__msg,
			RmiName_GameStart, (::Proud::RmiID)Rmi_GameStart);
	}
        
	bool Proxy::PlayerInfo ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const int & team_num, const int & character_num, const float & px, const float & py, const float & pz, const float & rx, const float & ry, const float & rz)	{
		::Proud::CMessage __msg;
__msg.UseInternalBuffer();
__msg.SetSimplePacketMode(m_core->IsSimplePacketMode());

::Proud::RmiID __msgid=(::Proud::RmiID)Rmi_PlayerInfo;
__msg.Write(__msgid); 
	
__msg << team_num;
__msg << character_num;
__msg << px;
__msg << py;
__msg << pz;
__msg << rx;
__msg << ry;
__msg << rz;
		
		return RmiSend(&remote,1,rmiContext,__msg,
			RmiName_PlayerInfo, (::Proud::RmiID)Rmi_PlayerInfo);
	}

	bool Proxy::PlayerInfo ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext, const int & team_num, const int & character_num, const float & px, const float & py, const float & pz, const float & rx, const float & ry, const float & rz)  	{
		::Proud::CMessage __msg;
__msg.UseInternalBuffer();
__msg.SetSimplePacketMode(m_core->IsSimplePacketMode());

::Proud::RmiID __msgid=(::Proud::RmiID)Rmi_PlayerInfo;
__msg.Write(__msgid); 
	
__msg << team_num;
__msg << character_num;
__msg << px;
__msg << py;
__msg << pz;
__msg << rx;
__msg << ry;
__msg << rz;
		
		return RmiSend(remotes,remoteCount,rmiContext,__msg,
			RmiName_PlayerInfo, (::Proud::RmiID)Rmi_PlayerInfo);
	}
        
	bool Proxy::Player_Move ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const int & m_team_num, const float & m_move, const float & m_rotate, const float & m_mouseX)	{
		::Proud::CMessage __msg;
__msg.UseInternalBuffer();
__msg.SetSimplePacketMode(m_core->IsSimplePacketMode());

::Proud::RmiID __msgid=(::Proud::RmiID)Rmi_Player_Move;
__msg.Write(__msgid); 
	
__msg << m_team_num;
__msg << m_move;
__msg << m_rotate;
__msg << m_mouseX;
		
		return RmiSend(&remote,1,rmiContext,__msg,
			RmiName_Player_Move, (::Proud::RmiID)Rmi_Player_Move);
	}

	bool Proxy::Player_Move ( ::Proud::HostID *remotes, int remoteCount, ::Proud::RmiContext &rmiContext, const int & m_team_num, const float & m_move, const float & m_rotate, const float & m_mouseX)  	{
		::Proud::CMessage __msg;
__msg.UseInternalBuffer();
__msg.SetSimplePacketMode(m_core->IsSimplePacketMode());

::Proud::RmiID __msgid=(::Proud::RmiID)Rmi_Player_Move;
__msg.Write(__msgid); 
	
__msg << m_team_num;
__msg << m_move;
__msg << m_rotate;
__msg << m_mouseX;
		
		return RmiSend(remotes,remoteCount,rmiContext,__msg,
			RmiName_Player_Move, (::Proud::RmiID)Rmi_Player_Move);
	}
#ifdef USE_RMI_NAME_STRING
const PNTCHAR* Proxy::RmiName_RequestLogin =_PNT("RequestLogin");
#else
const PNTCHAR* Proxy::RmiName_RequestLogin =_PNT("");
#endif
#ifdef USE_RMI_NAME_STRING
const PNTCHAR* Proxy::RmiName_NotifyLoginSuccess =_PNT("NotifyLoginSuccess");
#else
const PNTCHAR* Proxy::RmiName_NotifyLoginSuccess =_PNT("");
#endif
#ifdef USE_RMI_NAME_STRING
const PNTCHAR* Proxy::RmiName_NotifyLoginFailed =_PNT("NotifyLoginFailed");
#else
const PNTCHAR* Proxy::RmiName_NotifyLoginFailed =_PNT("");
#endif
#ifdef USE_RMI_NAME_STRING
const PNTCHAR* Proxy::RmiName_JoinGameRoom =_PNT("JoinGameRoom");
#else
const PNTCHAR* Proxy::RmiName_JoinGameRoom =_PNT("");
#endif
#ifdef USE_RMI_NAME_STRING
const PNTCHAR* Proxy::RmiName_LeaveGameRoom =_PNT("LeaveGameRoom");
#else
const PNTCHAR* Proxy::RmiName_LeaveGameRoom =_PNT("");
#endif
#ifdef USE_RMI_NAME_STRING
const PNTCHAR* Proxy::RmiName_Room_Appear =_PNT("Room_Appear");
#else
const PNTCHAR* Proxy::RmiName_Room_Appear =_PNT("");
#endif
#ifdef USE_RMI_NAME_STRING
const PNTCHAR* Proxy::RmiName_Room_Disappear =_PNT("Room_Disappear");
#else
const PNTCHAR* Proxy::RmiName_Room_Disappear =_PNT("");
#endif
#ifdef USE_RMI_NAME_STRING
const PNTCHAR* Proxy::RmiName_GameStart =_PNT("GameStart");
#else
const PNTCHAR* Proxy::RmiName_GameStart =_PNT("");
#endif
#ifdef USE_RMI_NAME_STRING
const PNTCHAR* Proxy::RmiName_PlayerInfo =_PNT("PlayerInfo");
#else
const PNTCHAR* Proxy::RmiName_PlayerInfo =_PNT("");
#endif
#ifdef USE_RMI_NAME_STRING
const PNTCHAR* Proxy::RmiName_Player_Move =_PNT("Player_Move");
#else
const PNTCHAR* Proxy::RmiName_Player_Move =_PNT("");
#endif
const PNTCHAR* Proxy::RmiName_First = RmiName_RequestLogin;

}



