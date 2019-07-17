#ifndef __DVDINFO_H__
#define __DVDINFO_H__

#include "cusInfo.h"

#define ISBN_LEN 30
#define TITLE_LEN 30
#define RENT_LEN 100

//도서장르정보
enum {ACTION=1,COMIC,SF,ROMANTIC};
//대여상태정보
enum { RENTED, RETURNED};

typedef struct __dvdRentInfo
{
	char ISBN_NUM[ISBN_LEN];
	char cusID[ID_LEN];
	unsigned int rentDay;

}dvdRentInfo;

typedef struct __dvdInfo
{
	char ISBN[ISBN_LEN];
	char title[TITLE_LEN];
	int genre; //도서 장르 멤버 변수

	//대여가능여부(대여, 반납)
	int rentState;
	//rentList의 저장 위치정보
	int numOfRentCus;

	//대여이력
	dvdRentInfo rentList[RENT_LEN];
	
}dvdInfo;

#endif