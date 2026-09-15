#include <stdio.h>
#define tab 8
int main(){
    int c;
    int contSpaces=0;
    int cont=0;
    while((c = getchar()) != EOF){
        if(c == ' '){
            contSpaces++;
            cont++;
            if(cont%tab == 0){
                printf("\t");
                contSpaces=0;
            }
        }
        else{ 
            while (contSpaces > 0) {
                printf(" ");
                contSpaces--;
            }
            if(c == '\n'){
                cont=0;
                printf("\n");
            }
            else if(c == '\t'){
                cont = cont + (tab - cont%tab);
                printf("\t");
            }
                else{
                    cont++;
                    printf("%c", c);
                }
        }   
    }
    while (contSpaces > 0) {
        printf(" ");
        contSpaces--;
    }
  return 0;
}