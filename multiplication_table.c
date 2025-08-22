#include <stdio.h>
int main(void){
    int a = 0;
    printf("몇 단을 원하시나요?\n");
    scanf("%d", &a); // считывание значения переменной a
    for (int i = 1; i <= 9; i++) {
        printf("%d * %d = %d\n", a, i, a * i); // вывод умножения
    }
    return 0;
}