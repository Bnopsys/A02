#include <iostream>

void prefix_sum(int A[], int S[], int size);

int main() {

    int demo[] = {1, 2, 3, 4, 5, 6};
    int array_size = sizeof(demo) / sizeof(demo[0]);
    int return_array[array_size];

    std::cout << "Demo Array: " << std::endl;
    for (int i = 0;i < array_size;i++){
        std::cout << demo[i] << std::endl;
    }
    std::cout << std::endl;

    prefix_sum(demo, return_array, array_size);
    std::cout << "Prefix Array: " << std::endl;
    for (int i = 0;i < array_size;i++){
        std::cout << return_array[i] << std::endl;
    }
    return 0;
}

void prefix_sum(int A[], int S[], int size){
    for (int i = 0;i < size;i++){
        int current_value = 0;
        for (int j = 0;j <= i;j++){
            current_value += A[j];
        }
        S[i] = current_value;
    }
}