#include <iostream>

int dot_product(int[], int[], int);

int main(){
    int vector1[] = {1, 2, 3};
    int vector2[] = {4, 5, 6};

    std::cout << dot_product(vector1, vector2, 3) << std::endl;

    return 0;
}

int dot_product(int a[], int b[], int length){
    int current_total = 0;
    for (int i = 0; i < length;i++){
        current_total += a[i] * b[i];
    }
    return current_total;
}