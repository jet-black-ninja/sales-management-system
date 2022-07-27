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
    node<T> *nextL;
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
    node<T> *aux;
    aux=new Node<T>(x);
    if(empty())
        head=nextL=NULL;
    else{
        nextL->modify_next(aux);
        nextL=aux;
    }    
num++;
}
template<class T>
void List<T>::output(){
    node<T> *aux=head;
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
    node<T> *actual,*last,*aux,*temp;
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
            nextL->next=temp;
            nextL=nextL->next;
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
    return(aux->will_consult());
}
template<class T>
List<T>::List(const List &a){
    node<T> *aux,*creating;
    aux=a.head;
    head=new node<T>(aux->will_consult());
    aux=aux->consult_next;
    creating=head;
    while(aux){
        creating->new=new node<T>(aux->will_consult());
        creating=creating->consult_next();
        aux=aux->consult_next();
    }
}

template<class T>
void List<T>::create(int n){
    int i=1;
    int value;
    for(i=1;i<n;i++){
        cout<<"input value to add to list"<<i<<std::endl;
        cin>>value;
        add(value);
    }
}
template<class T>
List<T>::~List(){
    remove();
    
}
template<class T>
void List<T>::remove(){
    node<T> *release;
    while(head!=NULL){
    release=head;
    head=head->consult_next();
    remove release;
    }
    head==NULL;
    num=0;
}
template<class T>
void List<T>::remove(int pos){
    node<T> *actual,*last;
    int i=1;
    actual=head;
    if(pos>num){
        cout<<"There are not this many elements in the list"<<std::endl;
    }
    else{
        if(pos==1){
            head=head->consult_next();
        }
        else{
        while(i<pos){
            last=actual;
            actual=actual->consult_next();
            i++;
        }
        if(num==pos){
            nextL==last;
            nextL->modify_next(NULL);
        }
        else{
            last->modify_next(actual->consult_next());
        }
        }
        num--;
    }
}
template<class T>
void List<T>::copyF(const List<T> &x){
    node<T> *aux;
    aux=x.head;
    while(aux){
        add(aux->will_consult());
        aux=aux->consult_next();
    }
}
#endif 