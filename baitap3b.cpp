#include <iostream>
using namespace std;
void selection_sort(float a[], int n)
{
    int min;
    for (int i = 0; i < n-1; i++)
    {
        min = i;
        for (int j= i+1; j < n; j++)
        {
            if(a[j] < a[min])
            {
                min = j;
            }
        }
        swap(a [min], a[i]);
    }
}
int main()
{
    int n;
    cout << "Nhap so luong phan tu cua day: ";
    cin >> n;
    if (n < 5 || n > 20)
    {
        cout << "Error. PLEASE TRY AGAIN BITCH ";
        return 1;
    }
    float a[n];
    cout << "Nhap cac so thuc trong day: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    selection_sort(a, n);
    cout <<"Day so sau khi sap xep giam dan: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    cout << endl;
    return 0;
}