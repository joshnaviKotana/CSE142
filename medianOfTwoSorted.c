/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
void main()
{
    int n1,n2;
    printf("Enter the number of elements in both the arrays:\n");
    scanf("%d %d",&n1,&n2);
    int arr1[n1],arr2[n2];
    printf("Enter the first array elements\n");
    for(int i=0;i<n1;i++)
        scanf("%d",&arr1[i]);
    printf("Enter the second array elements\n");
    for(int i=0;i<n2;i++)
        scanf("%d",&arr2[i]);
    int res[n1+n2],i=0,j=0,k=0;
    for(k=0;k<n1+n2;k++)
    {
        if(j==n2)
        {
            res[k]=arr1[i];
            i++;
        }
        else if(i==n1)
        {
            res[k]=arr2[j];
            j++;
        }
        else if(arr1[i]>arr2[j])
        {
            res[k]=arr2[j];
            j++;
        }
        else if(arr1[i]==arr2[j])
        {
            res[k]=arr1[i];
            i++;
        }
        else if(arr1[i]<arr2[j])
        {
            res[k]=arr1[i];
            i++;
        }
    }
    float f;
    if((n1+n2)%2==0) 
         f=(res[(n1+n2)/2]+res[((n1+n2)/2)-1])/2;
    else 
        f=res[((n1+n2)/2)];
    printf("%f",f);
    
}
