#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream file("input.txt");
    string s;
    while (file >> s) {
        cout<<s<<" - ";
        int len = s.size();
        bool accepted = true;
        if(s[len-1]!='b'){
            cout<<"Not accepted\n";
            accepted = false;
        }
        else {
            for(int i=0;i<len-1;i++){
                if(s[i]!='a'){
                    cout<<"Not accepted\n";
                    accepted = false;
                    break;
                }
            }
        }
        if(accepted) cout<<"Accepted\n";
    }
    file.close();
}
