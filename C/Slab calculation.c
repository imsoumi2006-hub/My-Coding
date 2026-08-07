/*write a program to accept total distance travelled in kilometers , calculate the cost based on the following slabs*/
/*upto 50 units= Rs 2/unit;
next 100 units= Rs 3/unit
next 100 units= Rs 5/unit
above 250 units= Rs 8/unit*/
#include<stdio.h>
int main()
{
	int unit,cost;
	printf("Enter the units:");
	scanf("%d",&unit);
	if(unit<=50)
	{cost=unit*2;
	}
	else if(unit<=150)
	{cost=100+(unit-50)*3;
	}
	else if(unit<=250)
	{
		cost=100+300+(unit-150)*5;
	}
	else
	{cost=100+300+500+(unit-250)*8;
	}
	printf("Your fucking bill will be=%d",cost);
}
