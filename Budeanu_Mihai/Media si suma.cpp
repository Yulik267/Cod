/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main() {
int n;
double suma = 0.0 , media= 0.0;

cout << "Introdu numarul de elemente din lista: ";
 cin >> n;
 
 int lista[n];
 
 cout << "Introdu elementele: " << endl;
 for (int i=0; i < n ;  i++) {
     cin >>lista[i];
     suma += lista[i];
     
 }
 if (n>0) {
     media = suma / n ;
 }
 
 cout <<"Suma elementelor este " << suma << endl;
 cout <<"Media elementelor este " << media << endl;


    return 0;
}