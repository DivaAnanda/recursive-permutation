#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void permutasi(char arr[], int jumlah_karakter, int counter)
{
    if (counter == jumlah_karakter)
    {
        for (int i = 0; i < jumlah_karakter; i++)
        {
            printf("%c", arr[i]);
        }
        printf("\n");
    }
    else
    {        
        for (int i = counter; i < jumlah_karakter; i++)
        {
            char temp = arr[counter];
            arr[counter] = arr[i];
            arr[i] = temp;

            permutasi(arr, jumlah_karakter, counter + 1);

            temp = arr[counter];
            arr[counter] = arr[i];
            arr[i] = temp;
        }
    }
}

int main()
{
    system("cls");
    printf("+----------------------------+\n");
    printf("| Program Permutasi Rekursif |\n");
    printf("+----------------------------+\n\n");
    char arr[10];
    int jumlah_karakter;
    printf("Masukkan jumlah karakter (2-10): ");
    scanf("%d", &jumlah_karakter);
    if (jumlah_karakter >= 2 && jumlah_karakter <= 10)
    {
        for (int i = 0; i < jumlah_karakter; i++)
        {
            arr[i] = 'A' + i;
        }
        printf("\nHasil Permutasi:\n");
        permutasi(arr, jumlah_karakter, 0);
    }
    else
    {
        printf("Jumlah karakter tidak valid!\n");
    }
    printf("\n");
  return 0;
}
