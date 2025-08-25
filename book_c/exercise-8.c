/*#include <stdio.h>

int main(){                                      //연습문제 1 (222p)
    int a,b;

    printf("두 개의 정수를 입력해주세요 : ");
    scanf("%d %d", &a, &b);

    if(a>b){
        printf("큰 수는 %d입니다.", a);
    }
    else if(a==b){
        printf("두 수는 같습니다.");
    }
    else{
        printf("큰 수는 %d입니다.", b);
    }
    return 0;
}*/


/*#include <stdio.h>
int main(){                                     //연습문제 2 (222p)
    int a, b, c;
    int num;

    printf("3자리 십진수를 입력하세요 : ");
    scanf("%d", &num);

    a = num / 100;        // первая цифра
    b = (num / 10) % 10;  // вторая цифра
    c = num % 10;         // третья цифра

    if(a%2==0){
        printf("%d : 짝수 ", a);
    }
    else{
        printf("%d : 홀수 ", a);
    }


    if(b%2==0){
        printf("%d : 짝수 ", b);
    }
    else{
        printf("%d : 홀수 ", b);
    }


    if(c%2==0){
        printf("%d : 짝수 ", c);
    }
    else{
        printf("%d : 홀수 ", c);
    }
    return 0;

}*/



/*#include <stdio.h>

int main(){                                     //연습문제 3 (223p)
    int GPA;

    printf("점수를 입력하세요: ");
    scanf("%d", &GPA);

    switch(GPA/10){

        case 10: case 9: printf("A"); break;
        case 8: printf("B"); break;
        default: printf("F");
    }
    return 0;
}*/


/*#include <stdio.h>

int main(){                                     //연습문제 4 (223p)

    int i, res;
for(i=1; i<=100; i++){
    if(i%2==0)
        continue;
    printf("%d ", i);
}
}*/


/*#include <stdio.h>

int main(){                                     //연습문제 5 (223p)
    int a, b, c;

    printf("input : ");
    scanf("%d", &a);
    printf("input : ");
    scanf("%d", &b);
    printf("input : ");
    scanf("%d", &c);

    if(a>=b && a>=c) printf("result : %d", a);
    else if(b>=a && b>=c) printf("result : %d", b);
    else if(c>=b && c>=a) printf("result : %d", c);

    return 0;

    }*/