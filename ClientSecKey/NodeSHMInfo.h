#pragma once
#include <iostream>
#include <string>

class NodeSHMInfo
{
public:
	NodeSHMInfo() : status(0), seckeyID(0)
	{
		clientID = "";
		serverID = "";
		seckey = "";
	}
	int status;		// 秘钥状态: 1可用, 0:不可用
	int seckeyID;	// 秘钥的编号
	string clientID;	// 客户端ID, 客户端的标识
	string serverID;	// 服务器ID, 服务器标识
	string seckey;	// 对称加密的秘钥
};