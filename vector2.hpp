#ifndef VECTOR_H
#define VECTOR_H

#include <math.h>

namespace Airfoilspace
{
    class Vector2
    {
    public:
        real x;
        real y;

    private:
        real pad;

    public:
        Vector2();
        Vector2(const real x, const real y);

        Vector2 operator + (const Vector2& v);
        void operator += (const Vector2& v);

        Vector2 operator - (const Vector2& v);
        void operator -= (const Vector2& v);

        Vector2 operator * (const real value);
        void operator *= (const real value);
        void sumaEscalada(const Vector2& v, real escalar);

        void invertir();

        real magnitud() const;
        real magnitudCuadrada() const;

        void normalizar();

        Vector2 productoComponente(const Vector2& v);
        void productoComponenteUpdate(const Vector2& v);

        real productoPunto(const Vector2& v);
        real operator *(const Vector2& v) const;
    };
}

#endif // VECTOR_H
