#include <iostream>
#include"Tableau.h"
#include"TableauBorne.h"
#include <iostream>
using namespace std;

int main()
{
	int taille;
	cout << "donnez la taille : ";
	cin >> taille;
    TableauBorne A(taille, 12, 2);


	for (int i = 0; i < taille; i++)
	{
		A.saisir(i);
	}

	cout <<"\nla valeur de la premiere case de tableau est : "<< A[0] << endl;
	A.afficher();
	A(0, 11);
	cout << "\n \nApres la modification on a :" << endl;
    A.afficher();
	cout << endl;
}

