//Name: Nishka Ranadive
//PRN: 24070123082
//Exp-14

//Program-5
#include<iostream>
using namespace std;

class Github{
    public:
    void disp(){
        cout<<"Repository is Private"<<endl;
    }

    private:
    void disp2(){
        cout<<"cout<<"Hello World"<<endl;";endl;
    }

    protected:
    
    int repo;
};

class User: protected Github{
    public:

    int user_id;
};

int main(){

    Github g1;
    g1.disp2();

    User u1;
    u1.user_id=123;
    u1.disp();
    u1.repo=13;

    cout<<"No. of Repositories:"<<u1.repo;

    return 0;
}