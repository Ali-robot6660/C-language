#include <stdio.h>
int main(){
    int num;

    printf("Neter the number : ");
    scanf("%d", &num);

    switch(num){
        case 1:
            printf("1 Kudak\n");
            break;
        case 2:
            printf("2 kudako\n");
            break;
        case 3:
            printf("3 kudakho\n");
            break;

        default:
            printf("Error number/ Enter only 1~3");
    }

    return 0;
}