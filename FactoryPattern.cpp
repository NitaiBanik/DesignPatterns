#include<bits/stdc++.h>
using namespace std;
class Animal
{
public:
    virtual void CanFly() = 0;
};

class Human: public Animal
{

public:
    void CanFly()
    {
        cout<<"Human can't fly."<<endl;
    }
};

class Bird: public Animal
{

public:
    void CanFly()
    {
        cout<<"Birds can fly."<<endl;
    }
};

class Elephent: public Animal
{

public:
    void CanFly()
    {
        cout<<"Elephant can't fly."<<endl;
    }
};

class Factory
{
public:
    virtual Animal* createAnimal() = 0;
};

class HumanFactory: public Factory
{

public:
    Animal* createAnimal()
    {
        return new Human;
    }
};

class BirdFactory: public Factory
{

public:
    Animal* createAnimal()
    {
        return new Bird;
    }
};

class ElephentFactory: public Factory
{

public:
    Animal* createAnimal()
    {
        return new Elephent;
    }
};

int main()
{
    Animal* animal;
    Factory* factory;

    factory = new HumanFactory;
    animal = factory->createAnimal();
    animal->CanFly();

    factory = new BirdFactory;
    animal = factory->createAnimal();
    animal->CanFly();

}
