#include <iostream>
using namespace std;
class CMyClassA {
    int val;
public:
    CMyClassA(int);
    void virtual print();
};
CMyClassA::CMyClassA(int arg) {
    val = arg;
    printf("A:%d\n", val);
}
void CMyClassA::print() {
    printf("%d\n", val);
    return;
}
class CMyClassB:public CMyClassA{
    private :
    int a;
    public :
    void print(){
        printf("%d\n", a);
    }
    CMyClassB(int a,int b=3):CMyClassA(a*b),a(a){
        printf("B:%d\n", a);
    }
};


int main(int argc, char** argv) {
    CMyClassA a(3), *ptr;
    CMyClassB b(5);
    ptr = &a;
    ptr->print();
    a = b;
    a.print();
    ptr = &b;
    ptr->print();
    return 0;
}
