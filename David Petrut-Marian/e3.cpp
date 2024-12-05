#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b,c;

    cout<<"Introduceti coeficientul lui a: "<<endl;
    cin>>a;
    cout<<"Introduceti coeficientul lui b: "<<endl;
    cin>>b;
    cout<<"Introduceti coeficientul lui c: "<<endl;
    cin>>c;
  if(a==0)
        {
    cout<<"Coeficientul nu poate fi 0."<<endl;
        return 1;
    }
        int delta = b*b - 4*a*c;
    if (delta>0){
            int x1=(-b+sqrt(delta))/2*a;
            int x2=(-b-sqrt(delta))/2*a;
        cout<<"Solutiile sun x1 = " << x1 << " si x2 = "<< x2 <<endl;
    }
    else if (delta == 0){
            int x=-b/(2*a);
        cout<<"Exista doar o solutie x = "<< x <<endl;
    }
   return 0;
}
