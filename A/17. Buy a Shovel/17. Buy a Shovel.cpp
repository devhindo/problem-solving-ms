// Link : https://codeforces.com/contest/731/problem/A

#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main() {
    string name;
    cin >> name;
    char alphapets[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
     int index = find(alphapets, alphapets + 26, 'z') - alphapets;
    int size = sizeof(alphapets) / sizeof(alphapets[0]);
    cout << index;
   



}