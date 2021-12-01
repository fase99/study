#include<iostream>
using namespace std;

//todos pueden comer, pero no lo hacen de la misma forma. POLIMORFISMO

class Animal{

private:
    int edad;

public:
    Animal(int _edad){
        edad=_edad;
    }
    void setEdad(int edad){
        this->edad=edad;
    }
    int getEdad(){
        return edad;
    }
    virtual void comer(){   //POLIMORFISMO
        cout<<"A COMER!"<<endl;
    }

};

class Humano: public Animal{
private:
    string nombre;

public:
    Humano(int _edad,string _nombre) : Animal(_edad){
        nombre=_nombre;
    }
    void setNombre(string nombre){
        this->nombre=nombre;
    }
    string getNombre(){
        return nombre;
    }
    void comer(){
        cout<<"COMER COMO HUMANO"<<endl;
    }

};

class Perro : public Animal{
private:
    string nombre;
    string raza;
    
public:
    Perro(int _edad, string _nombre, string _raza) : Animal(_edad){
        nombre = _nombre;
        raza = _raza;
    }
    void setNombre(string nombre){
        this->nombre=nombre;
    }
    void setRaza(string raza){
        this->raza=raza;
    }
    string getRaza(){
        return raza;
    }
    string getNombre(){
        return nombre;
    }
    void comer(){
        cout<<"COMER COMO PERRO"<<endl;
    }
};

int main(){

Animal *a = new Animal(1);
Humano *h = new Humano(22, "basti");
Perro *p = new Perro(10, "cachupin","bulldog");

    a->comer();
    h->comer();
    p->comer();

return 0;
}