#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;
public:
    int d, e;

    void setData(int a1, int b1,int c1);    //Declaration of function   
    void getData(){
        cout<<"The value of a is : "<<a<<endl;
        cout<<"The value of b is : "<<b<<endl;
        cout<<"The value of c is : "<<c<<endl;
        cout<<"The value of d is : "<<d<<endl;
        cout<<"The value of e is : "<<e<<endl;
    }
};

    void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    Employee virender, sahil;
    virender.d = 4;
    virender.e = 5;
    virender.setData(1,2,3);
    virender.getData();

    sahil.d = 3;
    sahil.e = 4;
    sahil.setData(1,3,5);
    sahil.getData();

    return 0;
}
