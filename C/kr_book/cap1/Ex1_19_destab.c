#include <stdio.h>

int n=8;
int cont=0;

void destab(void){
    extern int n;
    extern int cont;
    int i=0, j=0;
    int num=0;
    num = cont%n;
    if((num) != 0)
        for(i=0; i < (n - num); i++){
            printf(" ");
            cont++;
        }
        
    else
        for(j=0; j < n; j++){
            printf(" ");
            cont++;
        }
    return;
}
int main(){
    int c;
    extern int cont;
    while((c = getchar()) != EOF){
        if(c == '\n'){
            cont=0;
            printf("\n");
        }
        else{
            if(c == '\t'){
                destab();
            }
            else 
            cont++;
            printf("%c", c);
        }
    }
    return 0;
}