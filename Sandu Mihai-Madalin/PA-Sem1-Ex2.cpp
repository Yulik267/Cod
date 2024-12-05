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

int main() {
    vector<int> tab;
    int maxSize;
    cout<<"introduce marimea vectorului (nu mai mult de 100 si mai mic de 2): ";
    cin>>maxSize;
    if (maxSize > 100 || maxSize < 2){
        maxSize = 2;
    }
    for (int i = 0; i < maxSize;i++){
        cout<<"introduce Nr. "<<i+1<<": ";
        int n;
        cin>>n;
        tab.insert(tab.begin() + i,n);
    }
    int medArit,sumList = 0;
    for (int i = 0; i < maxSize; i++){
        sumList += tab[i];
    }
    medArit = sumList / maxSize;
    cout<<"Suma = "<<sumList<<"| Media Arit: "<<medArit;
    return 0;
}
