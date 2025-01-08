#include <iostream>

using namespace std;

int main() {
    int N;
    cin>>N;
    unsigned int nums[N];

    for (int i=0; i<N; i++) {
        cin>>nums[i];
    }

    int half = N/2;
    int counter = 0;

    for(int i=0; i<half; i++)
        if(nums[i] == nums[i + half])
            counter += 2;

    cout<<counter<<endl;

    return 0;
}
