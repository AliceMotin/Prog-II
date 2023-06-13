#include "cat.hpp"
#include <iostream>

//Construtor da classe Cat
//Cat::Cat(const string& name, int age, const string& color): Pet(name, age), color(color) {}

Cat::~Cat(){}

void Cat::printDetails()const{
    cout << "Cat: " << name << " (" << color << "), " << age << " years old" << endl;
}

bool Cat::isGray() const{
    if(color == "Gray"){
        return true;
    }
    else
        return false;
}

bool Cat::isCat() const{
    return true;
}

bool Cat::isDog() const{
    return false;
}
