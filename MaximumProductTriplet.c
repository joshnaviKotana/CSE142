#include <stdio.h>
#include <limits.h>
int main()
{
    int min1 = INT_MAX, min2 = INT_MAX;
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    int n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2)
        {
            max3 = max2;
            max2 = arr[i];
        }
        else if (arr[i] > max3)
            max3 = arr[i];
        if (arr[i] < min1)
        {
            min2 = min1;
            min1 = arr[i];
        }
        else if (arr[i] < min2)
            min2 = arr[i];
    }
    long long product1 = 1LL * max1 * max2 * max3;
    long long product2 = 1LL * min1 * min2 * max1;
    long long maxProduct = (product1 > product2) ? product1 : product2;
    printf("%lld\n", maxProduct);

    return 0;
}