#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void riqiguiyi(float *t, char*s)
{
	*t = atof(s);
	*t = (*t - 1.0*20130101) / 60416;
}