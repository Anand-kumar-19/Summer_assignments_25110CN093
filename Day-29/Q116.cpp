#include<iostream>
#include<string>

struct Product{

    int productid;
    std::string productname;
    int quantity;
    float price;
};

int main(){

    int n;

    // Taking input for the number of products
    std::cout << "Enter the number of products : ";
    std::cin >> n;

    Product products[n];

    // Taking input for product details
    std::cout << "\nEnter the details of the products :\n";

    for(int i = 0; i < n; i++){

        std::cout << "\nProduct " << i + 1 << '\n';

        std::cout << "Enter the product ID : ";
        std::cin >> products[i].productid;

        std::cin.ignore();

        std::cout << "Enter the product name : ";
        std::getline(std::cin, products[i].productname);

        std::cout << "Enter the quantity : ";
        std::cin >> products[i].quantity;

        std::cout << "Enter the price per unit : ";
        std::cin >> products[i].price;
    }

    // Displaying inventory details
    std::cout << "\n===== INVENTORY DETAILS =====\n";

    for(int i = 0; i < n; i++){

        std::cout << "\nProduct " << i + 1 << '\n';
        std::cout << "Product ID : "
                  << products[i].productid << '\n';

        std::cout << "Product Name : "
                  << products[i].productname << '\n';

        std::cout << "Quantity : "
                  << products[i].quantity << '\n';

        std::cout << "Price per Unit : "
                  << products[i].price << '\n';

        std::cout << "Total Value : "
                  << products[i].quantity * products[i].price
                  << '\n';
    }

    // Calculating the total inventory value
    float totalinventoryvalue = 0;

    for(int i = 0; i < n; i++){
        totalinventoryvalue += products[i].quantity *
                               products[i].price;
    }

    std::cout << "\nTotal Inventory Value : "
              << totalinventoryvalue;

    return 0;
}