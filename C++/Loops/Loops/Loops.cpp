#include <iostream>
#include <string>
using namespace std;
int main() {
    string text = "Hello World";
    string output = "";
    for (char c : text) {
        output += c;
        cout << output << std::endl;
    }


    //Do-While Loop 
    
    int i = 0;
    do
    {
        cout << i << endl;
        i++;
    } while (i <=5);
    //Since the code is read from top to bottom, even if the condition inside the while loop is false, the code inside the do block will run once, and then it will stop.
    return 0;
}