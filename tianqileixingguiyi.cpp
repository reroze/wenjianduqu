#include <stdio.h>
#include <string.h>
#include <math.h>

void tianqileixingguiyi(float *t, char *s)
{
	float type = 0;
	int i = 1;
	char *s0 = s;
	while (*s0 != '\0')
	{
		type = type * 10 + abs(*s0)%10;
		i = 10 * i;
		s0++;
	}
	type =type /i;
	while (fabsf(type) > 1)
	{
		type = type / 10;
	}
	*t = type;
}