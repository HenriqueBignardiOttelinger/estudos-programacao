#include <stdio.h>
int main (){
    int c, cont=0;
    while((c = getchar()) != EOF){
        if(c == ' '){
            cont++;
            if(cont == 1){
                printf(" ");
            }
        }
        else{
            cont = 0;
            printf("%c", c);
        }
    }
    return 0;
}
