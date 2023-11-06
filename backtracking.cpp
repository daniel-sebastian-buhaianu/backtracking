#include <iostream>
#define NMAX 20
using namespace std;
int v[NMAX], n;
void bkt(int);
bool valid(int);
bool solutie(int);
void afiseazaSolutie();
int main()
{
	cout << "n = "; cin >> n;
	bkt(0);
	return 0;
}
void afiseazaSolutie()
{
	// afiseaza solutia
}
bool solutie(int k)
{
	// verifica daca vectorul v[] reprezinta o solutie
	// returneaza 1 in caz afirmativ, sau 0 altfel
}
bool valid(int k)
{
	// verifica daca vectorul v[] indeplineste conditiile problemei
	// dupa modificarea elementului v[k]
	// returneaza 1 in caz afirmativ, sau 0 altfel
}
void bkt(int k)
{
	for (int i = 0; i < n; i++)
	{
		v[k] = i;
		if (valid(k))
			if (solutie(k))
				afiseazaSolutie();
			else
				bkt(k+1);
	}
}
