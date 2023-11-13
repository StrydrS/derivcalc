//derivative calculator
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> symbols;
vector<string> vars;

// function designed to return a vector, contains each piece of the function 
vector<string> inputToVars(string input) {

    string var = "";

    for(int i=0; i < input.size(); i++) {
        var=input[i];
        vars.push_back(var);
        var="";
    }
    
    for(int q=0; q < vars.size(); q++) {
        if(vars[q]== "-" || vars[q] == "+" || vars[q] == "*" || vars[q] == "/") {
            symbols.push_back(vars[q]);
            vars[q] = " ";
        }
    }

    return vars;
}

string deriv(string input) {

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