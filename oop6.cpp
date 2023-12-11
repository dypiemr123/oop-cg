#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(vector<string> a, vector<string> b){
    return a[2]<b[2];
}

int main(){
    vector<vector<string>> arr(3,vector<string>(3));
    arr[0][0] = "Aditya";
    arr[0][1] = "July";
    arr[0][2] = "Pune";

    arr[1][0] = "Giriwale";
    arr[1][1] = "August";
    arr[1][2] = "Satara";

    arr[2][0] = "Bhandare";
    arr[2][1] = "June";
    arr[2][2] = "Akurdi";

    cout<<"Results"<<endl;

    for(int i = 0 ; i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\n\nSorting"<<endl;
    sort(arr.begin(),arr.end(),compare);
    for(int i = 0 ; i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\n\nSearching"<<endl;
    string city;cin>>city;
    for(int i = 0 ; i<3;i++){
        for(int j = 0;j<3;j++){
            if(city==arr[i][2]){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
