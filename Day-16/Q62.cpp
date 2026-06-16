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
    
    // to find the element with maximum frequency
    int currentfreq,maxfreq=0,element,maxelement=arr[0];
    for (int i=0;i<n;i++){
        element=arr[i];
        currentfreq=1;
        for(int j=i+1;j<n;j++){
            if (element==arr[j]){
                currentfreq+=1;
            }
        }
        if (currentfreq>maxfreq){
            maxfreq=currentfreq;
            maxelement=element;
        }
        
    }
    std::cout<<"\nthe element with maximum frequency is: "<<maxelement; 
    return 0;
}