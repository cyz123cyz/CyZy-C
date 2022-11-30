#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
 {
	char a;
	scanf("%c",&a);
	a = (a >= 'A' && a <= 'Z') ? (a + 32) : a;
	printf("%c\n",a);
	system("pause");
	return 0;
}