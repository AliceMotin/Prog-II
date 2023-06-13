#ifndef PET_HPP_INCLUDED
#define PET_HPP_INCLUDED
#include <iostream>
#include <string>

using namespace std;

//Classe base para animais de estima��o
class Pet {
protected:
    string name;
    int age;

public:
    //Construtor da classe Pet
    Pet(const string& _name, int _age);

    //Destrutor virtual para permitir polimorfismo
    virtual ~Pet();

    //M�todo virtual puro para imprimir os detalhes do animal de estima��o
    virtual void printDetails() const=0;

    int getAge();
    string getName();
    virtual bool isCat();
    virtual bool isDog();

};


#endif // PET_HPP_INCLUDED
