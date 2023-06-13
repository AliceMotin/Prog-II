#include "pet.hpp"

//Construtor da classe pet
Pet::Pet(const string& _name, int _age): name(_name), age(_age) {}

//Destrutor da classe pet
Pet::~Pet(){}

int Pet::getAge(){
    return age;
}

string Pet::getName(){
    return name;
}

bool Pet::isCat(){
    return false;
}

bool Pet::isDog(){
    return false;
}
