#include <stdio.h>

int main()
{
    double a, b, ans;
    printf("Input A:");
    scanf("%lf", &a);
    printf("Input B:");
    scanf("%lf", &b);
    ans = a+b;
    printf("%.3lf+%.3lf=%.3lf", a, b, ans);
    return 0;
}