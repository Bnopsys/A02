#include <iostream>

void diagonal(int matrix[][2], int diagonal[], int size);
void diagonal(int matrix[][3], int diagonal[], int size);

int main(){
    const int size3 = 3;

    int m3[][size3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int d3[size3];
    diagonal(m3, d3, size3);
    for (int i = 0;i < size3;++i){
        std::cout << d3[i] << " ";
    }
    return 0;
}

void diagonal(int matrix[][2], int diagonal[], int size){
    for (int i = 0;i < size;i++){
        diagonal[i] = matrix[i][i];
    }
}

void diagonal(int matrix[][3], int diagonal[], int size){
    for (int i = 0;i < size;i++){
        diagonal[i] = matrix[i][i];
    }
}