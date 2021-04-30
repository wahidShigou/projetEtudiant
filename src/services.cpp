#include "services.h"
#include "Etudiant.h"
#include "Boursier.h"
#include "Loge.h"
#include<iostream>
#include<vector>

using namespace modeles;
using namespace std;
using namespace services;

Services::Services()
{
    //ctor
}

Services::~Services()
{
    //dtor
}
void Services::addEtudiant(vector<Etudiant*> &etudiants)
{
    int rep;
    Etudiant* etudiant;
    do
    {
        cin.ignore();
        cout << "\n\t\tSELECTIONNEZ LE TYE DU NOUVEAU ETUDIANT " << endl;
        cout << "\t\t  ETUDIANT (1) - BOURSIER (2) - LOGER(3)" << endl;
        cout << "\t\tVOTRE CHOIX : "; cin >> rep;
    }while(rep != ETUDIANT && rep != BOURSIER && rep != LOGER);
    switch(rep)
    {
        case ETUDIANT:
            etudiant = new Etudiant();
            break;
        case BOURSIER:
            etudiant = new Boursier();
            break;
        case LOGER:
            etudiant = new Loge();
            break;
    }
    etudiant->saisie();
    etudiants.push_back(etudiant);
}

void Services::show(vector<Etudiant*> etudiants, TYPE type)
{
    for(unsigned int i = 0; i < etudiants.size(); i++)
    {
        if(etudiants[i]->Gettype() == type)
            etudiants[i]->affiche();
    }
}

