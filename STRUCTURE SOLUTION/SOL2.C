/*WAP to carate marksheet (sid,sname,m1,m2,m3,m4,m5,total ,per).
print 5 marksheet using the concept of array of student.
date:22-04-2022*/
#include<stdio.h>
#include<conio.h>
struct marksheet
{
	int sid[5],m1[5],m2[5],m3[5],m4[5],m5[5],total[5],per[5];
	char sname[5][20];
}x;
void main()
{
	int i;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\n Enter a value sid:");
		flushall();
		scanf("%d",&x.sid[i]);
		printf("\n Enter a value sname:");
		flushall();
		scanf("%s",&x.sname[i]);
		printf("\n Enter a value m1:");
		flushall();
		scanf("%d",&x.m1[i]);
		printf("\n Enter a value m2:");
		flushall();
		scanf("%d",&x.m2[i]);
		printf("\n Enter a value m3:");
		flushall();
		scanf("%d",&x.m3[i]);
		printf("\n Enter a value m4:");
		flushall();
		scanf("%d",&x.m4[i]);
		printf("\n Enter a value m5:");
		flushall();
		scanf("%d",&x.m5[i]);
		x.total[i]=x.m1[i]+x.m2[i]+x.m3[i]+x.m4[i]+x.m5[i];
		x.per[i]=x.total[i]/5;
	}
	clrscr();
	printf("\n sid \t sname \t\t m1 \t m2 \t m3 \t m4 \t m5 \t total \t per");
	printf("\n_____________________________________________________________________________\n");
	for(i=0;i<5;i++)
	{
		printf("\n%d",x.sid[i]);
		printf("\t%s",x.sname[i]);
		printf("\t\t%d",x.m1[i]);
		printf("\t%d",x.m2[i]);
		printf("\t%d",x.m3[i]);
		printf("\t%d",x.m4[i]);
		printf("\t%d",x.m5[i]);
		printf("\t%d",x.total[i]);
		printf("\t%d",x.per[i]);
	}
	getch();
}