#include <stdio.h>
int minusculo(int c){
    if(c >= 'A' && c <= 'Z'){
        c = c + 32;
    }
    return c;
}
int main(){
    int c;
    while((c = getchar()) != EOF){
        c = minusculo(c);
        printf("%c", c);
    }
    return 0;
}