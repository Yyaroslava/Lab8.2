#include <iostream>
#include <string> 

using namespace std;

bool Find(string& str) {
    return (str[0] == 'a') || (str.find(" a") != -1);
}

int main() {
    string str = "";

    cout << "Enter string:" << endl;
    getline(cin, str);

    bool found = Find(str);
   
    if (found) {
        cout << "Word starting with 'a' was found." << endl;
    }
    else {
        cout << "Word starting with 'a' was not found." << endl;
    }

    return 0;
}
