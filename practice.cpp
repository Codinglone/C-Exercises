#include <iostream>
#include <string>
using namespace std;

class Animal {
    public: 
        Animal(){
            cout<<"Hello there!"<<endl;
        }
    
    void sayHi();
};

class Human: public Animal {
    public: 
        string names;

        Human(){
            this->names = "Codinglone";
        }
};

void Animal::sayHi(){
    cout<<"Hi There!"<<endl;
}

int main(){
    Animal animal;
    animal.sayHi();
    Human human;
    human.sayHi();
    cout<<"Hello "<<human.names<<endl;
    return 0;
}