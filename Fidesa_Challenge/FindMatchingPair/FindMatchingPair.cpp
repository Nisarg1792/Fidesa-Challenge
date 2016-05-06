//============================================================================
// Name        : FindMatchingPair.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int findMatchingPair(const string& input) {
    int res = -1;
    vector<char> S;
    for(int i = 0; i < input.size(); ++i) {
        if(!isalpha(input[i])) break;

        if(isupper(input[i])) {
            S.push_back(input[i]);
        }
        else {
            if(S.empty()) break;
            else {
                if(S.back() == toupper(input[i])) {
                    res = i;
                    S.pop_back();
                }
                else
                    break;
            }
        }
    }
    return res;
}
int main() {
    string input;
    getline(cin, input);
    cout << findMatchingPair(input);
    return 0;
}#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("Hello World!!!");
	return EXIT_SUCCESS;
}
