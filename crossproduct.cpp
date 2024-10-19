#include <iostream>


void cross_product(int a[], int b[], int c[], int);

int main() {

    int vector_a[] = {1, 2, 3};
    int vector_b[] = {4, 5, 6};
    int vector_c[3];

    cross_product(vector_a, vector_b, vector_c, 3);
    for (int i = 0;i < 3;i++){
        std::cout << vector_c[i] << std::endl;
    }
    return 0;
}

void cross_product(int a[], int b[], int c[], int length=3){

    int c1 = (a[1]*b[2]) - (a[2]*b[1]);
    int c2 = (a[2]*b[0]) - (a[0]*b[2]);
    int c3 = (a[0]*b[1]) - (a[1]*b[0]);
    c[0] = c1;
    c[1] = c2;
    c[2] = c3;
}