#include <stdio.h>

int main(){

    int i=0, sum=0;

    while(i<=10){
        sum = sum + i;

        printf("i=%d, sum=%d\n", i, sum);
        i++;
    }
    printf("------------------반복문 종료---------------\n");

    return 0;
}