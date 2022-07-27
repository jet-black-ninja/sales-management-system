#include <bits/stdc++.h>
#include "data.h"
#include "property.h"
#include "list.h"s
using namespace std;

void addProperty(List<Data> &l){
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
void OrderList(List<Data> &l){
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

}