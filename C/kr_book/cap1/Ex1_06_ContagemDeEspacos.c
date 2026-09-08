#include <stdio.h>
int main(){
    int cont=0;
    int c;
    while((c = getchar()) != EOF){
        if(c == ' '){
            cont++;
        }
        if(c == '\n'){
            cont++;
        }
        if(c == '\t'){
            cont++;
        }
    }
    printf("%d\n", cont);
    return 0;
}