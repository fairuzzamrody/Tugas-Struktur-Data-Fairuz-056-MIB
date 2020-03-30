#include <iostream>
#include <math.h>
using namespace std;

int main (int argc, char *argv[])
{
	cout<<" NAMA	: Fairuz Zamrody "<<endl;
	cout<<" NIM	: 19051397056"<<endl;
	cout<<" PRODI	: Manajeman Infomatika 19"<<endl<<endl;
	cout<<" ====== Praktikum eksponen 5  ======"<<endl<<endl;
	int matA[2][2]= {4, 2, 8, 10};
	//int matB[2][2]= {-5, 8, 4, -12};
	int j,i;
	cout<<"Matriks A"<<endl<<endl;
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
		cout<<matA[i][j]<<" ";
   }
	cout<<endl;
   }
/*cout<<"Matriks B"<<endl;
for (int i=0; i<2; i++){
	for ( int j=0; j<2; j++){
	cout<<matB[i][j]<<" ";
}
cout<<endl;
}*/
 cout<<"Hasil Perkalian Matriks A dengan eksponen 5"<<endl<<endl;
for (int i=0; i<2; i++){
     for (int j=0; j<2; j++){
	//cout<<matA[i][j], exp5<<" ";
	cout<<pow(matA[i][j],5)<<" ";	 
 }
   cout<<endl;
}
system("PAUSE");
return 0;
}   

