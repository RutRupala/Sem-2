#include <iostream>
using namespace std;

int main() {
    string S;
    cout << "Enter paragraph:\n";
    getline(cin, S);

    
    for (int i = 0; i < S.length(); i++) {
        if (S[i] >= 'A' && S[i] <= 'Z') {
            S[i] = S[i] + 32;
        }
    }

    int words = 0;
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == ' ') {
            words++;
        }
    }
    words++;
   
    string S1[100];  
    int freq[100];

    for (int i = 0; i < 100; i++) {
        freq[i] = 1;
    }

    int j = 0, prev = 0;
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == ' ') {
            S1[j++] = S.substr(prev, i - prev);
            prev = i + 1;
        }
    }
    S1[j++] = S.substr(prev);

    for (int i = 0; i < j; i++) {
        if (S1[i] == "0") continue;

        for (int k = i + 1; k < j; k++) {
            if (S1[i] == S1[k]) {
                freq[i]++;
                S1[k] = "0"; 
            }
        }
    }

    cout << "\nWord Frequencies:\n";
    for (int i = 0; i < j; i++) {
        if (S1[i] != "0") {
            cout << S1[i] << " : " << freq[i] << endl;
        }
    }

    return 0;
}