#include<iostream>

using std::cout;

class Test{
     int a;
     char b;
     float c;   
};

Test g_test_1_au;

void test_1(void);

int main(void){
    test_1();
    return (0);
}

void test_1(void){

    Test t1_au;

    g_test_1_au.a=100;         //CTE
    g_test_1_au.b='A';          //CTE
    g_test_1_au.c=3.14f;        //CTE

    t1_au.a=200;
    t1_au.b='B';
    t1_au.c=6.28f;

}