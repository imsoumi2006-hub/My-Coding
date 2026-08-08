//WAP to accept number and print the even numbers from 1 to n 
#include<stdio.h>
int main()
{
	int num,i;
	printf("Enter the number:");
	scanf("%d",&num);
	if(num%2==0)//(n%2==0)
	for(i=2;i<=num;i=i+2)
{
	printf("%d",i);
}
}
