#ifndef LOGE_H
#define LOGE_H
#include"Etudiant.h"

using namespace std;

namespace modeles
{
    class Loge : public Etudiant
    {
        public:
            Loge();
            virtual ~Loge();

            unsigned int GetnumBat() { return numBat; }
            void SetnumBat(unsigned int val) { numBat = val; }
            unsigned int GetnumCh() { return numCh; }
            void SetnumCh(unsigned int val) { numCh = val; }
            virtual void affiche();
            virtual void saisie();
            virtual int Gettype(){ return LOGER; }


        protected:

        private:
            unsigned int numBat;
            unsigned int numCh;
    };
};

#endif // LOGE_H
