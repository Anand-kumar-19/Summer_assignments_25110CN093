#include<iostream>

void reverse(int arr[],int start,int end){
      
    int i=start;
    int j=end;

    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i+=1;
        j-=1;
    }

}

int main(){
     int n; //size of array
    std::cout<<"enter the value of n : ";
    std::cin>>n;
    if(n==0){
        std::cout<<"array size must be a positive";
        return 0;
    }
    
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
    
    //taking input for number of rotation
    int rotation;
    std::cout<<"\nenter the number of rotations :";
    std::cin>>rotation;
    rotation=rotation%n;

    //rotating the array left
    reverse(arr,0,rotation-1);
    reverse(arr,rotation,n-1);
    reverse(arr,0,n-1);
    
    //displaying the rotated array
    std::cout<<"your left rotated array is: ";
    for(int j=0;j<sizeof(arr)/sizeof(arr[0]);j++){
        std::cout<<arr[j]<<" ";
    }
    
    return 0;
}