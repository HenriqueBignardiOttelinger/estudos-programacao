#include <stdio.h>
int main(){
    int c, count=0;
    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\n' || c == '\t'){
            count++;
            if(count == 1){
                printf("\n");
            }
        }
        else{
            count = 0;
            printf("%c", c);
        }
    }
    printf("\n");
    return 0;
}