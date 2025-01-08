#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

unsigned int v(unsigned int h1, unsigned int h2) {
    return static_cast<unsigned int>(std::abs(static_cast<int>(h1) - static_cast<int>(h2)));
}

int main() {
    int N;
    cin >> N;
    unsigned int h[N];

    for (int i = 0; i < N; i++) {
        cin>>h[i];
    }

    // if list is single element
    if (N == 1){
        cout<<"0"<<endl;
        return 0;
    }

    cout<<"0 "; // always case for len = 1

    int len = 2;
    do {
        int left_index = 0;
        int v_min = INT_MAX;
            do {
                int left_index_temp = left_index;
                int right_index = left_index + len - 1;
                int v_tot = 0;

                do {
                    v_tot += v(h[left_index_temp], h[right_index]);

                    left_index_temp++;
                    right_index--;
                } while (left_index_temp < right_index);

               if(v_tot < v_min)
                    v_min = v_tot;

                left_index++;
            } while(left_index <= N-len);

        cout<<v_min;
        if(len==N)
            cout<<endl;
        else
            cout<<" ";

        len++;
    } while(len <= N);

    return 0;
}
