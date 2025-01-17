#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    double arr[N+1];
    for (int i = 0; i < N+1; i++) {
        cin >> arr[i];
    }

    double area = 0, len;

    for(int i = 1; i < N+1; i++) {
        cin >> len;
        area += len * (arr[i-1] + arr[i]) / 2.0;
    }

    cout<<fixed<<area<<endl;

    return 0;
}
