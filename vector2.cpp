#include "Vector2.hpp"

using namespace Airfoilspace;

Vector2::Vector2() : x(0), y(0) {}

Vector2::Vector2(const real x, const real y) :
    x(x), y(y) {}

Vector2 Vector2::operator + (const Vector2& v)
{
    return Vector2(x + v.x, y + v.y);
}

void Vector2::operator += (const Vector2& v)
{
    x += v.x;
    y += v.y;
}

Vector2 Vector2::operator - (const Vector2& v)
{
    return Vector2(x - v.x, y - v.y);
}

void Vector2::operator -= (const Vector2& v)
{
    x -= v.x;
    y -= v.y;
}

Vector2 Vector2::operator * (const real value)
{
    return Vector2(x*value, y*value);
}

void Vector2::operator *= (const real value)
{
    x *= value;
    y *= value;
}

void Vector2::sumaEscalada(const Vector2& v, real escalar)
{
    x += v.x * escalar;
    y += v.y * escalar;
}

void Vector2::invertir()
{
    x = -x;
    y = -y;
}

real Vector2::magnitud() const
{
    return real_sqrt(x*x + y*y);
}

real Vector2::magnitudCuadrada() const
{
    return x*x + y*y;
}

void Vector2::normalizar()
{
    real l = magnitud();
    if (l>0)
    {
        (*this) *= ((real)1)/l;
    }
}

Vector2 Vector2::productoComponente(const Vector2& v)
{
    return Vector2(x*v.x, y*v.y);
}

void Vector2::productoComponenteUpdate(const Vector2& v)
{
    x *= v.x;
    y *= v.y;
}

real Vector2::productoPunto(const Vector2& v)
{
    return x*v.x + y*v.y;
}

real Vector2::operator *(const Vector2& v) const
{
    return x*v.x + y*v.y;
}
