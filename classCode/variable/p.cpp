#include<iostream>

using namespace std;

int main(void)
{
    int s, h, m;
    cin >> s; // 36001  
    h = s / 3600;
    m = s % 3600 / 60;
    s = s % 3600 % 60;
    cout << h << " " << m << " " << s << endl;



    return 0;
}