#include <iostream>
#include <time.h>
#include <windows.h>
#include <fstream>
#include "Interface.hpp"

using namespace std;

    string slot1_name="Zapis 1";
    string slot2_name="Zapis 2";
    string slot3_name="Zapis 3";

    void delete_save(Character player)
    {
        int save;
        load_slots_names();

        system("cls");

        cout << "Wybierz zapis do usuniecia:\n\n   1. " << slot1_name << endl << "   2. " << slot2_name << endl << "   3. " << slot3_name << "\n   Menu Glowne\n   Wczytaj Gre\n   Zapisz Gre";
        save = MenuControls(2, 7);

        string temp_slot_name;
        int read;
        switch(save)
        {
        case 1:
            if(slot1_name == "Zapis 1")
            {
                option_error();
                delete_save(player);
            }
            else{temp_slot_name = slot1_name;}
        break;
        case 2:
            if(slot2_name == "Zapis 2")
            {
                option_error();
                delete_save(player);
            }
            else{temp_slot_name = slot2_name;}
            break;
        case 3:
            if(slot3_name == "Zapis 3")
            {
                option_error();
                delete_save(player);
            }
            else{temp_slot_name = slot3_name;}
            break;
        case 4:
            MainMenu(player);
            break;
        case 5:
            LoadGame(player);
            break;
        case 6:
            SaveGame(player);
            break;
        default:
            option_error();
            delete_save(player);
        }
        system("cls");
        cout << "Czy na pewno chcesz usunac zapis '" << temp_slot_name << "' ?\n\n   TAK\n   NIE";
        read = MenuControls(2, 3);

        if(read == 1)
        {
            switch(save)
            {
            case 1:
                remove("save_slot1.txt");
                slot1_name = "Zapis 1";
                save_slots_names(slot1_name, slot2_name, slot3_name);
            break;
            case 2:
                remove("save_slot2.txt");
                slot2_name = "Zapis 2";
                save_slots_names(slot1_name, slot2_name, slot3_name);
                break;
            case 3:
                remove("save_slot3.txt");
                slot3_name = "Zapis 3";
                save_slots_names(slot1_name, slot2_name, slot3_name);
                break;
            }
        }
        else if(read == 2)
        {
            system("cls");
            delete_save(player);
        }
        else{option_error(); delete_save(player);}

        system("cls");
        cout << "Usunieto zapis!";
        Sleep(1000);
        delete_save(player);

        }


void save_slots_names(string s1, string s2, string s3)
{
    fstream plik;
    plik.open("save_slots_names.txt", ios::out);

    plik << s1 << endl;
    plik << s2 << endl;
    plik << s3 << endl;
    plik.close();
}

void load_slots_names()
{
    fstream plik;
    string linia;
    int numer = 0;

    plik.open("save_slots_names.txt",ios::in);

    if(plik.good())
    {
    // wczytujemy linie pliku do zmiennych
        while(getline(plik,linia))
        {
            switch(numer)
            {
                case 0:
                    slot1_name = linia.c_str();
                break;

                case 1:
                    slot2_name = linia.c_str();
                break;

                case 2:
                    slot3_name = linia.c_str();
                break;
                 }
            numer++;
        }

        plik.close();
        return;
    }
}

