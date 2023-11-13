//derivative calculator
#include <iostream>
#include <string>
#include <vector>

using namespace std;


// function designed to return a vector, contains each piece of the function 
vector<string> inputToVars(string input) {

    vector<string> vars;
    vector<string> type;

    string var = "";

    for(int i = 0; i < input.size(); i++) {
        char c = input[i];
        if(c != '+' && c != '-') {
            var += c; 
        }
        else if(c == '+' || c == '-') {
            vars.push_back(var);
            var = "";
        }
    }

    for(int q = 0;  q < vars.size(); q++) {
        cout << vars[q] << " ";
    }
    return vars;
}

string deriv(string input) {
    cout << input;

    inputToVars(input);
    return "hi";
}

int main() {

    string input;
    string output;

    cout << "Input derivative, exponents in form n^x, trig functions must include ()." << endl;
    cin >> input;

    deriv(input);


    cout << output << endl;


    return 0;
}