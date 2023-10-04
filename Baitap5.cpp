#include<iostream>
#include<cmath>
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
    do
    {
        cout << "Nhap so luong phan tu cua day : ";
        cin >> n;
    }  
    while(n < 5 || n > 20);
    double array[20];
    cout << "Nhap" << n << "so thuc:\n ";
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap so thuc thu " << i + 1 << ":";
        cin >> array[i];
    }
    cout << "Day so ban nhap la :\n ";
    for (int i = 0; i < n; i++)
    {   
        cout << array[i] << " ";
    }

    for (int i = 0; i < n ; i++)
    {
        double a = array[i];
        int j = i - 1;
        while ( j>=0 && array[j] < a)
        {
            array[j+1] = array[j];
            j = j - 1;
        }
        array[j + 1] = a;
    }
    cout << "Day sau khi sap xep giam dan:\n";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (array[j] > array[j + 1]) 
            {
        
                double a = array[j];
                array[j] = array[j + 1];
                array[j + 1] = a;
            }
        }
    }
    cout << "Day sau khi sap xep tang dan:\n";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    int a = 0;
    for (int i = 0; i < n; i++) {
        if (sont(array[i])) {
            double temp = array[i];
            array[i] = array[a];
            array[a] = temp;
            a++;
        }
    }
    int sochan = n - 1;
    for (int i = n - 1; i >= 0; i--) {
        if (fmod(array[i], 2) == 0) {
            double a = array[i];
            array[i] = array[sochan];
            array[sochan] = a;
            sochan--;
        }
    }
    cout << "Day sau khi sap xep (so nguyen to dau, so chan cuoi):\n";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}

