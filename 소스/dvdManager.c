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
	
	printf("ISBN 입력 : ");
	gets(ISBN);

	if (IsRegistISBN(ISBN))
	{
		puts("해당 ISBN은 등록되있습니다.");
		getchar();
		return;
	}
	printf("제목을 입력하세요 : ");
	gets(title);


	printf("장르를 입력하세요 : ");
	scanf("%d", &genre);

	if (!AddDVDInfo(ISBN, title, genre))
	{
		puts("입력에 실패했습니다.");
		getchar();
		return;
	}

	puts("입력에 성공했습니다.");
	getchar();
	


}
void SearshDVDInfo(void)
{
	char ISBN[ISBN_LEN];
	dvdInfo * dvdPtr;

	printf("찾을 ISBN을 입력하세요 : ");
	gets(ISBN);

	dvdPtr = GetDVDPtrByISBN(ISBN);
	if (dvdPtr == 0)
	{
		puts("존재하지 않는 ISBN입니다. ");
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

	printf("대여고객ID 입력 : ");
	gets(ID);
	
	if (!IsregistID(ID))
	{
		puts("입력된 ID로 가입된 고객이 없습니다.");
		getchar();
		return;
	}

	printf("대여날짜 입력 : ");
	scanf("%d", &rentDay);
	getchar();
	
	printf("대여할 DVD입력 : ");
	gets(ISBN);
	


	if (IsRegistISBN(ISBN) == 0)
	{
		puts("존재하지 않는 DVD입니다. ");
		getchar();
		return;
	}
	else {

		if (GetDVDPtrByISBN(ISBN)->rentState == RENTED)
		{
			puts(" 대여 중인 DVD이므로, 대여가 불가능합니다. ");
			getchar();

		}
		else {

			puts("대여가 되었습니다");
			GetDVDPtrByISBN(ISBN)->rentState = RENTED;
			getchar();

		}
	}
}

void ReturnDVD(void)
{
	char ISBN[ISBN_LEN];

	printf("반납할 DVD 입력 : ");
	gets(ISBN);

	if (IsRegistISBN(ISBN) == 0)
	{
		puts("등록되지 않은 DVD ISBN입니다. ");
		getchar();
		return;
	}
	else {

		if (GetDVDPtrByISBN(ISBN)->rentState == RETURNED)
		{
			puts(" 대여되지 않은 DVD입니다 ");
			getchar();

		}
		else {

			puts("반납이 되었습니다.");
			GetDVDPtrByISBN(ISBN)->rentState = RETURNED;
			getchar();

		}
	}
}

void DVDRentList(void)
{
	char ISBN[ISBN_LEN];

	printf("ISBN 입력 : ");
	gets(ISBN);





}