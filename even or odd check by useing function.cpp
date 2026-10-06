#include<stdio.h>
int even_odd(int n);
int main()
{
	int n;
	printf("Enter a posative number:");
	scanf("%d",&n);
	if(even_odd(n))
	{
		printf("The number %d  is Even",n);
	}
	else
	{
		printf("The number %d is Odd",n);
	}
	return 0;
}
int even_odd(int n)
{
	if(n%2==0)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
