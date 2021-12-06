#include<iostream>
#include<map>
#include<vector>
using namespace std;

bool solucion(string revista, string carta){

    map<int,char> palabrasR;
    vector<string> palabrasC;

 
    for(int i=0; i<revista.length(); i++){
        
        palabrasR.insert(make_pair(i , revista[i]));
    }

}

int main(){



    return 0;
}