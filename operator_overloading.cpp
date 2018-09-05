#include<iostream>
using namespace std;

class Integer
{
    int i;
public:
    Integer(int ii):i(ii) {}
    inline const Integer operator+(const Integer& rv) const;
    inline Integer& operator++(const Integer& rv);
};

const Integer Integer::operator+(const Integer& rv) const
{
    cout<<"operator+"<<endl;
    return Integer(i+rv.i);
}

Integer& Integer::operator++(const Integer& rv)
{
    cout<<"operator++"<<endl;
    i+=rv.i;
    return *this;
}

int main()
{
    cout<<"build-in types"<<endl;
    int i=1,j=2,k=3;
    k+=i+j;
    cout<<"user-defined types"<<endl;
    Integer ii(1), jj(2), kk(3);
    kk+=ii+jj;
    return 0;
}