#include <stdio.h>
#include <math.h>

int main (){
    double a, b, c, r1, r2, delta;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    delta = pow(b, 2) - 4 * a * c;
    
    if(a==0)
        printf("Impossivel calcular\n");
    
    else if(delta>0){
        
        r1=(-b+sqrt(pow(b, 2) - 4 * a * c))/(2*a);
        r2=(-b-sqrt(pow(b, 2) - 4 * a * c))/(2*a);
        
        printf("R1 = %.5lf\n", r1);
        printf("R2 = %.5lf\n", r2);
    }
    else
        printf("Impossivel calcular\n");
    return 0;
}