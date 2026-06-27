#include<iostream>

int main(){

    int n;

    // Taking input for the size of the array
    std::cout << "Enter the size of the array : ";
    std::cin >> n;

    int arr[n];

    // Taking input for the array elements
    std::cout << "Enter the elements of the array :\n";
    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }

    int choice;

    do{

        // Displaying the menu
        std::cout << "\n===== ARRAY OPERATIONS MENU =====\n";
        std::cout << "1. Display Array\n";
        std::cout << "2. Sum of All Elements\n";
        std::cout << "3. Product of All Elements\n";
        std::cout << "4. Reverse the Array\n";
        std::cout << "5. Find Maximum Element\n";
        std::cout << "6. Find Minimum Element\n";
        std::cout << "7. Exit\n";

        // Taking input for the choice
        std::cout << "Enter your choice : ";
        std::cin >> choice;

        switch(choice){

            case 1:

                std::cout << "Array elements : ";
                for(int i = 0; i < n; i++){
                    std::cout << arr[i] << " ";
                }
                break;

            case 2:

                int sum;
                sum = 0;

                for(int i = 0; i < n; i++){
                    sum += arr[i];
                }

                std::cout << "Sum of all elements : " << sum;
                break;

            case 3:

                int product;
                product = 1;

                for(int i = 0; i < n; i++){
                    product *= arr[i];
                }

                std::cout << "Product of all elements : " << product;
                break;

            case 4:

                std::cout << "Reversed array : ";

                for(int i = n - 1; i >= 0; i--){
                    std::cout << arr[i] << " ";
                }
                break;

            case 5:

                int maximum;
                maximum = arr[0];

                for(int i = 1; i < n; i++){
                    if(arr[i] > maximum){
                        maximum = arr[i];
                    }
                }

                std::cout << "Maximum element : " << maximum;
                break;

            case 6:

                int minimum;
                minimum = arr[0];

                for(int i = 1; i < n; i++){
                    if(arr[i] < minimum){
                        minimum = arr[i];
                    }
                }

                std::cout << "Minimum element : " << minimum;
                break;

            case 7:

                std::cout << "Exiting the program...";
                break;

            default:

                std::cout << "Invalid choice.";
        }

    }while(choice != 7);

    return 0;
}