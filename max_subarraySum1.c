#include <stdio.h>

int main() {
int n,sum=0,maxSum=0;
printf("Enter size of an array:");
scanf("%d",&n);
int arr[n];
printf("Enter the elements:");
for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
for(int i=0;i<n;i++)
{
for(int j=i;j<n;j++)
{
  sum+=arr[j];
  if(sum>maxSum) maxSum=sum;
}
sum=0;
}
printf("%d\n",maxSum);
return 0;
}
