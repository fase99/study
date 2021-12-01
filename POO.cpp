#include<iostream>
using namespace std;

class bloque{

private:
    string elemento;
    string color;
    int id;
public:

    bloque(string elemento, string color, int id){
        this->elemento=elemento;
        this->color=color;
        this->id=id;
    }

    void setelemento(){
        this->elemento=elemento;
    }
    void setcolor(){
        this->color=color;
    }
    void setid(){
        this->id=id;
    }

    string getelemento(){
        return elemento;
    }
    string getcolor(){
        return color;
    }
    int getid(){
        return id;
    }

};


int main(){

string elemento;
string color;
int id;

cout<<"Ingresa los atributos de tu clase: "<<endl;
cin>>elemento>>color>>id;

    bloque *tierra = new bloque(elemento,color,id);

    cout<<"SUS ATRIBUTOS SON: "<<tierra->getelemento()<<", "<<tierra->getcolor()<<", "<<tierra->getid()<<" !!!!!"<<endl<<endl;

    return 0;
}