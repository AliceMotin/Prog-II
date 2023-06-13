#include "cat.hpp"

//Construtor da classe cat
Cat::Cat(const string& _name, int _age, const string& _color): Pet(_name, _age), color(_color) {}

//Destrutor da classe cat
Cat::~Cat(){}

void Cat::printDetails()const{
    cout << "Cat: " << name << " (" << color << "), " << age << " years old" << endl;
}

bool Cat::isGray(){
    if(color == "Gray"){
        return true;
    }
    else
        return false;
}

bool Cat::isCat(){
    return true;
}

bool Cat::isDog(){
    return false;
}
