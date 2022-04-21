#include<bits/stdc++.h>
using namespace std;

class IBackpack
{
public:
    virtual void assemble() = 0;
};

class PlainBackpack: public IBackpack
{
public:
    virtual void assemble()
    {
        cout<<"MainCompartment with";
    }
};

class BackpackDecorator: public IBackpack
{
    IBackpack* _decorator;
public:
    BackpackDecorator(IBackpack* decorator)
    {
        _decorator = decorator;
    }
    virtual void assemble()
    {
        _decorator->assemble();
    }
};

class LaptopBackpackDecorator: public BackpackDecorator
{
public:
    LaptopBackpackDecorator(IBackpack* decorator): BackpackDecorator(decorator) {}
    virtual void assemble()
    {
        BackpackDecorator :: assemble();
        cout<<" Laptop"<<endl;
    }
};

int main()
{
    IBackpack* bp = new PlainBackpack();

    IBackpack* lbp = new LaptopBackpackDecorator(bp);
    lbp->assemble();
}
