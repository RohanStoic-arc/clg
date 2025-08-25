#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double x[n];  // change int → double
    int f[n];     // frequency is always integer
    
    // input values
    for(int i=0; i<n; i++) cin >> x[i];
    for(int i=0; i<n; i++) cin >> f[i];
    
    // total frequency
    int sf = 0;
    for(int i=0; i<n; i++) sf += f[i];
    cout << "Total frequency = " << sf << endl;
    
    // expand into array
    double arr[sf];  // also double for decimal values
    int z=0, k=0;
    for(int i=0; i<n; i++)
    {
        z = z + f[i];
        for(int j=k; j<z; j++)
        {
            arr[j] = x[i];
        }
        k = k + f[i];
    }
    
    // print expanded array
    cout << "Expanded Array: ";
    for(int i=0; i<sf; i++) cout << arr[i] << " ";
    cout << endl;
    
    // median calculation
    double median;
    if(sf % 2 == 1)  // odd case
        median = arr[(sf/2)];
    else             // even case
        median = (arr[(sf/2) - 1] + arr[(sf/2)]) / 2.0;
    
    cout << "Median = " << median << endl;

    return 0;
}
