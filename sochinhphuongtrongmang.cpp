#include <iostream>
#include <cmath>
using namespace std;
bool sochinhphuong(int n) 
{ 
    int a = sqrt(n);
    return a * a== n;
}
int main() 
{
    int n;
    do 
    {
        cout << "Nhap  n : ";
        cin >> n;
    } 
    while (n < 5 || n > 100);
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Cac so chinh phuong trong mang la: ";
    for (int i = 0; i < n; ++i) {
        if (sochinhphuong(arr[i])) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}