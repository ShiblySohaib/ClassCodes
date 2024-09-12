#include<iostream>

using namespace std;

int main(){
    cout<<"Input text: ";
    string s;
    cin>>s;
    bool accepted = true;
    for (char i:s){
        if(i!='a'){
            cout<<"Not accepted";
            accepted = false;
            break;
        }
    }
    if(accepted) cout<<"Accepted";
}
