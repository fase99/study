//HERENCIA: Capacidad de tener metodos y atributos, y poder usarlos en otras clases.
#include<iostream>
using namespace std;

class Humano { //CLASE PADRE
private:
    int esUnaVariablePrivada; //SOLO SE OCUPA DENTRO DE LA CLASE HUMANO

protected: //PROTEGIDO: PUEDO SER OCUPADO DENTRO DE MI CLASE O LAS CLASES DE LAS CUALES SOY HERENCIA
    string nombre;
    string rut;
    int edad;

public:
 //COMO NO ESTOY CREANDO UN HUMANO COMO OBJETO, NO ES NECESARIO QUE LLEVE UNA FUNCION CONSTRUCTOR.

/*
    Humano(){}

    Humano(string _nombre,string _rut, int _edad){
        nombre=_nombre;
        rut=_rut;
        edad=_edad;
    } 
*/

    //getters
    string getNombre(){
        return nombre;
    }
    string getRut(){
        return rut;
    }
    int getEdad(){
        return edad;
    }
    //setters
    void setNombre(string nombre){
        this->nombre=nombre;
    }
    void setRut(string rut){
        this->rut=rut;
    }
    void setEdad(int edad){
        this->edad=edad;
    }

};

class Matematico: public Humano {

public: 
    //Herencia
    Matematico(string _nombre, string _rut, int _edad){
        nombre=_nombre;
        rut=_rut;
        edad=_edad;
    }

    int suma(int a, int b){
        return a+b;
    }
    int resta(int a, int b){
        return a-b;
    }

};

class Escritor: public Humano{
public: 
    //Herencia
    Escritor(string nombre, string rut, int edad){
        setNombre(nombre);
        setRut(rut);
        setEdad(edad);
    }

    void decirHolaMundo(){
        cout<<"Hola mundo!"<<endl;
    }

};
//----------------------------------------------------------------------
int main(){

    Matematico *m1= new Matematico("Felipe", "20110175-1", 22);
    Escritor *e1= new Escritor("Monica", "21110187-k",24);

    m1->getEdad();

    e1->decirHolaMundo();
    
    cout<<m1->suma(3,4)<<endl;    
    cout<<m1->resta(7,3)<<endl;
    return 0;
}