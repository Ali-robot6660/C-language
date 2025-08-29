/*
#include <stdio.h>
int main(){                             //연습문제 1 (365p)
    char c='B';
    int num = 10;

    char* cp = NULL;
    int* ip = NULL;

    cp = &c;
    ip = &num;

    *cp = 'A';
    *ip = 20;

    printf("%x %d \n", &num, num);
    printf("%x %d \n", ip, *ip);

    printf("%x %c \n", &c, c);
    printf("%x %c \n", cp, *cp);


    return 0;
}
    */

/*
#include <stdio.h>

int main(){                     //연습문제 2 (366p)
    int a =10;
    int b =20;
    int temp;

    int* p1=NULL;
    int* p2=NULL;

    p1 = &a;
    p2 = &b;


    temp = *p1;    //изменение адресс переменние в памят
    *p1 = *p2;
    *p2 = temp;

    printf("%d %d \n", a, b);

    return 0;
}
    */

/*
#include <stdio.h>

int main(void){                                 //연습문제 3 (366p)
    int num1 = 10;

   // int* ip1=NULL;
    //int* ip2=NULL;
   // int* ip3=NULL;

    int *ip1 = &num1;
    int **ip2 = &ip1;
    int ***ip3 = &ip2;


    printf("%x %x %x %d \n", &ip3, &ip2, &ip1, num1);
    printf("%d ", ***ip3);

    return 0;
}

*/


/*
#include <stdio.h>
int main(void){                                 //연습문제 4 (367p)


    int num1 = 10;

    int *ip1 = &num1;
    int **ip2 = &ip1;
    int ***ip3 = &ip2;


    printf("%x %x %x %d \n", &ip3, &ip2, &ip1, num1);

    *ip1 = 20;
    printf("%x %x %x %d \n", &ip3, &ip2, &ip1, num1);

    **ip2 = 30;
    printf("%x %x %x %d \n", &ip3, &ip2, &ip1, num1);

    ***ip3 = 40;
    printf("%x %x %x %d \n", &ip3, &ip2, &ip1, num1);


    return 0;
}
    */


/*
#include <stdio.h>
int main(void){                                 //연습문제 5 (367p)

    int array[3] = {10, 20, 30};

    //int* ipp=NULL;
    //int* ip=NULL;

    int *ip = array;
    int **ipp = &ip;

    printf("%x %x %x \n", **&ipp, *&ip, array);
    printf("%d %d %d \n", *(*ipp+2), *(ip+1), array[0]);

    return 0;

}

*/




/*
#include <stdio.h>

int main() {
    // --- 1D массив ---
    int arr1[3] = {10, 20, 30};

    printf("=== 1D array ===\n");
    for (int i = 0; i < 3; i++) {
        printf("i=%d\n", i);
        printf("  arr1[i]   = %d (значение)\n", arr1[i]);
        printf("  &arr1[i]  = %p (адрес элемента)\n", (void*)&arr1[i]);
        printf("  *&arr1[i] = %d (снова значение)\n\n", *&arr1[i]);
    }

    // --- 2D массив ---
    int arr2[2][3] = {{1,2,3},{4,5,6}};

    printf("\n=== 2D array ===\n");
    for (int i = 0; i < 2; i++) {
        printf("i=%d\n", i);
        printf("  arr2[i]   = %p (адрес строки)\n", (void*)arr2[i]);
        printf("  &arr2[i]  = %p (адрес строки)\n", (void*)&arr2[i]);
        printf("  *&arr2[i] = %p (снова адрес строки)\n", (void*)*&arr2[i]);
        printf("  *arr2[i]  = %d (первый элемент строки)\n\n", *arr2[i]);
    }

    return 0;
}
*/


/*

#include <stdio.h>
int main(void)
{
   char* p="ABCD";		// 문자열 상수 ABCD의 시작 주소를 p에 저장
		
   printf("%s\n", p);
   printf("%s\n", p+1);
   printf("%s\n", p+2);
   printf("%s\n", p+3);	
		
   return 0;
}
*/


#include <stdio.h>

int main(int args, char* argv[ ])
{
   int i=0;
   printf("문자열의 수 : %d \n", args);
	
   for(i=0; i<args; i++)
   {
      printf("argv[%d] : %s \n", i, argv[i]);
   }
   return 0;
}