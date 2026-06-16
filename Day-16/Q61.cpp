#include<iostream>

int main(){

    int n; //range of numbers
    std::cout<<"enter the value of n : ";
    std::cin>>n;
    
    int arr[n-1];
    
    //taking input from user
    std::cout<<"enter "<<n-1<<" elements in your array : \n";
    for (int i=0;i<n-1;i++){
        std::cin>>arr[i];
    }
    
    //displaying array
    std::cout<<"your array is: ";
    for(int j=0;j<sizeof(arr)/sizeof(arr[0]);j++){
        std::cout<<arr[j]<<" ";
    }
    
    //to find the missing number from 1 to n
    long long actualsum=0,totalsum,missingnumber;

    totalsum=(n*(n+1))/2;//using formula from arithematic progression
    
    for(int i=0;i<n-1;i++){
        actualsum+=arr[i];
    }
    
    //difference of totalsum and actualsum
    missingnumber=totalsum-actualsum;
    std::cout<<"\nthe missng number is: "<<missingnumber;

    return 0;
}