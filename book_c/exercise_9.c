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


/*#include <stdio.h>

int fibonacci_num(int x){                           //연습문제 2 (266-267p)
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
    */




/*#include <stdio.h>
int a, b;                                       //연습문제 3 (268p)

int plus(int a, int b){
    return a + b;
}

int minus(int a, int b){
    return a - b;
}

int multyply(int a, int b){
    return a * b;
}

float divide(int a, int b){
    return (float)a / (float)b;
}


int main(void){
    int result;
    printf("input two numbers : ");
    scanf("%d %d", &a, &b);

    result = plus(a, b);
    printf("%d + %d = %d\n", a, b, result);

    result = minus(a, b);
    printf("%d - %d = %d\n", a, b, result);

    result = multyply(a, b);
    printf("%d * %d = %d\n", a, b, result);

    //float result = divide(a, b);
    printf("%d / %d = %lf\n", a, b, divide(a, b));

    return 0;
}*/




/*#include <stdio.h>

int getArea(int x, int y){
    return x * y;                                       //연습문제 4 (268p)
}
 int main(void){
    int x, y, result;

    printf("밑별 길이 : ");
    scanf("%d", &x);
    printf("높이 : ");
    scanf("%d", &y);

    result = getArea(x,y);

    printf("사각형의 넓이는 %d입니다.", result);


    return 0;
 }*/


#include <stdio.h>
#include <math.h>
int res;
int iNteger(int x){
    return x;
}
int sQuare(int x){
    return (int)pow(x, 2);
}
int cUbe(int x){
    return (int)pow(x, 3);
}
int qUartic(int x){
    return (int)pow(x, 4);
}
int qUintic(int x){
   return (int)pow(x, 5);
}



int main(void){
    int x;
    printf("input number for (squere/cube/quartic/quintic) :");
    scanf("%d", &x);

    printf("--------------------------------------------------------\n"
        "INTEGER     SQUARE      CUBE        QUARTIC     QUINTIC\n"
        "--------------------------------------------------------\n"
        "    %d          %d          %d          %d          %d  \n",
        iNteger(x), sQuare(x), cUbe(x), qUartic(x), qUintic(x));
}