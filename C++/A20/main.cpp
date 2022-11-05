#include <iostream>
#include <conio.h>
#include <string>

using namespace std;


class Usuarios {
    protected:
        int id;
        string name;
        int level;

    public:
        Usuarios(int _id, string _name, int _level);
        ~Usuarios();
        void show();
};

Usuarios::Usuarios(int _id, string _name , int _level) {
    id = _id;
    name = _name;
    level = _level;
};

Usuarios::~Usuarios() {
    cout << "Class desatruida" << endl;
};

void Usuarios::show() {
    cout << "USUARIO" << endl;
    cout << "ID da conta: " << id << endl;
    cout << "Nome do personagem: " << name << endl;
    cout << "Level do personagem: " << level << endl; 
    cout << endl;
};

//Class Filha;
class Players : public Usuarios {
    private:
        string className;
    public:
        Players(int _id, string _name, int _level, string _className);
        void showPlayer();
};

Players::Players(int _id, string _name, int _level, string _className) : Usuarios(_id, _name, _level) {
    className = _className;
};

void Players::showPlayer() {
    cout << "USUARIO" << endl;
    cout << "ID da conta: " << id << endl;
    cout << "Nome do personagem: " << name << endl;
    cout << "Level do personagem: " << level << endl;
    cout << "Nome da Classe: " << className << endl;
}


int main() {
    
    Players players = Players(1, "nica", 10, "Mago");
    players.showPlayer();


    //Usuarios users = Usuarios(1, "nica", 100);
    //users.show();
    //users.~Usuarios();

    //Usuarios users1 = Usuarios(2, "nicaa", 10);
    //users1.show();
    //users1.~Usuarios();

    getch();
    return 0;
}