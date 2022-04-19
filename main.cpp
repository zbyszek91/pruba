#include <iostream>
#include <string>
class Animal{
public:

    Animal(){
    std::cout<<"created animal"<<std::endl;
    name="animal";
    legsCount=4;
    std::cout<<"created animal"<<std::endl;}
    void print(){
std::cout<<"i am"<<name<<std::endl;
    }
protected:
    std::string name;
    int legsCount;
};
class Dog :public Animal{
public:
    Dog(std::string name){
        this->name=name;
        this->owner=owner;

        std::cout<<"created dog"<<std::endl;
    }
    void printdoggo(){
    print();
    std::cout<<'my owner is '<<owner<<std::endl;
    }
private:
    std::string owner;

};

int main()
{
    Dog doggo("doggo");
    doggo.print();

    return 0;
}
