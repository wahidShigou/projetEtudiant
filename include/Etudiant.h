#ifndef ETUDIANT_H
#define ETUDIANT_H
#include<string>

using namespace std;

namespace modeles
{
    typedef enum
    {
        ETUDIANT = 1, BOURSIER, LOGER
    }TYPE;
    class Etudiant
    {
        public:
            Etudiant();
            virtual ~Etudiant();

            unsigned int Getcpt() { return cpt; }
            void Setcpt(unsigned int val) { cpt = val; }
            int Getid() { return id; }
            void Setid(int val) { id = val; }
            string Getnom() { return nom; }
            void Setnom(string val) { nom = val; }
            string Getprenom() { return prenom; }
            void Setprenom(string val) { prenom = val; }
            virtual void affiche();
            virtual void saisie();
            virtual int Gettype(){ return ETUDIANT; }

        protected:
            int id;
            string nom;
            string prenom;

        private:
            static unsigned int cpt;
    };
};

#endif // ETUDIANT_H
