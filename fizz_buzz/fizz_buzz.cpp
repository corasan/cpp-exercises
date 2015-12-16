#include <cstdio>
#include <iostream>

using namespace std;

void fizz_buzz(int num) {
  if(num % 15 == 0) {
    puts("FizzBuzz!");
  } else if(num % 5 == 0) {
    puts("Fizz");
  } else if(num % 3 == 0) {
    puts("Buzz");
  } else {
    printf("%d\n", num);
  }
}

int main() {
  fizz_buzz(30);
  return 0;
}