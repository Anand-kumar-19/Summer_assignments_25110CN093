#include<iostream>

int main(){

    int rows1, cols1, rows2, cols2;

    // Taking input for the dimensions of the first matrix
    std::cout << "Enter the number of rows of first matrix : ";
    std::cin >> rows1;

    std::cout << "Enter the number of columns of first matrix : ";
    std::cin >> cols1;

    // Taking input for the dimensions of the second matrix
    std::cout << "Enter the number of rows of second matrix : ";
    std::cin >> rows2;

    std::cout << "Enter the number of columns of second matrix : ";
    std::cin >> cols2;

    // Checking if multiplication is possible
    if(cols1 != rows2){
        std::cout << "Matrix multiplication is not possible.";
        return 0;
    }

    int matrix1[rows1][cols1];
    int matrix2[rows2][cols2];
    int product[rows1][cols2];

    // Taking input for the first matrix
    std::cout << "Enter the elements of the first matrix :\n";
    for(int i = 0; i < rows1; i++){
        for(int j = 0; j < cols1; j++){
            std::cin >> matrix1[i][j];
        }
    }

    // Displaying the first matrix
    std::cout << "\nFirst matrix :\n";
    for(int i = 0; i < rows1; i++){
        for(int j = 0; j < cols1; j++){
            std::cout << matrix1[i][j] << " ";
        }
        std::cout << '\n';
    }

    // Taking input for the second matrix
    std::cout << "\nEnter the elements of the second matrix :\n";
    for(int i = 0; i < rows2; i++){
        for(int j = 0; j < cols2; j++){
            std::cin >> matrix2[i][j];
        }
    }

    // Displaying the second matrix
    std::cout << "\nSecond matrix :\n";
    for(int i = 0; i < rows2; i++){
        for(int j = 0; j < cols2; j++){
            std::cout << matrix2[i][j] << " ";
        }
        std::cout << '\n';
    }

    // Multiplying the matrices
    for(int i = 0; i < rows1; i++){
        for(int j = 0; j < cols2; j++){

            product[i][j] = 0;

            for(int k = 0; k < cols1; k++){
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Displaying the product matrix
    std::cout << "\nProduct matrix :\n";
    for(int i = 0; i < rows1; i++){
        for(int j = 0; j < cols2; j++){
            std::cout << product[i][j] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}