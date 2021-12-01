#include<iostream>
using namespace std;

//NODOS = VALORES SIMPLEMENTE

class Node{

    private:
        int value;
        Node* next;

    public:

        Node(int value){
            this->value = value;
            this->next = NULL; 
        }

        int getvalue(){
            return this->value;
        }

        void setvalue(){
            this-> value=value;
        }
        Node *getnext(){
            return this->next;
        }

        void setnext(Node *newNext){
            this->next=newNext;
        }

};



int main(){
    
Node *first = new Node(1);
Node *mid = new Node(2);
Node *last = new Node(3);

    first->setnext(mid);
    mid->setnext(last);

    Node *temp = first;
    while(temp!=NULL){
        cout<< temp->getvalue()<<endl;
        temp = temp->getnext();
    }


return 0;
}