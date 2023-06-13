#include "dog.hpp"

//Construtor da classe dog
Dog::Dog(const string& _name, int _age, const string& _breed): Pet(_name, _age), breed(_breed) {}

//Destrutor da classe dog
Dog::~Dog(){}

void Dog::printDetails() const{
    cout << "Dog: " << name << " (" << breed << "), " << age << " years old" << endl;
}

bool Dog::isLabrador(){
    if(breed == "Labrador"){
        return true;
    }
    else
        return false;
}

bool Dog::isCat(){
    return false;
}

bool Dog::isDog(){
    return true;
}
