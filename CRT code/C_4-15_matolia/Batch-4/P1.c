#include<stdio.h>
int main()
{
	int a[5]={10, 20, 30, 40, 50};
	printf("%u\n", a);
	printf("%u\n", &a);
	
	printf("%u\n", a + 1);
	printf("%u\n", a + 5);
	printf("%u\n", *a);
	
	printf("%u\n", *a + 10);
	printf("%u\n", &a + 1);
	printf("%u\n", &a + 2);
	printf("%u\n", &a + 3);
	return 0;
}
