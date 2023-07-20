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

    test(quiz, "3\n31\n23\n280\n68\n95", "Please enter radius of 1st Circle:Please enter angle (between 0 and 360 degree) of 1st Circle:Please enter radius of 2nd Circle:Please enter angle (between 0 and 360 degree) of 2nd Circle:Please enter radius of 3rd Circle:Please enter angle (between 0 and 360 degree) of 3rd Circle:\nAverage radius is: 31.33\n");
    
    test(bonus, "3\n31\n223\n280\n68\n95", "Please enter radius of 1st Circle:Please enter angle (between 0 and 360 degree) of 1st Circle:Please enter radius of 2nd Circle:Please enter angle (between 0 and 360 degree) of 2nd Circle:Please enter radius of 3rd Circle:Please enter angle (between 0 and 360 degree) of 3rd Circle:\nAverage radius is: 98.00\n\n1st Circle has Angle (in radians) / ArcLength / Polar Area: 0.541 / 1.62 / 2.43473\n2nd Circle has Angle (in radians) / ArcLength / Polar Area: 4.887 / 1089.78 / 121510.86972\n3rd Circle has Angle (in radians) / ArcLength / Polar Area: 1.658 / 112.75 / 3833.44117\n");
    return 0;
}