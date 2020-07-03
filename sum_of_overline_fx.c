#include <stdio.h>
#include <math.h>

int main(){
    double a = -1;
    double b = 1;
    int n = 0;
    double xi_1 = 0.0;
    double xi = 0.0;
    double overline_xi = 0.0;
    double delta_x = 0.0;
    double sum = 0.0;

    printf("Please enter n.\n");
    scanf("%d", &n);

    delta_x = (b-a)/n;

    for(int i=0; i < n; i++){
        xi_1 = a + i * delta_x;
        xi = a + (i+1) * delta_x;
        overline_xi = 0.5 * (xi_1 + xi);
        sum += sin(pow(overline_xi, 2));
    }
    
    printf("%f\n",sum);

    return 0;
}
