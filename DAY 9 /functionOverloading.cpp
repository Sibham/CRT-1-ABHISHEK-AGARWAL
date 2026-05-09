#include<iostream>
using namespace std;

class Rectangle {
public: 
    int length;
    int width;
    
    // Default constructor
    Rectangle() {
        length = 1;
        width = 1;
    }
    
    // Single parameter constructor (square)
    Rectangle(int side) {
        length = side;
        width = side;
    }
    
    // Two parameter constructor (rectangle)
    Rectangle(int side1, int side2) {
        length = side1;
        width = side2;
    }
    
    void ShowArea() {
        cout << length * width << "\n";
    }
};

int main() {
    Rectangle r1;        // default 1x1
    Rectangle r2(7);     // square 7x7
    Rectangle r3(4,6);   // rectangle 4x6
    
    r1.ShowArea();  // 1
    r2.ShowArea();  // 49
    r3.ShowArea();  // 24
    
    return 0;
}
