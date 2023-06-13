#ifndef CAT_HPP_INCLUDED
#define CAT_HPP_INCLUDED
#include "pet.hpp"

//  Classe derivada para gatos
class Cat : public Pet {
protected:
    string color;

public:
    //Construtor da classe Cat
    Cat(const string& _name, int _age, const string& _color);

    virtual ~Cat();

    //Implementação do método printDetails para gatos
    void printDetails() const override;
    bool isGray();
    bool isCat() override;
    bool isDog() override;
};

#endif // CAT_HPP_INCLUDED
