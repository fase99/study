#include<iostream>
#include<vector>
using namespace std;

class Curso{
private:
    string nombre;
    int nota1, nota2, nota3;

public:
    Curso(string nombre, int nota1, int nota2, int nota3){
        this->nombre=nombre;
        this->nota1=nota1;
        this->nota2=nota2;
        this->nota3=nota3;
    }

    string getNombre(){
        return nombre;
    }
    
    //Calcula el promedio de las 3 notas
    float promedio(){
        float prom;

        prom = (nota1+nota2+nota3)/3;

        return prom;
    }

};

class Alumno {
private:
    string nombre;
    int edad;
    vector<Curso> cursos;

public:
    Alumno(string nombre, int edad){
        this->nombre = nombre;
        this->edad = edad;
    }

    //crea un curso y lo agrega al vector cursos
    void agregarCurso(string nombreCurso, int nota1, int nota2, int nota3){

        Curso c = Curso(nombreCurso, nota1, nota2, nota3);

        cursos.push_back(c);
    }

    //Calcula el promedio general con todos los cursos asociados
    float promedioSemestral(){
        float prom;
        float sumP=0;

        for(int i=0; i<cursos.size(); i++){
            sumP += cursos[i].promedio();
        }

        prom = sumP/cursos.size();

        return prom;

    }
    //Nombre, edad, cursos promedios, promedio semestral.
    void imprimirDatos(string nombreCurso){
        
        cout<<"NOMBRE: "<<nombre<<endl;
        cout<<"EDAD: "<<edad<<endl;

        for(int i; i<cursos.size(); i++){
          
            cout<< cursos[i].getNombre()<< ": "<< cursos[i].promedio()<<endl;
        }

        cout<<"PROMEDIO SEMESTRAL: "<< promedioSemestral()<<endl;
    }

    //Elimina del vector el curso que cumpla con el nombre
    void eliminarCurso(string nombreCurso){

        for(int i=0; i<cursos.size(); i++){
            if (cursos[i].getNombre() == nombreCurso){
                cursos.erase(cursos.begin() + i);
                return;
            }
        }
        cout<<"No se encuentra el curso con ese nombre."<<endl;
    }

    //Agrega un curso al vector pero verifica antes que no se encuentre en el vector
    //en caso de el curso ya haya sido ingresado, se debe mostrar por pantalla.
    //"Curso ya inscrito" y no se ingresa.

    void agregarSinRepetirNombre(string nombreCurso, int nota1, int nota2, int nota3){
        for(int i=0; i<cursos.size(); i++){
            if(nombreCurso == cursos[i].getNombre()){
                cout<<"Este curso ya existe!"<<endl;
                return;
            }
            
        }
            Curso c = Curso(nombreCurso, nota1, nota2, nota3);
            cursos.push_back(c);
    }

    //Ejercicio propuesto
    //cibvertur de decimal a binario:

    //ejemplo:

    //       7 % 2 = 1  2^0
    // (7/2) 3 % 2 = 1  2^1
    // (3/2) 1 % 2 = 1  2^1
    // (1/2) 0 => fin

};