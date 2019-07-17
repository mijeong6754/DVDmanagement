#ifndef __DVDACCESS_H__




#include "dvdInfo.h"

/*
   ��� : dvdInfo ������� �Ҵ� �� ����ü �迭�� ����
   ��ȯ : ���� �� ��ϵ� ������ ��, ���� �� 0�� ��ȯ
*/
int AddDVDInfo(char * ISBN, char * title, int genre);

/*
    ��� : �ش�ISBN�� ������ ����ִ� ������ �����͸� ��ȯ
	��ȯ : ��ϵ��� ���� ISBN�� ��� NULL�����͸� ��ȯ
*/
dvdInfo * GetDVDPtrByISBN(char * ISBN);

/*
    ��� : �� ��ϵ� ISBN���� üũ
	��ȯ : ��ϵǾ����� 1, �ƴϸ� 0�� ��ȯ
*/
int IsRegistISBN(char * ISBN);

int RentRegistISBN(char * ISBN);

int AddDVDRentInfo(char * ISBN, char * ID, int rentDay);



#endif



