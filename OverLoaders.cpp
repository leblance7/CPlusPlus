#include <iostream> 
#include <string>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;

string operate(char letter1,  char letter2)  {
    string str1, str2, combined;
    str1 = letter1;
    str2 = letter2;
    combined = str1 + str2;
    cout << "letter1: " << letter1 << endl;
    cout << "letter2: " << letter2 << endl;
    return combined;
}

string operate (string letter1, string letter2) {
        string combined;
        combined = letter1 + letter2;
        return combined;
}

int main() {
   string preferred, letter1, letter2;
/** Prompt for the user: */
    cout <<"Would you like to combined the first letters of your name\
 or the full version of first and last name? Enter(l or letter) for single\
  and (f or full) for the full name." << endl;
    cin >> preferred;

/**If statement determining what datetype to declare for the OverLoaded methods: */
    if((preferred == "l") || (preferred == "letter")) 
        char letter1, letter2;
    else if((preferred == "f")|| (preferred == "full")) 
        string letter1, letter2;

/**Statements that call for the user input */
    cout << "Enter in a letter or name for the first vars: \n";
    cin >> letter1;
    cout << "Enter in a letter or name for the second vars: \n";
    cin >> letter2;

/**Calling the OverLoaded method */
    cout << operate(letter1, letter2) << endl;
    // cout << "There's a millipead angry on your carpet." << endl;
    return 1;
}