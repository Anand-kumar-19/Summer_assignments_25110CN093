#include<iostream>
#include<ctime>
#include<limits>

int main()
{
    srand(time(0));
    
    int num=(rand()%100) +1 ;
    int guess;
    int tries=0;
    
    std::cout<<"WELCOME TO THE NUMBER GUESSING GAME\n";
    
    do{
        std::cout<<"please guess the num: ";

        while(!(std::cin>>guess)){
            std::cout<<"invalid input! please enter an integer : ";
        
            std::cin.clear();
            std::cin.ignore(
                std::numeric_limits<std::streamsize>::max(),
                '\n'
            );
        }
        
        tries++;

        if (guess==num){
            std::cout<<"congrats you guessed the number\n";
            std::cout<<"you took "<<tries<<" tries to guess the number\n";
            break;
        }
        else if (tries>=5){
            std::cout<<"You lost the game\n";
            std::cout<<"the number was :"<<num<<"\n";
            break;
        }
        else if(guess<num){
            std::cout<<"too low ,try again\n";
        }
        
        else{
            std::cout<<"too high , try again\n";
        }
    }while(guess!=num);
    
    std::cout<<"************************************";

    return 0;
}