#define MAX_LINHA 1000
#include <stdio.h>
int leLinha(char s[MAX_LINHA], int lim){
    int c, i;
    for(i=0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++){
        s[i] = c;
    }
    s[i] = '\0';
    return(i);
}
void inverteLinha(char s[], int tam){
    int i = 0, j = tam - 1;
    char temp;
    while (i < j) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}

int main(){
    int tam;
    char linha[MAX_LINHA];
    while((tam = leLinha(linha, MAX_LINHA)) > 0){
        inverteLinha(linha, tam);
        printf("%s", linha); 
        printf("\n");
    }
    return 0;
}
