#include<iostream>

int main(){

    int rows, cols;

    // Taking input for the dimensions of the matrix
    std::cout << "Enter the number of rows : ";
    std::cin >> rows;

    std::cout << "Enter the number of columns : ";
    std::cin >> cols;

    // A symmetric matrix must be square
    if(rows != cols){
        std::cout << "The matrix is not symmetric.";
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

    // Checking if the matrix is symmetric
    bool issymmetric = true;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){

            if(matrix[i][j] != matrix[j][i]){
                issymmetric = false;
                break;
            }
        }

        if(!issymmetric){
            break;
        }
    }

    // Displaying the result
    if(issymmetric){
        std::cout << "\nThe matrix is symmetric.";
    }
    else{
        std::cout << "\nThe matrix is not symmetric.";
    }

    return 0;
}