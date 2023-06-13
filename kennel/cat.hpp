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

    virtual ~Cat();

    //Implementação do método printDetails para gatos
    void printDetails() const override;
    bool isGray() const;
    bool isCat() const;
    bool isDog() const;
};

#endif // CAT_HPP_INCLUDED
