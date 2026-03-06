#include <iostrem>
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