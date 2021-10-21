#include <iostream>

using namespace std;

int main()
{
    int n,k,value,p[1000],count = 0;
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> value;
        p[i] = value;
    }
    for(int j = 1 ; j <= n ; j++){
        if(p[j] >= p[k] && p[j] > 0){
            count++;
        }
    }
    cout << count;

    return 0;
}
