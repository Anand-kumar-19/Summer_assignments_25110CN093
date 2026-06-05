#include<iostream>

int main()
{
    long long n; //size of array
    std::cout<<"enter the value of n : ";
    std::cin>>n;
    
    long long arr[n];
    
    //taking input from user
    std::cout<<"enter "<<n<<" elements in your array : \n";
    for (long long i=0;i<n;i++){
        std::cin>>arr[i];
    }
    
    //displaying array
    std::cout<<"your array is: ";
    for(long long j=0;j<sizeof(arr)/sizeof(arr[0]);j++){
        std::cout<<arr[j]<<" ";
    }

    long long sum=0;
    long double average;
    
    //to calculate the sum of allt he elements in an array
    for(long long k=0;k<sizeof(arr)/sizeof(arr[0]);k++){
        sum+=arr[k];
    }
    std::cout<<"the sum of all the elements in your array is : "<<sum<<"\n";

    //for average of the lements of the array
    average=(long double)sum/n;
    std::cout<<"the average of all the elements present inn your array is : "<<average;
    

    return 0;
}