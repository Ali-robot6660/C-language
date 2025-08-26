/*#include <stdio.h>
#include <stdlib.h> //библиотека для abs()

int absnum(int x){ //создать функции                    //연습문제 1 (266p)
    return abs(x);
}


//вызов функции
int main(void){
    int x, a;
    printf("정수를 입력하세요 : ");
    scanf("%d",&x);
    a = absnum(x); //вызов функции
    printf("절댓값은 : %d입니다.", a);

    return 0;
}*/


#include <stdio.h>

int fibonacci_num(int x){
    int i, a = 1, b = 1, f = 0;
    printf("%d %d ", a, b);
    for(i=1; i<=x-2; i++){
          f = a + b;
          printf("%d ", f);
          a = b;
          b = f;
          
          
    }
    return f;
}

int main(void){
    int x, fb, a, b;
    printf("input number for Fibonacci: ");
    scanf("%d", &x);
    fb = fibonacci_num(x);
    printf("fibonacci number %d = %d ", x, fb);

    return 0;

}