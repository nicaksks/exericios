#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

struct users {
    int user_id;
    string name;
    int level;
    int experience;
};

int main() {

    /*
    users user0, user1;

    user0 = { 1, "nica", 10, 690 };
    user1 = { 2, "nicaa", 30, 1690 };

    cout << "ID da conta: "  << user0.user_id << endl;
    cout << "Nickname da conta: "  << user0.name << endl;
    cout << "Level do personagem: "  << user0.level << endl;
    cout << "Experiencia atual: "  << user0.experience << endl; 

    cout << "ID da conta: "  << user1.user_id << endl;
    cout << "Nickname da conta: "  << user1.name << endl;
    cout << "Level do personagem: "  << user1.level << endl;
    cout << "Experiencia atual: "  << user1.experience << endl; 

    ----------------------------------------------------------------------
    
    users user[1];

    cout << "ID da conta: "  << user[0].user_id << endl;
    cout << "Nickname da conta: "  << user[0].name << endl;
    cout << "Level do personagem: "  << user[0].level << endl;
    cout << "Experiencia atual: "  << user[0].experience << endl; 

    cout << "ID da conta: "  << user[1].user_id << endl;
    cout << "Nickname da conta: "  << user[1].name << endl;
    cout << "Level do personagem: "  << user[1].level << endl;
    cout << "Experiencia atual: "  << user[1].experience << endl; 
    */

    users user;

    cout << "ID da conta: ";
    cin >> user.user_id;

    cout << "Nome do personagem: ";
    cin >> user.name;

    cout << "Level da personagem: ";
    cin >> user.level;

    cout << "Experiencia do personagem: ";
    cin >> user.experience;

    cout << "ID da conta: " << user.user_id << endl;
    cout << "Nome do personagem: " << user.name << endl;;
    cout << "Level da personagem: " << user.level << endl;;
    cout << "Experiencia do personagem: " << user.experience << endl;;

    getch();
    return 0;
}