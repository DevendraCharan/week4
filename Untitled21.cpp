#include<stdio.h>
#include<math.h>
int main()
{
int i,j,n;
printf("Enter The Value Of N \n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<i+1;j++)
printf("%d",i+3);
printf(" \n");
}
for(i=0;i<n;i++)
{
for(j=0;j<n-i;j++)
printf("%d",i+3);
printf(" \n");
}
return 0;
}
