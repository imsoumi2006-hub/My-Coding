//WAP to accept number and print the even numbers within a range
#include<stdio.h>
int main()
{
	int L,H,i,t;
	printf("Enter the lower range:");
	scanf("%d",&L);
	printf("Enter the higher range:");
	scanf("%d",&H);
	if(L>H)
	{
	t=L;L=H;H=L;
}
	for((L%2==0)?L:L+1;i<=H;i=i+2)
	{
	
	printf("%d",i);
}
}
