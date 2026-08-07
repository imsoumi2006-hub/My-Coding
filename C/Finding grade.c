/*write a program to accept total distance travelled in kilometers , calculate the cost based on the following slabs*/
/*upto 10 km= 120/-
next 15 km= Rs 18/km
next 20 km= Rs 16.5/km
next 25 km= Rs 13/km
beyond=Rs 11/km*/
#include<stdio.h>
int main()
{
	float km, cost;
	printf("Enter the distance:");
	scanf("%f",&km);
	 if (km<=10)
	{cost=120;}
	else if(km<=25)
	{cost=120+(km-10)*18;}
	else if(km<=45)
	{cost=120+270+(km-25)*16.5;}
	else if(km<=70)
	{cost=120+270+330+(km-45)*13;}
	else
	cost=120+270+330+325+(km-70)*11;
	printf("The cost will be=%.2f",cost);
}
