#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
// 1 scrieti un program in C++ care det. cel mai mare divizor comun pt 2 numere intregi citite la tastatura
// 2 scrieti un program care det. media si suma unei liste de elemente citite de la tastatura
// 3 scrieti un program care rez o ecuatie de gradul al 2-lea

//vector<int> returneazaTotiDiv(double n){
//    return divz;
//}

/*
 * d = b^2-(4*a*c)
 * d < 0 = nil
 * d > 0 x1,x2
 * */



int main() {
    double a,b,c;
    double x1,x2;
    //cout<<(-5 + 4.12311 )/(2*2)<<"\n"<<(-5 - 4.12311 )/(2*2)<<"\n";
    cout<<"introduce a,b,c:";
    cin>>a>>b>>c;
    if (a == 0 || b == 0 || c == 0){
        cout<<"nuh uh";
        return 5;
    };
//    if ((a == 0 && b == 0) || (b == 0 && c == 0)|| (a == 0 && b == 0)){
//        cout<<"nuh uh";
//        return 5;
//    };
    double d = pow(b,2) - (4*a*c);
    cout<<d<<" = d\n";
    if (d < 0){
        cout<<"nu are solutii";
    }else{
        double sqrtd = sqrt(d);
        cout<<"dqrtedD = "<<sqrtd<<"\n";
        x1 = (-b+ sqrtd)/(2*a);
        x2 = (-b- sqrtd)/(2*a);
    };
    cout<<"x1 = "<<x1<<"\n"<<"x2 = "<<x2<<"\n";
    return 0;
}
//(-5 + 4.12311 )/2*2