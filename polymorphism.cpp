#include <iostream>
using namespace std;


//  FUNC OVERLOADING


// class ApnaCollege
// {
//     public:
//     void fnc(){
//         cout<<"I am a fnc with no arguments" <<endl;

//     }
//     void fnc(int x){
//         cout<<" I am fnc with int argument"<<endl;

//     }


// void fnc(double x){

// cout<<"I am a func with double argument"<<endl;


// }


// }
// int main(){

// ApnaCollege u;
// u.fnc();
// u.fnc(4);
// u.fnc(6.2);

//     return 0;
// }





//    OPERATOR OVERLOADING


// class complex{
// private:
// int real,imag;
// public:
// complex(int r=0, int i=0){


// real=r;
// imag=i;
// }


// complex operator + (complex const &obj){
// complex res;
// res.imag=imag + obj.imag;
// res.real=real +  obj.real;
// return res;

// }

// void display(){
// cout<<real<<" + i"<<endl;
// }
// };

// int main(){
// complex c1(12,7),c2(6,7);
// complex c3= c1 +c2;
// c3.display();





//     return 0;
//}



// FUNC OVERRIDNG(WITH THE HELP OF VIRTUAL FNCS)


class base {
public:
 virtual void print(){
    cout<<"this is the base class's print  function"<<endl;
    
}
void display(){
    cout<<"this is the base class's display func"<<endl;

}

};

class derived:public  base 
{
    public:
    void print(){
    cout<<"this is the derived class's print  function"<<endl;

}
void display(){
    cout<<"this is the derived class's display func"<<endl;

}

    
};



int main(){
base *baseptr;
derived d;
baseptr=&d;
 baseptr ->print();
baseptr ->display();




    return 0;
}


