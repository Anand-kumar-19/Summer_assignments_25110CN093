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

    long long even=0,odd=0;
    for (long long i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if (arr[i]%2==0){
            even+=1;
        }
        else{
            odd+=1;
        }
    }
    std::cout<<"\nthere are "<< even <<" even elements in the array \n";
    std::cout<<"there are "<< odd << " odd elements in the array";

    return 0;

}