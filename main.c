#include <stdio.h>

// Celil Þeref *1210505053*

// Linear Search algoritmasýný kullanarak elemanýn dizide bulunup bulunmadýðýný kontrol eder
// Fonksiyon, aranan elemanýn bulunduðu ilk indeksi (0'dan baþlayarak) döndürür.
// Eðer eleman dizide bulunmazsa -1 döndürür.
int linearSearch(int arr[], int n, int x) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1; // eleman bulunamadý
}

int main() {
    int n, i, x;
    printf("Dizinin boyutunu giriniz: ");
    scanf("%d", &n);
    int arr[n];
    // Kullanýcýdan dizinin elemanlarýný alýyoruz
    for (i = 0; i < n; i++) {
        printf("Dizinin %d. elemanini giriniz: ", i+1);
        scanf("%d", &arr[i]);
    }
    // Kullanýcýdan aranacak elemaný alýyoruz
    printf("Aranacak elemani giriniz: ");
    scanf("%d", &x);
    // Linear Search algoritmasýný kullanarak elemanýn dizide bulunup bulunmadýðýný kontrol ediyoruz
    int result = linearSearch(arr, n, x);
    // Eðer eleman dizide yoksa, "Eleman bulunamadi" mesajýný yazdýr
    if (result == -1) {
        printf("Eleman bulunamadi.\n");
    }
    // Eðer eleman dizide varsa, elemanýn bulunduðu indeksi (0'dan baþlayarak) yazdýr
    else {
        printf("Eleman %d. indisinde bulundu.\n", result+1); // indis deðeri 0 dan baþladýðý için +1 ekledik
    }
    return 0;
}

