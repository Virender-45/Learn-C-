#include<iostream>

using namespace std;

class Base1{
  public:
    void greet(){
      cout<<"How are you"<<endl;
    }
};

class Base2{
  public:
    void greet(){
      cout<<"Kaise Ho"<<endl;
    }
};

class Derived : public Base1, public Base2{
    int a;
    public:
        void greet(){
          base1::greet();
        }
};

int main(){
  Derived obj;
  obj.greet();

  return 0;
}
