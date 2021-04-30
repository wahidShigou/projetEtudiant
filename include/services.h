#ifndef SERVICES_H
#define SERVICES_H
#include<vector>
#include"Etudiant.h"

using namespace std;
using namespace modeles;

namespace services
{
    class Services
    {
        public:
            Services();
            virtual ~Services();
            virtual void addEtudiant(vector<Etudiant*> &etudiants);
            virtual void show(vector<Etudiant*> etudiants, TYPE type = ETUDIANT);
        protected:

        private:
    };
};
#endif // SERVICES_H
