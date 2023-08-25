#include<stdio.h>
#include<conio.h>

main()


{
    float unit,sum,add;
    clrscr();
    printf("Enter Unit : ");
    scanf("%f",&unit);

    if(unit<=50)
    {
       sum = unit*0.5;
    }
    else if(unit<=150)
    {
       sum = (unit-50)*0.75+25;
    }
    else if(unit<=250)
    {
       sum = (unit-150)*1.25+100;
    }
    else
    {
       sum = (unit-250)*1.5+225;
    }

    add = sum*0.2;
    sum = sum + add;
    printf("Final Bill = %.2f",sum);
    getch();




}

