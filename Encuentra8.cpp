#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int numero;
    int respuesta = 0;

    for (int i = 0; i < N; i++) {
        cin >> numero;
        if (numero == 8) {
            respuesta = 1;
        }
    }

    cout << respuesta;

    return 0;
}
