#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "qingxi1.h"
#include "riqiguiyi.h" 
#include "bairifengliguiyi.h"
#include "wenduchuli.h"
#include "tiqnqileixingguiyi.h"
#include "chengshimingguiyi.h"
FILE *fp1 = fopen("F:\\bigdata\\Weather.txt", "r");
FILE *fp2 = fopen("F:\\bigdata\\ceshishuchu6.txt", "a+");
char ch = fgetc(fp1);


void main()
{
	int zuobiao = 1;
	int weizhi = 0;
	int jude1 = 0;
	int jude2 = 0;
	int yingyong = 0;
	int times = 0;
	float riqi = 0;
	float bairifengli = 0;
	float yewanfengli = 0;
	float bairiqiwen = 0;
	float yewanwendu = 0;
	float bairitianqi = 0;
	float yewantianqi = 0;
	float chengshiming = 0;
	char str1[50];
	char str2[50];
	char str3[50];
	char str4[50];
	char str5[50];
	char str6[50];
	char str7[50];
	char str8[50];
	char app1chengshi[50];
	char app2riqi[50];

	char s1 = '!';
	char s2 = '@';
	char s3 = '#';
	char s4 = '$';
	char s5 = '%';
	char s6 = '^';
	char s7 = '&';
	char s8 = '*';
	int panduan = 1;
	int yingyong = 0;
	printf("please input the information you ask:\n");
	gets_s(app1chengshi);
	gets_s(app2riqi);
	while (1)
	{
		panduan = qingxi(fp1, str1, s1,&ch);
		jude1 = 0;
		if (strstr(str1, app1chengshi) != NULL)
			jude1 = 1;
		if (panduan == 1)
		{
			fputc('[', fp2);
			panduan = qingxi(fp1, str2, s2,&ch);
			if (jude1 == 1 && strstr(str2, app2riqi) != NULL)
			{
				weizhi = zuobiao;
				printf("%d\t", zuobiao);
				jude1 = 0;
			}

			//puts(str);
			//getchar();
			chengshimingguiyi(&chengshiming, str1);
			fprintf(fp2, "%.2f", chengshiming);
			chengshiming = 0;
			fputc(',', fp2);
			riqiguiyi(&riqi, str2);
			fprintf(fp2, "%.2f", riqi);
			riqi = 0;
			panduan = qingxi(fp1, str3, s3, &ch);
			fputc(',', fp2);
			tianqileixingguiyi(&bairitianqi, str3);
			fprintf(fp2, "%.2f", bairitianqi);
			bairitianqi = 0;
			panduan = qingxi(fp1, str4, s4, &ch);
			fputc(',', fp2);
			tianqileixingguiyi(&yewantianqi, str4);
			fprintf(fp2, "%.2f", yewantianqi);
			yewantianqi = 0;
			panduan = qingxi(fp1, str5, s5, &ch);
			fputc(',', fp2);
			bairiwenduchuli(&bairiqiwen, str5);
			fprintf(fp2, "%.2f", bairiqiwen);
			bairiqiwen = 0;
			panduan = qingxi(fp1, str6, s6, &ch);
			fputc(',', fp2);
			yewanwenduchuli(&yewanwendu, str6);
			fprintf(fp2, "%.2f", yewanwendu);
			yewanwendu = 0;
			panduan = qingxi(fp1, str7, s7, &ch);
			fputc(',', fp2);
			barifengliguiyi(&bairifengli, str7);
			fprintf(fp2, "%.2f", bairifengli);
			bairifengli = 0;
			panduan = qingxi(fp1, str8, s8, &ch);
			yewanfengliguiyi(&yewanfengli, str8);
			fputc(',', fp2);
			fprintf(fp2, "%.2f", yewanfengli);
			yewanfengli = 0;








			fputc(']', fp2);
			fputc('\n', fp2);
			times++;
			zuobiao++;
	
			if (times == 5000)
			{
				printf("*");
				times = 0;
			}
		}
		//if (*str = '\0')
		//break;
		//fputs(str, fp2);
		//puts(str);
		if (panduan == 0)
			break;
	}
	//puts(str);
	//fputs(str, fp2);
	//getchar();
	fclose(fp1);
	fclose(fp2);
	printf("do you want to use? 0:no 1:yes:\n");
	scanf("%d", &yingyong);
	if (yingyong == 1)
	{
		FILE *fp = fopen("F:\\bigdata\\result.txt", "r");
		char ch1 = fgetc(fp);
		int q = 0;
		int save = 0;
		int xiabiao[200000] = { 0 };
		int j = 0;
		fscanf(fp, "%d", &q);
		for (int i = 1; q != 100; i++)
		{
			if (i == weizhi)
			{
				break;
			}
			fscanf(fp, "%d", &q);
		}
		save = q;
		for (int i = 1; q != 100; i++)
		{
			if (q == save)
			{
				xiabiao[j] = i;
				j++;
			}
			fscanf(fp, "%d", &q);
		}
	}



	//system("pause");
}
