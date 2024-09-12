#include<iostream>

using namespace std;

int main(){
    cout<<"Input text: ";
    string s;
    cin>>s;
    int len = s.size();
    bool accepted = true;
    if(s[len-1]!='b'){
        cout<<"Not accepted";
        accepted = false;
    }
    else {
        for(int i=0;i<len-1;i++){
            if(s[i]!='a'){
                cout<<"Not accepted";
                accepted = false;
                break;
            }
        }
    }
    if(accepted) cout<<"Accepted";
}
