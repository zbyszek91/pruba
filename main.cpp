#include <iostream>

using namespace std;
class Punkt
{
float x,y;
string nazwa;
public:
    void wyswietl()
    {
    cout<<nazwa<<"("<<x<<"."<<y<<"0"<<endl;
    }
    Punkt(string n="s", float a=0, float b=0)
    {
        nazwa=n;
        x=a;
        y=b;
    }
};
class Kolo:public Punkt
{
    float r;
    string nazwa;
public:
    void wyswietl()
    {
        cout<<"kolo o nazwie"<<nazwa<<endl;
        cout<<"srodek kola"<<endl;
        Punkt::wyswietl();
        cout<<"Promien"<<r<<endl;
        cout<<"pole kola "<<3.14*r<<endl;
    }
    Kolo(string nk="kolko", string np="s",float a=0, float b=0, float pr=1)
    :Punkt(np,a,b)
    {
     nazwa=nk;
     r=pr;

    }
};

int main()
{
    Kolo k1;
    k1.wyswietl(nk="kolko";np="s";a=0; b=0; pr=1;);
    cout << "Hello world!" << endl;
    return 0;
}
