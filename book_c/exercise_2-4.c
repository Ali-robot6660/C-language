/*
#include <stdio.h>

int main(void){                                         //연습문제 1 (430p)
    int array[5] = {10, 30, 40, 30, 20};
    int i, summ = 0;
    for(i=0; i < 5; i++){
        summ += *(array + i);
        printf(" %d + i : %d \n",*(array + i), summ);
    }

    printf("sum array : %d", summ);

    return 0;
}
    */


/**
#include <stdio.h>

int main(void){                                         //연습문제 2 (430p)
    int array1[5] = {10, 20, 30, 40, 50};
    int* p; //first pointer
    

   // int i;
   // for(i=0; i<5; i++){
   //     printf("just array i :  | %d |\n", array1[i]);
   //     printf("array pointer : | %d |\n", *(p + i));
   // }


    p = array1; //secont pointer
    printf("%d %d %d %d %d \n", p[0], p[1], p[2], p[3], p[4]);
    printf("%d %d %d %d %d \n", *(p + 0), *(p + 1), *(p + 2), *(p + 3), *(p + 4));

    return 0;
}
*/


/*
#include <stdio.h>

int main(void){                                         //연습문제 4 (431 - 432p)
    int array[2][3] = {10, 20, 30, 40, 50, 60};
    int (*p)[3]; //first pointer

    p = array; //secont pointer
    printf("%d %d %d \n", p[0][0], p[0][1], p[0][2]);
    printf("%d %d %d \n", p[1][0], p[1][1], p[1][2]);

    return 0;
}
*/


#include <stdio.h>
int main(){                                             //연습문제 5 (432p)

    char* string[2] = {"I Love C", "Hello World"};
    char **p = string;  //это указатель на указатель на символ (это указатель на весь массив)

    printf("%s %s \n", *(p+0), *(p+1)+6);

    return 0;

}
    
