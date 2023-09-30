#include <iostream>
using namespace std;
void Interchange_Sort(float a[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j=0; j < n-1; j++)
        {
            if (a[i] < a[j])
            {
                swap(a[i], a[j]);
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
        cout << "Error. PLEASE TRY AGAIN  ";
        return 1;
    }
    float a[n];
    cout << "Nhap cac so thuc trong day: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    Interchange_Sort(a, n);
    cout <<"Day so sau khi sap xep: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    cout << endl;
    return 0;
}