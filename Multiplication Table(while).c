#include <stdio.h>

int main(){
    int i=2, j=1;

    while(i<10){
        while(j<=10){ 
            int result = i * j;
            printf("%d * %d = %d \n", i, j, result);
            j++;
        }
        printf("\n");
        i++;
        j=1;
    }

}