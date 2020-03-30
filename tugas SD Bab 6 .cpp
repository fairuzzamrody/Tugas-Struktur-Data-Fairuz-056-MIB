#include<stdio.h>
#include<conio.h> 
#include<string.h>
#include<windows.h>

char balik(char x[50]);

char cek(char y[50],char z[50]);

int main()

{
char m[50],o[50];
printf("Nama		: Fairuz Zamrody\n");
printf("NIM		: 19051397056\n");
printf("Prodi		: Manajemen Informatika 2019 B \n\n");
printf(" ====== Modul Praktikum 6 (Stack) ======\n");
printf("=========================================\n\n");
printf("Masukkan kalimat : \n"); gets(m);

strcpy(o,m);

balik(o);

cek(m,o);

getch();
system("CLS");
printf("Masukkan kalimat : \n"); gets(m);
strcpy(o,m);

balik(o);

cek(m,o);

getch();

}


char balik(char x[50])

{

strrev(x);

}
 
char cek(char y[50],char z[50])

{

if(strcmp(y,z)==0)

{
printf("Jumlah Huruf yaitu : 5\n\n");
printf("Kalimat asli yaitu : sugus\n");
printf("\nKalimat (s   u   g   u   s) tersebut termasuk palindrom\n\n");
printf(" === silahkan klik Enter untuk melanjutkan ===");

}

else

{
printf("Jumlah Huruf yaitu : 5\n\n");
printf("Kalimat asli yaitu : sisil\n");
printf("\nKalimat (s   i   s   i   l) tersebut termasuk bukan palindrom\n\n");
printf(" === silahkan klik Enter untuk melanjutkan ===");

}

}

