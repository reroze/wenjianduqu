#include <stdio.h>
#include <string.h>

void barifengliguiyi(float *t, char*s)
{
	char *s1 = s;
	float type = 0;
	float fengli = 0;
	int i = 0;
	int state = 0;
	char fengxiang[9][16] = { "东南","东北","西南","西北","东","南","西","北","无持续风向"};
	if (strstr(s, fengxiang[0]) != NULL && state==0)
	{
		type = 0;
		state = 1;
	}
	if (strstr(s, fengxiang[1]) != NULL && state == 0)
	{
		type = 1;
		state = 1;
	}
	if (strstr(s, fengxiang[2]) != NULL && state == 0)
	{
		type = 2;
		state = 1;
	}
	if (strstr(s, fengxiang[3]) != NULL && state == 0)
	{
		type = 3;
		state = 1;
	}
	if (strstr(s, fengxiang[4]) != NULL && state == 0)
	{
		type = 4;
		state = 1;
	}
	if (strstr(s, fengxiang[5]) != NULL && state == 0)
	{
		type = 5;
		state = 1;
	}
	if (strstr(s, fengxiang[6]) != NULL && state == 0)
	{
		type = 6;
		state = 1;
	}
	if (strstr(s, fengxiang[7]) != NULL && state == 0)
	{
		type = 7;
		state = 1;
	}
	if (strstr(s, fengxiang[8]) != NULL && state == 0)
	{
		type = 8;
		state = 1;
	}
	if (state == 0)
		type = 9;


	while (*s1 != 0)
	{
		if (*s1 >= '0' && *s1 <= '9')
		{
			fengli = fengli + *s1 - '0';
			i++;
		}
		s1++;
	}
	if (i != 0)
	{
		fengli = fengli / i;
		type = type / 9;
		*t = (fengli + type) / 16;
	}
	if (i == 0)
	{
		*t = 0.333333;
	}
}

void yewanfengliguiyi(float *t, char*s)
{
	char *s1 = s;
	float type = 0;
	float fengli = 0;
	int i = 0;
	int state = 0;
	char fengxiang[9][16] = { "东南","东北","西南","西北","东","南","西","北","无持续风向" };
	if (strstr(s, fengxiang[0]) != NULL && state == 0)
	{
		type = 0;
		state = 1;
	}
	if (strstr(s, fengxiang[1]) != NULL && state == 0)
	{
		type = 1;
		state = 1;
	}
	if (strstr(s, fengxiang[2]) != NULL && state == 0)
	{
		type = 2;
		state = 1;
	}
	if (strstr(s, fengxiang[3]) != NULL && state == 0)
	{
		type = 3;
		state = 1;
	}
	if (strstr(s, fengxiang[4]) != NULL && state == 0)
	{
		type = 4;
		state = 1;
	}
	if (strstr(s, fengxiang[5]) != NULL && state == 0)
	{
		type = 5;
		state = 1;
	}
	if (strstr(s, fengxiang[6]) != NULL && state == 0)
	{
		type = 6;
		state = 1;
	}
	if (strstr(s, fengxiang[7]) != NULL && state == 0)
	{
		type = 7;
		state = 1;
	}
	if (strstr(s, fengxiang[8]) != NULL && state == 0)
	{
		type = 8;
		state = 1;
	}
	if (state == 0)
		type = 9;


	while (*s1 != 0)
	{
		if (*s1 >= '0' && *s1 <= '9')
		{
			fengli = fengli + *s1 - '0';
			i++;
		}
		s1++;
	}
	if (i != 0)
	{
		fengli = fengli / i;
		type = type / 9;
		*t = (fengli + type) / 16;
	}
	if (i == 0)
	{
		*t = 0.333333;
	}
}