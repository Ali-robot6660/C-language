/*#include <stdio.h>
int main(){                                         //연습문제 1 (295p)
    char array[3] = {'A', 'B', 'C'};
    char array2[3] = {'C', 'B', 'A'};
    printf("%c%c%c \n", array[0], array[1], array[2]);
    printf("%c%c%c%c%c%c \n", array[0], array[1], array[2], array2[0], array2[1], array2[2]);

    return 0;

}*/

/*#include <stdio.h>
int main(){                                            //연습문제 2 (295p)
    int res = 0, i, a;
    int score[10] = {};
    for(i=0; i<10; i++){
        printf("Input score students : ");
        scanf("%d", &a);
        score[i] = a;
        res += score[i];
    }
    printf("Score of students: %d", res / 10);
}*/

/*#include <stdio.h>
int main(void){                                     //연습문제 6 (296p)
    int i;
    char array1[5] = {'A', 'B', 'C', 'D', 'E'};
    int array2[5] = {10, 20, 30, 40, 50};
    double array3[5] = {10.1, 20.2, 30.3, 40.4, 50.5};

    for(i=0; i<5; i++){
        printf("address : %d  ", &array1[i]);
        printf("vallue : %d   ", *&array1[i]);
        printf("array : %c\n", array1[i]);

        
    }
    printf("\n\n");

    for(i=0; i<5; i++){
        printf("address2 : %d  ", &array2[i]);
        printf("vallue2 : %d   \n", *&array2[i]);
    }
    printf("\n\n");

    for(i=0; i<5; i++){
        printf("address3 : %d  ", &array3[i]);
        printf("vallue3 : %.1f   \n", *&array3[i]);
        
    }




    return 0;
}*/



