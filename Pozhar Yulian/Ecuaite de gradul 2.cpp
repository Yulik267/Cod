#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a,b,c,D;
    double x1,x2;
    cout<<"Introduceti numarul a:";
    cin>>a;
    cout<<"Introduceti numarul b:";
    cin>>b;
    cout<<"Introduceti numarul c:";
    cin>>c;
    if(a!=0 && b!=0){
        D=pow(b,2)-4*a*c;
    }
    if(D>=0){
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        cout<<"x1="<<x1<<endl;
        cout<<"x2="<<x2<<endl;
    }
    else if (D<0)
        cout<<"Ecuatia nu are solutie";

    if(a==0&&b==0&&c==0)
        cout<<"Ecuatia are o infinitate de soluti";
    else if(a==0&&b==0)
        cout<<"Ecuatia nu are solutii";
    else if(a==0){
        if(c!=0){
            x1=-b/c;
            cout<<"x="<<x1;
        }
        else
            cout<<"Ecuatia nu are solutii";
    }
    else if(b==0){
        if(-c/a>=0&&c!=0){
            x1=sqrt(-c/a);
            cout<<"x="<<x1;
        }
        else if(c==0){
            cout <<"x=0";
        }
        else{
            cout<<"Ecuatia nu are solutii!";
        }
    }
}

