#include<stdio.h>
int main()
{
	int a = 7;
	int b = 10;
	int temp;
	
	temp = a;
	a    = b;
	b    = temp;
	printf("A:%d\n",a);
	printf("B:%d\n",b);
	return 0;
}
