#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
vector<int> a = {};

void swapInts(int i,int j){
    int aux = a[i];
    a[i] = a[j];
    a[j] = aux;
};
void init(int max){
    for (int i = 0;i<max;i++){
        a.insert(a.begin() + i,1 + rand() % 999);
    };
    int n = a.size();
    for (int i = 0; i < n-1; i++){
        for (int j = i+1;j<n;j++){
            if (a[i] > a[j]){
                swapInts(i,j);
            }
        }
    }
}
void afisare(int n){
    for (int i = 0; i < n; i++){
        cout<<a[i]<<",";
    };
}

int main() {
    srand(time(NULL));
    int max;
    cout<<"nr max al vectorului: ";
    cin>>max;
    init(max);
    afisare(a.size());
    return 0;
}
