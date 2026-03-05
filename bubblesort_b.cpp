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

    for (int i = 0; i < n; i++)                     // looping dengan i dimulai dari 0 hingga n-1
    {
        cout << "Data ke-"  << (i + 1) << ": ";     // output ke layar
        cin >> arr[i];                              // input dri pengguna
    }
}
void bubbleSortArray()
{                                               //prosedur untuk mengurutkan array dengan metode bubble sort
    int pass = 1;                               //step1

    do
    {
        for (int j = 0; j <= n - 1 - pass; j++) 
        { //step 2
            if (arr[j] > arr[j + 1])
            {   // step3
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] + temp;
            }
      }
      pass += 1; //step 4 

      cout << "\nPass " << pass - 1 << ": "; //number of pass
      for (int k = 0; k < n; k++)
      {
        cout << arr[k] << " "; // menampilkan data pada number of pass
      }
      cout << endl;
    
    } while (pass <= n - 1); //step 5
}

void display()
{
    cout << endl;
    cout << "===================================" << endl;
    cout << "Element Array yang telah tersususn" << endl;
    cout << "===================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++)
    {
        cout << arr [j]; //menampilkan array
        if (j < n - 1)
        {
            cout << " --> ";
        }
    }
    cout << endl;
    cout << endl;

    cout << "jumlah pass = " << n - 1 << endl; //menampilkan jumlah dari pass
}

int main()
{

    input();

    bubbleSortArray();
    display();

    system("pause");
    return 0;
}