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

        Vector2 largoComponentes;
        real largo;
        Vector2 puntoCentral;
        real anguloInclinacion;
        int nombre;

        Vector2 normalPanel;
        real potencialVelocidad;
        real coeficientePresion;

    public:
        Panel(const Vector2& pI, const Vector2& pF);
        Vector2 vectoresPunto(Vector2 &k);

    private:
        Vector2 ComponentesLargo();
        real CalculoLargo();
        Vector2 CalculoPuntoCentral();
        real CalculoAngulo();
        int CalculoNombre();

        Vector2 CalculoNormal();

    public:
        Vector2 GetPuntoI();
        Vector2 GetPuntoF();

        Vector2 GetLargoComponentes();
        real GetLargo();
        Vector2 GetPuntoCentral();
        real GetAnguloInclinacion();
        int GetNombre();

        Vector2 GetNormalPanel();
        real GetPotencialVelocidad();
        real GetCoeficientePresion();

    };
}


#endif // PANEL_H
