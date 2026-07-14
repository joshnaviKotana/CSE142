
#include <stdio.h>

int main()
{
    // Write C code here
    int f = 0, x, y;
    printf("Enter your values to perform division operation\n");
    scanf("%d %d", &x, &y);
    if ((x < 0 && y < 0) || (x > 0 && y > 0))
        f = 0;
    else
        f = 1;
    if (x < 0)
        x = -x;
    if (y < 0)
        y = -y;
    float l = 0, r = x, m;
    while (l <= r)
    {
        m = (l + r) / 2;
        if (y * m == x)
        {
            printf("%f\n", m);
            return 0;
        }
        else if (y * m > x)
            r = m - 0.0000001;
        else
            l = m + 0.0000001;
    }
    printf("%f\n", m);

    return 0;
}