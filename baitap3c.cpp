#include<iostream>
using namespace std;
void SapXep(float a[], int n) {
  int i, j;
  float b;
  for (i = 0; i < n; i++) {
    if (a[i] >= 0) {
      for (j = i + 1; j < n; j++) {
        if (a[j] >= 0) {
          b = a[i];
          a[i] = a[j];
          a[j] = b;
        }
      }
    }
  }
  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      if (a[i] < a[j]) {
        b = a[i];
        a[i] = a[j];
        a[j] = b;
      }
    }
  }
}
int main()
{
    int n;
    cout << "Nhap so luong phan tu cua day: ";
    cin >> n;
    if (n < 5 || n > 20)
    {
        cout << "Error. PLEASE TRY AGAIN ";
        return 1;
    }
    float a[n];
    cout << "Nhap cac so thuc trong day: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    SapXep(a, n);
    cout <<"Day so sau khi sap xep : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}