#ifndef KENNEL_HPP_INCLUDED
#define KENNEL_HPP_INCLUDED
#include "pet.hpp"
#include "dog.hpp"
#include "cat.hpp"


// Classe kennel para gerenciar os animais de estimação no canil
class Kennel {
private:
    Pet** pets; // Array de ponteiros para animais de estimação
    int capacity; // Capacidade máxima do pet shop
    int count; // Contador de animais de estimação atualmente no canil

public:

    Kennel();
    // Construtor do kennel
    Kennel(int capacity);

    // Destrutor do kennel
    ~Kennel();

    // Adiciona um animal de estimação ao kennel
    void addPet(Pet* pet);

    // Imprime os detalhes de todos os animais de estimação no kennel
    void printPetDetails();

    //métodos operadores
    int operator-(const Kennel& other);
    int operator++();
    int operator+(const string& name);
    int operator&&(const string& breed);
    int operator==(const string& color);

};


#endif // KENNEL_HPP_INCLUDED
