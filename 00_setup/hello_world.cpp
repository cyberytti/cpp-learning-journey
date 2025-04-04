#include <iostream>
using namespace std;

int main() {
    // Printing examples with clear explanations
    
    // 1. Printing a string
    cout << "Hello world!" ;  // Output: Hello world!
    
    // 2. Printing an arithmetic expression result
    cout << "2 * 3 + 2 = " << (2 * 3 + 2);  // Output: 2 * 3 + 2 = 8
    
    // 3. Printing with newline character
    cout << "Hello world\nC++";  /* Output:
                                           Hello world
                                           C++ */
    
    // 4. Printing with tab character
    cout << "Hello world\tC++";  // Output: Hello world    C++
    
    // 5. Printing escape characters literally
    cout << "Hello world\\nC++";  // Output: Hello world\nC++
    
    // 6. Printing quotes within a string
    cout << "Hello world \"C++\"";  // Output: Hello world "C++"
    
    return 0;
}