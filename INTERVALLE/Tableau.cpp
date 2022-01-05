#include "Tableau.h"
#include <iostream>
#include<assert.h>
using namespace std;

Tableau::Tableau(int t)
{
	this->taille = t;
	this->Table = new float[t];
}

Tableau::~Tableau()
{
	delete[] this->Table;
	this->Table = nullptr;
	cout << "the object was deleted" << endl;
}

Tableau::Tableau(const Tableau& T)
{
	this->taille = T.taille;
	this->Table = new float[T.taille];
	for (int i = 0; i < T.taille; i++)
	{
		this->Table[i] = T.Table[i];
	}
}

Tableau& Tableau::operator=(const Tableau& T)
{
	if (this != &T) {
		delete[] this->Table;
		this->Table = nullptr;
		this->Table = new float[T.taille];
		for (int i = 0; i < T.taille; i++)
		{
			this->Table[i] = T.Table[i];
		}
	}
	return *this;
}

const float& Tableau::operator[](int i)
{
	assert(i >= 0 && i < this->taille);

	return this->Table[i];
}

void Tableau::afficher() const
{
	for (int i = 0; i < this->taille; i++)
	{
		cout << " | " << this->Table[i] << " | ";
	}
}
