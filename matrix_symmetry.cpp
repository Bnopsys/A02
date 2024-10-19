#include <iostream>

bool symmetric (int matrix[][2], int size);
bool symmetric (int matrix[][3], int size);

int main(){
    // test case
    int matrix_a[][2] = {{0,1},{1,0}};
    int m1 [][3] = {{3 , 5 , 9}, 
                    {5 , 7 , 1}, 
                    {9 , 1 , 5}};
    int m2 [][3] = {{3 , 5 , 10},
                    {5 , 0 , 6},
                    {10 , 7 , 1}};

    std::cout << symmetric(m1, 3) << std::endl;
    std::cout << symmetric(m2, 3) << std::endl;
    return 0;
}

bool symmetric (int matrix[][2], int size){
    for (int i = 0;i < size;i++){
        for (int j = 0; j < size;j++){
            if (matrix[i][j] != matrix[j][i]){
                return false;
            }
        }
    }
    return true;
}

bool symmetric (int matrix[][3], int size){
    for (int i = 0;i < size;i++){
        for (int j = 0; j < size;j++){
            if (matrix[i][j] != matrix[j][i]){
                return false;
            }
        }
    }
    return true;
}