#include<bits/stdc++.h>
using namespace std;
void auth();
void members();
void userChange();
void passChange();

string inUser;
string inPass;
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
void auth(){
    ifstream passfile("password.txt",ios::in);
    passfile>>inPass;
    ifstream userfile("username.txt",ios::in);
    userfile>>inUser;
    cout<<"UserName";
    cin>>user;
    cout<<"Password";
    cin>>pass;
    userfile.close();
    passfile.close();
    if(user==inUser && pass ==inPass){
        cout<<"\nLogin Successful\n";
        cin.get();
        menu();

    }
    else{
        cout<<"\nLogin Failed\n";
        system("PAUSE");
        main();
    }
}
void userChange(){
    string temppass;
    cout<<"Enter your password to authorize process\n";
    cin>>temppass;
    if(temppass==inPass){
        cout<<"Initialising Username Change \n";
        cout<<"Enter the New Username";
        cin>>user;
        ofstream userfile("username.txt",ios::out);
        userfile<<user;
        userfile.close();
        cout<<"Username Changed Successfully";
        cin.get();
        menu();
        }
    else{
        cout<<"The password was incorrect\n";
        cin.get();
        menu();
    }
}
void passChange(){
    string temppass,newpass;
    cout<<"Enter your password to authorize process\n";
    cin>>temppass;
    if(temppass==inPass){
        cout<<"Initialising Password Change\n";
        cout<<"Enter New Password";
        cin>>newpass;
        ofstream passfile("password.txt",ios::out);
        passfile<<newpass;
        passfile.close();
        cout<<"Password Changed Successfully\n";
        cin.get();
        menu();
    }
    else{
        cout<<"The password was incorrect\n";
        cin.get();
        menu();
    }

}
void members(){
    char cmd[50], name[50];
    cout<<"\nMembers Menu";//put members code here
    printf("\n Enter the name to search : \n");
    cin>>name;
    sprintf(cmd,"greg %s apptmt.txt | cut -f 1,3 -d \", \" | sort -t , -k 3 | tee log " , name);
    system(cmd);
    menu();
    //like a while loop or something
}