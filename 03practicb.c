#include <stdio.h>
int main()
{

    int radiu = 9;
    float pi = 3.14;
    float circle = pi * 9 * 9;
    printf("the area of circle is %f\n", circle);
    int r;

    float p;
    printf("what is the value of r %d\n");
    scanf("%d", r);
    printf("whis is the value of p %f\n ");
    scanf("%f", p);
    float arc = r * p;
    printf("area of circle is %f", r * p);
    return 0;
}
