#include <iostream>
#include <vector>

void fillArray(float arr[4][4]) {
    float symbol;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            std::cin >> symbol;
            arr[i][j] = symbol;
        }
    }
}

void fillVector(std::vector<float> &vector) {
    float symbol;
    for (int i = 0; i < 4; i++) {
        std::cin >> symbol;
        vector.push_back(symbol);
    }
}

void multiply(float array[4][4], std::vector<float> vector, std::vector<float> &multiplyResult) {
    for (int i = 0; i < 4; i++) {
        float result = 0;
        for (int j = 0; j < 4; j++) {
            result += array[i][j] * vector[j];
        }
        multiplyResult[i] = result;
    }
}

void printArray(std::vector<float> vector) {
    for (int i = 0; i < 4; i++) {
        std::cout << vector[i] << " ";
    }
}

int main() {
    std::vector<float> vector;
    float array[4][4];
    std::vector<float> multiplyResult(4);

    std::cout << "Input elements of array: ";
    fillArray(array);
    std::cout << "Input elements of vector: ";
    fillVector(vector);

    multiply(array, vector, multiplyResult);
    printArray(multiplyResult);

}
