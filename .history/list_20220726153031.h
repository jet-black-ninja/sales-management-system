#ifndef List_h
#define List_h

#include<iostream>
#include "node.h"
using std::cout;
using std::cin;
template <class T>
class List{
    private:
    node<T> *head;
    node<T> *tail;
    int num;
    public:
    List();
    List(const List &a);
    bool empty();
    void add(T x);
    void output();
    void input(T n,int pos);
    void remove(int pos);
    T consult(int pos);
    void invest();
    void copyF(const List &a);
    void create(int num);
    void remove();
    ~List();
};

template<class T>
List<T>::List(){
    head=NULL;
    num=0;
}
template<class T>
bool List<T>::empty(){
    return(Head==NULL);
}
template<class T>
void List<T>::add(T x){
    Node<T> *aux;
    aux=new Node<T>(x);
    if(empty())
        head=tail=NULL;
    else{
        tail->modify_next(aux);
        tail=aux;
    }    
num++;
}
template<class T>
void List<T>::output(){
    Node<T> *aux=head;
    int i;
    if(empty()){
        cout<<"the list is empty"<<std::endl;
    }
    else{
        while(aux!=NULL){
            aux->print();
            aux=aux->consult_next();
            i++;
        }
        cout<<"NULL"<<stf::endl;
    }
}
template<class T>
void List<T>::input(T n,int pos){
    Node<T> *actual,*last,*aux,*temp;
    temp=new Node<T>(n);
    int i=1;
    actual=head;
    if(pos==0 || pos==1){
        head=temp;
        head->modify_next(actual);
    }
    else{
        while(i<pos){
            last=actual;
            actual=actual->next;
            i++;
        }
        if(pos==num){
            tail->next=temp;
            tail=tail->next;
        }
        else{
            aux=actual;
            last->next=temp;
            temp->next=aux;
        }

    }
    num++;
}
template<class T>
T List<T>::consult(int pos){
    node<T> *aux;
    int i=1;
    if(pos<=num){
        aux=head;
        while(i<pos){
            aux=aux->next;
            i++;
        }
    }
}


#endif 