#include<stdio.h>
#include<math.h>

int
main()
{
    double input;
    printf("Vpisi polmer kroga: ");
    if (scanf("%lf", &input) > 0)
        printf("Ploscina kroga je: %.16lf\n", M_PI * input * input);
    else
        return 1;
    return 0;
}