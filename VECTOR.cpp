#include<iostream>
using namespace std;

class Vect{

private: 
    int size;
    int cap;
    int* arr;

    void resize(){

        cout<<"Entre al resize con capacidad: "<<cap<<endl;
        int newCap= 2 * cap;
        int *newArr = new int[newCap];

        for(int i=0;i<cap; i++){
            newArr[i] = arr[i];
        }
        cap = newCap;
        arr = newArr;
    }

public:
    
    Vect(int newCap = 1){
        cap = newCap;
        size = newCap;
        arr = new int[cap];
    }
    void pushBack(int value){
        if (size==cap){
            resize();
        }
        arr[size] = value;
        size++;
    }
    
};


int main(){

    Vect* v= new Vect();

    v->pushBack(1);
    v->pushBack(2);
    v->pushBack(3);
    v->pushBack(4);    
    v->pushBack(5);
    v->pushBack(6);
    v->pushBack(7);
    v->pushBack(8);
    return 0;
}