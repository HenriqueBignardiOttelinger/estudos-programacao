#define MAX_LINHA 1000
#define MIN_LINHA 80
#include <stdio.h>
int leLinha(char s[MAX_LINHA], int lim)
    {
    int c, i;
    for(i=0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++){
        s[i] = c;
        if(c == '\n'){
            s[i] = c;
            i++;
        }
    }
    return(i);
}
int main(){
    int tam=0;
    char linha[MAX_LINHA];
    while((tam = leLinha(linha, MAX_LINHA)) > 0){
        if(tam > MIN_LINHA){
            printf("%s\n", linha);
        }
    }
    return 0;
}

