#include<iostream>
#include<iomanip>
using namespace std;

#define MAX 100
int main()
{
    float ax [MAX+1], ay[MAX+1],nr,dr,x,y=0;
    int i,j,n;
    cout << "Enter the value of n:" << endl;
    cin >> n;
    cout << "Enter the set of values" << endl;
    for(i=0;i<=n;i++)
    cin >> ax[i] >> ay[i];
    cout << "Enter the value of x for which"
    << "value of y is wanted" << endl;
    cin >> x;
    cout << fixed;
    for (i=0;i<=n;i++)
    {
        nr=dr=1;
        for(j=0;j<=n;j++)
        if (j!=i)
        {
            nr *= x-ax[j];
            dr *= ax[i]-ax[j];
        }
y += (nr/dr)*ay[i];
    }
    cout << "When x="
    << setw(4) << setprecision(1)
    << x << "y="
    << setw(7) << setprecision(1)
    << y << endl;
    return 0;
}