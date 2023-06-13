#include "dog.hpp"
#include <iostream>

//Construtor da classe Dog
//Dog::Dog(const string& name, int age, const string& breed): Pet(name, age), breed(breed) {}

Dog::~Dog(){}

void Dog::printDetails() const{
    cout << "Dog: " << name << " (" << breed << "), " << age << " years old" << endl;
}

bool Dog::isLabrador() const{
    if(breed == "Labrador"){
        return true;
    }
    else
        return false;
}

bool Dog::isCat() const{
    return false;
}

bool Dog::isDog() const{
    return true;
}
