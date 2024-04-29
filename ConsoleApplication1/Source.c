 //�������������� ������� ����� 1

//#include <stdio.h>
//#include <locale.h>
//unsigned long calculateCylinderVolume(unsigned long radius, unsigned long height) {
//    const double pi = 3.14159265358979323846;
//    double volume = pi * radius * radius * height;
//    return (unsigned long)volume;
//}
//
//int main() {
//    unsigned long radius = 5; // ������ ��������
//    unsigned long height = 10; // ������ ��������
//    setlocale(LC_ALL, "rus");
//    // ��������� �� ������ � ������
//    unsigned long* radiusPtr = &radius;
//    unsigned long* heightPtr = &height;
//
//    // ���������� ������ �������� ����� ���������
//    unsigned long volume = calculateCylinderVolume(*radiusPtr, *heightPtr);
//
//    printf("����� ��������: %lu\n", volume);
//
//    return 0;
//}
// 
// 


//�������������� ������� ����� 2
//#include <stdio.h>
//#include <stdlib.h>
//#include <locale.h>
//// ������� ��� ������ �������� ������ � �������� ����� �������
//void swapEvenOdd(int* arr, int size) {
//    for (int i = 0; i < size - 1; i += 2) {
//        // ����� ���������� ����� ���������
//        int* even = arr + i;
//        int* odd = arr + i + 1;
//        int temp = *even;
//        *even = *odd;
//        *odd = temp;
//    }
//}
//
//int main() {
//    // ��������� ������ ��� ������� �� 12 ���������
//    int* arr = (int*)malloc(12 * sizeof(int));
//    setlocale(LC_ALL, "rus");
//    // �������� �� �������� ��������� ������
//    if (arr == NULL) {
//        printf("������ ��������� ������\n");
//        return 1;
//    }
//
//    // ������������� �������
//    for (int i = 0; i < 12; i++) {
//        arr[i] = i + 1;
//    }
//
//    // ����� ��������� �������
//    printf("�������� ������:\n");
//    for (int i = 0; i < 12; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    // ����� ������� ��� ������ �������� ������ � �������� �����
//    swapEvenOdd(arr, 12);
//
//    // ����� ����������� �������
//    printf("������ ����� ������ ������ � �������� ���������:\n");
//    for (int i = 0; i < 12; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    // ������������ ������
//    free(arr);
//
//    return 0;
//}


//�������������� ������� ����� 3
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <locale.h>
//
//// ������� ��� ���������� ���������� ������� ���������� ������� �� 10 �� 100
//void fillRandom(int rows, int cols, int** arr) {
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            arr[i][j] = rand() % 91 + 10; // ��������� ���������� ����� �� 10 �� 100
//        }
//    }
//}
//
//// ������� ��� ������ ���������� �������
//void printArray(int rows, int cols, int** arr) {
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            printf("%3d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//// ������� ��� ���������� ����� ��������� � ������ ������ �������
//void calculateRowSums(int rows, int cols, int** arr, int* sums) {
//    for (int i = 0; i < rows; i++) {
//        sums[i] = 0; // �������� ����� ��� ������� ������
//        for (int j = 0; j < cols; j++) {
//            sums[i] += arr[i][j]; // ��������� �������� �������� � ����� ������
//        }
//    }
//}
//
//// ������� ��� ����������� ������ ������ � ������������ ������ ���������
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
//    printf("������� ���������� �����: ");
//    scanf_s("%d", &rows);
//    printf("������� ���������� ��������: ");
//    scanf_s("%d", &cols);
//
//    // ������������� ���������� ��������� �����
//    srand(time(NULL));
//
//    // ��������� ������ ��� ���������� �������
//    int** arr = (int**)malloc(rows * sizeof(int*));
//    for (int i = 0; i < rows; i++) {
//        arr[i] = (int*)malloc(cols * sizeof(int));
//    }
//
//    // ���������� ������� ���������� �������
//    fillRandom(rows, cols, arr);
//
//    // ������ �������
//    printf("��������������� ������:\n");
//    printArray(rows, cols, arr);
//
//    // ���������� ���� ��������� � ������ ������
//    int* sums = (int*)malloc(rows * sizeof(int));
//    calculateRowSums(rows, cols, arr, sums);
//
//    // ���������� ������ ������ � ������������ ������
//    int maxSumRow = findMaxSumRow(rows, sums);
//
//    printf("����� ������ � ������������ ������ ���������: %d\n", maxSumRow + 1);
//
//    // ������������ ���������� ������
//    for (int i = 0; i < rows; i++) {
//        free(arr[i]);
//    }
//    free(arr);
//    free(sums);
//
//    return 0;
//}



