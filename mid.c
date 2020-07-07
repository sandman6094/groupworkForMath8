#include <stdio.h>
#include <math.h>

int main(){
    double a = 0;
    double b = 10;
    int n = 0;
    double xi_1 = 0.0;
    double xi = 0.0;
    double overline_xi = 0.0;
    double delta_x = 0.0;
    double fsum = 0.0;
    double sum = 0.0;
    const double e = 2.71828182846;

    printf("Please enter n.\n");
    scanf("%d", &n);

    delta_x = (b-a)/n;

    for(int i=0; i < n; i++){
        xi_1 = a + i * delta_x;
        xi = a + (i+1) * delta_x;
        overline_xi = 0.5 * (xi_1 + xi);
        fsum += pow(e, -1 * pow(overline_xi, 2));
    }
   
    sum = delta_x * fsum;
    printf("fx 的和 = %f, delta X = %f, 最终结果 = %f \n", fsum, delta_x, sum);

    return 0;
}
