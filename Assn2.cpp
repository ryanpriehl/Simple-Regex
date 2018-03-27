#include <iostream>
#include <fstream>
#include <string>
#include <regex>
using namespace std;

int main(int argc, char* argv[]) {
    ifstream input_file (argv[1]);
    if(input_file.is_open()) {
        string line;
        regex pattern ("(\\$)(\\^)*(([1-9][0-9]{0,2}(,[0-9]{3})*)|0)(\\.[0-9]{2})?");
        while(getline(input_file, line)){
            if (regex_match(line, pattern)) {
                cout << "Matched: " + line << '\n';
            }
            else {
                cout << "Not Matched: " + line << '\n';
            }
        }
        input_file.close();
    } else {
        cout << "Error opening file." << '\n';
    }
    return 0;
}
