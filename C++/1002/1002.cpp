#include<iostream>
using namespace std;
int main()
{
    double R, A;
    cin >> R;
    A = 3.14159 * R * R;
    cout << fixed;
    cout << "A=" << A << setprecision(4) << endl;
    return 0;
}
