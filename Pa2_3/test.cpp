#include<iostream>
using namespace std;
class A{
    public:
    int a(int x){
        return 1;
            }
    int a(int x)const{
        return 3;
    }
};

int main(){
    int pa = 0;
    A a1;
    const A & ca = a1;
    int x1 = a1.a(pa);
    int x2 = ca.a(1);
    cout<<x1<<" "<<x2<<endl;
}