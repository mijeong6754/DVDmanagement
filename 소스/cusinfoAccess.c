#include "common.h"
#include "cusInfo.h"

#define MAX_CUSTOMER 100

//���� �����Ͽ��� �������� ����� extern -> ���� static -> ����X

static cusInfo * cusList[MAX_CUSTOMER];
static int numOfCustomer = 0;

int AddCusInfo(char * ID, char * name, char * num)
{
	cusInfo * pCus;

	if (numOfCustomer >= MAX_CUSTOMER)
		return 0;

	pCus = (cusInfo *)malloc(sizeof(cusInfo));

	strcpy(pCus->ID, ID);
	strcpy(pCus->name, name);
	strcpy(pCus->phoneNum, num);

	cusList[numOfCustomer++] = pCus;
	return numOfCustomer;
}
cusInfo * GetCusPtrByID(char * ID)
{
	int i;

	for (i = 0; i < numOfCustomer; i++)
	{
		if (!strcmp(cusList[i]->ID, ID))
			return cusList[i];

	}
	return (cusInfo*)0;
}

int IsregistID(char * ID) 
{
	cusInfo * pCus  = GetCusPtrByID(ID);

	if (pCus == 0)
		return 0;
	else
		return 1;
}
