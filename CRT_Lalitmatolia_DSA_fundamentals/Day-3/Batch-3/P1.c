#include<stdio.h>
int main()
{
	int a[5]={10, 20, 30, 40, 50};
	int i;
	for(i=0; i<5; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
	for(i=0; i<5; i++)
	{
		printf("%d\t", i[a]);
	}
	printf("\n");
	for(i=0; i<5; i++)
	{
		printf("%d\t", *(a+i));
	}
	printf("\n");
	for(i=0; i<5; i++)
	{
		printf("%d\t", *(i+a));
	}
}
