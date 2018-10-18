#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x,x1,x2,dx,a,b,c,f;
    cout << "Введите Xначальное \n";
    cin >> x1;
    cout << "Введите Xконечное \n";
    cin >> x2;
    cout << "Введите шаг dx \n";
    cin >> dx;
    cout << "Введите a,b,c \n";
    cin >> a ;
    cin >> b;
    cin >>c;
    
    for (x=x1; x<=x2; x+=dx)
      {
        if (a<0 and c!=0) f=a*pow(x,2)+b*x+c;
           else {if (c>0 and x==0) f=-a/(x-c);
                     else {f=a*(x+c);} 
                }
        cout << "f(" << x << ") = " << f << endl;       
      }
       
    return 0;
}
