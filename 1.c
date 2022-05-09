#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
char name[10];
int usn;
int marks1,marks2,marks3;
};
main()
{
int n,avg[10],i,j;
struct student a[10];
clrscr();
printf("enter the number of student:\n");
scanf("%d",&n);
printf("enter the details of student\n");
for(i=0;i<n;i++)
{
printf("name=");
scanf("%s",a[i].name);
printf("usn=");
scanf("%d",&a[i].usn);
printf("marks1=");
scanf("%d",&a[i].marks1);
printf("marks2=");
scanf("%d",&a[i].marks2);
printf("marks3=");
scanf("%d",&a[i].marks3);
avg[i]=(a[i].marks1+a[i].marks2+a[i].marks3)/3;
}
printf("the details of students is:\n");
for(i=0;i<n;i++)
{
printf("name\t usn\t marks1\t marks2\t marks3\t average\n");
printf("%s\t %d\t %d\t %d\t %d\t %d\n",a[i].name,a[i].usn,a[i].marks1,a[i].marks2,a[i].marks3,avg[i]);
getch();
}
return;
}
