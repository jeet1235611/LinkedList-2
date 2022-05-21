#include <iostream>
using namespace std;
class course {
    public:
    int area = 0;
    course() {
        cout << "Area: " << area << endl;
    }    
    
    course(int a, int b) {
        int area = a*b;
        cout << "Area: " << area << endl;
    }
    
    int disp() {
        cout << 
        }
};
int main() {
    course c1;
    course c2(10,10);
}
