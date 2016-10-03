#include <stdio.h>
#include <stdlib.h>

int prob1() {
    int sum = 0;
    int curr;
    for (curr = 0; curr < 1000; curr++) {
        if (curr % 3 == 0 || curr % 5 == 0) {
            sum += curr;
        }
    }
    return sum;
}

int prob2() {
    int prev = 1;
    int curr = 2;
    int sum = 0;
    while (curr < 4000000){
        if (curr%2 == 0) sum+=curr;
        int temp = curr;
        curr+=prev;
        prev = temp;
    }
    return sum;
}

int main() {
    printf("1: %d\n", prob1());
    printf("2: %d\n", prob2());
    return 0;
}