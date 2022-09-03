#include<bits/stdc++.h>
using namespace std;

class Singleton
{
    static Singleton *instance;
    static mutex mtx;
    static int instanceCount;

    Singleton()
    {
        instanceCount++;
        cout<<"total instance = "<<instanceCount<<endl;
    }

public:
    static Singleton *getInstance()
    {
        if(!instance)
        {
            mtx.lock();
            if(!instance)
            {
                instance = new Singleton();
            }
            mtx.unlock();
        }

        return instance;
    }
};

Singleton* Singleton::instance = nullptr;
int Singleton::instanceCount = 0;
mutex Singleton:: mtx;

void instance1()
{
    Singleton::getInstance();
}

void instance2()
{
    Singleton::getInstance();
}

int main()
{
    thread first(instance1);
    thread second(instance2);
    first.join();
    second.join();
}
