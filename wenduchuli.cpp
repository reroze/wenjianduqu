#include <stdio.h>

void bairiwenduchuli(float *t, char *s)
{
	char *s1 = s;
	int i = 0;
	while (*s1 != '\0')
	{
		if (*s1 >= '0' && *s1 <= '9')
		{
			*t = *t * 10 + (*s1 - '0');
		}
		*s1++;
	}
	*t = *t / 50;
}
void yewanwenduchuli(float *t, char *s)
{
	char *s1 = s;
	int i = 0;
	while (*s1 != '\0')
	{
		if (*s1 >= '0' && *s1 <= '9')
		{
			*t = *t * 10 + (*s1 - '0');
		}
		*s1++;
	}
	*t = *t / 50;
}