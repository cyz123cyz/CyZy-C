#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a, b;
	printf("�����д��ĸ\n");
	scanf("%c\n", &a);
	b = a + 32;
	printf("%c��Сд��ĸ��%c\n", a, b);//���д��ĸ��Сд��ĸ

	double c, d, sum;
	printf("����������");
	scanf("%lf%lf", &c, &d);
	sum = c + d;
	printf("%lf��%lf�ĺ�Ϊ%lf", c, d, sum);//������֮��
	system("pause");
	return 0;
}
