#include <iostream>
#include <string>
#include "GBKUtils.h"

using namespace std;

int main () {
    string input;
    string output;

    while (cin >> input) {
        output = "";
        gbk_to_pinyin(input, output);
        cout << output << endl;
    }

    return 0;
}
