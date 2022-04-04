#include"Monomial.h"
#include<string>
#include<cmath>
Monomial Monomial::operator+(const Monomial &x) const{
    Monomial moni;
    moni.coe=(coe + x.coe);
    moni.deg=deg;
    if(moni.coe==0)
    moni.deg=0;
    return moni;
}
Monomial Monomial::operator-(const Monomial &x) const{
    Monomial moni;
    moni.coe=(coe - x.coe);
    moni.deg=deg;
    if(moni.coe==0)
    moni.deg=0;
    return moni;  
}
Monomial Monomial::operator*(const Monomial &x) const{
    Monomial moni;
    if(x.coe==0||coe==0)
    {
        moni.coe=0;
        moni.deg=0;
        return moni;
    }
    moni.coe=(coe * x.coe);
    moni.deg=(deg + x.deg);
    return moni;
}
Monomial Monomial::operator/(const Monomial &x) const{
    Monomial moni;
    if(coe==0)
    {
        moni.coe=coe;
        moni.deg=deg;  
        return moni;
    }
    moni.coe=(coe / x.coe);
    moni.deg=(deg - x.deg);
    return moni;
}
int Monomial::definite_integral(const int a, const int b) const{
    if(deg==-1)
        return coe*(log(b)-log(a));
    int xishu = coe/(deg+1);
    int zhishu = deg+1;
    return xishu*(pow(b,zhishu) - pow(a,zhishu));
}
Monomial Monomial::derive() const{
    Monomial moni;
    if(deg==0)
    {
        moni.coe = 0;
        moni.deg = 0;
    }
    else
    {
    moni.coe = deg * coe;
    moni.deg = deg - 1; 
    }
    return moni;
}
int Monomial::get_val(int x) const{
    return coe*pow(x,deg);
}

istream& operator>>(istream & in, Monomial &dst){
    string a;
    in>>a;
    int len = a.length();
    int x = a.find ("x");
    string s1 = a.substr(0, x); 
    int y = a.find ("^");  
    string s2 = a.substr(y+1, len-1);
    dst.coe = stoi(s1);
    dst.deg = stoi(s2);    
    return in;
}
ostream& operator<<(ostream &out, const Monomial&src){
       out<<src.coe<<"x^"<<src.deg<<endl;
       return out;
   }

