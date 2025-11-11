#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:

    Point() {
        this->x = 0;
        this->y = 0;
    }


    Point(int x, int y) {
        this->x = x;  
        this->y = y;
    }

  
    Point& setX(int x) {
        this->x = x;      
        return *this;     
    }

    Point& setY(int y) {
        this->y = y;
        return *this;    
    }

    
    void display() {
        cout << "Point: (" << this->x << ", " << this->y << ")" << endl;
    }
};

int main() {
    Point p1;
 
    p1.setX(10).setY(20);
    p1.display();

    
    Point p2(5, 15);
    p2.display();

    return 0;
}

