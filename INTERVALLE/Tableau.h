#pragma once
class Tableau
{
public:
	Tableau(int t);
	~Tableau();
	Tableau(const Tableau &T);
	Tableau& operator=(const Tableau& T);
	const float& operator[] (int i);
	void afficher()const;


protected:
	int taille;
	float* Table;
};

