#include <stdio.h>
#include <math.h> // Библиотека использован для степен (pow)
int res;
int iNteger(int x){
    return x;
}
int sQuare(int x){
    return (int)pow(x, 2); //pow это степен
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