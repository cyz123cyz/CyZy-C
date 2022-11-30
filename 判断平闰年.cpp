#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	scanf("%d", &a);
	if
	((a % 100 != 0 && a % 4 == 0) || a % 400 == 0)
		printf("%d是闰年", a); 
	else
		printf("%d是平年", a);
	system("pause");
	return 0;
}