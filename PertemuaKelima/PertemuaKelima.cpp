#include <iostream>
using namespace std;

int bilSatu, bilDua;

void input()
{
    cout << "Masukan Bilangan Pertama = ";
    cin >> bilSatu;
    cout << "Masukan Bilangan Kedua = ";
    cin >> bilDua;
}

float penjumlahan(float a, float b)
{
    return a + b;
}

float pembagian(float a, float b)
{
    return a / b;
}

float penkalian(float a, float b)
{
    return a * b;
}

float pengurangan(float a, float b)
{
    return a - b;
}


int main()
{
    int pilihan;

    
    {
        cout << "=============================" << endl;
        cout << "MENU" << endl;
        cout << "1. Penjumlahan " << endl;
        cout << "2. Pembagian " << endl;
        cout << "3. Perkalian " << endl;
        cout << "4. Pengurangan " << endl;
        cout << "5. Exit " << endl;
        cout << "Masukan Pilihan 1/2/3/4/5 = ";
        cin >> pilihan;
 
    }


}

