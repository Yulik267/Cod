// Media aritmetica / suma a n elemente.cpp

#include <iostream>

using namespace std;


int main() {
    int n, s = 0;
    double m;
    cout << "Introduceti numarul de elemente citite de la tastatura: ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        cout << "Introduceti elementul " << (i + 1) << ": ";
        cin >> num;
        s += num;
    }
    m = static_cast<double>(s) / n;
    cout << "Suma elementelor este: " << s << endl;
    cout << "Media elementelor este: " << m << endl;
    return 0;

}


