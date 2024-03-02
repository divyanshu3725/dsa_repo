// HOME WORK
// what is padding
// what is greedy alignment
// const keyword
// initialization list

// NOT UNDERSTOOD
// shallow and deep copy (at 58 in lecture 42) (left)
// operator overloading (at 1:20 in Lecture 43) (made notes)

// 🟩 ABSTRACTION
// means hiding the implementation details 
// show only required things
// abstraction in classes is done using access modifiers
// advantages: (a) provides security

// // 🟩 METHOD OVERRIDING
// // in method overiding the method of the parent and the child class have the same name and same parameters
// // runtime polymorphism is possible only through inheritance
// #include <iostream>
// using namespace std;
// class A{
//     public:
//     void func()
//     {
//         cout<<"from a"<<endl;
//     };
// };
// class B{
//     public:
//     void func()
//     {
//         cout<<"from b"<<endl;
//     };
// };
// int main()
// {   
//     B b;
//     b.func();
// };

// 🟨 RUNTIME POLYMORPHISM
// also called dynamic polymorphism
// method overriding is an example

// // 🟨🟨🟨 OPERATOR OVERLOADING
// // all operators cannot be overloaded
// #include <iostream>
// using namespace std;
// class A{
//     public:
//     int a;
//     int b;
//     int add()
//     {
//         return a+b;
//     };
//     void operator+ (A &obj){
//         int value1 = this->a;
//         int value2 = obj.a;
//         cout<<"output "<<value2-value1<<endl; 
//     };
//     void operator() ()
//     {
//         cout<<"I am a bracket"<<endl;
//     };
// };
// int main()
// {
//     A obj1, obj2;
//     obj1.a = 2;
//     obj2.a = 4;
//     obj1+obj2;
//     obj1();
//     return 0;
// };

// // 🟩 FUNCTION OVERLAODING
// #include <iostream>
// using namespace std;
// class A{
//     public:
//     void sayHello(){
//         cout<<"Hello Chinu"<<endl;
//     };
//     void sayHello(string name){
//         cout<<"Hello " <<name<<endl;
//     };
// };
// int main()
// {
//     A a;
//     a.sayHello();
//     a.sayHello("Divyanshu");
//     return 0;
// };
// // we can overload functions by changing the parameter count or parameter type
// // we cannot overload functions by changing return type

// 🟨 COMPILE TIME POLYMORPHISM
// also called static polymorphism
// types: function overloading and operator overloading

// 🟨 POLYMORPHISM
// existing in multiple forms
// compile time and run time

// // 🟨 INHERITANCE AMBIGUITY
// // is solved usnig the scope resolution operator
// #include <iostream>
// using namespace std;
// class A{
//     public:
//     void func(){
//         cout<<"I am A"<<endl;
//     };
// };
// class B{
//     public:
//     void func(){
//         cout<<"I am B"<<endl;
//     };
// };
// class C : public A, public B{
//     public:
//     void funcC(){
//         cout<<"I am C"<<endl;
//     };
// };
// int main()
// {
//     C c;
//     c.A::func();
//     c.B::func();
//     return 0;
// };

// 🟩 HYBRID
// is a mixture

// // 🟩 HIERARCHICAL INHERITANCE
// // one class serves as parent class for more than one classes
// #include <iostream>
// using namespace std;
// class A{
//     public:
//     void introA(){
//         cout<<"I am A"<<endl;
//     };
// };
// class B : public A{
//     public:
//     void introB(){
//         cout<<"I am B"<<endl;
//     };
// };
// class C : public A{
//     public:
//     void introC(){
//         cout<<"I am C"<<endl;
//     };
// };
// int main()
// {
//     B b;
//     C c;
//     b.introA();
//     c.introA();
//     return 0;
// };

// // 🟩 MULTIPLE INHERITANCE
// #include <iostream>
// using namespace std;
// class A{
//     public:
//     void introA(){
//         cout<<"I am A"<<endl;
//     };
// };
// class B{
//     public:
//     void introB(){
//         cout<<"I am B"<<endl;
//     };
// };
// class C : public A, public B{
//     public:
//     void introC(){
//         cout<<"I am C"<<endl;
//     };
// };
// int main()
// {   
//     C c;
//     c.introA();
//     c.introB();
//     c.introC();
//     return 0;
// };

