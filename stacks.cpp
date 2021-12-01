#include<iostream>
#include<stack>
#include<string>
using namespace std;

//stack is LIFO = Last In First Out.
//Pilas se usan para ver el ultimo valor que se guardo
//Pilas no sirven para recorrerlas como si fuera un arreglo.



string isBalanced(string s){
    
    
    stack<char> b;

    for(char& c : s){
        
        if(c == '[' || c == '{' || c == '('){
            b.push(c);
        }
        else {
            if(b.empty() || abs(b.top() - c) > 2){
                return "NO";
            }
            else{
                b.pop();
            }
        }

    }
        if(b.empty()){
            return "YES";
        }

        return "NO";
}



int main(){

    string s = "([{}])";

    cout<<isBalanced(s)<<endl;

    return 0;
}