#include<bits/stdc++.h>
using namespace std;

class HrRound{

public:
    void LeadershipInterview(){
        cout<<"Take leadership interview"<<endl;
    }

    void BehaviouralInterview(){
         cout<<"Take Behavioural interview"<<endl;
    }

     void GeneralInterview(){
         cout<<"Take general interview"<<endl;
    }
};

class TechnicalRound{
public:
    void CodingInterview(){
        cout<<"Take coding Interview"<<endl;
    }

    void TechnicalInterview(){
        cout<<"Take Technical Interview"<<endl;
    }

    void VivaInterview(){
        cout<<"Take Viva Interview"<<endl;
    }
};

class HireProgrammer{
    HrRound hrRound;
    TechnicalRound technicalRound;

public:
    void Hire(){
        cout<<"Hiring programmer steps: "<<endl;
        hrRound.GeneralInterview();
        technicalRound.CodingInterview();
        technicalRound.VivaInterview();
    }
};

int main(){
    HireProgrammer hireProgrammer;
    hireProgrammer.Hire();
}
