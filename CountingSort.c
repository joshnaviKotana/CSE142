
#include <stdio.h>
int main()
{
    int n;
    printf("Enter your size of the arrayn\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter your elements\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int max = arr[0], min = arr[0];
    for (int i = 0; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
        else if (arr[i] < min)
            min = arr[i];
    int b[n], range = max - min + 1, count[range];
    for (int i = 0; i < range; i++)
        count[i] = 0;
    for (int i = 0; i < n; i++)
        count[arr[i] - min]++;
    for (int i = 1; i < range; i++)
        count[i] += count[i - 1];
    for (int i = n - 1; i >= 0; i--)
        b[--count[arr[i] - min]] = arr[i];
    for (int i = 0; i < n; i++)
        arr[i] = b[i];
    for (int i = 0; i < n; i++)
        printf("%d   ", arr[i]);
    return 0;
}