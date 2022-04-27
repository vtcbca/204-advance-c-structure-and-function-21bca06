//WAP to create UDF odd-even which check odd or even
#include<stdio.h>
#include<conio.h>
void oddeven();// function declartion
void main()
{
	clrscr();
	oddeven();
	getch();
}
void oddeven()//Function definatin
{
	int a;
	printf("Enter a value:");
	scanf("%d",&a);
	if(a%2==0)
		printf("%d is a even number",a);
	else
		printf("%d is odd number",a);
}