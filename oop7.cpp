#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string,int> mp;
    mp["Maharashtra"] = 1000;
    mp["Assam"] = 2000;
    mp["Jammu"] = 5000;
    for( auto it : mp){
        cout<<it.first<< " "<< it.second<<endl;
    }
    cout<<"Enter the state = ";
    string name;
    cin>>name;
    if(mp.find(name)==mp.end()){
        cout<<"Name not found"<<endl;
    }
    else cout<<mp[name]<<endl;
}