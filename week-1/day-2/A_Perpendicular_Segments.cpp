#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int X, Y, K;
        cin >> X >> Y >> K;

        // Define points for segment AB
        int Ax = min(K, X); // Ensure Ax does not exceed X
        int Ay = min(K, Y); // Ensure Ay does not exceed Y
        int Bx = Ax;        // Same x-coordinate for vertical segment
        int By = Ay;        // Same y-coordinate for horizontal segment

        // Define points for segment CD
        int Cx = Ax; // Same x-coordinate as Bx to ensure perpendicularity
        int Cy = max(0, By - K); // Ensure Cy does not exceed bounds
        int Dx = Cx; // Same x-coordinate for vertical segment
        int Dy = Cy + K; // Length at least K

        // Output the coordinates for segments AB and CD
        cout << Ax << " " << Ay << " " << Bx << " " << By << endl;
        cout << Cx << " " << Cy << " " << Dx << " " << Dy << endl;
    }
    return 0;
}