#pragma once
class voiture
{
private:
	string marque;
	int puissance;
	int kilometrage;
public:
	voiture(int puissance, int kilometrage, string _marque );
	void parcourir(int distance );
	void lire_caracteristiques();
	

};

