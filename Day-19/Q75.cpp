#include<iostream>

int main(){

    int rows, cols;

    // Taking input for the dimensions of the matrices
    std::cout << "Enter the number of rows : ";
    std::cin >> rows;

    std::cout << "Enter the number of columns : ";
    std::cin >> cols;

    int matrix1[rows][cols],transpose[cols][rows];

    // Taking input for the  matrix
    std::cout << "Enter the elements of the  matrix :\n";
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
    
    // transposing the matrix
    for(int i=0;i<cols;i++){
        for(int j=0;j<rows;j++){
            transpose[i][j]=matrix1[j][i];
        }
    }
    
    // Displaying the resultant matrix
    std::cout << "\nTranspose of the matrix :\n";
    for(int i = 0; i < cols; i++){
        for(int j = 0; j < rows; j++){
            std::cout << transpose[i][j] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}