#include<stdio.h>
#include<math.h>
int main()
{
int i,j,n;
printf("Enter The Value Of N");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<i+1;j++)
printf("%d",i+1);
printf(" \n");
}
return 0;
}
