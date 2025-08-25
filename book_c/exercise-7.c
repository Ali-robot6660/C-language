/*#include <stdio.h>
int main(void){                                 //연습문제 1 (195p)

    int i, num, a=0, result=0;
    printf("Enter the number:");
    scanf("%d", &num);
    printf("%d의 배수 : ",num);

    for(i=num; i<100; i = i + num){
        result += num;
        printf("%d ", result);
        a++;
    }
    printf("\n%d의 배수 개수 : %d", num, a);

    return 0;
}*/


/*#include <stdio.h>

int main(){                                     //연습문제 2 (195p)
    int i=1, j, num;
    printf("Enter the number: ");
    scanf("%d", &num);
    while(i <= num){
        for(j=1; j<=i; j++){
            printf("*");
        }
        i++;
        printf("\n");
        
    }
    return 0;

}*/




/*#include <stdio.h>

int main(){                                 //연습문제 3 (195p)
    int i, j, z, num = 7;

    for(i=num; i>=1; i=i-2){
        int x = (num - i) / 2;
        for(z=0; z<=x; z++){
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
*/



/*
#include <stdio.h>
int main(){                                 //연습문제  
    int i, j, z, num = 9;
    //вверхный часть
    for(i=1; i<=num; i=i+2){
        int x = (num - i) / 2;
        for(z=0; z<=x; z++){
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //нижный часть
    for(i=num; i>=1; i=i-2){
        int x = (num - i) / 2;
        for(z=0; z<=x; z++){
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
    */


/*
#include <stdio.h>
int main(){                                 //연습문제 4 (196p)
    int i,j, num;

    printf("Enter the number : ");
    scanf("%d", &num);

    for(i=0; i<=9; i++){
        printf("%d * %d = %d입니다.\n", num, i, num * i);
    }
    return 0;
}*/


/*
#include <stdio.h>

int main(){                                  //연습문제 5 (196p)
    int i, n, factorial=1;
    printf("Enter number for Factorial: ");
    scanf("%d", &n);
    printf("%d! = %d ", n, n);
    for(i=1; ; i++){
        factorial *= i;
        printf("* %d ", n-i);
        if(n-i == 1)
            break;
    }
    printf("\n%d", factorial);
    return 0;

}*/


/*
#include <stdio.h>
int main(){                             //연습문제 6 (197p)
    int a, b;

    do{
        printf("첫 번째 수를 입력해 주세요 : ");
        scanf("%d", &a);
        printf("두 번째 수를 입력해 주세요 : ");
        scanf("%d", &b);
        printf("%d + %d = %d입니다.\n", a, b, a+b);
    }while(a > 0 || b > 0);

    printf("\n exit");
    return 0;
}*/



//GPA
#include <stdio.h>
int main(){                                  //연습문제 7 (197p)
    int i, a;
    int res=0;
    printf("열 과목의 점수의 평균을 계산합니다.\n");
    for(i=1; i<=10; i++){
        printf("점수를 입력해 주세요 : ");
        scanf("%d", &a);
        res = res + a;
    }
    printf("열 과목 점수의 평균은 %.1f점입니다.", (float)res / 10);

    return 0;
}




