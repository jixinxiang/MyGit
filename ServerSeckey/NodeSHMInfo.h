#pragma once
#include <string.h>
class NodeSecKeyInfo
{
public:
	NodeSecKeyInfo() : status(0), seckeyID(0)
	{
		bzero(clientID, sizeof(clientID));
		bzero(serverID, sizeof(serverID));
		bzero(seckey, sizeof(seckey));
	}
	int status;		// ��Կ״̬: 1����, 0:������
	int seckeyID;	// ��Կ�ı��
	char clientID[12];	// �ͻ���ID, �ͻ��˵ı�ʶ
	char serverID[12];	// ������ID, ��������ʶ
	char seckey[128];	// �ԳƼ��ܵ���Կ
};
