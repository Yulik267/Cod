#include <iostream>

using namespace std;

int func (int *divNum, int a){
    int z=1;
    for(int i=a;i > 0;i--){
            if(a % i == 0){
                divNum[z] = i;
                z++;
            }
        }
    return z;
}

int main()
{

    int a,b,j=0,z,maxNum,y;
    int divNum_a[20],divNum_b[20];
    cout<<"Introduceti doua numere:";
    cin>>a>>b;

    z = func(divNum_a,a);
    j = func(divNum_b,b);

    for(int i=z;i >0;i--){
            for(int g=j;g >0;g--){
                if(divNum_b[g] == divNum_a[i])
                    maxNum = divNum_b[g];
            }
    }
    cout<<maxNum;
    return 0;
}
