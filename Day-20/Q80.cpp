#include<iostream>

int main(){

    int rows, cols;

    // Taking input for the dimensions of the matrices
    std::cout << "Enter the number of rows : ";
    std::cin >> rows;

    std::cout << "Enter the number of columns : ";
    std::cin >> cols;

    int matrix1[rows][cols];
    int colwisesum[cols];

    // Taking input for the  matrix
    std::cout << "Enter the elements of the matrix :\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cin >> matrix1[i][j];
        }
    }

    // Displaying the  matrix
    std::cout << "\n matrix :\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cout << matrix1[i][j] << " ";
        }
        std::cout << '\n';
    }

    // column-wise sum of matrices
    for(int i=0;i<cols;i++){
        int sum=0;
        for(int j=0;j<rows;j++){
            sum+=matrix1[j][i];
        }
        colwisesum[i]=sum;
    }
    // Displaying the resultant matrix
    std::cout << "\ncolumn-wise sum of the matrix :\n";
    for(int i = 0; i < cols; i++){
            std::cout << colwisesum[i] << " ";
    }

    return 0;
}