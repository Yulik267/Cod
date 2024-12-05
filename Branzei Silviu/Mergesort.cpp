#include <iostream>
#include <vector>
using namespace std;

void sortare(vector<int>& vec , int st, int mij, int dr)
{
    int d1 = mij - st + 1;
    int d2 = dr - mij;

    int stlista[d1], drlista[d2];
    for(int i = 0; i < d1; i++)
        stlista[i] = vec[st + i];
    for(int i = 0; i < d2; i++)
        drlista[i] = vec[mij + 1 + i];

    int i = 0, j = 0, k = st;
    while(i < d1 && j < d2)
    {
        if(stlista[i] <= drlista[j])
        {
            vec[k] = stlista[i];
            i++;
        } else
        {
            vec[k] = drlista[j];
            j++;
        }
        k++;
    }
    while(i < d1)
    {
        vec[k] = stlista[i];
        i++;
        k++;
    }
    while(j < d2)
    {
        vec[k] = drlista[j];
        j++;
        k++;
    }
}

void mergesort(vector<int>& vec, int st, int dr)
{
    if(st < dr)
    {
        int mij = st + (dr - st) / 2;
        mergesort(vec, st, mij);
        mergesort(vec, mij + 1, dr);
        sortare(vec, st, mij, dr);
    }
}
int main()
{
	int n, i;
	cout << "Introduceti numarul de elemente ale vectorului: ";
	cin >> n;
    vector<int> vec(n);
	if(n > 100)
    {
    cout << "Vectorul are mai mult de 100 de elemente!" <<endl;
    return 1;
    }
    else
    {
	cout << "Introduceti elementele vectorului: " <<endl;
	for (i = 1; i <= n; i++)
	{
		cin >> vec[i];
	}
	mergesort(vec, 1, n);
	cout << "Vectorul sortat este: ";
	for(i = 1; i <= n; i++)
    {
    cout << vec[i] << " ";
    }
    return 0;
    }
}
