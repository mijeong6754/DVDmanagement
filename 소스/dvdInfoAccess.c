#include "dvdInfo.h"


#define MAX_DVD 100

dvdInfo * DVDList[MAX_DVD];
int numOfDVD = 0;
int rentcnt = 0;


/*
   ��� : dvdInfo ������� �Ҵ� �� ����ü �迭�� ����
   ��ȯ : ���� �� ��ϵ� ������ ��, ���� �� 0�� ��ȯ
*/
int AddDVDInfo(char * ISBN, char * title, int genre)
{
	dvdInfo * pDVD;

	if (numOfDVD >= MAX_DVD)

		return 0;

	pDVD = (dvdInfo *)malloc(sizeof(dvdInfo));

	strcpy(pDVD->ISBN, ISBN);
	strcpy(pDVD->title, title);
	pDVD->genre = genre;

	pDVD->rentState = RETURNED;

	DVDList[numOfDVD++] = pDVD;

	return numOfDVD;

	

}

/*
	��� : �ش�ISBN�� ������ ����ִ� ������ �����͸� ��ȯ
	��ȯ : ��ϵ��� ���� ISBN�� ��� NULL�����͸� ��ȯ
*/
dvdInfo * GetDVDPtrByISBN(char * ISBN)
{
	int i;
	for (i = 0; i < numOfDVD; i++)
	{
		if (!strcmp(DVDList[i]->ISBN, ISBN))
			return DVDList[i];
	}

	return (dvdInfo*)0;
}

/*
	��� : �� ��ϵ� ISBN���� üũ
	��ȯ : ��ϵǾ����� 1, �ƴϸ� 0�� ��ȯ
*/
int IsRegistISBN(char * ISBN)
{
	dvdInfo * pDVD = GetDVDPtrByISBN(ISBN);

	if (pDVD == 0)
		return 0;
	else
		return 1;
}


int RentRegistISBN(char * ISBN)
{
	dvdInfo * pDVD = GetDVDPtrByISBN(ISBN);

	if (pDVD->rentState == RENTED)
		return 0;
	else;
		return 1;

}

int AddDVDRentInfo(char * ISBN, char * ID, int rentDay)
{
	dvdInfo *pDVD = GetDVDPtrByISBN(ISBN);

	

	strcpy(pDVD->rentList[rentcnt].ISBN_NUM, ISBN);
	strcpy(pDVD->rentList[rentcnt].cusID, ID);
	pDVD->rentList[rentcnt].rentDay = rentDay;

	rentcnt++;

	return rentcnt;

}

