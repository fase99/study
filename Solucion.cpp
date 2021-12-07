#include<iostream>
#include<vector>
#include<map>
using namespace std;


vector<string> separador(const char *str, char c = ' '){

	vector<string> result;

	do{
		const char *begin = str;
		while(*str != c && *str) str++;
		result.push_back(string(begin, str));
	}
	while(0 != *str++);

	return result;
}


void solucion(string revista, string carta){

vector<string> auxR = separador(revista.c_str());
vector<string> auxC = separador(carta.c_str());

map<int,string> map;

int largoC = auxC.size();
    for(int i=0; i<largoC; i++){
        int id = i+1;
        map[id] = auxC[i];

        auxC.erase(auxC.begin() + i);
    }

int largoR = auxR.size();

    auto itr = map.begin();
    for(itr = map.begin(); itr!=map.end();itr++){
        for(int i=0; i<largoR; i++){

            if(itr->second == auxR[i]){

                cout<<"palabra = "<<itr->second<<endl;
                auxR.erase(auxR.begin()+i);
                //eliminar elemento del mapa

            }
            else{
                cout<<"no hay"<<endl;
            }
        }

    }
/* 
    if(map.empty()){
        return true;
    }
    else{
        return false;
    } */

    /* for(int i=0; i<auxC.size(); i++){
        cout<<auxC[i]<<endl;
    }
    */
    for(itr = map.begin(); itr!=map.end(); itr++){
        cout<<itr->first<<" - "<<itr->second<<endl;
    } 

}


int main(){


string revista = "Necesito que Dios entre a mi vida como un arma";
string carta = "Necesito auto arma Dios";


	vector<string> auxC = separador(carta.c_str());
	vector<string> auxR = separador(revista.c_str());

    
    solucion(revista, carta);


   /*  for(int i = 0; i<auxC.size(); i++){
        cout<<auxC[i]<<endl;
    }

    cout<<"---------------------------------------"<<endl<<endl;

    for(int i=0; i<auxR.size(); i++){
        cout<<auxR[i]<<endl;
    } */

return 0;
}
