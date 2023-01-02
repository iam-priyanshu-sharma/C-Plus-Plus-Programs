/*  C++ Program of templated class derived from another templated class  */

#include <iostream>
#include <string>
#include<math.h>
using namespace std;

double M_PI = 3.14;

enum eColor { none = 0, red, white, blue, yellow, green, black };

class Color
{
public:
    Color(eColor color);
    void setColor(eColor color);
    eColor getColor() { return mColor; };
    std::string getStrColor();

protected:
    eColor mColor;
};

Color::Color(eColor _color)
{
   mColor = _color;
}

void Color::setColor(eColor _color)
{
    mColor = _color;
}

std::string Color::getStrColor()
{
    switch(mColor)
    {
       case red:
           return "red";
       case white:
           return "white";
       case blue:
           return "blue";
       case yellow:
           return "yellow";
       case green:
           return "green";
       case black:
           return "black";
       case none:
       default:
           return "none";
    }
}


template <typename T>
class Circle : public Color
{
public:
    Circle(T centerX, T centerY, T radius, eColor color);
    Circle(T centerX, T centerY, T radius);
    Circle(T radius);
    Circle();

    T area();
    T circumference();
    T getX();
    T getY();
    T getRadius();

protected:
    T x;
    T y;
    T radius;
};

template <typename T>
Circle<T>::Circle(T _x, T _y, T _radius, eColor _color)
: Color(_color)
{
    x = _x;
    y = _y;
    radius = _radius;
}

template <typename T>
Circle<T>::Circle(T _x, T _y, T _radius)
: Color(none)
{
    x = _x;
    y = _y;
    radius = _radius;
}

template <typename T>
Circle<T>::Circle(T _radius)
: Color(none)
{
    x = static_cast<T>(0);
    y = static_cast<T>(0);
    radius = _radius;
}

template <typename T>
Circle<T>::Circle()
: Color(none)
{
    x = static_cast<T>(0);
    y = static_cast<T>(0);
    radius = static_cast<T>(1);
}

template <typename T>
T Circle<T>::area()
{
    return M_PI * radius * radius;
}

template <typename T>
T Circle<T>::circumference()
{
    return static_cast<T>(2) * M_PI * radius;
}

template <typename T>
class Sphere : public Circle<T>
{
public:
    Sphere(T centerZ, T centerX, T centerY, T radius, eColor color);
    Sphere(T radius);
    Sphere();

    T surfaceArea();
    T volume();
    T getZ();

private:
    T z;
};

template <typename T>
Sphere<T>::Sphere(T _x, T _y, T _z, T _radius, eColor _color)
: Circle<T>::Circle (_x, _y, _radius, _color)
{
    this->z = _z;
}

template <typename T>
Sphere<T>::Sphere(T _radius)
: Circle<T>::Circle (_radius)
{
    // Defaults from Circle(_radius) constructor can also initialize x, y, z
    this->x = static_cast<T>(0);
    this->y = static_cast<T>(0);
    this->z = static_cast<T>(0);
    this->radius = _radius;
}

template <typename T>
Sphere<T>::Sphere()
{
    // Defaults from Circle() default constructor can also initialize values
    this->x = static_cast<T>(0);
    this->y = static_cast<T>(0);
    this->z = static_cast<T>(0);
    this->radius = static_cast<T>(1);
}

template <typename T>
T Sphere<T>::surfaceArea()
{
    return static_cast<T>(4) * M_PI * this->radius * this->radius;
}

template <typename T>
T Sphere<T>::volume()
{
    T three = 3;
    T four  = 4;
    return four * M_PI * this->radius * this->radius * this->radius / three;
}


int main(int argc, char* argv[])
{
    Sphere<float> sphereA(0.0, 0.0, 0.0,10.0, blue);
    cout << "\nVolume of SphereA :: " << sphereA.volume() << endl;
    cout << "\nColor of SphereA ::  "  << sphereA.getStrColor() << endl;
    return 0;
}