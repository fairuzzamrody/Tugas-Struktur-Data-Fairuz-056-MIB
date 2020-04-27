#include <iostream>
#include <stdio.h>
#include <string.h>
#include <windows.h>
using namespace std;

main(){
    int i, j, a, k, m, n;
    char nm[6][20], temp[40];
cout<<"Nama		: Fairuz Zamrody"<<endl;
cout<<"NIM		: 19051397056"<<endl;
cout<<"Prodi		: Manajemen Informatika B"<<endl<<endl;
    cout<<"Inputkan Huruf"<<endl<<endl;

    for (i=1;i<=6;i++)
     { cout<<"Input Alphabet ke-"<<i<<" = ";gets(nm[i]);
       if (i>1)
        { for (j=1;j<=(i-1);j++)
           { a=(strcmp(nm[i], nm[j]));
               if (a<=0)
                { strcpy (temp, nm[i]);
                  for (k=(i-1);k>=j;k--)
                   { m=(k+1);
                     strcpy (nm[m], nm[k]);
                   }
                  strcpy (nm[j], temp);
                }
           }
        }
      }
      system("cls");
    cout<<"\nHasil Pengurutannya adalah : \n";
    for (i=1;i<=6;i++)
     { cout<<"\n"<<nm[i];}
return 0;
}