// // 🟩 MULTILEVEL INHERITANCE
// #include <iostream>
// using namespace std;
// class A{
//     public:
//     void introA(){
//         cout<<"I am A"<<endl;
//     };
// };
// class B : public A{
//     public:
//     void introB(){
//         cout<<"I am B"<<endl;
//     };
// };
// class C : public B{
//     public:
//     void introC(){
//         cout<<"I am C"<<endl;
//     };
// };
// int main()
// {
//     C c;
//     c.introA();
//     c.introB();
//     c.introC();
//     return 0;
// };

// // 🟩 SINGLE INHERITANCE
// #include <iostream>
// using namespace std;
// class Human{
//     public:
//     int pushUp;
//     int pullUp;
//     int sitUp;
//     void humanIntro(){
//         cout<<"I am human"<<endl;
//     };
// };
// class Superhuman : public Human{
//     public:
//     int oneHandPushUp;
//     int oneHandPullUp;
//     int oneLegSitUp;
//     void superhumanIntor()
//     {
//         cout<<"I am superhuman"<<endl;
//     };
// };
// int main()
// {
//     Superhuman chinu;
//     chinu.humanIntro();
//     chinu.superhumanIntor();
//     return 0;
// };

// 🟩 TYPES OF INHERITANCE
// single
// multilevel
// multiple
// hybrid
// hierarchial

// // 🟩 INHERITANCE
// #include <iostream>
// using namespace std;
// class Human{
//     public:
//     int height;
//     int weight;
//     int age;
//     int getAge()
//     {
//         return this->age;
//     };
//     void setAge(int a)
//     {
//         this->age = a;
//     };
//     int getWeight()
//     {
//         return this->weight;
//     };
//     void setWeight(int w)
//     {
//         this->weight = w;
//     };
//     int getHeight()
//     {
//         return this->height;
//     };
//     void setHeight(int h)
//     {
//         this->height = h;
//     };
// };
// class Male : public Human{
//     public:
//     int situps;
//     int pullups;
//     int pushups;
//     void sleep()
//     {
//         cout<<"sleeiping"<<endl;
//     };
// };
// int main()
// {
//     Male chinu;
//     chinu.setAge(21);
//     chinu.setHeight(5);
//     chinu.setWeight(55);
//     cout<<"chinu ka height: "<<chinu.height<<endl;
//     cout<<"chinu ka age: "<<chinu.age<<endl;
//     cout<<"chinu ka weight: "<<chinu.weight<<endl;
//     chinu.sleep();
//     return 0;
// };
// // when a class inherits some propereties and functions from another class it's called inheritance
// // parent class and sub class or child class
// // human is parent class, male and female are sub classes or child classes
// // we can inherit a class in different modes
// // syntax for inheriting is class childClassName : public parentClassNmae {}
// // publicly inheriting public members -> public
// // publicly inheriting protected members -> protected
// // publicly inheriting private members -> not accessible
// // protectedly inheriting public members -> protected
// // protectedly inheriting protected members -> protected
// // protectedly inheriting private members -> not accessible
// // private inheriting public members -> private
// // private inheriting protected members -> private
// // private inheriting private members -> not accessible
// // private data membere of super class cannot be inherited
// // protected data members can be acccessed from within the class and from child classes

// // 🟩 ENCAPSULATION
// #include <iostream>
// using namespace std;
// class Student{
//     private:
//     string name;
//     int age;
//     int height;
//     public:
//     int getAge()
//     {
//         return this->age;
//     };
// };
// int main()
// {
//     Student chinu;
//     cout<<"working"<<endl;
//     return 0;
// };
// // wrapping up data members and functions is called encapsulation
// // fully encapuslated class is a class in which all the data members are marked private
// // why encapsulation? for information/data hiding for making a class read only for code reusability for real testing

