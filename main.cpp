#include <iostream>
#include<cstdlib>
#include<vector>
#include"services.h"
#include"Etudiant.h"

using namespace std;
using namespace services;
using namespace modeles;

namespace views
{
    enum{
        ADD = 1, SHOWLOGER, SHOWBOURSIER, SHOWETUDIANT, QUITTER
    };
    unsigned int menu()
    {
        system("cls");
        unsigned int choix;
        cout << "\n\n\n\t\t1-----------               ADD ETUDIANT \n" << endl;
        cout << "\t\t2-----------                 SHOW LOGER \n" << endl;
        cout << "\t\t3-----------              SHOW BOURSIER \n" << endl;
        cout << "\t\t4-----------             SHOW ETUDIANTS \n" << endl;
        cout << "\t\t5-----------                    QUITTER \n\n" << endl;
        do
        {
            cout << "\t\t\t\tVOTRE CHOIX : " << endl;
            cin >> choix;
        }while(choix <ADD || choix > QUITTER);
        return choix;
    }
};

using namespace views;

int main()
{
    unsigned int choix;
    Services * service = new Services();
    vector<Etudiant*> etudiants;
    do
    {
        choix = menu();
        system("cls");
        switch(choix)
        {
            case ADD:
                service->addEtudiant(etudiants);
                break;
            case SHOWLOGER:
                service->show(etudiants,LOGER);
                break;
            case SHOWBOURSIER:
                service->show(etudiants,BOURSIER);
                break;
            case SHOWETUDIANT:
                service->show(etudiants);
                break;
        }
        cout << "\n" << endl;
        system("pause");
    }while(choix != QUITTER);
    return 0;
}
