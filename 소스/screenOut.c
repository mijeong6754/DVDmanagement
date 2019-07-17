#include "common.h"
#include "cusInfo.h"
#include "dvdInfo.h"
#include "screenOut.h"

void ShowMenu(void)
{
	system("cls"); //stdlib.h

	printf("----- 메 뉴 -----\n");
	printf("1. 신규가입 \n");
	printf("2. 회원 조회 \n");
	printf("3. DVD 등록 \n");
	printf("4. DVD 조회 \n");
	printf("5. DVD 대여 \n");
	printf("6. DVD 반납 \n");
	printf("7. 종료 \n");
	printf("-----------------\n");
	printf("선택 >>>");
	
}

void ShowCustomerInfo(cusInfo * pCus)
{
	printf("");
	printf("-----------------\n");
	printf(" ID : %s \n", pCus->ID);
	printf(" Name : %s \n", pCus->name);
	printf(" Phone : %s \n ", pCus->phoneNum);
	printf("-----------------");

	getchar();
}
void ShowDVDInfo(dvdInfo * pDVD)
{
	printf("");
	printf("-----------------\n");
	printf(" ISBN : %s \n", pDVD->ISBN);
	printf(" title : %s \n", pDVD->title);
	showGenre(pDVD->genre);
	printf("-----------------\n");

	getchar();
}
//enum { ACTION = 1, COMIC, SF, ROMANTIC };

void showGenre(int gen)
{
	switch (gen)
	{
	case 1:
		printf("장르 : ACTION \n");
		break;

	case 2:
		printf("장르 : COMIC \n");
		break;

	case 3:
		printf("장르 : SF \n");
		break;

	case 4:
		printf("장르 : ROMANTIC \n");
		break;

	}
}
void showRentInfo(dvdInfo * pDVD)
{
	printf("대여가 완료되었습니다. ");
	getchar();
}

