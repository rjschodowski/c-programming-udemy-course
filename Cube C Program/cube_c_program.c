/* Program To Make a Number Cubed 
   Author :- R.J.
   Copyright :- 2021 
 #include<stdio.h>
 #include<conio.h>
 void main()
{
int cube, value;
clrscr();
printf("Enter a value!");
scanf("%d", &value);
cube=value*value*value;
printf("\%d cubed is %d", value, cube);
getch();
}