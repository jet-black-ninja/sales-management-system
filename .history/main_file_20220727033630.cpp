#include <bits/stdc++.h>
#include "data.h"
#include "property.h"
#include "list.h"

using namespace std;

void addProperty(list<Data> &l){
    Data data;
    string agentId, contact,size,roomType,location,sellingPrice;
    cout<<"Property Adding Menu"<<endl;
    cout<<"Please Input your Agent Id";
    cin>>agentId;
    data.setAgentId(agentId);
    cout<<"Please Input your Contact:"<<endl; 
	cin >> contact;
	data.setContact(contact);
	cout<<"Please Input your Property Size:"<<endl; 
	cin >> size;
	data.setPropertySize(size);
	cout<<"Please Input your RoomType:"<<endl; 
	cin >> roomType;
	data.setRoomType(roomType);
	cout<<"Please Input your Location:"<<endl; 
	cin >> location;
	data.setLocation(location);
	cout<<"Please Input your Selling Price:"<<endl; 
	cin >> sellingPrice;
	data.setSellingPrice(sellingPrice);
	l.push_back(data);

}
void OrderList(list<Data> &l){
    char resp;
    do{
        cout<<"What Order do you want? \n \ta=Ascending \n\td=Descending \n";
        redo:
        cin>>resp;
        if(resp!='a' ||resp != 'd'){
            cout<<"Unsupported option. Please Enter again\n";
            goto redo;
        }
    }while(resp!='a' || resp!='d');
    l.sort();
    if(resp=='d')
        l.reverse();
}
bool findPass(string pass,string id){
    string pas, ag;
    bool found=false;
    ifstream password("password.in");
    while(!password.eof() && found){
        password>>pas>>ag;
        if(pass==pas && ag==id){
            found =true;
        }
    }
    password.close();
    return found;
}
bool login(string agentId,string password){
    bool pass, granted=false;
    pass=findPass(agentId,password);
    if(pass){
        cout<<"Access Granted\n";
        granted =true;
    }
    else{
        cout<<"login Failed\n";
    }
    return granted;
}
void changePass(string Id){
    list<string> passw,agentId;
    string pas,ag;
    ifstream password("password.in");
    ofstream p;
    while(!password.eof() ){
        password>>pas>>ag;
        passw.push_back(pas);
        agentId.push_back(ag);

    }
    password.close();
    cout<<" For security purposed you are requested to re-login \n";
    cout<<"Enter Password\n";
    cin>>pas;
    p.open("password.in");
    if(login(Id,pas)){
        cout<<"access granted. input the new password"<<endl;
        cin>>pas;
        while(agentId.empty()){
            p<<passw.pop_front();
        }
    }
}

//menu 
char menu ()
{
	char option;
	
	cout<<"Menu"<<endl;
	cout<<"(a) Add new property"<<endl;
	cout<<"(b) Remove property "<<endl;
	cout<<"(c) Edit sales entries"<<endl;
	cout<<"(d) Inquire or search property sales"<<endl;
	cout<<"(e) Monthly property sales transaction report"<<endl;
	cout<<"(f) List property sale items in ascending or descending order"<<endl;
	cout<<"(g) Administration - add / remove property agent"<<endl; 
	cout<<"(h) Administration - change password"<<endl;
	cout<<"(i) Quit"<<endl;
	cin>>option;	
	return (option);
}