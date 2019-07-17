#include "common.h"
#include "cusInfo.h"
#include "dvdInfo.h"
#include "screenOut.h"

void ShowMenu(void)
{
	system("cls"); //stdlib.h

	printf("----- �� �� -----\n");
	printf("1. �ű԰��� \n");
	printf("2. ȸ�� ��ȸ \n");
	printf("3. DVD ��� \n");
	printf("4. DVD ��ȸ \n");
	printf("5. DVD �뿩 \n");
	printf("6. DVD �ݳ� \n");
	printf("7. ���� \n");
	printf("-----------------\n");
	printf("���� >>>");
	
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
		printf("�帣 : ACTION \n");
		break;

	case 2:
		printf("�帣 : COMIC \n");
		break;

	case 3:
		printf("�帣 : SF \n");
		break;

	case 4:
		printf("�帣 : ROMANTIC \n");
		break;

	}
}
void showRentInfo(dvdInfo * pDVD)
{
	printf("�뿩�� �Ϸ�Ǿ����ϴ�. ");
	getchar();
}

