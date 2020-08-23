#include <stdio.h>
#include <iostream>
#include <string>

#ifndef DIRECCION
#define DIRECCION

class Direccion
{
        private:
                int posX;
                int posY;

        public:
                Direccion(int x, int y);
                ~Direccion();
                void *limitsup(Direccion *inicial, Direccion *fin);
                void *limitinf(Direccion *inicial, Direccion *fin);
                bool cruze(Direccion *inicial, Direccion *fin);
};

Direccion::Direccion(int x,int y)
{
        posX=x;
        posY=y;
}

bool Direccion::cruze(Direccion *inicial, Direccion *fin)
{
        return (!((a->posX <= posX) && (b->posX >= posX) && (a->posY <= posY)
                && (b->posY >= posY)));
}

//Pretende al punto hacerle un corrimiento a la derecha
void Direccion::limitsup(Direccion *inicial, Direccion *fin)
{
}

//Pretende al punto hacerle un corrimiento a la izquierda
void Direccion::limitinf(Direccion *inicial, Direccion *fin)
{

}

#endif
