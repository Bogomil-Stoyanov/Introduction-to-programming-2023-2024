#include <iostream>

void fillWithPaint(int x, int y, int newColor, int startColor, int** matrix, int rows, int cols){
    if(x < 0 || x >= rows || y < 0 || y >= cols) return;
    if(matrix[x][y] != startColor) return;

    matrix[x][y] = newColor;

    fillWithPaint(x-1, y, newColor, startColor, matrix, rows, cols);
    fillWithPaint(x+1, y, newColor, startColor, matrix, rows, cols);
    fillWithPaint(x, y-1, newColor, startColor, matrix, rows, cols);
    fillWithPaint(x, y+1, newColor, startColor, matrix, rows, cols);
}

struct Cat{
    char* name;
    int age;

    void meow(){
        std::cout << "Meow Im " << this->name;
    }
};

void greet(Cat cat){
    std::cout << "Meow! Im " << cat.name << " and Im " << cat.age <<" years old";
}

int findIslands(int** matrix, int rows, int cols){
    int islands = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(matrix[i][j] == 1){
                islands++;
                fillWithPaint(i, j, -1, 1, matrix, rows, cols);
            }
        }
    }
    return islands;
}


int main() {
    int rows, cols;
    std::cin >> rows >> cols;
    int** matrix = new int*[rows];
    for(int i = 0; i < rows; i++){
        matrix[i] = new int[cols];
    }
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++) {
            std::cin >> matrix[i][j];
        }
    }
    std::cout << findIslands(matrix, rows, cols);
    for(int i = 0; i < rows; i++){
        delete matrix[i];
    }
    delete matrix[];
    return 0;
}

// fill paint example input
//    int rows, cols;
//    std::cin >> rows >> cols;
//    int** matrix = new int*[rows];
//    for(int i = 0; i < rows; i++){
//        matrix[i] = new int[cols];
//    }
//    for(int i = 0; i < rows; i++){
//        for(int j = 0; j < cols; j++){
//            std::cin >> matrix[i][j];
//        }
//    }
//    int x, y; //starting position
//    int color;
//    std::cin >> x >> y;
//    std::cin >> color;
//    fillWithPaint(x, y, color, matrix[x][y], matrix, rows, cols);
//
//    for(int i = 0; i < rows; i++){
//        for(int j = 0; j < cols; j++){
//            std::cout << matrix[i][j] << " ";
//        }
//        std::cout << std::endl;
//    }
//
//    for(int i = 0; i < rows; i++){
//        delete matrix[i];
//    }
//    delete matrix;