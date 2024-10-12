#include<stdio.h>
int main()
{
	int i , j ;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(i==1||i==9||j==1||j==9||(i%2!=0&&j%2!=0))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
}
