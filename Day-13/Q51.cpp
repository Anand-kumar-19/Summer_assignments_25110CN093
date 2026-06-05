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

    long long largest=arr[0],smallest=arr[0];
    for (long long i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if (largest<arr[i]){
            largest=arr[i];
        }
        if(smallest>arr[i]){
            smallest=arr[i];
        }
    }
    std::cout<<"\n the largest element in the array is : "<<largest<<"\n";
    std::cout<<"the smallest elment in the array is : "<<smallest;
    return 0;

}