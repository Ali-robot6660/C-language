#include <stdio.h>

int main(){
    int num = 0;

    while(num<=5){
        printf("반복 내용: %d \n", num);
        num++;
    }
    printf("반복문을 종료한 후에: %d \n", num);

    return 0;
}