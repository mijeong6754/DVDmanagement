#include "dvdInfo.h"


#define MAX_DVD 100

dvdInfo * DVDList[MAX_DVD];
int numOfDVD = 0;
int rentcnt = 0;


/*
   기능 : dvdInfo 저장공간 할당 및 구조체 배열에 저장
   반환 : 성공 시 등록된 정보의 수, 실패 시 0을 반환
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
	기능 : 해당ISBN의 정보를 담고있는 변수의 포인터를 반환
	반환 : 등록되지 않은 ISBN의 경우 NULL포인터를 반환
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
	기능 : 기 등록된 ISBN인지 체크
	반환 : 등록되었으면 1, 아니면 0을 반환
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

