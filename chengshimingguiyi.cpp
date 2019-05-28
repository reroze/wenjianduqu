#include <stdio.h>

void chengshimingguiyi(float*t, char*s)
{
	char *s0 = s;
	int i = 0;
	while (*s0 != '\0')
	{
		*t = *t * 10;
		*t = *t + *s0 - 'A';
		i = 10 * i + 'z';
		s0++;
	}
	*t = *t / i;
}