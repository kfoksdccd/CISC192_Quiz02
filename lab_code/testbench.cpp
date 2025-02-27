//
// Don't modify code in this file, with the exception
// of adding test cases.
//
#include <iostream>
#include <fstream>
#include "apex_code.h"

using namespace std;

#define TEST_FUNC_PTR void (*test_func)(stringstream&, stringstream&)
void test(TEST_FUNC_PTR, const string& input, const string& expected)
{
    stringstream in_stream(input);
    stringstream out_stream;
    test_func(in_stream, out_stream);

    if(expected == out_stream.str())
    {
        cout << "PASS" << endl;
    }
    else
    {
        cout << "With input \"" << input << "\" expected output \"" << expected
             << "\", received \"" << out_stream.str() << "\"" << endl;
    }
}

int main()
{
    // To add a test case, duplicate one of the test lines below
    // modify input with the first string, and the expected output
    // in the second string.
    test(quiz, "3.5\n10.2\n6.8\n28.2\n6.8\n9.95", "Please enter base of 1st Triangle:Please enter height of 1st Triangle:Please enter base of 2nd Triangle:Please enter height of 2nd Triangle:Please enter base of 3rd Triangle:Please enter height of 3rd Triangle:\nArea of Triangle1 is: 17.85\nArea of Triangle2 is: 95.88\nArea of Triangle3 is: 33.83\nAverage area is: 49.19\n");
    
    return 0;
}