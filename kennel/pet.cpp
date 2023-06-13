#include "pet.hpp"

//Construtor da classe pet
Pet::Pet(const string& name, int age): name(name), age(age) {}

//Destrutor da classe pet
Pet::~Pet(){}

int Pet::getAge() const{
    return age;
}

string Pet::getName() const{
    return name;
}

//bool Pet::isCat() const{
  //  return false;
//}

//bool Pet::isDog() const{
  //  return false;
//}
