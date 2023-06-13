/*

Trabalho III

Disciplina: Linguagem de Programação II
Estudante: Alice Motin Bastos
Matrícula: 22201175

*/

#include "kennel.hpp"

using namespace std;

int main() {

    //Cria um objeto Kennel com capacidade para 5 animais de estimação
    Kennel kennel(5);

    //Cria objetos Dog e Cat
    Dog* dog1 = new Dog("Lola", 3, "Labrador");
    Cat* cat1 = new Cat("Lola", 5, "Gray");
    Dog* dog2 = new Dog("Mimi", 2, "Golden Retriever");
    Cat* cat2 = new Cat("Lupita", 10, "Black");

    //Adiciona animais ao canil
    kennel.addPet(dog1);
    kennel.addPet(cat1);
    kennel.addPet(dog2);
    kennel.addPet(cat2);

    //Imprime o detalhe de todos os animais de estimação do canil
    kennel.printPetDetails();

    int printLimit = kennel - kennel;
    cout << endl << "Number of animals left to reach the limit:" << printLimit << endl;

    int printElderly = ++kennel;
    cout << "Number of elderly animals:" << printElderly << endl;

    int printLola = kennel + "Lola";
    cout << "Number of animals named Lola:" << printLola << endl;

    int printLabrador = kennel && "Labrador";
    cout << "Number of labrador dogs:" << printLabrador << endl;

    int printGray = kennel == "Gray";
    cout << "Number of gray cats:" << printGray << endl;

    //Libera a memória alocada dinamicamente
    delete dog1;
    delete cat1;
    delete dog2;
    delete cat2;

    return 0;
}
