#include "screenOut.h"
#include "dvdInfo.h"
#include "dvdInfoAccess.h"
#include "common.h"
#include "dvdManager.h"


void ReistDVD(void)
{
	char ISBN[ISBN_LEN];
	char title[TITLE_LEN];
	int genre;
	
	printf("ISBN �Է� : ");
	gets(ISBN);

	if (IsRegistISBN(ISBN))
	{
		puts("�ش� ISBN�� ��ϵ��ֽ��ϴ�.");
		getchar();
		return;
	}
	printf("������ �Է��ϼ��� : ");
	gets(title);


	printf("�帣�� �Է��ϼ��� : ");
	scanf("%d", &genre);

	if (!AddDVDInfo(ISBN, title, genre))
	{
		puts("�Է¿� �����߽��ϴ�.");
		getchar();
		return;
	}

	puts("�Է¿� �����߽��ϴ�.");
	getchar();
	


}
void SearshDVDInfo(void)
{
	char ISBN[ISBN_LEN];
	dvdInfo * dvdPtr;

	printf("ã�� ISBN�� �Է��ϼ��� : ");
	gets(ISBN);

	dvdPtr = GetDVDPtrByISBN(ISBN);
	if (dvdPtr == 0)
	{
		puts("�������� �ʴ� ISBN�Դϴ�. ");
		getchar();
		return;
	}

	ShowDVDInfo(dvdPtr);


}

void RentDVD(void)
{
	char ISBN[ISBN_LEN];
	char ID[ID_LEN];
	int rentDay;

	printf("�뿩��ID �Է� : ");
	gets(ID);
	
	if (!IsregistID(ID))
	{
		puts("�Էµ� ID�� ���Ե� ���� �����ϴ�.");
		getchar();
		return;
	}

	printf("�뿩��¥ �Է� : ");
	scanf("%d", &rentDay);
	getchar();
	
	printf("�뿩�� DVD�Է� : ");
	gets(ISBN);
	


	if (IsRegistISBN(ISBN) == 0)
	{
		puts("�������� �ʴ� DVD�Դϴ�. ");
		getchar();
		return;
	}
	else {

		if (GetDVDPtrByISBN(ISBN)->rentState == RENTED)
		{
			puts(" �뿩 ���� DVD�̹Ƿ�, �뿩�� �Ұ����մϴ�. ");
			getchar();

		}
		else {

			puts("�뿩�� �Ǿ����ϴ�");
			GetDVDPtrByISBN(ISBN)->rentState = RENTED;
			getchar();

		}
	}
}

void ReturnDVD(void)
{
	char ISBN[ISBN_LEN];

	printf("�ݳ��� DVD �Է� : ");
	gets(ISBN);

	if (IsRegistISBN(ISBN) == 0)
	{
		puts("��ϵ��� ���� DVD ISBN�Դϴ�. ");
		getchar();
		return;
	}
	else {

		if (GetDVDPtrByISBN(ISBN)->rentState == RETURNED)
		{
			puts(" �뿩���� ���� DVD�Դϴ� ");
			getchar();

		}
		else {

			puts("�ݳ��� �Ǿ����ϴ�.");
			GetDVDPtrByISBN(ISBN)->rentState = RETURNED;
			getchar();

		}
	}
}

void DVDRentList(void)
{
	char ISBN[ISBN_LEN];

	printf("ISBN �Է� : ");
	gets(ISBN);





}