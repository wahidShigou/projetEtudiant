#include "Loge.h"
#include<iostream>

using namespace std;
using namespace modeles;

Loge::Loge()
{
    //ctor
}

Loge::~Loge()
{
    //dtor
}

void Loge::affiche()
{
    Etudiant::affiche();
    cout << "NUMERO BATIMENT   : " << numBat << " NUMERO CHAMBRE : " << numCh << endl ;
        cout << "\n" << endl;
}
void Loge::saisie()
{
    Etudiant::saisie();
    do
    {
        cout << "SAISIR LE NUMERO DU BATIMENT : "; cin >> numBat;
    }while(numBat <= 0);
    do
    {
        cout << "SAISIR LE NUMERO DE LA CHAMBRE : "; cin >> numCh;
    }while(numCh <= 0);
}
