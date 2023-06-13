#ifndef KENNEL_HPP_INCLUDED
#define KENNEL_HPP_INCLUDED
#include "pet.hpp"
#include "dog.hpp"
#include "cat.hpp"


// Classe kennel para gerenciar os animais de estima��o no canil
class Kennel {
private:
    Pet** pets; // Array de ponteiros para animais de estima��o
    int capacity; // Capacidade m�xima do pet shop
    int count; // Contador de animais de estima��o atualmente no canil

public:

    Kennel();
    // Construtor do kennel
    Kennel(int capacity);

    // Destrutor do kennel
    ~Kennel();

    // Adiciona um animal de estima��o ao kennel
    void addPet(Pet* pet);

    // Imprime os detalhes de todos os animais de estima��o no kennel
    void printPetDetails();

    //m�todos operadores
    int operator-(const Kennel& other);
    int operator++();
    int operator+(const string& name);
    int operator&&(const string& breed);
    int operator==(const string& color);

};


#endif // KENNEL_HPP_INCLUDED
