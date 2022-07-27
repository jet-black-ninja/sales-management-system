#ifndef node_h
#define node_h
#include<iostream>

template<class T>
class node{
    private:
    T x;
    node *next;
    public:
    node();
    node(T x);
    void print();
    void modify(T e);
    void modify_next(node *n);
    node& operator=(const node &p);
    T consult();
    node *consult_next();

};
template<class T>
node<T>::node(){
    x=0;
    next=NULL;
}
template<class T>
node<T>::node(T x){
    this->x=x;
    next=NULL;
}
template<class T>
void node<T>::print(){
    std::cout<<"||"<<x<<"||"<<"->";
}

template<class T>
T node<T>::consult(){
    return x;
}
template<class T>
node<T> *node<T> ::consult_next(){
    return(next);
}

template<class T>
void node<T>::modify(T e){
    x=e;
}
template<class T>
void node<T>::modify_next(node<T> *n){
    next=n;
}


#endif