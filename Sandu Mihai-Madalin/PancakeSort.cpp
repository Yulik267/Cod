#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

void flip(int ar[], int i){
    int tp,st = 0;
    while (st < i){
        tp = ar[st];
        ar[st] = ar[i];
        ar[i] = tp;
        st++;
        i--;
    }
}

int max(int arr[], int n){
    int mi, i;
    for (mi = 0, i = 0; i < n; ++i)
        if (arr[i] > arr[mi])
            mi = i;
    return mi;
}

void sortareprinclatite(int *array,int n){
    //int size = sizeof(array);
    for (int curr_size = n; curr_size > 1;--curr_size){
        int mi = max(array,curr_size);

        if (mi != curr_size-1){
            flip(array, mi);
            flip(array, curr_size-1);
        }
    }
}

int main(){
    srand(time(NULL));
    int maxSz = 0;
    cout<<"Nr Max de valori:";
    cin >> maxSz;
    int ar[maxSz];
    for (int i = 0; i < maxSz; i++){
        ar[i] = rand() % (maxSz * 10);
        cout<<"ar["<<i<<"] = "<<ar[i]<<",";
    }
    cout<<endl;
    //cout<<sizeof(ar[0])<<endl;
    sortareprinclatite(ar,sizeof(ar)/sizeof(ar[0]));
    for (int i = 0; i < maxSz;i++){
        cout<< ar[i]<<",";
    }

}