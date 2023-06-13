#ifndef DOG_HPP_INCLUDED
#define DOG_HPP_INCLUDED
#include "pet.hpp"

//Classe derivada para cães
class Dog : public Pet {
protected:
    string breed;

public:
    //Construtor da classe Dog
    Dog(const string& _name, int _age, const string& _breed);

    virtual ~Dog();

    //Implementação do método printDetails para cães
    void printDetails() const override;
    bool isLabrador();
    bool isCat() override;
    bool isDog() override;
};

#endif // DOG_HPP_INCLUDED
