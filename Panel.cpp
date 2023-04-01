#include "Panel.hpp"

using namespace Airfoilspace;

// Incializacion

Panel::Panel(const Vector2& pI, const Vector2& pF)
{
    PuntoI = pI;
    PuntoF = pF;

    largoComponentes = ComponentesLargo();
    largo = CalculoLargo();

    puntoCentral = CalculoPuntoCentral();
    anguloInclinacion = CalculoAngulo();

    nombre = 0;
    potencialVelocidad = 0;
    coeficientePresion = 0;
    normalPanel = Vector2();
}

// Metodos Generales

Vector2 Panel::vectoresPunto(Vector2& k)
{
    return Vector2();
}

// Calculo de características del Panel

Vector2 Panel::ComponentesLargo()
{
    return Vector2(PuntoF.x - PuntoI.x, PuntoF.y - PuntoI.y);
}

real Panel::CalculoLargo()
{
    return largoComponentes.magnitud();
}

Vector2 Panel::CalculoPuntoCentral()
{
    return Vector2((PuntoF.x + PuntoI.x)*0.5, (PuntoF.y + PuntoI.y)*0.5);
}

real Panel::CalculoAngulo()
{
    return atan(largoComponentes.y/largoComponentes.x);
}

// Metodos getter

Vector2 Panel::GetPuntoI()
{
    return PuntoI;
}

Vector2 Panel::GetPuntoF()
{
    return PuntoF;
}

Vector2 Panel::GetLargoComponentes()
{
    return largoComponentes;
}

real Panel::GetLargo()
{
    return largo;
}

Vector2 Panel::GetPuntoCentral()
{
    return puntoCentral;
}

real Panel::GetAnguloInclinacion()
{
    return anguloInclinacion;

}

int Panel::GetNombre()

        Vector2 GetNormalPanel();
        real GetPotencialVelocidad();
        real GetCoeficientePresion();
