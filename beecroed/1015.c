#include <stdio.h>
#include <math.h>

int main(void)

{
    double x1, x2, y1, y2, dis;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    dis=pow((x2-x1), 2)+pow((y2-y1), 2);
    dis=sqrt(dis);

    printf("%.4lf\n", dis);

    return 0;
}
