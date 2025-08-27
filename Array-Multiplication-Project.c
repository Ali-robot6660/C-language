#include <stdio.h>

int main(){
    int multi_table[10][10] = {};                                       //연습문제 3 (325p)
    int i, j;
    for(i=1; i < 10; i++){
        for(j=1; j < 10; j++){
            multi_table[i][j] = i * j;
            printf("|  %02d  |", multi_table[i][j]);
        }
        printf("\n");
    }

    return 0;
}