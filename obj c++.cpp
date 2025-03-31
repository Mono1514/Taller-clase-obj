#include <iostream>
using namespace std;

int main() {
    int numVertices;
    cout << "Número de vértices: ";
    cin >> numVertices;

    for (int i = 0; i < numVertices; i++) {
        float x, y, z;
        cout << "Vértice (x y z): ";
        cin >> x >> y >> z;
        cout << "v " << x << " " << y << " " << z << endl;
    }

    int numCaras;
    cout << "Número de caras: ";
    cin >> numCaras;

    for (int i = 0; i < numCaras; i++) {
        int v1, v2, v3;
        cout << "Cara (índices): ";
        cin >> v1 >> v2 >> v3;
        cout << "f " << v1 << " " << v2 << " " << v3 << endl;
    }

    return 0;
}