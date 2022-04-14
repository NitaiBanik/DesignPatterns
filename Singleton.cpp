#include<bits/stdc++.h>
using namespace std;

class Singleton
{
    static Singleton *instance;

    Singleton()
    {
    };

public:
    static Singleton *getInstance()
    {
        if(!instance)
            instance = new Singleton;

        return instance;
    }
};
Singleton *Singleton::instance = 0;
int main()
{
    Singleton *s1 = s1->getInstance();
    Singleton *s2 = s2->getInstance();

    if(s1 == s2)
        cout<<"Same instance"<<endl;
    else
        cout<<"Not same instance"<<endl;
}
