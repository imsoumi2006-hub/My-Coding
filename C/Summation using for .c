//WAP to accept number and print the factorial 
#include<stdio.h>
int main()
{
	int num,i,fact=1;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=fact;i<=num;fact=fact*i,i++);
	printf("%d",fact);
	
}
