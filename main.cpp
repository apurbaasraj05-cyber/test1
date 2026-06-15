#include <iostream>
using namespace std;

class Animal
{
public:
      virtual void makeSound()=0;
};

class Dog:public Animal
{
public:
      void makeSound()
      {
            cout<<"Woof\n";
      }
};

class Cat:public Animal
{
public:
      void makeSound()
      {
            cout<<"Meow\n";
      }
};

void giveFood(Animal *ap)
{
      if(Dog *dp =dynamic_cast<Dog*>(ap));
}
