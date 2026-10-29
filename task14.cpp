#include <iostream>

int** multiply(int** A, int** B, int M, int N, int K) {
    int** C = new int* [M];

    for (int i = 0; i < M; ++i) {
        C[i] = new int[K];

        for (int j = 0; j < K; ++j) {
            C[i][j] = 0;

            for (int k = 0; k < N; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return C;
}

int main()
{
    //int rows = 2, cols = 3;

    //int** arr = new int* [rows];

    //for (int i = 0; i < rows; ++i) {
    //    arr[i] = new int[cols];
    //}

    //arr[0][0] = 1;
    //arr[0][1] = 2;
    //arr[0][2] = 3;
    //arr[1][0] = 4;
    //arr[1][1] = 5;
    //arr[1][2] = 6;

    //int** temp = new int* [rows + 1];

    //for (int i = 0; i < rows + 1; ++i) {
    //    temp[i] = new int[cols];
    //}

    //for (int i = 0; i < rows; ++i) {
    //    for (int j = 0; j < cols; ++j) {
    //        temp[i][j] = arr[i][j];
    //    }
    //}

    //std::cout << "Enter new row: ";
    //for (int j = 0; j < cols; j++) {
    //    std::cin >> temp[rows][j];
    //}

    //for (int i = 0; i < rows; i++) {
    //    delete[] arr[i];
    //}
    //delete[] arr;

    //arr = temp;
    //rows++;

    //for (int i = 0; i < rows; ++i) {
    //    for (int j = 0; j < cols; ++j) {
    //        std::cout << arr[i][j] << " ";
    //    }
    //    std::cout << '\n';
    //}

    //for (int i = 0; i < rows; ++i) {
    //    delete[] arr[i];
    //}
    //delete[] arr;
    //2
    //int rows = 2, cols = 3;

    //int** arr = new int* [rows];

    //for (int i = 0; i < rows; ++i) {
    //    arr[i] = new int[cols];
    //}

    //arr[0][0] = 1;
    //arr[0][1] = 2;
    //arr[0][2] = 3;
    //arr[1][0] = 4;
    //arr[1][1] = 5;
    //arr[1][2] = 6;

    //int** temp = new int* [rows + 1];

    //for (int i = 0; i < rows + 1; ++i) {
    //    temp[i] = new int[cols];
    //}

    //std::cout << "Enter new row: ";
    //for (int j = 0; j < cols; ++j) {
    //    std::cin >> temp[0][j];
    //}

    //for (int i = 0; i < rows; ++i) {
    //    for (int j = 0; j < cols; ++j) {
    //        temp[i + 1][j] = arr[i][j];
    //    }
    //}

    //for (int i = 0; i < rows; ++i) {
    //    delete[] arr[i];
    //}
    //delete[] arr;

    //arr = temp;
    //rows++;

    //for (int i = 0; i < rows; ++i) {
    //    for (int j = 0; j < cols; ++j) {
    //        std::cout << arr[i][j] << " ";
    //    }
    //    std::cout << '\n';
    //}

    //for (int i = 0; i < rows; ++i) {
    //    delete[] arr[i];
    //}
    //delete[] arr;
    //3
    //int rows = 2, cols = 3;

    //int** arr = new int* [rows];

    //for (int i = 0; i < rows; ++i) {
    //    arr[i] = new int[cols];
    //}

    //arr[0][0] = 1;
    //arr[0][1] = 2;
    //arr[0][2] = 3;
    //arr[1][0] = 4;
    //arr[1][1] = 5;
    //arr[1][2] = 6;

    //int pos;
    //std::cout << "Enter position (0-" << rows << "): ";
    //std::cin >> pos;

    //if (pos < 0 || pos > rows) {
    //    std::cout << "Wrong position\n";

    //    for (int i = 0; i < rows; ++i) {
    //        delete[] arr[i];
    //    }
    //    delete[] arr;

    //    return 0;
    //}

    //int** temp = new int* [rows + 1];

    //for (int i = 0; i < rows + 1; ++i) {
    //    temp[i] = new int[cols];
    //}

    //for (int i = 0; i < pos; ++i) {
    //    for (int j = 0; j < cols; ++j) {
    //        temp[i][j] = arr[i][j];
    //    }
    //}

    //std::cout << "Enter new row:\n";

    //for (int j = 0; j < cols; ++j) {
    //    std::cin >> temp[pos][j];
    //}

    //for (int i = pos; i < rows; ++i) {
    //    for (int j = 0; j < cols; ++j) {
    //        temp[i + 1][j] = arr[i][j];
    //    }
    //}

    //for (int i = 0; i < rows; ++i) {
    //    delete[] arr[i];
    //}
    //delete[] arr;

    //arr = temp;
    //++rows;

    //for (int i = 0; i < rows; ++i) {
    //    for (int j = 0; j < cols; ++j) {
    //        std::cout << arr[i][j] << " ";
    //    }
    //    std::cout << "\n";
    //}

    //for (int i = 0; i < rows; ++i) {
    //    delete[] arr[i];
    //}
    //delete[] arr;

    //4
    srand(time(0));

    //int rows = 5, cols = 4;

    //int** arr = new int* [rows];

    //for (int i = 0; i < rows; ++i) {
    //    arr[i] = new int[cols];

    //    for (int j = 0; j < cols; ++j) {
    //        arr[i][j] = rand() % 6;
    //        std::cout << arr[i][j] << " ";
    //    }

    //    std::cout << "\n";
    //}

    //int** temp = new int* [rows];
    //int newRows = 0;

    //for (int i = 0; i < rows; ++i) {
    //    bool zero = false;

    //    for (int j = 0; j < cols; ++j) {
    //        if (arr[i][j] == 0) {
    //            zero = true;
    //        }
    //    }

    //    if (zero == false) {
    //        temp[newRows] = new int[cols];

    //        for (int j = 0; j < cols; ++j) {
    //            temp[newRows][j] = arr[i][j];
    //        }

    //        ++newRows;
    //    }
    //}

    //std::cout << "Result:\n";

    //for (int i = 0; i < newRows; ++i) {
    //    for (int j = 0; j < cols; ++j) {
    //        std::cout << temp[i][j] << " ";
    //    }
    //    std::cout << "\n";
    //}

    //for (int i = 0; i < rows; ++i) {
    //    delete[] arr[i];
    //}
    //delete[] arr;

    //for (int i = 0; i < newRows; ++i) {
    //    delete[] temp[i];
    //}
    //delete[] temp;


    //6



    //int rows, cols;

    //std::cout << "Enter rows and columns: ";
    //std::cin >> rows >> cols;

    //if (rows <= 0 || cols <= 0) {
    //    std::cout << "Wrong size\n";
    //    return 0;
    //}

    //int** A = new int* [rows];
    //int** B = new int* [rows];
    //int** C = new int* [rows];

    //for (int i = 0; i < rows; ++i) {
    //    A[i] = new int[cols];
    //    B[i] = new int[cols];
    //    C[i] = new int[cols];

    //    for (int j = 0; j < cols; ++j) {
    //        A[i][j] = rand() % 10;
    //        B[i][j] = rand() % 10;
    //        C[i][j] = A[i][j] + B[i][j];
    //    }
    //}

    //std::cout << "Array A:\n";

    //for (int i = 0; i < rows; ++i) {
    //    for (int j = 0; j < cols; ++j) {
    //        std::cout << A[i][j] << " ";
    //    }
    //    std::cout << "\n";
    //}

    //std::cout << "Array B:\n";

    //for (int i = 0; i < rows; ++i) {
    //    for (int j = 0; j < cols; ++j) {
    //        std::cout << B[i][j] << " ";
    //    }
    //    std::cout << "\n";
    //}

    //std::cout << "Array C:\n";

    //for (int i = 0; i < rows; ++i) {
    //    for (int j = 0; j < cols; ++j) {
    //        std::cout << C[i][j] << " ";
    //    }
    //    std::cout << "\n";
    //}

    //for (int i = 0; i < rows; ++i) {
    //    delete[] A[i];
    //    delete[] B[i];
    //    delete[] C[i];
    //}

    //delete[] A;
    //delete[] B;
    //delete[] C;

    //6

    //int M, N, K;

    //std::cout << "Enter M, N, K: ";
    //std::cin >> M >> N >> K;

    //if (M <= 0 || N <= 0 || K <= 0) {
    //    std::cout << "Wrong size\n";
    //    return 0;
    //}

    //int** A = new int* [M];
    //int** B = new int* [N];

    //std::cout << "Enter matrix A:\n";

    //for (int i = 0; i < M; ++i) {
    //    A[i] = new int[N];

    //    for (int j = 0; j < N; ++j) {
    //        std::cin >> A[i][j];
    //    }
    //}

    //std::cout << "Enter matrix B:\n";

    //for (int i = 0; i < N; ++i) {
    //    B[i] = new int[K];

    //    for (int j = 0; j < K; ++j) {
    //        std::cin >> B[i][j];
    //    }
    //}

    //int** C = multiply(A, B, M, N, K);

    //std::cout << "Result:\n";

    //for (int i = 0; i < M; ++i) {
    //    for (int j = 0; j < K; ++j) {
    //        std::cout << C[i][j] << " ";
    //    }
    //    std::cout << "\n";
    //}

    //for (int i = 0; i < M; ++i) {
    //    delete[] A[i];
    //    delete[] C[i];
    //}

    //for (int i = 0; i < N; ++i) {
    //    delete[] B[i];
    //}

    //delete[] A;
    //delete[] B;
    //delete[] C;

    //7

    int size;

    std::cout << "Enter array size: ";
    std::cin >> size;

    if (size <= 0) {
        std::cout << "Wrong size\n";
        return 0;
    }

    int* arr = new int[size];

    std::cout << "Enter array elements:\n";

    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Possible sizes:\n";

    for (int i = 1; i <= size; ++i) {
        if (size % i == 0) {
            std::cout << i << " rows, ";
            std::cout << size / i << " columns\n";
        }
    }

    int rows;

    std::cout << "Choose number of rows: ";
    std::cin >> rows;

    if (rows <= 0 || rows > size || size % rows != 0) {
        std::cout << "Wrong number of rows\n";
        delete[] arr;
        return 0;
    }

    int cols = size / rows;

    int** matrix = new int* [rows];

    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];

        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = arr[i * cols + j];
        }
    }

    std::cout << "Two-dimensional array:\n";

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }

    delete[] arr;

    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

