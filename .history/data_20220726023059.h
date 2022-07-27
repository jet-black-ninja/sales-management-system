#ifndef data_h
#define data_h
#include <iostream>
#include <string>
using std::string;

class data{
    private:
        string AgentId,Contact,PropertySize,RoomType,Location,SellingPrice;
    public:
    data():AgentId(),Contact(),PropertySize(),RoomType(),Location(),SellingPrice(){} 
    Data(string AgentId,string Contact, string PropertySize,string RoomType,string Location,string SellingPrice);
    void setAgentId(string x){
        this->AgentId=x;
        }
    void Contact(string x){
        this->Contact=x;         
        }
    void PropertySize(string x){
        this->PropertySize=x;
        }
    void RoomType(string x){
        this->RoomType=x;
        }
    void Location(string x){
        this->Location=x;
        }
    void SellingPrice(string x){
        this->SellingPrice=x;
        }
    string getAgentId(){
        return this->AgentId;
        }
    string getContact(){
        return this->Contact;
        }
    string getPropertySice(){
        return this->PropertySize;
        }
    string getRoomType(){
        return this->RoomType;}
    string getLocation(){
        return this->Location;
        }
    string getSellingPrice(){
        return this->SellingPrice;
        }       
    bool operator<(data a);
    bool operator>(data a);
    };
    data::data(string AgentId,string Contact,string PropertySize, string RoomType,string Location, string SellingPrice){
        this->AgentId=AgentId;
        this->Contact=Contact;
        this->PropertySize=PropertySize;
        this->RoomType=RoomType;
        this->Location=Location;
        this->SellingPrice=SellingPrice;
    }     
bool data::operator<(data a){
    if(SellingPrice<a.SellingPrice()){
        return true;
    }
    else{
        return false;
    }
}
bool data::operator>(data a){
    if(SellingPrice>a.SellingPrice()){
        return true;
    }
    else{
        return false;
    }
}
#endif 