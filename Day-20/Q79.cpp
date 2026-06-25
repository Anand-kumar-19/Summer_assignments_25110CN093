#include<iostream>

int main(){

    int rows, cols;

    // Taking input for the dimensions of the matrices
    std::cout << "Enter the number of rows : ";
    std::cin >> rows;

    std::cout << "Enter the number of columns : ";
    std::cin >> cols;

    int matrix1[rows][cols];
    int rowwisesum[rows];

    // Taking input for the  matrix
    std::cout << "Enter the elements of the matrix :\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cin >> matrix1[i][j];
        }
    }

    // Displaying the  matrix
    std::cout << "\nmatrix :\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cout << matrix1[i][j] << " ";
        }
        std::cout << '\n';
    }

    // row-wise sum of matrices
    for(int i=0;i<rows;i++){
        int sum=0;
        for(int j=0;j<cols;j++){
            sum+=matrix1[i][j];
        }
        rowwisesum[i]=sum;
    }
    // Displaying the resultant matrix
    std::cout << "\nrow-wise sum of the matrix :\n";
    for(int i = 0; i < rows; i++){
            std::cout << rowwisesum[i] << " ";
    }

    return 0;
}