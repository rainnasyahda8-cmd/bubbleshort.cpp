#include <iostream>
using namespace std;

int a[20];
int n;

void input()
{
    cout << "masukan panjang array : ";
    cin >> n;

    if (n <= 20)
    {
      break;
    }
    else
    {
        cout << "Error : maksimal input array adalah 20\n";
    }

    cout << endl;
    cout << "====================" << endl;
    cout << "masukan elemen array" << endl;
    cout << "====================" << endl;

    for (int i = 0; i < n; i++) // i++ / i = i + 1
    {
        cout << "masukan nilai ke - " << i + 1 << " : ";\
        cin >> a[i];
    }
}

void display()
{
     cout << endl;
     cout << "==========================" << endl;
     cout << "Elemen array telah terurut" << endl;
     cout << "==========================" << endl;

     for (int i = 0; i < n; i++)
     {
        cout << "Data ke - " << i << " : " << a[i] << endl;
     }
}

void Bubbleshort()
{
    cout << "\n================" << endl;
    cout << "Hasil Setiap pass" << endl;
    cout << "=================" << endl;
    for (int pass = 1; pass < n; pass++)
    {
        if (a[j] > a[j + 1])
        {
            int temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
        }
    
    }
    cout << "pass ke -" << pass << ":\t";
    for (int k = 0; k < n; k++)
    {
        cout << a[k] << "\t";
    }
}

int main ()
{
    input();
    bubbleshort();
    display();
    return 0;
}