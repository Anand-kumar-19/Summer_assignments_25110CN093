#include<iostream>

int main(){

    int rows, cols;

    // Taking input for the dimensions of the matrices
    std::cout << "Enter the number of rows : ";
    std::cin >> rows;

    std::cout << "Enter the number of columns : ";
    std::cin >> cols;

    int matrix1[rows][cols];
    int matrix2[rows][cols];
    int sum[rows][cols];

    // Taking input for the first matrix
    std::cout << "Enter the elements of the first matrix :\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cin >> matrix1[i][j];
        }
    }

    // Displaying the first matrix
    std::cout << "\nFirst matrix :\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cout << matrix1[i][j] << " ";
        }
        std::cout << '\n';
    }

    // Taking input for the second matrix
    std::cout << "\nEnter the elements of the second matrix :\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cin >> matrix2[i][j];
        }
    }

    // Displaying the second matrix
    std::cout << "\nSecond matrix :\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cout << matrix2[i][j] << " ";
        }
        std::cout << '\n';
    }

    // Adding the matrices
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Displaying the resultant matrix
    std::cout << "\nSum of the matrices :\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cout << sum[i][j] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}