#include <stdio.h>

int main(){
    int num;

    for(num=0; num<5; num++){
        printf("박복 내용 : %d \n", num);
    }

    printf("박복문을 종료한 후: %d \n", num);

    return 0;
}