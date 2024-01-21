#include <iostream>

using namespace std;


int main()
{
    // Store constants form the question
    const unsigned int STUDENTS_COUNT = 28;
    const unsigned int CUPCAKES_PER_R = 8;
    const unsigned int CUPCAKES_PER_S = 3;

    unsigned int R; // regular boxes
    unsigned int S; // small boxes

    cin>>R;
    cin>>S;

    // Calculate how many cupcakes left
    unsigned int cupcakes_left =  ((R * CUPCAKES_PER_R) + (S * CUPCAKES_PER_S)) - STUDENTS_COUNT;

    cout<<cupcakes_left<<endl;

    return 0;
}
