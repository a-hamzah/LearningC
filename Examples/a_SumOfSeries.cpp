#include<bits/stdc++.h>
using namespace std;
int main()
{
    float sum_of_series = 0;
    for(float i = 1; i <= 45; i++){
        sum_of_series += 1/i;
    }
    cout << "Sum of Series = " << sum_of_series << endl;

    return 0;
}