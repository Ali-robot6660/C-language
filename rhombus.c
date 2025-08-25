#include <stdio.h>
int main(void){
    int a;
    printf("Enter number for rhombus: ");
    scanf("%d", &a);
    // Верхняя часть ромба
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= a - i; j++) {
            printf(" ");
        }
        for (int d = 1; d <= 2 * i - 1; d++) {
            printf("*");
        }
        printf("\n");
    }
    // Нижняя часть ромба
    for (int i = a - 1; i >= 1; i--) {
        for (int j = 1; j <= a - i; j++) {
            printf(" ");
        }
        for (int d = 1; d <= 2 * i - 1; d++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}