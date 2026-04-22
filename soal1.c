//** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
// *   Modul               : 2
// *   Hari dan Tanggal    : Rabu, 22 April 2026
// *   Nama (NIM)          : Hezkiel Tarutung Harianja (13224010)
// *   Nama File           : soal1_modul2.c
// *   Deskripsi           : Program Mesin Analisis Pointer
// * 
// */

#include<stdio.h>

int x = 0;
int a;
int sum = 0, *ptr_sum;
*ptr_sum = &sum;
float avg = 0, *ptr_avg;
ptr_avg = &avg;
int max = 0, *ptr_max;
*ptr_max = &max;
int idx = 1, *ptr_idx;
*ptr_idx = &idx;
// int *ptr_sum = &sum;
// int *ptr_avg = &avg;
// int *ptr_max = &max;
// int *ptr_idx = &idx;
// int *ptr_first = &x;


void minecraft (ptr_first, a, ptr_sum, ptr_avg, ptr_max, ptr_idx){
    int arr[a];
    arr[ptr_first] = a;
    for(int i = 1;i<=a;i++){
        sum =+ arr[i];
    }
    avg = sum/(a-1);
    for(int i = 2;i<=a;i++){
        if(max < arr[i]){
            max = arr[i];
        } else {
            max = max;
        }
    }
    for(int i = 1;i<=a;i++){
        if(max = arr[i]){
            idx =+ 1;
        } else {
            idx =idx;
        }
    }
}

void display(sum, avg, max, idx){
    printf("SUM %d\n", sum);
    printf("AVG %2f\n", avg);
    printf("MAX %d\n", max);
    printf("IDX %d\n", idx);
}

int main(){
    scanf("%d",&a);
    minecraft (0, a,sum, ptr_avg, max, idx);
    display(ptr_sum, ptr_avg, ptr_max, ptr_idx);
}
