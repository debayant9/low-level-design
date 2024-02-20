#include <iostream>
#include <string>

using namespace std;

class Animal {
    public:
        virtual void printAnimal() {
            cout << "I am the Animal class" << endl;
        }

        void printAnimalTwo() {
            cout << "I am the animal class 3" << endl;
        }
};

class Tiger : public Animal {
    public:
        virtual void printAnimal() {
            cout << "I am the tiger" << endl;
        }
};


int main(){

    Animal *am = nullptr;
    am = new Tiger();

    am->printAnimal();
    am->printAnimalTwo();
}