void SaveGame(Character player)
{
ShowConsoleCursor(false);

    system("cls");
    load_slots_names();
    int read;

    cout << "ZAPISZ GRE\n\n";
    cout << "   1. "<< slot1_name << endl << "   2. " << slot2_name << endl << "   3. " << slot3_name << endl << "   Usun Zapis\n" << "   Wroc";

    read = MenuControls(2, 6);

    switch(read)
    {
    case 1:
        if(slot1_name == "Zapis 1")
        {
            system("cls");
            cout << "Wpisz nazwe swojego zapisu: \n\n";
            cin >> slot1_name;

            save_slot1(player.getName(), player.getWeapon(), player.getHP(), player.getArmor(), player.getMoney(), player.getPistol(), player.getShotgun(), player.getGrenade(), player.getBazook(), player.getPistol_ammo(), player.getShotgun_ammo(), player.getGrenades(), player.getBazook_ammo(), player.getHairstyle(), player.getX(), player.getY());	//zapisywanie stanu gry
            system("cls");
            cout << "Gra zapisana!";
            Sleep(2000);
            system("cls");
            save_slots_names(slot1_name, slot2_name, slot3_name);
            SaveGame(player);
        }
        else
        {
            int read;
            system("cls");
            cout << "Czy chcesz nadpisac zapisana gre?\n\n" << "   TAK\n   NIE ";
            read = MenuControls(2, 3);
            if(read == 1)
            {
                            system("cls");
            cout << "Wpisz nazwe swojego zapisu: \n\n";
            cin >> slot1_name;

            save_slot1(player.getName(), player.getWeapon(), player.getHP(), player.getArmor(), player.getMoney(), player.getPistol(), player.getShotgun(), player.getGrenade(), player.getBazook(), player.getPistol_ammo(), player.getShotgun_ammo(), player.getGrenades(), player.getBazook_ammo(), player.getHairstyle(), player.getX(), player.getY());	//zapisywanie stanu gry
            system("cls");
            cout << "Gra zapisana!";
            Sleep(1000);
            system("cls");
            save_slots_names(slot1_name, slot2_name, slot3_name);
            SaveGame(player);
            }
            else if(read == 2)
            {
                system("cls");
                SaveGame(player);
            }
            save_slots_names(slot1_name, slot2_name, slot3_name);

        }
        break;
    case 2:
                if(slot2_name == "Zapis 2")
        {
                        system("cls");
            cout << "Wpisz nazwe swojego zapisu: \n\n";
            cin >> slot2_name;

            save_slot2(player.getName(), player.getWeapon(), player.getHP(), player.getArmor(), player.getMoney(), player.getPistol(), player.getShotgun(), player.getGrenade(), player.getBazook(), player.getPistol_ammo(), player.getShotgun_ammo(), player.getGrenades(), player.getBazook_ammo(), player.getHairstyle(), player.getX(), player.getY());	//zapisywanie stanu gry
            system("cls");
            cout << "Gra zapisana!";
            Sleep(1000);
            system("cls");
            save_slots_names(slot1_name, slot2_name, slot3_name);
            SaveGame(player);
        }
        else
        {
            int read2;
            system("cls");
            cout << "Czy chcesz nadpisac zapisana gre?\n\n" << "   TAK\n   NIE ";
            read2 = MenuControls(2, 3);
            if(read2 == 1)
            {
                            system("cls");
            cout << "Wpisz nazwe swojego zapisu: \n\n";
            cin >> slot2_name;

            save_slot1(player.getName(), player.getWeapon(), player.getHP(), player.getArmor(), player.getMoney(), player.getPistol(), player.getShotgun(), player.getGrenade(), player.getBazook(), player.getPistol_ammo(), player.getShotgun_ammo(), player.getGrenades(), player.getBazook_ammo(), player.getHairstyle(), player.getX(), player.getY());	//zapisywanie stanu gry
            system("cls");
            cout << "Gra zapisana!";
            Sleep(1000);
            system("cls");
            save_slots_names(slot1_name, slot2_name, slot3_name);
            SaveGame(player);
            }
            else if(read2 == 2)
            {
                system("cls");
                SaveGame(player);
            }
            save_slots_names(slot1_name, slot2_name, slot3_name);


        break;
    case 3:
                if(slot3_name == "Zapis 3")
        {
                        system("cls");
            cout << "Wpisz nazwe swojego zapisu: \n\n";
            cin >> slot3_name;

            save_slot3(player.getName(), player.getWeapon(), player.getHP(), player.getArmor(), player.getMoney(), player.getPistol(), player.getShotgun(), player.getGrenade(), player.getBazook(), player.getPistol_ammo(), player.getShotgun_ammo(), player.getGrenades(), player.getBazook_ammo(), player.getHairstyle(), player.getX(), player.getY());	//zapisywanie stanu gry
            system("cls");
            cout << "Gra zapisana!";
            Sleep(1000);
            system("cls");
            save_slots_names(slot1_name, slot2_name, slot3_name);
            SaveGame(player);
        }
        else
        {
            int read3;
            system("cls");
            cout << "Czy chcesz nadpisac zapisana gre?\n\n" << "   TAK\n   NIE ";
            read3 = MenuControls(2, 3);
            if(read3 == 1)
            {
                            system("cls");
            cout << "Wpisz nazwe swojego zapisu: \n\n";
            cin >> slot3_name;

            save_slot3(player.getName(), player.getWeapon(), player.getHP(), player.getArmor(), player.getMoney(), player.getPistol(), player.getShotgun(), player.getGrenade(), player.getBazook(), player.getPistol_ammo(), player.getShotgun_ammo(), player.getGrenades(), player.getBazook_ammo(), player.getHairstyle(), player.getX(), player.getY());	//zapisywanie stanu gry
            system("cls");
            cout << "Gra zapisana!";
            Sleep(1000);
            system("cls");
            save_slots_names(slot1_name, slot2_name, slot3_name);
            SaveGame(player);
            }
            else if(read3 == 2)
            {
                system("cls");
                SaveGame(player);
            }
            save_slots_names(slot1_name, slot2_name, slot3_name);

        }
            save_slots_names(slot1_name, slot2_name, slot3_name);

        break;
    case 4:
        system("cls");
        delete_save(player);
        break;
    case 5:
        system("cls");
        PauseMenu(player);
        break;
    }
}
}

void LoadGame(Character player)
{
ShowConsoleCursor(false);

    load_slots_names();
    system("cls");
    int choose;

    cout << "WCZYTAJ GRE\n\n" << "   1. " << slot1_name << "\n   2. " << slot2_name << "\n   3. " << slot3_name;
    cout << "\n   Menu Glowne\n" << "   Usun zapis";

    choose = MenuControls(2, 6);

    switch(choose)
    {
    case 1:
            if(slot1_name == "Zapis 1")
            {
                option_error();
                LoadGame(player);
            }
            else{
        system("cls");
        	Loading();
	system("cls");
	Loading();
	system("cls");
	 load_slot1(player);
            }
        break;

    case 2:
        if(slot2_name == "Zapis 2")
        {
            option_error();
            LoadGame(player);
        }
        else{
        system("cls");
        	Loading();
	system("cls");
	Loading();
	system("cls");
        load_slot2(player);
        }
        break;
    case 3:
        if(slot3_name == "Zapis 3")
        {
            option_error();
            LoadGame(player);
        }
        else{
        system("cls");
    Loading();
	system("cls");
	Loading();
	system("cls");
        load_slot3(player);
        }
        break;
    case 4:
        system("cls");
        MainMenu(player);
        break;
    case 5:
        system("cls");
        delete_save(player);
    default:
        system("cls");
        LoadGame(player);
        break;
    }

}
