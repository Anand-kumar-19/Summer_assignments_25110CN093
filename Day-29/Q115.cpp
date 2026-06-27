#include<iostream>
#include<cstring>

int main(){

    char str[100];

    // Taking input for the string
    std::cout << "Enter a string : ";
    std::cin.getline(str, 100);

    int choice;

    do{

        // Displaying the menu
        std::cout << "\n===== STRING OPERATIONS MENU =====\n";
        std::cout << "1. Find Length of the String\n";
        std::cout << "2. Reverse the String\n";
        std::cout << "3. Count Vowels and Consonants\n";
        std::cout << "4. Convert Lowercase to Uppercase\n";
        std::cout << "5. Display the String\n";
        std::cout << "6. Exit\n";

        // Taking input for the choice
        std::cout << "Enter your choice : ";
        std::cin >> choice;

        switch(choice){

            case 1:{

                int length = 0;

                while(str[length] != '\0'){
                    length++;
                }

                std::cout << "Length of the string : "
                          << length;
                break;
            }

            case 2:{

                int length = 0;

                while(str[length] != '\0'){
                    length++;
                }

                std::cout << "Reversed string : ";

                for(int i = length - 1; i >= 0; i--){
                    std::cout << str[i];
                }

                break;
            }

            case 3:{

                int vowels = 0, consonants = 0;
                int i = 0;

                while(str[i] != '\0'){

                    if((str[i] >= 'A' && str[i] <= 'Z') ||
                       (str[i] >= 'a' && str[i] <= 'z')){

                        if(str[i] == 'a' || str[i] == 'e' ||
                           str[i] == 'i' || str[i] == 'o' ||
                           str[i] == 'u' || str[i] == 'A' ||
                           str[i] == 'E' || str[i] == 'I' ||
                           str[i] == 'O' || str[i] == 'U'){

                            vowels++;
                        }
                        else{
                            consonants++;
                        }
                    }

                    i++;
                }

                std::cout << "Vowels : " << vowels << '\n';
                std::cout << "Consonants : " << consonants;

                break;
            }

            case 4:{

                for(int i = 0; str[i] != '\0'; i++){

                    if(str[i] >= 'a' && str[i] <= 'z'){
                        str[i] = str[i] - 32;
                    }
                }

                std::cout << "Updated string : " << str;
                break;
            }

            case 5:{

                std::cout << "String : " << str;
                break;
            }

            case 6:{

                std::cout << "Exiting the program...";
                break;
            }

            default:{

                std::cout << "Invalid choice.";
            }
        }

    }while(choice != 6);

    return 0;
}