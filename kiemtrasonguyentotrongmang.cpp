#include <iostream>
using namespace std;
bool sont(int n) 
{
  if (n <= 1) 
  {
    return false;
  }

  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
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
    for (int i = 0; i < n; ++i) {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Cac so nguyen to trong mang la: ";
    for (int i = 0; i < n; ++i) {
        if (sont(arr[i])) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}