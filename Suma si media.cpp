#include <iostream>

using namespace std;

int main(){
    int vect[50];
    int sizes,sum=0,media;
    cout<<"Introduceti marimea vectorului:";
    cin>>sizes;
    cout<<"Introduceti numerele in vector:";
    for(int i=0;i<sizes;i++){
        cin>>vect[i];
        sum +=vect[i];
    }
    media = sum/sizes;
    cout<<"Media:"<<media<<endl;
    cout<<"Suma:"<<sum;
}

