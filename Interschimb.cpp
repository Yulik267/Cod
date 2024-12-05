#include <iostream>

using namespace std;

void interschimb(int *vect,int n) {
    bool stop = true;
    int tmp;
    for (int i = 0; stop; i++) {
        stop = false;

        for (int j = i; j < n; j++) {
            if (vect[j] < vect[i]) {
                tmp = vect[j];
                vect[j] = vect[i];
                vect[i] = tmp;
                stop = true;
            }

        }
    }
}
void afis(int *vect,int n) {
    cout << "Vectorul sortat:";
    for (int i = 0; i < n; i++) {
        cout << vect[i] << endl;
    }
}

void intr(int *vect,int &n) {
    cout << "Introduceti marimea vectorului:";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Introduceti numarul " << i + 1 << ":";
        cin >> vect[i];
    }
}

int main()
{
    int vect[50];
    int n;

    intr(vect, n);
    interschimb(vect, n);
    cout << endl;
    afis(vect, n);
}
