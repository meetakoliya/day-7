#include<stdio.h>
int main()
{
	int a = 500;
	int b = 1000;
	
	
	a = a + b;//a=1500
	b = a - b;//b=500
	a = a - b;//a=1000
	printf("A:%d\n",a);
	printf("B:%d\n",b);
	return 0;
}
