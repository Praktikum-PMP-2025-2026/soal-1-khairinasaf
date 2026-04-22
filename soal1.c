/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 2
 *   Hari dan Tanggal    : Rabu, 22 April 2026
 *   Nama (NIM)          : Khairina Safira Nurazizah (13224021)
 *   Nama File           : 
 *   Deskripsi           : Menghitung nilai statistik array, mencari sum, average, max, dan index nilai max.
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void getSum(int *arr, int *sum, int n){
    *sum = 0;
    for(int i = 0; i<n; i++){
        *sum = *sum + *(arr + i);
    }
}

void getAvg(int *arr, float *avg, int *sum, int n){
    *sum = 0;
    for(int i = 0; i<n; i++){
        *sum = *sum + *(arr + i);
    }
    *avg = (float)*sum / n;
}

void getMaxandIdx(int *arr, int *max, int *sum, int n, int *idx){
    *idx = 0;
    *max = arr[0];

    for (int i = 1; i<n; i++){
        if (*arr < *(arr+i)){
            *max = *(arr+i);
            *idx = i-1;
        }
    }
}

int main(){
    int n, sum, idx, max;
    float avg;
    int arr[n];
    int *ptr = arr;
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        scanf("%d", (ptr + i));
    }

    getSum(ptr, &sum, n);
    getAvg(ptr, &avg, &sum, n);
    getMaxandIdx(ptr, &max, &sum, n, &idx);

    printf("SUM %d\n", sum);
    printf("AVG %.2f\n", avg);
    printf("MAX %d\n", max);
    printf("IDX %d", idx);
}

/*

source:
https://www.geeksforgeeks.org/c/c-program-to-find-sum-of-elements-in-a-given-array/
https://www.tutorialspoint.com/article/sum-of-array-using-pointer-arithmetic-in-c
https://www.geeksforgeeks.org/c/c-program-to-find-largest-element-in-an-array-using-pointers/
https://www.geeksforgeeks.org/c/c-program-to-calculate-the-average-of-all-elements-of-an-array/
https://www.w3schools.com/c/c_pointers_arithmetic.php
*/