// // 🟨 STATIC KEYWORD
// #include<iostream>
// using namespace std;
// class Hero{
//     public:
//     static int statNum;
//     int health;
//     char level;
//     static int statFunc()
//     {
//         cout<<"inside static function"<<endl;
//         return statNum;
//     };
//     Hero(Hero &h)
//     {
//         cout<<"user defined copy constructor callled"<<endl;
//         this->health = h.health;
//         this->level = h.level;
//     }
//     Hero(){
//     }
//     Hero(int h, char level)
//     {
//         health = h;
//         this->level = level;
//     };
//     Hero(int h)
//     {
//         health = h;
//     };
//     void setHealth(int h)
//     {
//         health = h;
//     };
//     void setLevel(char l)
//     {
//         level = l;
//     };
//     ~Hero(){
//         cout<<"destructor called"<<endl;
//     };
// };
// int Hero :: statNum = 420;
// int main()
// {
//     cout<<Hero::statNum<<endl;
//     Hero h1;
//     cout<<h1.statNum<<endl;
//     cout<<Hero::statFunc()<<endl;
//     return 0;
// };
// // static keyword are used to for declaring members that belong to the class and not to the objects  
// // for this we need to use the static keyword
// // we have to intialize a static variable outside the class using the syntax type ClassNmae :: statVarName = value;
// // we don't have to create an object in order to access a static variable
// // but we can also access a static variable from an object (although it doesn't belong to the object)
// // this is a bad practice (because the static variable doesn't belong to any object)
// // this was all about static varialbes
// // we can also have static functions
// // they don't need object creation janjhat
// // they don't have any this keyword
// // because this point to current object, but while talking about static member and functions we do not have any current object
// // static functions can access static members only
// // if we try to access a non static varialbe inside the statuc function then the first error that we will get is that this cannot be used inside a static functions, when we remove the this keyword then we get another error saying that we cannot non static variables inside static functions

// // 🟨 DESCTRUCTOR
// #include<iostream>
// using namespace std;
// class Hero{
//     public:
//     int health;
//     char level;
//     Hero(Hero &h)
//     {
//         cout<<"user defined copy constructor callled"<<endl;
//         this->health = h.health;
//         this->level = h.level;
//     }
//     Hero(){
//     }
//     Hero(int h, char level)
//     {
//         health = h;
//         this->level = level;
//     };
//     Hero(int h)
//     {
//         health = h;
//     };
//     void setHealth(int h)
//     {
//         health = h;
//     };
//     void setLevel(char l)
//     {
//         level = l;
//     };
//     ~Hero(){
//         cout<<"destructor called"<<endl;
//     };
// };
// int main()
// {
//     Hero h1;
//     Hero *b = new Hero;
//     delete b;
//     return 0;
// };
// descturctor is used for deallocating the memory
// destructor is automatically created when we create a class
// name of destructor is the same as the name of the class
// we can also make our own destructor
// a destructor doesn't have any return type
// doesn't take any parameter
// to differentiate between the destrcutor and the constructor we use the ~
// destructor is automatically called for the objects that are made using static allocation
// it isn't called automatically for the objects that are made dynamically
// we need to call the destructor manually for dynamically made object
// how? using delete objName;
// if we have created a destructor then the automatically created destructor is not used at all,

// 🟩 COPY ASSINGNMENT OPERATOR
// #include<iostream>
// using namespace std;
// class Hero{
//     public:
//     int health;
//     char level;
//     Hero(Hero &h)
//     {
//         cout<<"user defined copy constructor callled"<<endl;
//         this->health = h.health;
//         this->level = h.level;
//     }
//     Hero(){
//     }
//     Hero(int h, char level)
//     {
//         health = h;
//         this->level = level;
//     };
//     Hero(int h)
//     {
//         health = h;
//     };
//     void setHealth(int h)
//     {
//         health = h;
//     };
//     void setLevel(char l)
//     {
//         level = l;
//     };
// };
// int main()
// {
//     Hero h1;
//     h1.setHealth(1);
//     h1.setLevel('a');
//     Hero h2;
//     h2.setHealth(2);
//     h2.setLevel('b');
//     cout<<"health of h1 is "<<h1.health<<endl;
//     cout<<"level of h1 is "<<h1.level<<endl;
//     h1 = h2;
//     cout<<"health of h1 is "<<h1.health<<endl;
//     cout<<"level of h1 is "<<h1.level<<endl;
// };
// doing obj1 = obj2 is called using the copy assignment operator

