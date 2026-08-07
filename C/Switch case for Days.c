/*if-else find the avarage and grade printing 
 	avg>90--A
 	avg>70--B
 	avg>50--C
 	avg>30--D
 	otherwise--F*/
#include<stdio.h>
int main()
{
	int s1,s2,s3,avg;
	char grd;
	printf("\nEnter Three numbers:");
	scanf("%d%d%d",&s1,&s2,&s3);
	printf("The average is=%d",(s1+s2+s3)/3);	
	if(avg>90)
	{
	grd='A';
	printf("The grade will be=%c",grd);
}
	else if(avg>70)
	{
	grd='B';
		printf("The grade will be=%c",grd);
	}
	else if(avg>50)
	{
	grd='C';
		printf("The grade will be=%c",grd);
	}
	else if (avg>30)
	{
	grd='D';
		printf("The grade will be=%c",grd);
	}
	else
	{
	grd='F';
		printf("The grade will be=%c",grd);

}
}
	
