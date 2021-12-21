#include <iostream>
using namespace std;
void sapsepthutu(int a[], int n)
{
    int temp, i, S, k;
    for (S = 0; S < n - 1; ++S)
    {
        for (k = S + 1; k < n; ++k)
        {
            if (a[S] > a[k])
            {
                temp = a[S];
                a[S] = a[k];
                a[k] = temp;
            }
        }
    }

    for (i = 0; i < n; ++i)
        cout << " " << a[i];
}
int main()
{
    int i, n, arr[10];

    n = 10;
    for (i = 0; i < n; ++i) {
        cout << "Nhap Cac Phan Tu [" << i << "]: "; 
        cin >> arr[i];
    }
    
    sapsepthutu(arr, n);
}