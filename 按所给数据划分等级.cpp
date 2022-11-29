#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	double fenshu;
	scanf("%lf",&fenshu);
	switch ((int)(fenshu / 10))
	{
	case 10:
	case 9:printf("A\n"); break;
	case 8:printf("B\n"); break;
	case 7:printf("C\n"); break;
	case 6:printf("D\n"); break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:printf("E\n"); break;
	default:printf("´íÎó"); break;

	}
	system("pause");
	return 0;
}