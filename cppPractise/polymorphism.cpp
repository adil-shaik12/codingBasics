#include <iostream>
#include <string>
using namespace std;
class Animal {
    public:
    void animalSound() {
        cout<<"The animal makes a sound \n";
    }
};
class Pig : public Animal {
    public:
    void animalSound() {
      cout<<"The pig says: wee wee \n";
    }
};
class Dog : public Animal {
    public:
    void animalSound() {
      cout<<"The dog says: bow wow \n";
    }
};
class cat:public Animal{
    public:
    void animalSound(){
        cout<<"the cat says: meow meow \n";
    }
};
int main() {
  Animal myAnimal;
  Pig myPig;
  Dog myDog;
  cat mycat;
  myAnimal.animalSound();
  myPig.animalSound();
  myDog.animalSound();
  mycat.animalSound();
  return 0;
}
