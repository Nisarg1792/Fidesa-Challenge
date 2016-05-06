//============================================================================
// Name        : findMinGates.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int findMinGates(vector < int > arrivals, vector < int > departures, int flights) {

    sort(arrivals.begin(), arrivals.end());
    sort(departures.begin(), departures.end());

    int res = 1, max = 1;
    int i = 1, j = 0;

    while (i < flights && j < flights) {
        if (arrivals[i] <= departures[j]) {
            ++res;
            if (res > max) {
                max = res;
            }
            ++i;
        }
        else {
            --res;
            ++j;
        }
    }
    return max;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));
    int res;

    int _arrivals_size = 0;
    cin >> _arrivals_size;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    vector<int> _arrivals;
    int _arrivals_item;
    for(int _arrivals_i=0; _arrivals_i<_arrivals_size; _arrivals_i++) {
        cin >> _arrivals_item;
        cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
        _arrivals.push_back(_arrivals_item);
    }


    int _departures_size = 0;
    cin >> _departures_size;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    vector<int> _departures;
    int _departures_item;
    for(int _departures_i=0; _departures_i<_departures_size; _departures_i++) {
        cin >> _departures_item;
        cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
        _departures.push_back(_departures_item);
    }

    int _flights;
    cin >> _flights;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');

    res = findMinGates(_arrivals, _departures, _flights);
    fout << res << endl;

    fout.close();
    return 0;
}

