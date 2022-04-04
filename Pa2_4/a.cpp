#include <iostream>
#include<string.h>
#include<cmath>
using namespace std;

class a
{
private:
    /* data */
public:
    a(/* args */);
    ~a();
    int b ;

};

a::a(/* args */)
{
}

a::~a()
{
    cout<<"deldte"<<b<<endl;
}
a creat(){
    a A;
    A.b=2;
    return A;
}
int main()
{
 string a;
    cin>>a;
    int len = a.length();
    int x = a.find ("x");
    string s1 = a.substr(0, x); 
    int y = a.find ("^");  
    string s2 = a.substr(y+1, len-1);
    cout<<s1<<" "<<s2<<endl;
    int s2_i=stoi(s2);
    cout<<s2_i;
}