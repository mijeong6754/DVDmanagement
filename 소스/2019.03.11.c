#include "common.h"
#include "cusManager.h"
#include "screenOut.h"
#include "dvdManager.h"


enum{CUS_REGIST=1, CUS_SEARCH, DVD_REGIST, DVD_SEARCH, DVD_RENT,DVD_RETURN, QUIT};

int main(void)
{
	int intputMenu = 0;

	while (1)
	{
		ShowMenu();
		scanf("%d", &intputMenu);
		getchar();

		switch (intputMenu)
		{
		case CUS_REGIST:
			RegisterCustomer();
			break;

		case CUS_SEARCH:
			SearchCusInfo();
			break;

		case DVD_REGIST:
			ReistDVD();
			break;

		case DVD_SEARCH:
			SearshDVDInfo();
			break;

		case DVD_RENT:
			RentDVD();
			break;
		case DVD_RETURN:
			ReturnDVD();
			break;

		}

		if (intputMenu == QUIT)
		{
			puts("이용해주셔서 감사합니다.");
			break;
		}
	}


	return 0;

}
