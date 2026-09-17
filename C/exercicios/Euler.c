#include <stdio.h>
double fatorial(int a){
    if(a == 0 || a == 1){
        return 1;
    }
    else{
        return a * fatorial(a-1);
    }
}
double somatorio(int n){
    if(n == 0){
        return 1;
    }
    else{
        return somatorio(n-1) + 1/fatorial(n);
    }
}
int main(){
    int n;
    int i=0;
    double e=0;
    scanf("%d", &n);
    e = somatorio(n-1);
    printf("%.15lf", e);
    return 0;
}