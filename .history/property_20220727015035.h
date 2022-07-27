#ifndef property_h
#define property_h
#include <iostream>
#include "agents.h"
#include <string>
using std::string;
class Property{
    private:
    float sellingPrice;  
    int postalCode;
    float size;
    string type;
    int roomtype;
    Agent agent;

    public:
    Property(float s,int p, float size,string type ,int roomtype, Agent agent ); 
    void setSellingPrice(float x){this->sellingPrice=x;}
    void setPostalCode(int x){this->postalCode=x;}
    void setSize(float x){this->size=x;}
    void setType(string x){this->type=x;}
    void setRoomType(int x){this->roomtype=x;}
    void setAgent(Agent x){this->agent=x;}

    float getSellingPrice(){return this->sellingPrice;}
    int getPostalCode(){return this->postalCode;}
    float getSize(){return this->size;}
    string getType(){return this->type;}
    int getRoomType(){return this->roomtype;}
    Agent getAgent(){return this->agent;}
};
Property::Property(float s,int p, float size,string type ,int roomtype, Agent agent ){
    SellingPrice=s;
    postalCode=p;
    this->size=size;
    this->
}








#endif
