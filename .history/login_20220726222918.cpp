#include<bits/stdc++.h>
using namespace std;
void auth();
void members();
void userChange();
void passChange();

string inuser;
string inpass;
string user;
string pass;
int num=0;
string com;


main(){
    cout<<"\n Please Log In\n---------------------------------------\n\n";
    auth();
}
//application menu
void menu(){
    start:
    while(num==0){
        cout<<"\nCommands:\n\t1)change-pass \n\t2)change-user \n\t3)search \n\t4)exit\n Type the option number to select\n ";
        cin>>com;
        if(com=="1"){
            passChange();
        }
        else if(com=="2"){
            userChange();   
        }
        else if(com=="3"){
            members();
        }
        else if(com=="4"){
            num=1;
            system("clear");
            cout<<"Hasta la Vista ~"<<endl<<endl;
            exit(0);
            break;
        }
        else if(com==com){
            cout<<"Unknown Command";
            goto start;

        }

    }
    
}
//authentication code
auth(){
    
}


