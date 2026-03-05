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
        cout << "Masukan banyaknya elemen pada array :  ";
        cin >> n;
        if (n <= 20)
            break;
        else
        {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
        }
    }
    cout << endl;
    cout << "===============" << endl;
}