#include <iostream>
using std::cout;

int fibonacci(int n);
int factorial(int i);
int tower_of_hanoi()

int main()
{
    constexpr int number_count{9};
    cout << factorial(number_count) << '\n';
    for (int i = 0; i < number_count; i++) {
        cout << fibonacci(i) << '\n';
    }
    return 0;
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int factorial(int i) {
    if (i == 1) {
        return i;
    }
    else {
        return i * factorial(i-1);
    }
}

/*
1 1 2 3 5 8 13 
*/
