/*Write a c program using switch case to perform arithmetic operations*/
#include<stdio.h>
int main()
{
	float a,b,result;
	printf("Enter the numbers:");
	scanf("%f%f",&a,&b);
	char ch;
	getchar();
	printf("Enter the choice:(+-*/)=");
	scanf("%c",&ch);
	switch(ch)
	{
		case '+':
		result=a+b;
		break;
			case '-':
			result=a-b;
			break;
				case '*':
				result=a*b;
				break;
					case '/':
					result=a/b;
					break;
					default:
						printf("==INVALID CASE==");
					}
			printf("The result will be=%.2f",result);
	
}
