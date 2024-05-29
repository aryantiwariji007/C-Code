#include<iostream>
using namespace std;

class Hero{
    private:

    int health;
   public:
    char level;
    char *name;
    static int timeTocomplete;
   
   
   Hero(){
        cout<<" simple constructor called";
        name=new char[100];
   }
    //parameterized constructor

    Hero(int health){
        cout<<"this->"<<this<<endl;
        this->health=health;
    }
     Hero(int health,char level){
        this->level=level;
        cout<<"this->"<<this<<endl;
        this->health=health;
    }


    //copy contructor
    Hero(Hero& temp){
        this->health=temp.health;
        this->level=temp.level;
    }
 void print(){
    cout<<"copy contructor called"<<endl;
        cout<<"level"<<this->level<<endl;
        cout<<"health"<<this->health<<endl;
    }
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health=h;

    }
    void setLevel(char ch){
        level=ch;
    }
    
    //Destructor

    ~Hero(){
        cout<<"Destructor bhai called"<<endl;   
    }
   
};




int Hero::timeTocomplete=5;

int main(){

    cout<<Hero::timeTocomplete<<endl;
    















    // Hero hero1;
    // hero1.setHealth(12);
    // hero1.setLevel('D');
   
    // // hero1.setName();
    // hero1.print();

    // Hero S(70,'C');
    // S.print();

    // //copy constructor


    // Hero R(S);
    // R.print();
    



// //STATIC ALLOCATION
// Hero a(100);
// cout<<"address of a"<<&a<<endl;
// // a.setHealth(80);
// a.getHealth();
// // a.setLevel('A');

// // cout<<"level Is:"<<a.level<<endl;
// // cout<<"health is"<<a.getHealth()<<endl;

// // //DYNAMICALLY ALLOCATION
// // Hero *b=new Hero;
// // b->setHealth(70);
// // b->setLevel('A');
// cout<<"level Is:"<<(*b).level<<endl;
// cout<<"health is"<<(*b).getHealth()<<endl;

// cout<<"level Is:"<<b->level<<endl;
// cout<<"health is"<<b->getHealth()<<endl;

// // Hero ramesh;
// // ramesh.setHealth(70);
// // ramesh.level='A';
// // // cout<<"size:"<<sizeof(ramesh)<<endl;
// // cout<<"health is:"<<ramesh.getHealth()<<endl;
// //  cout<<"level is:"<<ramesh.level<<endl;
// //  cout<<"size of ramesh is:"<<sizeof(ramesh);
// Hero temp(22,'B');
// temp.print();

// use default copy constructor

// Hero hero2(hero1);
// hero2.print();


    return 0;
}