#include<stdio.h>

struct Test{
    int a;
    char b;
    float c;
};

void test_1(void);

struct Test g_test_1_au;

int main(void){

    test_1();

    printf(" g_test_1_au.a =%d , g_test_1_au.b= %c g_test_1_au.c=%f "
       ,g_test_1_au.a,g_test_1_au.b,g_test_1_au.c);

    return (0);
}

void test_1(void){

    struct Test t1_au;

    g_test_1_au.a=100;
    g_test_1_au.b='A';
    g_test_1_au.c=3.14f;

    t1_au.a=200;
    t1_au.b='B';
    t1_au.c=6.28f;

    printf(
        "t1_au.a =%d , t1_au.b=%c , t1_au.c=%f"
        ,t1_au.a, t1_au.b, t1_au.c
    );
}
