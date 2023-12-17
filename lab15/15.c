#include <stdio.h>

#define MAX_SIZE 8

int main() {
  int matrix[MAX_SIZE][MAX_SIZE];
  int size;

  printf("Введите размерность: ");
  scanf("%d", &size);

  printf("Введите матрицу:\n");
  for (int i = 0; i < size; ++i) {
    for (int j = 0; j < size; ++j) {
      scanf("%d", &matrix[i][j]);
    }
  }

  int maxElement = matrix[0][0];
  int maxRow = 0;
  int sum = 0;

  // Находим максимальный элемент матрицы и его строку
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (matrix[i][j] > maxElement) {
        maxElement = matrix[i][j];
        maxRow = i;
      }
    }
  }
  // Считаем сумму элементов строки с минимальным номером, содержащей максимальный элемент
  for (int j = 0; j < size; j++) {
    sum += matrix[maxRow][j];
  }

  printf("Сумма элементов строки с минимальным номером, содержащей максимальный элемент: %d\n", sum);

  return 0;
}
