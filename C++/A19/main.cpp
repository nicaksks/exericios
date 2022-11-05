#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

/*
class Usuarios {
    public:
        int id;
        string name;
        int level;
};

int main() {

    Usuarios user;
    
    user.name = "Nica";
    user.showName();

    getch();
    return 0;
}*/

//-------------------------------------------//

/*
class Usuarios {
    public:
        int id;
        string name;
        int level;
    
    void showName() {
        cout << name;
    }
};

int main() {

    Usuarios user;

    user.id = 1;
    user.name = "Nica";
    user.level = 10;

    cout << "ID do usuário: " << user.id << endl;
    cout << "Nome do usuário: " << user.name << endl;
    cout << "Level do personagem: " << user.level << endl;

    getch();
    return 0;
}*/

/*
class Usuarios {
    //Definições dos atributos;
    private:
        int id;
        string name;
        int level;
    
    //Definições do metodos;
    public:
    void setId(int _id);
    int getId();

    void setName(string _name);
    string getName();

    void setLevel(int _level);
    int getLevel();
};

//Implementação dos metodos;
void Usuarios::setId(int _id) {
    id = _id;
};

int Usuarios::getId() {
    return id;
};

void Usuarios::setName(string _name) {
    name = _name;
};

string Usuarios::getName() {
    return name;
};

void Usuarios::setLevel(int _level) {
    level = _level;
};

int Usuarios::getLevel() {
    return level;
};

int main() {

    Usuarios user;

    user.setId(1);
    cout << "ID do usuario: " << user.getId() << endl;

    user.setName("nica");
    cout << "Nome do personagem: " << user.getName() << endl;

    user.setLevel(5);
    cout << "Level do personagem: " << user.getLevel() << endl;

    getch();
    return 0;
};*/

class Usuarios {
    //Definições dos atributos;
    private:
        int id;
        string name;
        int level;
    
    //Definições do metodos;
    public:
        Usuarios(int _id, string _name, int _level);
        //Destruir a Class;
        ~Usuarios();

        void setId(int _id);
        int getId();

        void setName(string _name);
        string getName();

        void setLevel(int _level);
        int getLevel();
};

//Implementação dos metodos;
Usuarios::Usuarios(int _id, string _name, int _level) {
    id = _id;
    name = _name;
    level = _level;
};

Usuarios::~Usuarios() {
    cout << "Class destruida";
}

void Usuarios::setId(int _id) {
    id = _id;
};

int Usuarios::getId() {
    return id;
};

void Usuarios::setName(string _name) {
    name = _name;
};

string Usuarios::getName() {
    return name;
};

void Usuarios::setLevel(int _level) {
    level = _level;
};

int Usuarios::getLevel() {
    return level;
};

int main() {

    Usuarios user = Usuarios(1, "nica", 100);

    cout << "ID do usuario: " << user.getId() << endl;
    cout << "Nome do personagem: " << user.getName() << endl;
    cout << "Level do personagem: " << user.getLevel() << endl;

    user.~Usuarios();

    getch();
    return 0;
};