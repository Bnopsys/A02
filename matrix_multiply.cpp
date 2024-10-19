#include <iostream>

void multiply(int A[][3],int B[][3], int C[][3], int r, int c);
void multiply(int A[][2],int B[][2], int C[][2], int r, int c);

int main(){

    int A [][2] = {{1 ,2},
                   {3 ,4}};

    int B [][2] = {{5 ,6},
                   {7 ,8}};
    int C [2][2];
    multiply(A, B, C, 2, 2);
    for (int i = 0;i<2;i++){
        for (int j = 0; j < 2;j++){
            std::cout<<"["<< C[i][j] << "]";
        }
        std::cout << "\n";
    }
    return 0;
}

void multiply(int A[][2],int B[][2], int C[][2], int r, int c){
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            C[i][j] = A[i][j] * B[i][j];
        }
    }

}
void multiply(int A[][3],int B[][3], int C[][3], int r, int c){
    for (int i=0;i<r;i++){
        for (int j;j<c;j++){
            C[i][j] = A[i][j] * B[i][j];
        }
    }
}