#include <iostream>
#include "Interface.hpp"

using namespace std;

Character::Character(string n, char hair)
{
    name = "Tommy";
    hitpoints = 100;
    money = 100.00;
    pistol = true;
    shotgun = false;
    grenade = false;
    bazook = false;
    weapon = "Pistol";
    armor = 0;
    pistol_ammo = 36;
    shotgun_ammo = 0;
    grenades = 0;
    bazook_ammo = 0;
    x = 1;
    y = 1;
    hairstyle = hair;
}

void Character::setName(string n)
{
    name = n;
}

void Character::setWeapon(string w)
{
    weapon = w;
}

void Character::setHitpoints(int hp)
{
    hitpoints = hp;
}

void Character::setArmor(int arm)
{
    armor = arm;
}

void Character::setMoney(double m)
{
    money = m;
}

string Character::getName()
{
    return name;
}

string Character::getWeapon()
{
    return weapon;
}

int Character::getHitpoints()
{
    return hitpoints;
}

int Character::getArmor()
{
    return armor;
}

double Character::getMoney()
{
    return money;
}

void Character::set_pistol_ammo(int pis)
{
    pistol_ammo = pis;
}

void Character::set_shotgun_ammo(int shot)
{
    shotgun_ammo = shot;
}

void Character::set_grenades(int boom)
{
    grenades = boom;
}

void Character::set_bazook_ammo(int rockets)
{
    bazook_ammo = rockets;
}

int Character::getPistol_ammo()
{
    return pistol_ammo;
}

int Character::getShotgun_ammo()
{
    return shotgun_ammo;
}

int Character::getGrenades()
{
    return grenades;
}

int Character::getBazook_ammo()
{
    return bazook_ammo;
}

char Character::getHairstyle()
{
    return hairstyle;
}

void Character::setX(int x1)
{
    x = x1;
}

void Character::setY(int y1)
{
    y = y1;
}

int Character::getX()
{
    return x;
}

int Character::getY()
{
    return y;
}

void Character::setPistol(int pis)
{
    pistol = pis;
}

void Character::setShotgun(int shot)
{
    shotgun = shot;
}

void Character::setGrenades(int boom)
{
    grenade = boom;
}

void Character::setBazook(int rocket)
{
    bazook = rocket;
}

int Character::getPistol()
{
    return pistol;
}

int Character::getShotgun()
{
    return shotgun;
}

int Character::getGrenade()
{
    return grenade;
}

int Character::getBazook()
{
    return bazook;
}
void Character::setHairstyle(char hair)
{
    hairstyle = hair;
}

int Character::getHP()
{
    return hitpoints;
}

