/*
     기능   : 콘솔출력을 위한 함수들의 선언
	 작성자 : HMJ대리
	 작성일 : 2019-03-11
	 ver    : 1.0
*/


#ifndef __SCREENOUT_H__
#define __SCREENOUT_H__

#include "cusInfo.h"
#include "dvdInfo.h"
/*
    기능 : 프로그램을 사용하기 위한 메뉴 출력
	반환 : void
*/
void ShowMenu(void);
/*
    기능 : 고객 정보를 출력
	반환 : void
*/
void ShowCustomerInfo(cusInfo * pCus);

void ShowDVDInfo(dvdInfo * pDVD);

void showGenre(int gen);

void showRentInfo(dvdInfo * pDVD);

#endif