// // 🟨 COPY CONSTRUCTOR
// #include <iostream>
// using namespace std;
// class Hero{
//     public:
//     int health;
//     char level;
//     Hero(Hero &h)
//     {
//         cout<<"user defined copy constructor callled"<<endl;
//         this->health = h.health;
//         this->level = h.level;
//     }
//     Hero(){
//     }
//     Hero(int h, char level)
//     {
//         health = h;
//         this->level = level;
//     };
//     Hero(int h)
//     {
//         health = h;
//     };
//     void setHealth(int h)
//     {
//         health = h;
//     };
//     void setLevel(char l)
//     {
//         level = l;
//     };
// };
// int main()
// {
//     Hero chinu;
//     chinu.setHealth(999);
//     chinu.setLevel('9');
//     Hero divyanshu(chinu);
//     cout<<divyanshu.health<<endl; 
//     cout<<divyanshu.level<<endl; 
//     return 0;
// };
// for copying the content of one object into another object className objnew(objold);
// when we write a class, and inbuilt copy constructor is made automatically
// we can create our own copy constructor also
// why does the user defined copy constructor take &? because if we have to pass the old object by reference, if the we don't use the & then the object would be passed by value, and when someting is  passed by value, that means we are creating it's copy, and to create a copy of the object, we need to call the copy constructor, this will lead to an infinite loop, so we use & in the copy constructor

// // 🟨 PARAMETERIZED CONSTRUCTOR AND THIS KEYWORD
// #include <iostream>
// using namespace std;
// class Hero{
//     public:
//     int health;
//     char level;
//     Hero(int h, char level)
//     {
//         cout<<"this is "<<this<<endl;
//         health = h;
//         this->level = level;
//     };
//     Hero(int h)
//     {
//         cout<<"this is "<<this<<endl;
//         health = h;
//     };
//     void setHealth(int h)
//     {
//         health = h;
//     };
//     void setLevel(char l)
//     {
//         level = l;
//     };
// };
// int main()
// {
//     Hero chinu(999,'9');
//     cout<<"chinu's level: "<<chinu.level<<endl;
//     cout<<"addres of the object named chinu is "<<&chinu<<endl;
//     Hero divyanshu(10000);
//     cout<<"divyanshu's level: "<<divyanshu.health<<endl;
//     return 0;
// };
// this stores the address of current address
// we used this keyword when the name of the data member of class of the object is same as the name of the parameter of the constructor of the class
// if the name of the data member of the class of the classs of the object is differnt from the name of the parameter of the constructor of the class then we do not need to use the this keyword
// to print the address of an object we do like this: &objName
// 

// // 🟩 DEFAULT CONSTRUCTOR
// #include <iostream>
// using namespace std;
// class Hero{
//     public:
//     Hero()
//     {
//         cout<<"Hero class invoked"<<endl;
//     }    
//     int health;
//     char level;
//     void setHealth(int h)
//     {
//         health = h;
//     };
//     void setLevel(char l)
//     {
//         level = l;
//     };
// };
// int main()
// {
//     Hero ramesh;
//     Hero *suresh = new Hero;
//     return 0;
// };
// // when we create an object the constructor of the class is called
// // constructor does not have any return type
// // default constructor  
// // constructor is callled everytime an object is made
// // constructor is also called if we are making an object dynamically
// // if we have made our own constructor, then the default contructor won't be used anymore

