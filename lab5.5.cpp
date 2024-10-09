#include <iostream>
#include <cmath>

using namespace std;

// Функція для обчислення біноміальних коефіцієнтів
int binomialCoefficient(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
}

// Функція для обчислення числа Фібоначчі за рекурентним співвідношенням
int fibonacci(int n) {
    if (n == 0) return 1;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Ітеративна функція для обчислення числа Фібоначчі за формулою через біноміальні коефіцієнти
int fibonacciBinomialIter(int N) {
    int sum = 0;
    for (int k = 0; k <= N / 2; ++k) {
        sum += binomialCoefficient(N - k, k);
    }
    return sum;
}

// Рекурсивна функція для обчислення числа Фібоначчі за формулою (вперед)
int fibonacciBinomialRecUp(int k, int N) {
    if (k > N / 2)
        return 0;
    return binomialCoefficient(N - k, k) + fibonacciBinomialRecUp(k + 1, N);
}

// Рекурсивна функція для обчислення числа Фібоначчі за формулою (назад)
int fibonacciBinomialRecDown(int k, int N) {
    if (k < 0)
        return 0;
    return binomialCoefficient(N - k, k) + fibonacciBinomialRecDown(k - 1, N);
}

int main() {
    int N;
    cout << "N = "; cin >> N;

    cout << "(iter): " << fibonacciBinomialIter(N) << endl;
    cout << "(rec up ++): " << fibonacciBinomialRecUp(0, N) << endl;
    cout << "(rec down --)і: " << fibonacciBinomialRecDown(N / 2, N) << endl;

    return 0;
}
