#include<iostream>

int main(){

    int n; //size of array
    std::cout<<"enter the value of n : ";
    std::cin>>n;
    
    int arr[n];
    
    //taking input from user
    std::cout<<"enter "<<n<<" elements in your array : \n";
    for (int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    
    //displaying array
    std::cout<<"your array is: ";
    for(int j=0;j<sizeof(arr)/sizeof(arr[0]);j++){
        std::cout<<arr[j]<<" ";
    }
    
    //to find the pair of elements with given sum
    int sum;
    std::cout<<"\nenter the sum you want :";
    std::cin>>sum;
    bool found=false;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                found=true;
                std::cout<<"the pair with sum "<<sum<<" is "<<"("<<arr[i]<<","<<arr[j]<<")";
                break;
            }
        }
        if (found){
            break;
        }
    }

    if (!found){
        std::cout<<"No pair with given sum found";
    }

    return 0;
}