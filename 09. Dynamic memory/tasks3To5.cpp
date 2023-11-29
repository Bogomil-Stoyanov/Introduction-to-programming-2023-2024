#include <iostream>

void dynamicArrayInput() {
    int size = 5;
    int* arr = new int[size];
    int count = 0;
    char choice;

    do {
        if (count == size) {
            int newSize = size * 2;
            int* newArr = new int[newSize];
             for (int i = 0; i < size; ++i) {
                newArr[i] = arr[i];
            }

            delete[] arr;
            arr = newArr;
            size = newSize;
        }
        std::cout << "enter value for element " << count << ": ";
        std::cin >> arr[count++];
        std::cout << "do you want to add another element? (Y/N): ";
        std::cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    std::cout << "Final array: ";
    for (int i = 0; i < count; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;
}

void matrixMultiplication() {
    int rowsA, colsA, rowsB, colsB;
    std::cout << "enter rows and columns for matrix A: ";
    std::cin >> rowsA >> colsA;
    std::cout << "enter rows and columns for matrix B: ";
    std::cin >> rowsB >> colsB;

    if (colsA != rowsB) {
        std::cout << "matrix multiplication not possible!" << std::endl;
        return;
    }

    int** matrixA = new int*[rowsA];
    int** matrixB = new int*[rowsB];
    int** matrixC = new int*[rowsA];

    // matrix A
    std::cout << "enter values for matrix A:" << std::endl;
    for (int i = 0; i < rowsA; ++i) {
        matrixA[i] = new int[colsA];
        for (int j = 0; j < colsA; ++j) {
            std::cin >> matrixA[i][j];
        }
    }

    // matrix B
    std::cout << "Enter values for matrix B:" << std::endl;
    for (int i = 0; i < rowsB; ++i) {
        matrixB[i] = new int[colsB];
        for (int j = 0; j < colsB; ++j) {
            std::cin >> matrixB[i][j];
        }
    }

    // matrix C
    for (int i = 0; i < rowsA; ++i) {
        matrixC[i] = new int[colsB]();
    }

    // A*B = C
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            for (int k = 0; k < colsA; ++k) {
                matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    std::cout << "Resultant Matrix:" << std::endl;
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            std::cout << matrixC[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < rowsA; ++i) {
        delete[] matrixA[i];
        delete[] matrixC[i];
    }
    for (int i = 0; i < rowsB; ++i) {
        delete[] matrixB[i];
    }
    delete[] matrixA;
    delete[] matrixB;
    delete[] matrixC;
}

void dynamicArraySort() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int* arr = new int[size];
    std::cout << "Enter " << size << " elements:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    // Bubble Sort
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    std::cout << "Sorted array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;
}

int main() {
    std::cout << std::endl << "Dynamic Array Input and Resize Example" << std::endl;
    dynamicArrayInput();

    std::cout << std::endl << "Matrix Multiplication Example" << std::endl;
    matrixMultiplication();

    std::cout << std::endl << "Dynamic Array Sorting Example" << std::endl;
    dynamicArraySort();

    return 0;
}

