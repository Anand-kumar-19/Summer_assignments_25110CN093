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
    
    // to move zeroes to end
    int i=0;
    
    for(int j=0;j<n;j++){
        if (arr[j]!=0){
            std::swap(arr[i],arr[j]);
            i++;
        }
    }

    //displaying array
    std::cout<<"\nyour array after moving zeroes to end is: ";
    for(int j=0;j<sizeof(arr)/sizeof(arr[0]);j++){
        std::cout<<arr[j]<<" ";
    }
    

    return 0;
}