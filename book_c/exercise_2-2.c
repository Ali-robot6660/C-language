/*#include<stdio.h>
int main(void)
{
int array[2][4] = {{1,2,3,4}, {5,6,7,8}};
int array1[4][2] = {};
*/

/*
                array1[0][0] = array[1][0];
                array1[0][1] = array[0][0];

                array1[1][0] = array[1][1];
                array1[1][1] = array[0][1];

                array1[2][0] = array[1][2];
                array1[2][1] = array[0][2];

                array1[3][0] = array[1][3];
                array1[3][1] = array[0][3];
*/
/*
int i, j, k;                                                //연습문제 1 (324p)
for(i=0; i < 4; i++){
    for(j=0; j < 2; j++){
        if(j==0){
            k = 1;
        }
        else{
            k = 0;
        }
        array1[i][j] = array[k][i];
    }

}


   printf("%d %d %d %d \n", array[0][0], array[0][1], array[0][2], array[0][3]); 
   printf("%d %d %d %d \n", array[1][0], array[1][1], array[1][2], array[1][3]);
   
   printf("\n");

   printf("%d %d \n", array1[0][0], array1[0][1]);
   printf("%d %d \n", array1[1][0], array1[1][1]); 
   printf("%d %d \n", array1[2][0], array1[2][1]);
   printf("%d %d \n", array1[3][0], array1[3][1]); 
   

   return 0;
}
   */



/*
#include <stdio.h>
int main(){                                                     //연습문제 2 (324p)

    int home[3][3]={
        {1, 2, 4}, //1층
        {7, 6, 5}, //2층
        {3, 4, 4}  //3층
    };

    int i, j, k, l;
    int res = 0;
    for(i = 1; i < 4; i++){
        for(j = 1; j < 4; j++){
            printf("%d층 %d호의 가족은 몇 명입니까? : %d \n", i, j, home[i-1][j-1]);
            res +=  home[i-1][j-1];
        }
    }
    printf("열혈아파트 총 주민수는 %d명입니다. \n", res);
    
    return 0;
}
    */


/*
#include <stdio.h>

int main(){
                                //Array-Multiplication-Project
    int multi_table[10][10] = {};                                       //연습문제 3 (325p)
    int i, j;
    for(i=1; i < 10; i++){
        for(j=1; j < 10; j++){
            multi_table[i][j] = i * j;
            printf("|  %02d  |", multi_table[i][j]);
        }
        printf("\n");
    }

    return 0;
}
    */


/*
#include <stdio.h>
#include <stdlib.h>

int main(){                                                         //연습문제 4 (325p)
    int i, j;
    int arrayA[4][3] = {
        {23, 75, 85},
        {12, 77, 51},
        {25, 66, 30},
        {19, 90, 88}
    };
    int arrayB[4][3] = {
        {11, 15, 47},
        {74, 85, 69},
        {57, 86, 28},
        {90, 22, 33}
    };
    int arrayC[4][3] = {};
    int arrayD[4][3] = {};

    for(i=0; i < 4; i++){
        for(j=0; j < 3; j++){
             arrayC[i][j] =  arrayA[i][j] +  arrayB[i][j];
             arrayD[i][j] =  arrayA[i][j] -  arrayB[i][j];
             printf("    arrayA : | %02d |\n", arrayA[i][j]);
             printf("    arrayB : | %02d |\n", arrayB[i][j]);
             printf("SUM arrayC : | %02d |\n", arrayC[i][j]);
             printf("DIF arrayD : | %02d |\n", abs(arrayD[i][j]));
             printf("\n");
        }
    }
    return 0;
}
    */


#include <stdio.h>
int main(){                                                 //연습문제 5 (325p)
    int i, j;

    int array[2][3] = {1, 2, 3, 4, 5, 6};
    int *array2[2][3];
    for(i=0; i < 2; i++){
        for(j=0; j < 3; j++){
            //array2[i] = *(array+i);
            printf("value: %d \n", array[i][j]);
            printf("address: %p \n", array2[i][j]);

        }
    }

}