// // 🟨 DYNAMIC ALLOCATION IN CLASSES AND OBJECTS
// #include <iostream>
// using namespace std;
// class Hero{
//     public:
//     int health;
//     char level;
//     void setHealth(int h)
//     {
//         health = h;
//     };
//     void setLevel(char l)
//     {
//         level = l;
//     };
// };
// int main()
// {
//     Hero *a = new Hero;
//     (*a).setHealth(110);
//     (*a).setLevel('9');
//     cout<<"health is "<<(*a).health<<endl;
//     cout<<"health is "<<(*a).level<<endl;
//     a->setHealth(109);
//     a->setLevel('8');
//     cout<<"health is "<<a->health<<endl;
//     cout<<"health is "<<a->level<<endl;
//     return 0;
// };
// // why did we use (*a)
// // because a contains an address
// // if we want the value stored at the address present inside a then we need to use the *a
// // int b = 2;
// // int *a = &b;
// // for getting the value of a we need to use cout<<(*a)<<endl;
// // a->health is equivalent to (*a).health 

// // 🟨 GETTERS AND SETTERS
// #include <iostream>
// using namespace std;
// class Human{
//     private:
//     int num1 = 2;
//     public:
//     int num2 = 3;
//     int getNum1()
//     {
//         return num1;
//     };
//     void setNum1(int newNum1)
//     {
//         num1 = newNum1;
//     };
// };
// int main()
// {
//     Human h1;
//     // cout<<h1.num1<<endl; // this will given an error
//     cout<<h1.getNum1()<<endl; // this won't throw any error
//     h1.setNum1(6);
//     cout<<h1.getNum1()<<endl; // this won't throw any error
//     return 0;
// };
// // getters are used for fetching the values
// // setters are used for setting the data (we can also set some condition inside setters for example we want that only some specific users should have the permission to set values or modify values)

// // 🟩 SETTING VALUES OF PUBLIC DATA MEMBERS IN THE INT MAIN FUNCTION
// #include <iostream>
// class Human{
//     public:
//     int num1;
//     int num2;
// };
// using namespace std;
// int main()
// {
//     Human h1;
//     h1.num1 = 2;
//     h1.num2 = 3;
//     cout<<h1.num1<<endl;
//     cout<<h1.num2<<endl;
//     return 0;
// };

// 🟩PROTECTED
// later

// 🟨 PRIVATE
// can be accessed from inside the classs only
// they won't be accessible outisde the class
// private data member can be accessed by class function (or method) (or behaviors)

// 🟩 PUBLIC
// can be accessed from anywhere

// 🟩 ACCESS MODIFIERS
// determine the scope where the data memberes and behaviours would be accessible
// public, private and protected
// by default data members are private 

// // 🟩 ACCESSING PROPERTIES OF AN OBJECT OF A CLASS
// #include <iostream>
// using namespace std;
// class Human{
//     public:
//     int variable1 = 2;
//     private:
//     int variable2 = 3;
//     void printPrivateVariable(){
//         cout<<variable2<<endl;
//     };
// };
// int main()
// {
//     Human h1;
//     int a = h1.variable1;
//     cout<<"a is "<<a<<endl;
//     return 0;
// };

// // 🟨 IMPORT A CLASS FROM ANOTHER .CPP FILE
// #include <iostream>
// #include "Human.cpp"
// using namespace std;
// int main()
// {
//     cout<<"size of human3 is "<<sizeof(Human3)<<endl;
//     return 0;
// };

// // 🟨 MAKING A CLASS AND AN OBJECT & SEEING HOW MUCH SIZE AN EMPTY CLASS OCCUPIES
// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <cmath>
// using namespace std;
// class Human1{
//     int one = 1;
// };
// class Human2{};
// int main()
// {
//     Human1 h1;
//     Human2 h2;
//     cout<<"size of Human is "<<sizeof(h1)<<endl; // size is 4
//     cout<<"size of Human is "<<sizeof(h2)<<endl; // size is 1 why?
//     return 0;
// };
// // empty class occupies 1 byte of memory for sure

// 🟩 ABOUT CLASSES
// a user defined datatype

// 🟩 ABOUT OBJECT
// an object is an entity that has a state or a property and a behavior