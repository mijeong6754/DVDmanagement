#ifndef __DVDACCESS_H__




#include "dvdInfo.h"

/*
   기능 : dvdInfo 저장공간 할당 및 구조체 배열에 저장
   반환 : 성공 시 등록된 정보의 수, 실패 시 0을 반환
*/
int AddDVDInfo(char * ISBN, char * title, int genre);

/*
    기능 : 해당ISBN의 정보를 담고있는 변수의 포인터를 반환
	반환 : 등록되지 않은 ISBN의 경우 NULL포인터를 반환
*/
dvdInfo * GetDVDPtrByISBN(char * ISBN);

/*
    기능 : 기 등록된 ISBN인지 체크
	반환 : 등록되었으면 1, 아니면 0을 반환
*/
int IsRegistISBN(char * ISBN);

int RentRegistISBN(char * ISBN);

int AddDVDRentInfo(char * ISBN, char * ID, int rentDay);



#endif



