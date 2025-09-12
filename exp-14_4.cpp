//Name: Nishka Ranadive
//PRN: 24070123082
//Exp-14

//Program-4
#include<iostream>
using namespace std;

class Entc{
    public:

    int students;
    cout<<"Total Students are: "<<students;
};

class Vlsi: public Entc{
    public:

    int studv;
    cout<<"No. of Students in VLSI: "<<studv;
};

class Embedded: public Entc{
    public:

    int stude;
    cout<<"No. of Students in Embedded Systems: "<<stude;
};

class Verifengg: public Vlsi{
    public:

    int studverif;
    cout<<"No. of Verification Engineers: "<<studverif;
};

class Designengg: public Vlsi{
    public:

    int studdesign;
    cout<<"No. of Design Engineers: "<<studdesign;
};

class Developer: public Embedded{
    public:

    int studdev;
    cout<<"No. of Developers: "<<studdev;
};

class Micro: public Embedded{
    public:

    int studmicro;
    cout<<"No. of Students in Microcontrollers: "<<studmicro;
};

int main(){

    Verifengg v1;
    v1.students=100;
    v1.studverif=10;

    Designengg de1;
    de1.students=100;
    de1.studdesign=5;

    Developer d1;
    d1.students=100;
    d1.studdev=40;

    Micro m1;
    m1.students=100;
    m1.studmicro=20;

    return 0;
}