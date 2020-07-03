#include <stdio.h>
#include <math.h>

int main(){
    double a = -1.0;
    double b = 1.0;
    int n = 0;
    double delta_x = 0.0;
    double xi = 0.0;
    double sum = 0.0;

    
    printf("Please enter n.\n");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++){
        xi = a + i * delta_x;

        if (i == 0){
            sum += sin(pow(xi, 2));
        }
        else if (i == 20){
            sum += sin(pow(xi, 2));
        }
        else {
            sum += 2 * sin(pow(xi, 2));
        }
    }

    printf("%f\n", sum);

    return 0;
}
