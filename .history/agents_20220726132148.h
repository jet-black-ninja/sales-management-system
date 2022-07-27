#ifndef agents_h
#define agents_h
#include <iostream>
#include <string>
using std::string;
class agent{
    private:
        string id;
        int contact;
    public:
        void setid(string x){
        this->id=x;
        }
        void setcontact(int x){
            this->contact=x;
        }
        int getcontact(){
            return this->contact;
        }
        string getid(){
            return this->id;
        }
};
void agent::operator=(agent &a){
    setid(a.getid());
    setcontact(a.getcontact());
    }
#endif