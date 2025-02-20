#include <iostream>
using namespace std;

class c2;
class c1{
    int val1;
    friend void swap(c1 &, c2 &);
    public:
        void setData(int a){
            val1 = a;
        }
        void display(){
            cout<<val1<<endl;
        }

};
class c2{
    int val2;
    friend void swap(c1 &, c2 &);
    public:
        void setData(int a){
            val2 = a;
        }
        void display(){
            cout<<val2<<endl;
        }

};
void swap(c1 &a, c2 &b){
    a.val1 = a.val1^b.val2;
    b.val2 = a.val1^b.val2;
    a.val1 = a.val1^b.val2;
}

int main(){
    c1 objc1;    
    c2 objc2;
    objc1.setData(10);    
    objc2.setData(20);

    swap(objc1, objc2);
    cout<<"The value of Object 1 after swapping is : ";
    objc1.display();    
    cout<<"The value of Object 2 after swapping is : ";
    objc2.display();    

    return 0;
}
