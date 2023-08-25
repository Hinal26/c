#include<stdio.h>
int main()
{
	int number1,number2,number3,result;
	printf("enter the number 1\n");
	scanf("%d",&number1);
	printf("enter the number 2\n");
	scanf("%d",&number2);
	printf("enter the number 3\n");
	scanf("%d",&number3);

	result= number1*number2*number3;
	printf("%d * %d * %d = %d",number1,number2,number3,result);
	getch();


return 0;

}