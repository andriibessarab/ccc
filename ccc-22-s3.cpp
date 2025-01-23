#include <iostream>

using namespace std;


long long calc_largest_needed_digit(long long N, long long needed) {
    long long counter = 1;
    long long left = needed - N;
    while (left > 0) {
        left -= (N - counter);
        counter++;
    }
    return counter;
}


int main() {
    long long N, M, K;
    cin >> N >> M >> K;

    // max possible good combinations is N + N - 1 + N - 2 + ... + N - M
    long long max_good = 0;
    for (long long i = 0; i < M; i++) {
        max_good += N - i;
    }

    // impossible situations
    if (K < N || K > max_good) {
        cout << -1 << endl;
        return 0;
    }

    long long real_M = calc_largest_needed_digit(N, K);
    
    long long needed_sets_from_largest_triangle = K;

    for(long long i = N; i>(N - real_M + 1); --i) {
        needed_sets_from_largest_triangle -= i;
    }

    long long blah = needed_sets_from_largest_triangle % real_M;
    long long bar = needed_sets_from_largest_triangle / real_M;
    long long boo = N - (blah + bar * real_M);

    long long foo = real_M - blah + 1;
    for(long long i=0; i<blah; i++) {
        cout << foo << " ";
        foo++;
    }

    foo = 1;
    for(long long i=0; i<bar * real_M; i++) {
        cout << foo << " ";
        if(foo < real_M) foo++;
        else foo = 1;
    }

    foo = 1;
    for(long long i=0; i<boo; i++) {
        cout << foo << " ";
        if(foo < real_M - 1) foo++;
        else foo = 1;
    }
    cout << endl;

    return 0;
}
