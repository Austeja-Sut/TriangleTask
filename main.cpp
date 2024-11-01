#include <iostream>

// Function to check the type of triangle
std::string triangleType(double a, double b, double c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return "Not a triangle (sides must be positive)";
    }
    if (a + b <= c || a + c <= b || b + c <= a) {
        return "Not a triangle (triangle inequality violated)";
    }
    if (a == b && b == c) {
        return "Equilateral triangle";
    } else if (a == b || b == c || a == c) {
        return "Isosceles triangle";
    } else {
        return "Scalene triangle";
    }
}

int main() {
    double a, b, c;
    std::cout << "Enter the lengths of the three sides of the triangle: ";
    std::cin >> a >> b >> c;

    std::cout << triangleType(a, b, c) << std::endl;
    return 0;
}
