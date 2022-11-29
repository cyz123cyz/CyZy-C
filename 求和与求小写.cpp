#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a, b;
	printf("输入大写字母\n");
	scanf("%c\n", &a);
	b = a + 32;
	printf("%c的小写字母是%c\n", a, b);//求大写字母的小写字母

	double c, d, sum;
	printf("输入两个数");
	scanf("%lf%lf", &c, &d);
	sum = c + d;
	printf("%lf与%lf的和为%lf", c, d, sum);//求两数之和
	system("pause");
	return 0;
}
