#ifndef PET_HPP_INCLUDED
#define PET_HPP_INCLUDED
#include <iostream>
#include <string>

using namespace std;

//Classe base abstrata para animais de estimação
class Pet {
protected:
    string name;
    int age;

public:
    //Construtor da classe Pet
    Pet(const string& name, int age);

    //Destrutor virtual para permitir polimorfismo
    virtual ~Pet();
    //~Pet();
    //Método virtual puro para imprimir os detalhes do animal de estimação
    virtual void printDetails() const = 0;
    //void printDetails() const = 0;

    int getAge() const;
    string getName() const;


};


#endif // PET_HPP_INCLUDED
