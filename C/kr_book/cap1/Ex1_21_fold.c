#include <stdio.h>

#define MAX_COL 10

int main() {
    int c;
    int i = 0;
    int j, k, pos;
    char linha[MAX_COL + 1];

    while ((c = getchar()) != EOF) {
        linha[i] = c;
        if (i == MAX_COL) {
            pos = i;
            while (pos > 0 && linha[pos] != ' ' && linha[pos] != '\t') {
                pos--;
            }
            if (pos > 0) {
                for (j = 0; j < pos; j++) {
                    printf("%c", linha[j]);
                }
                printf("\n");
                int novo_i = 0;
                for (k = pos + 1; k <= MAX_COL; k++) {
                    linha[novo_i++] = linha[k];
                }
                i = novo_i;
            } else {
                for (j = 0; j < MAX_COL; j++) {
                    printf("%c", linha[j]);
                }
                printf("\n");
                linha[0] = c;
                i = 1;
            }
        } else if (c == '\n') {
            for (j = 0; j < i; j++) {
                printf("%c", linha[j]);
            }
            printf("\n");
            i = 0;
        } else {
            i++;
        }
    }
    for (j = 0; j < i; j++) {
        printf("%c", linha[j]);
    }
    return 0;
}