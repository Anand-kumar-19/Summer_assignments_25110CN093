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


    //to find the second largest element
    long long largest=std::numeric_limits<long long>::min();
    long long secondlargest=std::numeric_limits<long long>::min();

    for (long long i=0;i<n;i++){
        if (largest<arr[i]){
            secondlargest=largest;
            largest=arr[i];
            
        }
        else if(arr[i]>secondlargest && arr[i]!=largest){
            secondlargest=arr[i];
        }
    }

    if (secondlargest==std::numeric_limits<long long>::min()){
        std::cout<<"\nsecond largest does not exist in this array";
    }
    else{
    std::cout<<"\nthe second largest element in the given array is : "
             <<secondlargest;
    }

    return 0;
}