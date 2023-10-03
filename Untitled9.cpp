#include<stdio.h>
#include<math.h>
int main()
{
int i,j,s,n;
printf("Enter The Value Of N \n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(s=0;s<i+1;s++)
printf(" ");
for(j=0;j<n+1;j++)
printf("* ");
printf(" \n");
}
return 0;
}
