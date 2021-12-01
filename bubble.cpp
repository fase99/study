//ELOYS - 26 de Diciembre
//AGUSTIN - 24 de Diciembre
//MICHE - 23 de Agosto

#include<iostream>
using namespace std;



int main(){

int agustin[10] = {1,4,3,2,5,7,6,8,9,0};
int a;

cout<<"ORDEN INICIAL: "<<endl;
    for(int i=0;i<10;i++)
        cout<<"\t\t"<<agustin[i]<<endl;

    for (int i = 0; i < 10; i++){
        for(int j=i+1;j<10;j++){
            if(agustin[i]>agustin[j]){
                a = agustin[i];
                agustin[i] = agustin[j];
                agustin[j] = a;
            }
        }
    }

    cout<<"ORDEN ASCENDENTE: "<<endl;
	for(int i=0;i<10;i++){
		cout<<"\t\t"<<agustin[i]<<endl;
	}
    cout<<"ORDEN DESCENDENTE: "<<endl;
    for(int i=9;i>=0;i--){
        cout<<"\t\t"<<agustin[i]<<endl;
    }

return 0;
}