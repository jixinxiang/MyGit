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
	int status;		// ��Կ״̬: 1����, 0:������
	int seckeyID;	// ��Կ�ı��
	string clientID;	// �ͻ���ID, �ͻ��˵ı�ʶ
	string serverID;	// ������ID, ��������ʶ
	string seckey;	// �ԳƼ��ܵ���Կ
};