#include <iostream>
#include <string>
using namespace std;

int arr[20]; //deklarasi variable global array a dengan ukuran 20
int n;       //deklarasi variable global n untuk menyimpanan banyaknya elemen pada array

void input()
{   //prosedur untuk input
    int d;
    while (true)
    {
        cout << "Masukan banyaknya elemen pada array :  "; // output ke layar
        cin >> n;                                          // input dari pengguna
        if (n <= 20)                                       // jika n kurang dari atau lebih dari 20
            break;                                         // keluar dari loop
        else
        {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
        }
    }
    cout << endl;
    cout << "===================" << endl;
    cout << "Masukan Elemen Array" << endl;
    cout << "===================" << endl;

    for (int i = 0; i < n; i++)                     // looping dengan i dimulai dari 0 hingga n
    {
        cout << "Data ke-"  << (1 + 1) << ": ";     // output ke layar
        cin >> arr[i];                              // input dri pengguna
    }
}