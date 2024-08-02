#include <iostream>  // Header for input-output operations
using namespace std; // Use the standard namespace
class Rectangle// Class definition
{
    int length; // Private member variable length
    int width;  // Private member variable width
public:
    // Public member function to set values of length and width
    void setDimensions(int l, int w)
    {
        length = l; // Set length to l
        width = w;  // Set width to w
    }
// Public member function to calculate and return the area
    int getArea()
    {
        return length * width; // Return the area
    }

    // Public member function to display values of length and width
    void showDimensions()
    {
        cout << "Length: " << length << ", Width: " << width << endl; // Output length and width to the console
    }
};

// Main function
int main()
{
    Rectangle rect;                             // Create an object of the class Rectangle
    rect.setDimensions(5, 10);                  // Call the setDimensions function to initialize length and width
    rect.showDimensions();                      // Call the showDimensions function to display length and width
    cout << "Area: " << rect.getArea() << endl; // Output the area of the rectangle
}
