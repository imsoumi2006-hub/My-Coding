//WAP to count total numbers//
#include<stdio.h>
int main()
{
	int num,i,c=0;
	printf("Enter the number:"); 
	scanf("%d",&num);
	for(i=num;i!=0;c++,i=i/10);
	printf("%d",c);
}

