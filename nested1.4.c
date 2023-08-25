#include<stdio.h>
#include<conio.h>
main(){
	
	int a,b,c,d;
//	clrscr();
	
	printf("Enter value of A = ");
	scanf("%d",&a);
	printf("Enter value of B = ");
	scanf("%d",&b);
	printf("Enter value of C = ");
	scanf("%d",&c);
	printf("Enter value of D = ");
	scanf("%d",&d);
	
	if(a>b){
		if(a>c){
			if(a>d){
				printf("A is big");
			}
			else{
				printf("D is big");
			}
		}
		else{
			if(c>d){
				printf("C is big");
			}
			else{
				printf("D is big");
			}
		}
	}
	else{
		if(b>c){
			if(c>d){
				printf("C is big");
			}
			else{
				printf("D is big");
			}
		}
		else{
			if(c>d){
				printf("C is big");
			}
			else{
				printf("D is big");
			}
		}
	}
	getch();
}
