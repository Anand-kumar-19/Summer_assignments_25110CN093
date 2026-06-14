#include<iostream>

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

    //taking input for element to be searched in the array
    long long element;
    std::cout<<"\nenter the value of element : ";
    std::cin>>element;

    //to get the frequency of an element
    long long count=0;
    
    for (long long i=0;i<n;i++){
        if (arr[i]==element){
            count+=1;
        }
    }
    
    if (count==0){
        std::cout<<element<<" was not present in the given array";
    }
    else{
        std::cout<<"the frequency of "<<element<<" is "<<count<<" in the given array";
    }

    return 0;
}