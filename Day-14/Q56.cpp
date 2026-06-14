#include<iostream>
#include<limits>

int main(){

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
    std::cout<<"your array is : ";
    for(long long i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }


    //to find duplicates in array
    std::cout<<"\nthe duplicates in the given array are : ";
    for(long long i=0;i<n;i++){
        for (long long j=i+1;j<n;j++){
            if(arr[j]==arr[i]){
                std::cout<<arr[j]<<" ";
                break;
            }
        }
    }

    return 0;
}