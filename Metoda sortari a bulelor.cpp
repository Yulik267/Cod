#include <iostream>

using namespace std;
//Metoda sortari a bulelor
int main(){
    int num,tmp,i;
    int v[100];
    cout<<"Introduceti marimea vectorului:";
    cin>>num;
    cout<<"Introduceti numerele in vector: ";
    for(i=0;i<num;i++){
        cin>>v[i];
    }
    int bule = 1;
    while(bule){
		bule = false;
		for (i = 0; i <= num - 2; i++) {
			if (v[i] > v[i + 1]) {
				tmp = v[i];
				v[i] = v[i + 1];
				v[i + 1] = tmp;
				bule = 1;
			}
		}
	}

	cout<<"Vector sortat: \n";
	for (i = 0; i < num; i++) {
		cout<<"Valoarea v["<<i+1<<"] = "<<v[i]<<endl;
	}
}
