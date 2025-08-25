#include <stdio.h>

int main(){

    int num = 1;

    do{
        printf("%d", num);
        num++;
    }while(num<10);

    printf("\n **while 문을 종료합니다. **\n");
    return 0;
}