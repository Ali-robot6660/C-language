#include <stdio.h>

int main(){
    int i = 1, factorial = 1;
    for( ; i<=10; i++){
        factorial = factorial * i;
    }
    printf("1부터 10까지의 곱: %d\n", factorial);

    return 0;
    
}