#include<iostream>

int main(){

    int rows, cols;

    // Taking input for the dimensions of the matrix
    std::cout << "Enter the number of rows : ";
    std::cin >> rows;

    std::cout << "Enter the number of columns : ";
    std::cin >> cols;

    // Diagonal sum is defined only for square matrices
    if(rows != cols){
        std::cout << "Diagonal sum can only be found for a square matrix.";
        return 0;
    }

    int matrix[rows][cols];

    // Taking input for the matrix
    std::cout << "Enter the elements of the matrix :\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cin >> matrix[i][j];
        }
    }

    // Displaying the matrix
    std::cout << "\nMatrix :\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cout << matrix[i][j] << " ";
        }
        std::cout << '\n';
    }

    int leftDiagonalSum = 0;
    int rightDiagonalSum = 0;

    // Finding diagonal sums
    for(int i = 0; i < rows; i++){

        // Left diagonal elements: (0,0), (1,1), (2,2)...
        leftDiagonalSum += matrix[i][i];

        // Right diagonal elements: (0,n-1), (1,n-2), (2,n-3)...
        rightDiagonalSum += matrix[i][cols - 1 - i];
    }

    int totalDiagonalSum = leftDiagonalSum + rightDiagonalSum;

    // If the matrix size is odd, the center element gets counted twice
    if(rows % 2 != 0){
        totalDiagonalSum -= matrix[rows / 2][cols / 2];
    }

    // Displaying the sums
    std::cout << "\nLeft diagonal sum : " << leftDiagonalSum;
    std::cout << "\nRight diagonal sum : " << rightDiagonalSum;
    std::cout << "\nTotal diagonal sum : " << totalDiagonalSum;

    return 0;
}