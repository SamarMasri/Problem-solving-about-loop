#include <iostream>
using namespace std;

int main() {
    int participants, position;
    cin>>participants>>position;
    int scores[50];
    for (int i=0; i<participants; i++) {
        cin>>scores[i];
    }

    int qualifiedCount=0;
    int qualifyingScore=scores[position-1];

    for (int i=0;i<participants; i++) {

        if (scores[i]>=qualifyingScore && scores[i]>0) {
            qualifiedCount++;
        }
    }

    cout<<qualifiedCount<<endl;
    return 0;
}
