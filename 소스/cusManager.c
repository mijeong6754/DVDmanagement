
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

	printf("ID를 입력하세요 : ");
	gets(ID);

	if (IsregistID(ID))
	{
		puts("해당 ID는 사용중입니다. ");
		getchar();
		return;
	}

	printf("이름을 입력하세요 : ");
	gets(name);

	print("전화번호를 입력하세요 : ");
	gets(phoneNum);

	if (!AddCusInfo(ID, name, phoneNum))
	{
		puts("데이터 저장에 실패했습니다");
		getchar();
		return;
	}

	puts("회원가입이 되었습니다");
	getchar();

}

void SearchCusInfo(void)
{
	char ID[ID_LEN];
	cusInfo * cusPtr;

	printf("찾을 ID 입력 : ");
	gets(ID);

	cusPtr = GetCusPtrByID(ID);
	if (cusPtr == 0)
	{
		puts("존재하지 않는 ID입니다.");
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

	printf("ID 입력 : ");
	gets(ID);

	if (IsregistID(ID))
	{
		puts("해당 ID는 사용 중입니다.");
		getchar();
		return;
	}

	printf("이름 입력 : ");
	gets(name);

	printf("전화번호 입력 : ");
	gets(phoneNum);

	if (!AddCusInfo(ID, name, phoneNum))
	{
		puts("데이터 저장에 실패했습니다. ");
		getchar();
		return;
	}

	puts("회원 가입이 되었습니다. ");
	getchar();
}

void SearchCusInfo(void)
{
	char ID[ID_LEN];
	cusInfo * cusPtr;

	printf("찾을 ID 입력 : ");
	gets(ID);

	cusPtr = GetCusPtrByID(ID);
	if (cusPtr == 0)
	{
		puts("존재하지 않는 ID입니다. ");
		getchar();
		return;
	}

	ShowCustomerInfo(cusPtr);
}
