#ifndef CAT_HPP_INCLUDED
#define CAT_HPP_INCLUDED
#include "pet.hpp"

//  Classe derivada para gatos
class Cat : public Pet {
protected:
    string color;

public:
    //Construtor da classe Cat
    Cat(const string& name, int age, const string& color);

    //Implementa��o do m�todo printDetails para gatos
    void printDetails() const override;
    bool isGray() const;
};

#endif // CAT_HPP_INCLUDED