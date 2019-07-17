
/*
#include "cusInfo.h"
#include "common.h"
#include "cusInfoAccess.h"
#include "screenOut.h"

void RegisterCustomer(void)
{
	char ID[ID_LEN];
	char name[NAME_LEN];
	char phoneNum[PHONE_LEN];

	printf("ID�� �Է��ϼ��� : ");
	gets(ID);

	if (IsregistID(ID))
	{
		puts("�ش� ID�� ������Դϴ�. ");
		getchar();
		return;
	}

	printf("�̸��� �Է��ϼ��� : ");
	gets(name);

	print("��ȭ��ȣ�� �Է��ϼ��� : ");
	gets(phoneNum);

	if (!AddCusInfo(ID, name, phoneNum))
	{
		puts("������ ���忡 �����߽��ϴ�");
		getchar();
		return;
	}

	puts("ȸ�������� �Ǿ����ϴ�");
	getchar();

}

void SearchCusInfo(void)
{
	char ID[ID_LEN];
	cusInfo * cusPtr;

	printf("ã�� ID �Է� : ");
	gets(ID);

	cusPtr = GetCusPtrByID(ID);
	if (cusPtr == 0)
	{
		puts("�������� �ʴ� ID�Դϴ�.");
		getchar();
		return;
	}
	ShowCustomerinfo(cusPtr);
}
*/
#include "common.h"
#include "cusInfo.h"
#include "cusInfoAccess.h"
#include "screenOut.h"

void RegisterCustomer(void)
{
	char ID[ID_LEN];
	char name[NAME_LEN];
	char phoneNum[PHONE_LEN];

	printf("ID �Է� : ");
	gets(ID);

	if (IsregistID(ID))
	{
		puts("�ش� ID�� ��� ���Դϴ�.");
		getchar();
		return;
	}

	printf("�̸� �Է� : ");
	gets(name);

	printf("��ȭ��ȣ �Է� : ");
	gets(phoneNum);

	if (!AddCusInfo(ID, name, phoneNum))
	{
		puts("������ ���忡 �����߽��ϴ�. ");
		getchar();
		return;
	}

	puts("ȸ�� ������ �Ǿ����ϴ�. ");
	getchar();
}

void SearchCusInfo(void)
{
	char ID[ID_LEN];
	cusInfo * cusPtr;

	printf("ã�� ID �Է� : ");
	gets(ID);

	cusPtr = GetCusPtrByID(ID);
	if (cusPtr == 0)
	{
		puts("�������� �ʴ� ID�Դϴ�. ");
		getchar();
		return;
	}

	ShowCustomerInfo(cusPtr);
}
