#include "Boursier.h"
#include "Etudiant.h"
#include<iostream>

using namespace std;
using namespace modeles;

Boursier::Boursier()
{
    //ctor
}

Boursier::~Boursier()
{
    //dtor
}

void Boursier::affiche()
{
    Etudiant::affiche();
    cout << "MONTANT BOURSE   : " << mntBourse << " TYPE BOURSE : " << GettypeBourse() << endl ;
        cout << "\n" << endl;
}
void Boursier::saisie()
{
    Etudiant::saisie();
    do
    {
        cout << "SAISIR LE TYPE DE LA BOURSE : [ 0 pour DEMI / 1 pour COMPLET ] : "; cin >> typeBourse;
    }while(typeBourse != COMPLET && typeBourse != DEMI);
    if(typeBourse == COMPLET) mntBourse = 40000;
    else mntBourse = 20000;
}
