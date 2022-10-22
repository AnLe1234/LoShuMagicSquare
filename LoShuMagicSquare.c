// program that determine a 2D-array is Lo Shu Magic Square
// create 2D-array
// create function to test 2D-array

// loop from 1-9 random select 2d array location
// check if Lo Shu Magic Square
// if not count++
// print count, and 2D array

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int array_test(int arr[][3]) {
    // loop compare row
    for (int i = 0; i < 3; i++) {
        if ((arr[i][0] + arr[i][1] + arr[i][2]) != 15) {
            return 1;
        }
    }
    // loop compare column
    for (int i = 0; i < 3; i++) {
        if ((arr[0][i] + arr[1][i] + arr[2][i]) != 15) {
            return 1;
        }
    }
    // compare diagonal
    if ((arr[0][0] + arr[1][1] + arr[2][2]) != 15) {
        return 1;
    }
    if ((arr[2][0] + arr[1][1] + arr[0][2]) != 15) {
        return 1;
    }

    return 0;
}

int main() {
    int arr[3][3] = {4, 9, 2,
                     3, 5, 7,
                     8, 1, 6};
    if (array_test(arr) == 0) {
        printf("It is a Lo Shu Magic Square!\n");
    } else {
        printf("It is NOT a Lo Shu Magic Square.");
    }

    return EXIT_SUCCESS;
}
