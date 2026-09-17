#include <stdio.h>
#define MAX 100
int htoi(char s[MAX]){
    int i=0, n=0;
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
        i = 2;
    }
    while((s[i] >='0' && s[i] <= '9') || (s[i] >= 'A' && s[i] <= 'F') || (s[i] >= 'a' && s[i] <= 'f')){

        if(s[i] >= 'A' && s[i] <= 'F'){
            n = 16 * n + (s[i] - 'A' + 10);
        }
        else{
             if(s[i] >= 'a' && s[i] <= 'f'){
                n = 16 * n + (s[i] - 'a' + 10);
            }
        
            else{
                n = 16 * n + s[i] - '0';
            }
        }
        i++;   
    }
    return n;
}



int main(){
    int c, i=0, result;
    char s[MAX];
    while((c = getchar()) != EOF){
        s[i] = c; 
        i++;
    }
    s[i] = '\0';
    result = htoi(s);
    printf("%d\n", result);
    return 0;
}