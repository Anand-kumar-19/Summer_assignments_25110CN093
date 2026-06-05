#include<iostream>

int main()
{
    int rows;
    std::cout<<"enter no. of rows : ";
    std::cin>>rows;

    for (int i=1;i<=rows;i++){
        for (int j=1;j<=i;j++){
            std::cout<<j;
            //printing the values of j 
            //as it goes from 1 to the value of i currently
        }
        std::cout<<"\n";
    }
    return 0;
}