/*
     ���   : �ܼ������ ���� �Լ����� ����
	 �ۼ��� : HMJ�븮
	 �ۼ��� : 2019-03-11
	 ver    : 1.0
*/


#ifndef __SCREENOUT_H__
#define __SCREENOUT_H__

#include "cusInfo.h"
#include "dvdInfo.h"
/*
    ��� : ���α׷��� ����ϱ� ���� �޴� ���
	��ȯ : void
*/
void ShowMenu(void);
/*
    ��� : �� ������ ���
	��ȯ : void
*/
void ShowCustomerInfo(cusInfo * pCus);

void ShowDVDInfo(dvdInfo * pDVD);

void showGenre(int gen);

void showRentInfo(dvdInfo * pDVD);

#endif
