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


bool solucion(string revista, string carta){

vector<string> auxR = separador(revista.c_str());
vector<string> auxC = separador(carta.c_str());



}


int main(){


string revista;
string carta;

cout<<"Ingrese el texto de su carta: "; cin>>carta;
cout<<"Ingrese el texto de la revista: "; cin>>revista;

	vector<string> auxC = separador(carta.c_str());
	vector<string> auxR = separador(revista.c_str());


return 0;
}
