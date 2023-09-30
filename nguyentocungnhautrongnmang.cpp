#include <iostream>
using namespace std;
int ucln(int a, int b)
 {
    if (b == 0) 
    {
        return a;
    }
    return ucln(b, a % b);
}
bool haisonguyentocungnhau(int a, int b) {
    return ucln(a, b) == 1;
}
int main() 
{
    int n;
    do {
        cout << "Nhap so nguyen n : ";
        cin >> n;
    }
     while (n < 5 || n > 100);
    int arr[n];
    for (int i = 0; i < n; ++i)
     {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Cac so trong mang la nguyen to cung nhau voi " << n << " la: ";
    for (int i = 0; i < n; ++i) {
        if (haisonguyentocungnhau(arr[i], n)) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}