#include <stdio.h>

// Celil �eref *1210505053*

// Linear Search algoritmas�n� kullanarak eleman�n dizide bulunup bulunmad���n� kontrol eder
// Fonksiyon, aranan eleman�n bulundu�u ilk indeksi (0'dan ba�layarak) d�nd�r�r.
// E�er eleman dizide bulunmazsa -1 d�nd�r�r.
int linearSearch(int arr[], int n, int x) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1; // eleman bulunamad�
}

int main() {
    int n, i, x;
    printf("Dizinin boyutunu giriniz: ");
    scanf("%d", &n);
    int arr[n];
    // Kullan�c�dan dizinin elemanlar�n� al�yoruz
    for (i = 0; i < n; i++) {
        printf("Dizinin %d. elemanini giriniz: ", i+1);
        scanf("%d", &arr[i]);
    }
    // Kullan�c�dan aranacak eleman� al�yoruz
    printf("Aranacak elemani giriniz: ");
    scanf("%d", &x);
    // Linear Search algoritmas�n� kullanarak eleman�n dizide bulunup bulunmad���n� kontrol ediyoruz
    int result = linearSearch(arr, n, x);
    // E�er eleman dizide yoksa, "Eleman bulunamadi" mesaj�n� yazd�r
    if (result == -1) {
        printf("Eleman bulunamadi.\n");
    }
    // E�er eleman dizide varsa, eleman�n bulundu�u indeksi (0'dan ba�layarak) yazd�r
    else {
        printf("Eleman %d. indisinde bulundu.\n", result+1); // indis de�eri 0 dan ba�lad��� i�in +1 ekledik
    }
    return 0;
}

