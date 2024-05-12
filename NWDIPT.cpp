#include <iostream>
#include <string>

using namespace std;

int find(const string& str, char c, int startPos = 0) {
    if (startPos < 0 || startPos >= str.length()) {
        return -1; // Invalid starting position
    }
    for (int i = startPos; i < str.length(); ++i) {
        if (str[i] == c) {
            return i;
        }
    }
    return -1; // Not found
}

int find(const string& str, const string& substr, int startPos = 0) {
    if (startPos < 0 || startPos >= str.length()) {
        return -1; // Invalid starting position
    }
    size_t found = str.find(substr, startPos);
    if (found != string::npos) {
        return found;
    }
    return -1; // Not found
}

int main() {
    // Test cases
    string input = "Its a rainy day today";
    cout << "Input String: " << input << endl;
    
    // Testing character search
    
   
    char charQuery = 'a';

    int place;

    cout << "\nEnter a position to search for a char in input string: ";
    cin >> place;
     cout << "Search Query: '" << charQuery << "', Starting Position: " << place<< "\tReturns: " << find(input, charQuery, place) << "\tSearch Query Type: char" << endl;
    cout << "Search Query: '" << charQuery << "', Starting Position: None Specified\tReturns: " << find(input, charQuery) << "\tSearch Query Type: char" << endl;
    cout << "Search Query: '" << charQuery << "', Starting Position: 500\tReturns: " << find(input, charQuery, 500) << "\tSearch Query Type: char" << endl;
    
    // Testing substring search
    int position;
    cout << "\nEnter a position to search for a string in input string: ";
    cin >> position;

    string stringQuery = "day";
    cout << "Search Query: \"" << stringQuery << "\", Starting Position: None Specified\tReturns: " << find(input, stringQuery) << "\tSearch Query Type: string" << endl;
    cout << "Search Query: \"" << stringQuery << "\", Starting Position: " << position << "\tReturns: " << find(input, stringQuery, position) << "\tSearch Query Type: string" << endl;
    cout << "Search Query: \"" << stringQuery << "\", Starting Position: 500\tReturns: " << find(input, stringQuery, 500) << "\tSearch Query Type: string" << endl;
    
    return 0;
}
