#ifndef BOURSIER_H
#define BOURSIER_H
#include<string>
#include"Etudiant.h"

using namespace std;

namespace modeles
{
    enum
    {
        DEMI, COMPLET
    };
    class Boursier : public Etudiant
    {
        public:
            Boursier();
            virtual ~Boursier();




            int GetmntBourse() { return mntBourse; }
            void SetmntBourse(int val) { mntBourse = val; }
            string GettypeBourse() { if(typeBourse == COMPLET) return "COMPLET"; else return "DEMI"; }
            void SettypeBourse(int val) { typeBourse = val; }
            virtual void affiche();
            virtual void saisie();
            virtual int Gettype(){ return BOURSIER; }

        protected:

        private:
            int mntBourse;
            int typeBourse;
    };
};
#endif // BOURSIER_H
