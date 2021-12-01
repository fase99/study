#include<iostream>
#include<map>
#include<vector>
using namespace std;

//forma de resolverlo sin mapa
//realiza la cantidad de valores dentro del vector ingresado de comparaciones
bool solution(vector<int> &numbers, int target){

    for(int i=0; i<numbers.size(); i++){
        for(int j=i+1; j<numbers.size();j++){
            if(numbers[i] + numbers[j] == target){
                return true;
            }
        }
    }

    return false; 
}   

//hecho con mapas
//realiza una sola comparacion
bool mapsolution(vector<int> &numbers, int target){
    map<int,int> map;

    for(int i=0; i<numbers.size(); i++){
        int complement = target - numbers[i];

        auto current = map.find(complement); //busca en el mapa si la resta existe como complemento en el mismo.
        if (current != map.end()){
            return true;
        }

        map.insert(make_pair(numbers[i], i)); //agrega los valores despues para ahorrar un for.
    }

    return false;
}
