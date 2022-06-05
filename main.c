#include <stdio.h>

void Odd_Even(unsigned long long int Number);
int main() {

    unsigned long long int Number;

    puts("Enter Number ");
    scanf_s("%llu",&Number);
    Odd_Even(Number);
    return 0;
}
void Odd_Even(unsigned long long int Number) {
    int odd, even;
    unsigned long long int test;
    while (Number > 0) {
        test = Number % 10;
        Number /= 10;
        if (test % 2 == 0) {
            odd++;
        } else {
            even++;
        }
    }
    printf_s("Even = %d \t\t  Odd = %d", even, odd);
}