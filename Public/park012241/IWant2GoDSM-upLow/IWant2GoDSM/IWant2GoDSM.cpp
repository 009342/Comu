// IWant2GoDSM.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <string.h>
#include <ctype.h>

int main()
{
	int count = 1;
	char s[256] = "";
	gets_s(s);
	int len = strlen(s);
	for (int i = 0; i < len; i++)
	{
		if (s[i]==' ')
		{
			count = 0;
		}
		if (count % 2 == 1)
			printf("%c",toupper(s[i]));
		else
			printf("%c", tolower(s[i]));
		count++;
	}
    return 0;
}
