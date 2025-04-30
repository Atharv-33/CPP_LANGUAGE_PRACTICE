#include <iostream>

struct Test{
     
    private:
        int a;
    public:
        char b;
        float c;
};

Test g_test_1_au;
void test_1(void);

int main(void){
    test_1();
    return (0);
}

void test_1(){

    Test t1_au;

    g_test_1_au.a=100;    //CTE
    g_test_1_au.b='A';
    g_test_1_au.c=3.14f;

    t1_au.a=200;          //CTE
    t1_au.b='B';
    t1_au.c=6.28f;


}
