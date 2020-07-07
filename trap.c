#include <stdio.h>
#include <math.h>

int main(){
    double a = -1.0;
    double b = 1.0;
    int n = 0;
    double delta_x = 0.0;
    double xi = 0.0;
    double fsum = 0.0;
    double sum = 0.0;
    const double e = 2.71828182846;

    printf("Please enter n.\n");
    scanf("%d", &n);

    delta_x = (b - a) / n;

    for (int i = 0; i <= n; i++){
        xi = a + i * delta_x;

        if (i == 0){
            fsum += pow(e, -1 * pow(xi, 2));
        }
        else if (i == n){
            fsum += pow(e, -1 * pow(xi, 2));
        }
        else {
            fsum += 2 * pow(e, -1 * pow(xi, 2));
        }
    }

    sum = delta_x * 0.5 * fsum;

    printf("%f\n", sum);

    return 0;
}
