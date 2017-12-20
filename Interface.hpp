//#ifndef Interface_hpp
#define Interface_hpp
#include <iostream>

using namespace std;

void save_config(char up, char down, char left, char right);
void load_config_g();
void load_config_c();


class Character
{
    string name;
    string weapon;
    int hitpoints;
    int armor;
    double money;
    int pistol;
    int shotgun;
    int grenade;
    int bazook;
    int pistol_ammo;
    int shotgun_ammo;
    int grenades;
    int bazook_ammo;
    char hairstyle;
    int x;
    int y;

    public:
    Character(string n, char hair);
    void setName(string n);
    void setWeapon(string w);
    void setHitpoints(int hp);
    void setArmor(int arm);
    void setPistol(int pis);
    void setShotgun(int shot);
    void setGrenades(int boom);
    void setBazook(int rocket);
    void set_pistol_ammo(int pis);
    void set_shotgun_ammo(int shot);
    void set_grenades(int boom);
    void set_bazook_ammo(int rockets);
    void setMoney(double m);
    void setX(int x1);
    void setY(int y1);

    string getName();
    string getWeapon();
    int getHitpoints();
    int getArmor();
    double getMoney();
    int getPistol();
    int getShotgun();
    int getGrenade();
    int getBazook();
    int getPistol_ammo();
    int getShotgun_ammo();
    int getGrenades();
    int getBazook_ammo();
    int getX();
    int getY();
    int getHP();

    char getHairstyle();
    void setHairstyle(char hair);

};

//extern Character player("Tommy", '@');

class Weapons
{
protected:
    string name;
    int damage;
    int radius;
    double cost;
    string description;

public:
    Weapons(string na, int da, int ra, double co, string de);
    void setName(string n);
    void setDamage(int d);
    void setRadius(int r);
    void setCost(double c);
    void setDescription(string desc);

    string getName();
    int getDamage();
    int getRadius();
    double getCost();
    string getDescription();

};

class Pistol :public Weapons
{
    public:
    Pistol(string na, int da, int ra, double co, string de);
};

class Shotgun :public Weapons
{
    public:
    Shotgun(string na, int da, int ra, double co, string de);
};

class Grenade :public Weapons
{
    public:
    Grenade(string na, int da, int ra, double co, string de);
};

class Bazook :public Weapons
{
    public:
    Bazook(string na, int da, int ra, double co, string de);
};


void MainMenu(Character player);

void Options(Character player);

void Controls(Character player);

void start_new_game(Character player);


char createCharacter();

void option_error();

void gotoxy(int x, int y);
void goDown(int x, int y, char sign);
void goRight(int x, int y, char sign);
void goLeft(int x, int y, char sign);
void goUp(int x, int y, char sign);

void play(Character player);

void save_slot1(string name, string weapon, int hitpoints, int armor, double money, bool pistol, bool shotgun, bool grenade, bool bazook, int pistol_ammo, int shotgun_ammo, int grenades, int bazook_ammo, char hairstyle, int x, int y);
void save_slot2(string name, string weapon, int hitpoints, int armor, double money, bool pistol, bool shotgun, bool grenade, bool bazook, int pistol_ammo, int shotgun_ammo, int grenades, int bazook_ammo, char hairstyle, int x, int y);

void save_slot3(string name, string weapon, int hitpoints, int armor, double money, bool pistol, bool shotgun, bool grenade, bool bazook, int pistol_ammo, int shotgun_ammo, int grenades, int bazook_ammo, char hairstyle, int x, int y);

void load_slot1(Character player);

void load_slot2(Character player);

void load_slot3(Character player);

void load_slots_names();

void save_slots_names(string s1, string s2, string s3);

void PauseMenu(Character player);

void SaveGame(Character player);

void Loading();

void LoadGame(Character player);

void Manual(Character player);

void delete_save(Character player);

int MenuControls(int bego, int endo);
