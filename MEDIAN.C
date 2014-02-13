#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>

void main()
{
int *a,*b,*c,i,j,k,p,n1,n2,m;
clrscr();
j=0;
k=0;
printf("\n enter sizes of arrays");
scanf("%d %d",&n1,&n2);
a=(int *)malloc(n1*sizeof(int));
b=(int *)malloc(n2*sizeof(int));
c=(int *)malloc((n1+n2)*sizeof(int));
printf("\n enter the elements of 1st array");
for(i=0;i<n1;i++)
scanf("%d",&a[i]);
printf("\n enter 2nd array elements");
for(i=0;i<n2;i++)
scanf("%d",&b[i]);
while(j<n1 && k<n2)
{
if(a[j]<=b[k])
{
c[i]=a[j];
j++;
}
else
{
c[i]=b[k];
k++;
}
i++;
}
if(j != n1-1)
{
for(m =j;m< n1;m++)
c[i] = b[m];
}
if(k != n2-1)
{
for(m =k;m< n2;m++)
c[i] = b[m];
}

printf("\n median element");
if((n1+n2)%2==0)
{
p=(n1+n2)/2;
printf("%f",(float)((c[p+1]+c[p])/2));
}
else
{
p=(n1+n2)/2;
printf("%d",c[p]);
}
getch();
}