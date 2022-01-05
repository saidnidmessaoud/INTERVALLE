#pragma once
#include "Tableau.h"
class TableauBorne : public Tableau
{
public:
	TableauBorne(int ,float max,float min);
	~TableauBorne();
	const float& operator[](int i);
	void operator()(int i,float nv);
	void saisir(int i);

private:
	float max, min;

};
