#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
     cout << fixed << setprecision(9);
     const double pi =3.141592653;
     double r,Area;
     cin >>r;
     Area= pi*r*r;
     cout<<Area;
}
