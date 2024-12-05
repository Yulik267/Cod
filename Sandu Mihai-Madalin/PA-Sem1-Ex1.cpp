#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
// 1 scrieti un program in C++ care det. cel mai mare divizor comun pt 2 numere intregi citite la tastatura
// 2 scrieti un program care det. media si suma unei liste de elemente citite de la tastatura
// 3 scrieti un program care rez o ecuatie de gradul al 2-lea

vector<int> returneazaTotiDiv(double n){
    vector<int> divz = {};
    int divzOcc = 0;
    for (int i = 1; i <= n;){
        double divNum = static_cast<double>(n/i);
        int intPart = divNum;
        double decPart = divNum - intPart;
        if (decPart == 0){
            divz.insert(divz.begin() + divzOcc,i);
            //divz[divzOcc] = i;
            divzOcc++;
        }
        i++;
        //cout<<"\n";
    }
    return divz;
}

int main() {
    cout << "Ex.1\n";
    double num1,num2;
    cout <<"Primul numar: ";
    cin >> num1;
    cout <<"Al doilea numar: ";
    cin >> num2;
    vector<int> d1 = returneazaTotiDiv(num1);
    vector<int> d2 = returneazaTotiDiv(num2);
    int sizeDiff = d1.size() - d2.size();
    if (sizeDiff < 0){
        sizeDiff *= -1;
    };
    int cmmd = 0;
    for (int i = 0; i < d1.size();i++){
        for (int j = 0; j < d2.size(); j++){
            if (d1[i] == d2[j]){
                cout<<"Divizori similari: "<<d1[i]<<" & "<<d2[j]<<"\n";
                if (d1[i] > cmmd){
                    cmmd = d1[i];
                };
            }
        }
    }
    cout<<"cel mai mare divizor == "<<cmmd<<"\n";
    return 0;
}