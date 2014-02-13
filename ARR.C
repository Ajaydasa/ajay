#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
void main()
{
int  *a,n,i,max,k,b[100];
max=0;
clrscr();
printf("enter the size of the array");
scanf("%d",&n);
a =(int *)malloc(n*sizeof(int));
printf("enter the values into the array");

for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=0;i<100;i++)
b[i] = -1;

for(i=0;i<n;i++)
{
b[a[i]]++;
printf("%d \n",b[i]);
}

for(i=0;i<n;i++)
{
if(b[a[i]] >b[max])
max =i;
}

printf("the ele that occured maximum number of times is %d",a[max]);
getch();
}







