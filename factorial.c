#include <stdio.h>

int main(){
    int i = 1, factorial = 1;
    for( ; ; i++){
        factorial = factorial * i;
        printf("%d * %d = %d:\n", factorial, i, factorial);
        if(i>9)
            break;
    }
    printf("1부터 10까지의 곱: %d\n", factorial);

    return 0;
    
}