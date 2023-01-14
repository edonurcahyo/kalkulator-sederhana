#include <iostream>
#include <math.h> 

using namespace std;

float bil1, bil2, pil, hasil;

void penjumlahan()
{
    cout<<"Operasi Penjumlahan \n";
    cout<<"Masukkan Bilangan pertama : ";
    cin>>bil1;
    cout<<"Masukkan Bilangan Kedua : ";
    cin>>bil2;
    hasil = bil1+bil2;
    cout<<"   "<<"Hasil dari "<<bil1<<" + "<<bil2<<" = "<<hasil<<endl;
}
void pengurangan()
{
    cout<<"Operasi pengurangan \n";
    cout<<"Masukkan Bilangan pertama : ";
    cin>>bil1;
    cout<<"Masukkan Bilangan Kedua : ";
    cin>>bil2;
    hasil = bil1-bil2;
    cout<<"   "<<"Hasil dari "<<bil1<<" - "<<bil2<<" = "<<hasil<<endl;
}
void perkalian()
{
    cout<<"Operasi Perkalian \n";
    cout<<"Masukkan Bilangan pertama : ";
    cin>>bil1;
    cout<<"Masukkan Bilangan Kedua : ";
    cin>>bil2;
    hasil = bil1*bil2;
    cout<<"   "<<"Hasil dari "<<bil1<<" * "<<bil2<<" = "<<hasil<<endl;
}
void pembagian()
{
    cout<<"Operasi Pembagian \n";
    cout<<"Masukkan Bilangan pertama : ";
    cin>>bil1;
    cout<<"Masukkan Bilangan Kedua : ";
    cin>>bil2;
    hasil = bil1/bil2;
    cout<<"   "<<"Hasil dari "<<bil1<<" / "<<bil2<<" = "<<hasil<<endl;
}
void pangkat()
{
    cout<<"Operasi Pangkat \n";
    cout<<"Masukkan Bilangan : ";
    cin>>bil1;
    cout<<"Masukkan Pangkat : ";
    cin>>bil2;
    hasil = pow(bil1,bil2);
    cout<<"   "<<"Hasil dari "<<bil1<<" Pangkat "<<bil2<<" = "<<hasil<<endl;
}
void akar()
{
    cout<<"Operasi  Akar \n";
    cout<<"Masukkan Bilangan : ";
    cin>>bil1;
    hasil = sqrt(bil1);
    cout<<"   "<<"Hasil dari akar "<<bil1<<" = "<<hasil<<endl;
}
void pilih ()
{
    char pil;
    cout<<"----------------------"<<endl;
    cout<<"Masukkan Pilihan : ";
    cin>>pil;
    cout<<"---------------------"<<endl;
    switch (pil)
    {
        case '1':
            penjumlahan();  
            break;
        case '2':
            pengurangan();
            break;
        case '3':
            perkalian();
            break;
        case '4':
            pembagian();
            break;
        case '5':
            pangkat();
            break;
        case '6':
            akar();
            break;
        default:
        cout<<"Pilihan Tidak Tersedia"<<endl;
    }
}


main()
{
    cout<<"---------------"<<endl;
    cout<<"PILIH OPERATOR"<<endl;
	cout<<"---------------"<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"5. Pangkat"<<endl;
    cout<<"6. Akar"<<endl;
	cout<<endl;
    pilih();
    cout<<"--------------------------------"<<endl;
}
