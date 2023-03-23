#include <iostream>
#include <vector>

using namespace std;

int main(){

    bool quite = false;
    int option, findSub, fstring, dIndex, Pos;
    vector <string> words ;
    string addWord, substring, findString, strPos;

    do{
        cout << "UFxC String Store V.0" << endl << endl
             << "1. Insert string" << endl
             << "2. Print index and string" << endl
             << "3. Search string (literal) " << endl
             << "4. Search substrings" << endl
             << "5. Remove string (by index)" << endl
             << endl << "0. Quite" << endl;

        cin >> option;
        cout << endl;
        system("CLS");

        switch(option){

            case 0:
                quite = true;

                break;

            case 1:
                cout << "Insert string: ";
                cin >> addWord;
                cout << endl;
                words.push_back(addWord);

                break;

            case 2:
                for (int i = 0; i < words.size(); i++) {
                    cout << "Index: " << i << endl;
                    cout << "String: " << words [i] << endl;

                }

                break;

            case 3:
                cout << endl << "Find String: ";
                cin >> findString;
                cout << endl << "Words found: " << endl;

                for(int i = 0; i < words.size(); i++) {

                    if (findString == words[i]) {
                        cout << words[i] << endl;
                    }

                }
                cout << endl;

                break;

            case 4:
                cout << "Find substring: ";
                cin >> substring;
                cout << endl << "Words containing substring: " << endl;

                for (int i = 0; i < words.size(); i++){
                    findSub = words[i].find(substring);

                    if (findSub != -1){
                        cout << words[i] << endl;
                    }
                }
                cout << endl;

                break;

            case 5:
                cout << endl << "Insert Index: ";
                cin >> dIndex;
                cout << endl << "Index deleted" << endl;

                words.erase(words.begin()+dIndex);

                cout << endl;

                break;

            default:
                cout << "Input numbers between 0-6" << endl;
        }


    }while(!quite);

    return 0;
}
