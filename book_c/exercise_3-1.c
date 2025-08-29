/*
#include <stdio.h>

struct Student {                                                     //연습문제 1 (532p)
    int id;        // 학번 (номер студента)
    char blood;    // 혈액형 (группа крови, символ)
    float vision;  // 시력 (зрение, вещественное число)
    int weight;    // 몸무게 (вес, целое число)
};

int main(void) {
    struct Student s1 = {202301, 'A', 1.0, 65};  // пример заполнения
    printf("학번: %d\n 혈액형: %c형\n 시력: %.1f\n 몸무게: %dkg\n",
           s1.id, s1.blood, s1.vision, s1.weight);
    return 0;
}
*/


/*
#include <stdio.h>

struct Student {                                                    //연습문제 2 (532p)
    int id;        // 학번 (номер студента)
    char blood;    // 혈액형 (группа крови, символ)
    float vision;  // 시력 (зрение, вещественное число)
    int weight;    // 몸무게 (вес, целое число)
};

int main(){
    struct Student s[5] = {{202301, 'A', 1.0, 65}, 
        {202401, 'B', 2.0, 95}, 
        {202502, 'C', 3.0, 66}, 
        {202511, 'D', 3.2, 80}, 
        {202606, 'E', 4.0, 60}
    };
    for(int i = 0; i < 5; i++){
    printf("학번: %d\n혈액형: %c형\n시력: %.1f\n몸무게: %dkg\n",
           s[i].id, s[i].blood, s[i].vision, s[i].weight);
    };

    return 0;

}
    */


/*
#include <stdio.h>

struct student{                                                 //연습문제 4 (533p)
    int x;
    int y;
};

int main(){
    struct student s1;
    s1.x=10;
    s1.y=10;

    struct student* sp=NULL;
    sp = &s1;
    //printf("%d %d \n", s1.x, s1.y);
    printf("%d %d \n", sp->x, (*sp).y);


    return 0;
}

*/


/*
#include <stdio.h>
#include <string.h>

struct student{                                             //연습문제 6 (534p)
    int no;
    char name[20];
    double height;
};

int main(){
    struct student stu;
     stu.no = 20101323;
     strcpy(stu.name, "Park");
     stu.height = 160.0;

    struct student* p = &stu;
    struct student** pp = &p;
   
    printf("no : %d\nname : %s\nheight : %.1f \n", (*pp)->no, (*pp)->name, (*pp)->height);


    return 0;
}
    */


/*
#include <stdio.h>
#include <string.h>
struct student{
    char name[20];
    int money;
    struct student* left_link;
    struct student* right_link;
};
int main(){
    struct student stu1;
    strcpy(stu1.name, "Kim");
    stu1.money = 90; 
    stu1.left_link = NULL; 
    stu1.right_link = NULL;

    struct student stu2;
    strcpy(stu2.name, "Lee");
    stu2.money = 80; 
    stu2.left_link = NULL; 
    stu2.right_link = NULL;

    struct student stu3;
    strcpy(stu3.name, "Goo");
    stu3.money = 60; 
    stu3.left_link = NULL; 
    stu3.right_link = NULL;

    stu1.left_link = &stu2;
    stu1.right_link = &stu3;
    
    
    printf("%s %d \n", stu1.name, stu1.money);
    printf("%s %d \n", stu1.left_link->name, stu1.left_link->money);
    printf("%s %d \n", stu1.right_link->name, stu1.right_link->money);


    return 0;
}

*/

#include <stdio.h>

struct node{
    int data;
    struct node* left_link;
    struct node* right_link;

};

int main(void){

    struct node n1;
    n1.data = 10;
    n1.left_link = NULL;
    n1.right_link = NULL;

    struct node n2;
    n2.data = 20;
    n2.left_link = NULL;
    n2.right_link = NULL;

    struct node n3;
    n3.data = 30;
    n3.left_link = NULL;
    n3.right_link = NULL;

    struct node n4;
    n4.data = 40;
    n4.left_link = NULL;
    n4.right_link = NULL;

    struct node n5;
    n5.data = 50;
    n5.left_link = NULL;
    n5.right_link = NULL;

    struct node n6;
    n6.data = 60;
    n6.left_link = NULL;
    n6.right_link = NULL;

    struct node n7;
    n7.data = 70;
    n7.left_link = NULL;
    n7.right_link = NULL;



    n1.left_link = &n2;
    n1.right_link = &n3;

    n2.left_link = &n4;
    n2.right_link = &n5;

    n3.left_link = &n6;
    n3.right_link = &n7;



    
    
    printf("n1: %d \n", n1.data);
    printf("n1.left_link:  n2: %d\n", n1.left_link->data); 
    printf("n1.right_link: n3: %d \n\n", n1.right_link->data);

    printf("n2: %d \n", n2.data); 
    printf("n2.left_link:  n4: %d \n", n2.left_link->data);
    printf("n2.right_link: n5: %d \n\n", n2.right_link->data);

    printf("n3: %d \n", n1.data);
    printf("n3.left_link:  n6: %d\n", n3.left_link->data); 
    printf("n3.right_link: n7: %d \n\n", n3.right_link->data);




return 0;
    
}