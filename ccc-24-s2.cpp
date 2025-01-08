#include <iostream>
#include <string>

using namespace std;

int main() {
    int T, N;
    cin>>T>>N;

    for(int i=0; i<T; i++) {
        string str;
        cin>>str;

        char isHeavy[N];

        for(int m=0; m<N; m++) {
            isHeavy[m] = 'U';
        }

        for(int j=0; j<N; j++) {
            if (isHeavy[j] != 'U')
                continue;

            for(int k=0; k<N; k++) {
                if(j != k && str[j] == str[k]) {
                    isHeavy[j] = 'T';
                    isHeavy[k] = 'T';
                }
            }
        }

        bool good = true;

        if(isHeavy[0] == 'T') {
            for(int j=1; j<N; j++) {
                if((j % 2 == 0 && isHeavy[j] != 'T') || (j % 2 == 1 && isHeavy[j] == 'T')) {
                   good = false;
                }
            }
        } else if(isHeavy[0] != 'T') {
            for(int j=1; j<N; j++) {
                if((j % 2 == 0 && isHeavy[j] == 'T') || (j % 2 == 1 && isHeavy[j] != 'T')) {
                    good = false;
                }
            }
        }

        if(good) {
            cout<<'T'<<endl;
        } else {
            cout<<'F'<<endl;
        }
    }

    return 0;
}
