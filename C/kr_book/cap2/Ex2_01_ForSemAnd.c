#include <stdio.h>
#define LIM 100
int main(){
    int c;
    int i=0;
    char s[LIM];
    for (i = 0; i < LIM - 1; ++i) {
        c = getchar();
        if (c == EOF) {
            break;
        }
        if (c == '\n') {
            break;
        }
        s[i] = c;
    }
    s[i] = '\0';
    for (int j = 0; j < i; j++) {
        printf("%c", s[j]);
    }
    printf("\n");
    return 0;
}