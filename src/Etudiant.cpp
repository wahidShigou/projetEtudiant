
#include "Etudiant.h"
#include<iostream>

using namespace std;
using namespace modeles;
unsigned int Etudiant::cpt = 0;

Etudiant::Etudiant()
{
    //ctor
    id = ++Etudiant::cpt;
}

Etudiant::~Etudiant()
{
    //dtor
}

void Etudiant::affiche()
{
    cout << "ID   : " << id << " NOM : " << nom << " PRENOM : " << prenom ;
        cout << "\n" << endl;
}
void Etudiant::saisie()
{
    cout << "SAISIR LE NOM : "; cin >> nom;
    cout << "SAISIR LE PRENOM : "; cin >> prenom;
}
