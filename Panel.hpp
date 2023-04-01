#ifndef PANEL_H
#define PANEL_H

#include "Vector2.hpp"

namespace Airfoilspace
{
    class Panel
    {
    private:
        Vector2 PuntoI;
        Vector2 PuntoF;

        real largo;
        Vector2 largoComponentes;
        Vector2 puntoCentral;
        real anguloInclinacion;
        int nombre;

        Vector2 normalPanel;
        real potencialVelocidad;
        real coeficientePresion;

    public:
        Panel(const Vector2& pI, const Vector2& pF);
        Vector2 vectoresPunto(Vector2 &k);

    };
}


#endif // PANEL_H
