#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

int pencarian (char st[], char m){
    int i, posisi, panjang;

    i=0;
    posisi=-1;
    panjang=strlen(st);
    while((i<panjang-1)&&posisi==-1)
    {
        if(st[i]==m)
            posisi=i;
            i++;
    }
    return posisi;
}
int main(){
	cout<<("=====================================================")<<endl<<endl;
	cout<<(" Nama		: Fairuz Zamrody")<<endl;
	cout<<(" NIM		: 19051397056")<<endl;
	cout<<(" Prodi		: Manajemen Informatika B")<<endl<<endl;
	cout<<("=====================================================")<<endl<<endl;
    printf("\t Pencarian dengan metode Binary Search\n\n");

    char kalimat[]="Sisilia Thya Safitri"; 
    char dicari='t';
    printf("\nPosisi %c dalam string %s berada pada indeks ke- (%d)\n",dicari,kalimat,pencarian(kalimat,dicari));
    system ("PAUSE");
    return 0;
}


