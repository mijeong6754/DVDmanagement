/*
    ���   : �� ���� ���� �� ���� �Լ����� ���
	�ۼ��� : HMJ�븮
	�ۼ��� : 2019-03-11
	ver    : 1.0 
*/


#ifndef __COMMON_H__
#define __COMMON_H__

#include "cusInfo.h"

/*
     ��� : cusInfo �Ҵ� �� ����
	 ��ȯ : ���� �� ��ϵ� ������ ����, ���� �� 0�� ��ȯ
*/

int AddCusInfo(char * ID, char * name, char * num);
/*
    ��� : �ش� �� ID�� ������ ������ �ִ� �����͸� ��ȯ
	��ȯ : ��� �ȵ� ID�� ��� NULL ������ ��ȯ
*/

cusInfo * GetCusPtrByID(char * ID);
/*
   ��� : ���Ե� ID���� üũ
   ��ȯ : ���ԵǾ����� 1, �ƴϸ� 0�� ��ȯ
*/

int IsregistID(char * ID);


#endif

#include <stdio.h>
#include <string.h>
#include <stdlib.h>




