#include <stdio.h>
#include <stdlib.h>
#include <string.h>
enum { no, start, con, end };
void copy(char*a, char s);
int qingxi(FILE*fp, char *s, char lei,char *ch)
{
	int state = 0;
	int conw = 1;
	char str[50] = "0";
	while (*ch != EOF && conw == 1)
	{

		if (*ch == lei)
		{
			*ch = fgetc(fp);
			state = start;
		}
		if (*ch == '\n' && state == start)
			state = end;
		switch (state)
		{
		case no:
			break;
		case start:
			copy(str, *ch);
			break;
		case end:
			copy(str, '\0');
			conw = 0;
			break;
		}
		*ch = fgetc(fp);

	}

	if (*ch == EOF)
	{
		if (state = start)
		{
			copy(str, '\0');
			strcpy(s, str);
		}
		//copy(str, '\0');
		return 0;
	}

	strcpy(s, str);
	return 1;
}

void copy(char*a, char s)
{
	static int i = 0;
	*(a + i) = s;
	i++;
	if (s == '\0')
		i = 0;
}

void fputs1(char*str, FILE*fp)
{
	while (*str != '\0')
	{
		fputc(*str, fp);
	}
	fputc('\n', fp);
}