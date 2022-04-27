/*Write a menu driven program to following task using UDF and its different
category
1. prime number
2. palindrome number
3. reverse number
4. armstrong number
5. exit
date:04-04-2022*/
#include<stdio.h>
#include<conio.h>
void palinum();//function declaration without argument without returntype
void primenum(int a);//function declaration with argument without returntype
int reversenum();//function declaration without argument with returntype
int armnum(int a);//fumction declaration with argument with returntype
int menu();//function declaration with argument without returntype
void main()
{
	char yn;
	int c,a;
	clrscr();
	do
	{
		c=menu();//function call
		switch(c)
		{
			case 1:
				palinum();
				break;
			case 2:
				printf("\nEnter a value for a:");
				scanf("%d",&a);
				primenum(a);//function call
				break;
			case 3:
				c=reversenum();//function call
				printf("\nReverse number is %d",c);
				break;
			case 4:
				printf("\nEnter value for a:");
				scanf("%d",&a);
				c=armnum(a);//function call
				break;
			case 5:
				exit(0);
			default:
				printf("\nEnter valid choice.please enter choice from 1 to 5 number:");
				break;
		}
		printf("\n\n\tDo you went to continue ?(yes=Y/y,no=N/n):");
		flushall();
		scanf("%c",&yn);
		}while(yn=='y'||'Y');
	getch();
}
int menu()//function declaration
{
	int choice;
	printf("\nMENU LIST");
	printf("\n_____________________");
	printf("\n1. Palindrome number\n2. Prime number\n3. Reverse number\n4. Armstrong number\n5. Exit");
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	return choice;
}
void palinum()//function declaration
{
	int a,c,sum=0,b;
	printf("\nEnter value for a:");
	scanf("%d",&a);
	c=a;
	while(a>0)
	{
		b=a%10;
		sum=(sum*10)+b;
		a=a/10;
	}
	if(c==1)
		printf("\nEnter number is not palindrome number");
	else
		printf("\nEnter number is palindrome number");
}
void primenum(int a)//function declaration
{
	int i,c=0;
	//printf("\nEnter value for no:");
	//scanf("%d",&no);
	for(i=3;i<a;i++)
	{
		if(a%i==0)
		{
			c=1;
			break;
		}
	}
	if(c==1)
		printf("\nNumber is not prime number");
	else
		printf("\nNumber is prime number");
}
int reversenum()//function declaraion
{
	int a,b,c=0;
	printf("\nEnter value for a:");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		c=c*10+b;
		a=a/10;
	}
	return c;
}
int armnum(int a)//function declaration
{
	int b,n,c=0;
	n=a;
	while(a>0)
	{
		b=a%10;
		c=c+(b*b*b);
		a=a/10;
	}
	if(n==c)
		printf("\nNumber is armstrong");
	else
		printf("\nNumber is not armstrong");
	return c;
}




