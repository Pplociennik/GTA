#include <iostream>
#include "Interface.hpp"

using namespace std;

//class Weapons

Weapons::Weapons(string na, int da, int ra, double co, string de)
{
    name = na; damage = da; radius = ra; cost = co; description = de;
}
void Weapons::setName(string n)
{
    name = n;
}
void Weapons::setDamage(int d)
{
    damage = d;
}
void Weapons::setRadius(int r)
{
    radius = r;
}
void Weapons::setCost(double c)
{
    cost = c;
}
void Weapons::setDescription(string desc)
{
    description = desc;
}

string Weapons::getName()
{
    return name;
}
int Weapons::getDamage()
{
    return damage;
}
int Weapons::getRadius()
{
    return radius;
}
double Weapons::getCost()
{
    return cost;
}
string Weapons::getDescription()
{
    return description;
}

//classes of Weapons

Pistol::Pistol(string na, int da, int ra, double co, string de)
    :Weapons(na, da, ra, co, de)
{
    name = na; damage = da; radius = ra; cost = co; description = de;
}

Shotgun::Shotgun(string na, int da, int ra, double co, string de)
    :Weapons(na, da, ra, co, de)
{
    name = na; damage = da; radius = ra; cost = co; description = de;
}

Grenade::Grenade(string na, int da, int ra, double co, string de)
    :Weapons(na, da, ra, co, de)
{
    name = na; damage = da; radius = ra; cost = co; description = de;
}

Bazook::Bazook(string na, int da, int ra, double co, string de)
    :Weapons(na, da, ra, co, de)
{
    name = na; damage = da; radius = ra; cost = co; description = de;
}


