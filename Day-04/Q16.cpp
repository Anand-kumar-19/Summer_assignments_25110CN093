#include<iostream>
#include<cmath>

int main()
{   
    int num;
    
    std::cout<<"enter the number :";
    std::cin>>num;

    for (int i=1;i<=num;i++){
        
        int num_digit=i,count=0;
        //to count the digits in the number
        while(num_digit!=0){
            count+=1;
            num_digit/=10;
        }
        int original_num=i;
        double total=0;
        //to calculate the total of the digits raised to the no of digits as power
        while(original_num!=0){
            int rem=original_num%10;
            total+=pow(rem,count);
            original_num/=10;
        }
    
        if((int)total==i){
            std::cout<<i<<" ";
        }
    }
    return 0;
}