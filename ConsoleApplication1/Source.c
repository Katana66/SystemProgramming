 //Индивидуальное задание номер 1

//#include <stdio.h>
//#include <locale.h>
//unsigned long calculateCylinderVolume(unsigned long radius, unsigned long height) {
//    const double pi = 3.14159265358979323846;
//    double volume = pi * radius * radius * height;
//    return (unsigned long)volume;
//}
//
//int main() {
//    unsigned long radius = 5; // Радиус цилиндра
//    unsigned long height = 10; // Высота цилиндра
//    setlocale(LC_ALL, "rus");
//    // Указатели на радиус и высоту
//    unsigned long* radiusPtr = &radius;
//    unsigned long* heightPtr = &height;
//
//    // Вычисление объема цилиндра через указатели
//    unsigned long volume = calculateCylinderVolume(*radiusPtr, *heightPtr);
//
//    printf("Объем цилиндра: %lu\n", volume);
//
//    return 0;
//}
// 
// 


//Индивидуальное задание номер 2
//#include <stdio.h>
//#include <stdlib.h>
//#include <locale.h>
//// Функция для обмена значений четных и нечетных ячеек массива
//void swapEvenOdd(int* arr, int size) {
//    for (int i = 0; i < size - 1; i += 2) {
//        // Обмен значениями через указатели
//        int* even = arr + i;
//        int* odd = arr + i + 1;
//        int temp = *even;
//        *even = *odd;
//        *odd = temp;
//    }
//}
//
//int main() {
//    // Выделение памяти для массива на 12 элементов
//    int* arr = (int*)malloc(12 * sizeof(int));
//    setlocale(LC_ALL, "rus");
//    // Проверка на успешное выделение памяти
//    if (arr == NULL) {
//        printf("Ошибка выделения памяти\n");
//        return 1;
//    }
//
//    // Инициализация массива
//    for (int i = 0; i < 12; i++) {
//        arr[i] = i + 1;
//    }
//
//    // Вывод исходного массива
//    printf("Исходный массив:\n");
//    for (int i = 0; i < 12; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    // Вызов функции для обмена значений четных и нечетных ячеек
//    swapEvenOdd(arr, 12);
//
//    // Вывод измененного массива
//    printf("Массив после обмена четных и нечетных элементов:\n");
//    for (int i = 0; i < 12; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    // Освобождение памяти
//    free(arr);
//
//    return 0;
//}


//Индивидуальное задание номер 3
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <locale.h>
//
//// Функция для заполнения двумерного массива случайными числами от 10 до 100
//void fillRandom(int rows, int cols, int** arr) {
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            arr[i][j] = rand() % 91 + 10; // Генерация случайного числа от 10 до 100
//        }
//    }
//}
//
//// Функция для печати двумерного массива
//void printArray(int rows, int cols, int** arr) {
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            printf("%3d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//// Функция для вычисления суммы элементов в каждой строке массива
//void calculateRowSums(int rows, int cols, int** arr, int* sums) {
//    for (int i = 0; i < rows; i++) {
//        sums[i] = 0; // Обнуляем сумму для текущей строки
//        for (int j = 0; j < cols; j++) {
//            sums[i] += arr[i][j]; // Добавляем значение элемента к сумме строки
//        }
//    }
//}
//
//// Функция для определения номера строки с максимальной суммой элементов
//int findMaxSumRow(int rows, int* sums) {
//    int maxSum = sums[0];
//    int maxSumRow = 0;
//    for (int i = 1; i < rows; i++) {
//        if (sums[i] > maxSum) {
//            maxSum = sums[i];
//            maxSumRow = i;
//        }
//    }
//    return maxSumRow;
//}
//
//int main() {
//    int rows, cols;
//    setlocale(LC_ALL, "rus");
//    printf("Введите количество строк: ");
//    scanf_s("%d", &rows);
//    printf("Введите количество столбцов: ");
//    scanf_s("%d", &cols);
//
//    // Инициализация генератора случайных чисел
//    srand(time(NULL));
//
//    // Выделение памяти для двумерного массива
//    int** arr = (int**)malloc(rows * sizeof(int*));
//    for (int i = 0; i < rows; i++) {
//        arr[i] = (int*)malloc(cols * sizeof(int));
//    }
//
//    // Заполнение массива случайными числами
//    fillRandom(rows, cols, arr);
//
//    // Печать массива
//    printf("Сгенерированный массив:\n");
//    printArray(rows, cols, arr);
//
//    // Вычисление сумм элементов в каждой строке
//    int* sums = (int*)malloc(rows * sizeof(int));
//    calculateRowSums(rows, cols, arr, sums);
//
//    // Нахождение номера строки с максимальной суммой
//    int maxSumRow = findMaxSumRow(rows, sums);
//
//    printf("Номер строки с максимальной суммой элементов: %d\n", maxSumRow + 1);
//
//    // Освобождение выделенной памяти
//    for (int i = 0; i < rows; i++) {
//        free(arr[i]);
//    }
//    free(arr);
//    free(sums);
//
//    return 0;
//}



