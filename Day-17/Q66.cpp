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
    
    //for finding union of arrays
    vector<int>union_array;
    set<int>myset;
    
    for(int x:arr1){
        myset.insert(x);
    }
    for(int x:arr2){
        myset.insert(x);
    }
    for(int x:myset){
        union_array.push_back(x);
    }
    cout<<"\nunion array :";
    for(auto i=union_array.begin();i!=union_array.end();i++){
        cout<<*i<<" ";
    }
    

    return 0;
}