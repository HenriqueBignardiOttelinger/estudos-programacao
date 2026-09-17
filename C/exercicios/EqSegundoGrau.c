#include <stdio.h>
#include <math.h>

double Delta(double a, double b, double c){
    double result;
    if(a != 0 && c != 0){
        result = b*b - (4*a*c);
        return result;
    }
    else return 0;
}

int main(){
    double a, b, c;
    double delta=0;
    double x1=0, x2=0, x=0;
    scanf("%lf%lf%lf", &a, &b, &c);
    delta = Delta(a, b, c);
    if(a == 0){
        printf("NEESG");
    }
    else{ 
        if(delta > 0){
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);
            printf("O resultado do x1 é %.2lf\n", x1);
            printf("O resultado do x2 é %.2lf\n", x2);
        }
        else{ 
            if( delta == 0){
                x = -b/(2*a);
                printf("Como o delta é nulo, teremos apenas uma resposta, que é %.2lf\n", x);
            }
            else{
                printf("NRR\n");
            }
        }
    }
    return 0;
}