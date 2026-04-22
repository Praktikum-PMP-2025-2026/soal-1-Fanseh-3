//** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
// *   Modul               : 2
// *   Hari dan Tanggal    : Rabu, 22 April 2026
// *   Nama (NIM)          : Hezkiel Tarutung Harianja (13224010)
// *   Nama File           : soal1_modul2.c
// *   Deskripsi           : Program Mesin Analisis Pointer
// * 
// */

#include<stdio.h>
#include<string.h>



// int *ptr_sum = &sum;
// int *ptr_avg = &avg;
// int *ptr_max = &max;
// int *ptr_idx = &idx;
// int *ptr_first = &x;


void minecraft (int *ptr_first,int a,int *ptr_sum,float *ptr_avg, int *ptr_max,int *ptr_idx){
    
    // int arr[a];
    // arr[*ptr_first] = a;
    for(int i = 0;i< a;i++){
        *ptr_sum += *(ptr_first + i);
        
    }
    *ptr_avg = *ptr_sum/(float)a;
    for(int i = 0;i< a;i++){
        if(*ptr_max < *(ptr_first + i)){
            *ptr_max = *(ptr_first + i);
            *ptr_idx = i;

        } 

        
    }

}

int str[100];


// void display(int sum, float avg, int max, int idx){
//     printf("SUM %d\n", sum);
//     printf("AVG %2f\n", avg);
//     printf("MAX %d\n", max);
//     printf("IDX %d\n", idx);
// }

int main(){
    int x = 0;
int a;
int sum = 0;

float avg = 0;

int max = 0;

int idx = 0;
    scanf("%d", &a);
    for(int i =0;i<a;i++){
        scanf("%d", &str[i]);
    }
    minecraft (str, a,&sum, &avg, &max, &idx);
    printf("SUM %d\n", sum);
    printf("AVG %.2f\n", avg);
    printf("MAX %d\n", max);
    printf("IDX %d\n", idx);
}
