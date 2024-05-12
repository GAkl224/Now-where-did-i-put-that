#include <iostream>
#include <string>

using namespace std;

class StringSearch {
public:
    int find(const string& str, char c) {

        for (int i = 0; i < str.length(); ++i) {
          
            if (str[i] == c) {
                return i;
            }
        }
        return -1; // Not found
    }

    int find(const string& str, const string& substr) {

        size_t found = str.find(substr);

        if (found != string::npos) {
            return found;
        }
        return -1; // Not found
    }
};

int main() {
    StringSearch searcher;
    
    
    string input = "The quick brown fox";

    cout << "Input String: " << input << endl;
    
   
    char charQuery = 'e';

    cout << "Search Query: '" << charQuery << "'\tReturns: " << searcher.find(input, charQuery) << "\tSearch Query Type: char" << endl;
    
   
    string stringQuery1 = "e";

    cout << "Search Query: \"" << stringQuery1 << "\"\tReturns: " << searcher.find(input, stringQuery1) << "\tSearch Query Type: string" << endl;
    
    string stringQuery2 = "quick";

    cout << "Search Query: \"" << stringQuery2 << "\"\tReturns: " << searcher.find(input, stringQuery2) << "\tSearch Query Type: string" << endl;
    
    string stringQuery3 = "quiet";
    cout << "Search Query: \"" << stringQuery3 << "\"\tReturns: " << searcher.find(input, stringQuery3) << "\tSearch Query Type: string" << endl;
    
    return 0;
}
