#include <iostream>
#include <string>
using namespace std;
class Monomial
{
private:
    int coe;//coefficient系数
    int deg;//指数
public:
    Monomial(){};
    Monomial(int _c, int _d):coe(_c),deg(_d){};
    Monomial operator+(const Monomial &x) const;
    Monomial operator-(const Monomial &x) const;
    Monomial operator*(const Monomial &x) const;
    Monomial operator/(const Monomial &x) const;
    int definite_integral(const int a, const int b) const;
    Monomial derive() const;
    int get_val(int x) const;
   
   friend istream& operator>>(istream & in, Monomial &dst);
   friend ostream& operator<<(ostream &out, const Monomial&src);
};
