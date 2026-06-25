#include<bits/stdc++.h>

using namespace std;

int main(){

    int n1,n2;
    //taking input for size of arrays
    cout<<"enter the size of your 1'st array :";
    cin>>n1;
    cout<<"enter the size of your 2'nd array :";
    cin>>n2;

    vector<int>arr1(n1),arr2(n2);
    
    cout<<"enter the elements of first array :";
    for(auto i=arr1.begin();i!=arr1.end();i++){
        cin>>*i;
    }
    
    cout<<"first array :";
    for(auto i=arr1.begin();i!=arr1.end();i++){
        cout<<*i<<" ";
    }
    
    cout<<"\nenter the elements of second array :";
    for(auto i=arr2.begin();i!=arr2.end();i++){
        cin>>*i;
    }

    cout<<"second array :";
    for(auto i=arr2.begin();i!=arr2.end();i++){
        cout<<*i<<" ";
    }
    
    //for merging arrays
    vector<int>merged_array;
    for(int x: arr1){
        merged_array.push_back(x);
    }
    for(int x: arr2){
        merged_array.push_back(x);
    }
    cout<<"\nmerged array :";
    for(auto i:merged_array){
        cout<<i<<' ';
    }

    return 0;
}