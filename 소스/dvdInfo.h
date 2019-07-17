#ifndef __DVDINFO_H__
#define __DVDINFO_H__

#include "cusInfo.h"

#define ISBN_LEN 30
#define TITLE_LEN 30
#define RENT_LEN 100

//�����帣����
enum {ACTION=1,COMIC,SF,ROMANTIC};
//�뿩��������
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
	int genre; //���� �帣 ��� ����

	//�뿩���ɿ���(�뿩, �ݳ�)
	int rentState;
	//rentList�� ���� ��ġ����
	int numOfRentCus;

	//�뿩�̷�
	dvdRentInfo rentList[RENT_LEN];
	
}dvdInfo;

#endif