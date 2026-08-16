#include <iostream>
using namespace std;

void function(int N)
{
    for (int i = 1; i <= N; i++)
    {
        cout << "I am learning functions" << endl;
    }
}
int main()
{
    int N;
    cin >> N;

    function(N);
}
