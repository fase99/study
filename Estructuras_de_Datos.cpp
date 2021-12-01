#include<iostream>
#include"vector"
using namespace std;


int main(){

    vector<int> vec; 
    //se crea la clase vector, la cual es un tipo de estructura de datos dinamico, el cual va variando su largo.
    //en cambio los arreglos son estaticos, ya que no se puede aumentar o disminuir su espacio de memoria reservado anteriormente.

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(77);
    vec.push_back(31);

    for(int i=0; i<vec.size(); i++){
        cout<< vec[i]<<endl;
    }

    cout<<"---------"<<endl;

 

    cout<< "is empty? "<< vec.empty()<<endl;
    vec.clear();

    cout<<"now? "<<vec.empty()<<endl;
   


return 0;
}