#include "TableauBorne.h"
#include <iostream>
using namespace std;
#include<assert.h>

TableauBorne::TableauBorne(int t, float max, float min): Tableau(t)
{
	this->max = max;
	this->min = min;
}

TableauBorne::~TableauBorne()
{
	cout << "the object was deleted" << endl;
}

const float& TableauBorne::operator[](int i)
{
	assert(i >= 0 && i <this->taille);
	return this->Table[i];
}

void TableauBorne::operator()(int i, float nv)
{
	if (i >= 0 && i < this->taille)
	{
		if (nv >= this->min && nv <= this->max)
		{
			this->Table[i] = nv;
		}
	}
}

void TableauBorne::saisir(int i)
{
	float A;
	do
	{
		cout << "donnez la valeur : " << endl;
		cin >> A;
	} while (A < this->min || A > this->max);

		this->Table[i] = A;
	
}


