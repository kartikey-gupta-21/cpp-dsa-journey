// /s:/Career/Actual DSA/BIT Manipulation/1Sand2S_complement.cpp
// Simple program to compute 1's and 2's complement of a binary string.

#include <bits/stdc++.h>
using namespace std;

bool validBinary(const string &s) {
    if (s.empty()) return false;
    for (char c : s) if (c != '0' && c != '1') return false;
    return true;
}

string onesComplement(const string &s) {
    string out = s;
    for (char &c : out) c = (c == '0') ? '1' : '0';
    return out;
}

// Returns pair: (two's complement trimmed to same width, two's complement with possible carry bit)
pair<string,string> twosComplement(const string &s) {
    string one = onesComplement(s);
    string res = one;
    int n = res.size();
    int carry = 1;
    for (int i = n - 1; i >= 0 && carry; --i) {
        int bit = (res[i] - '0') + carry;
        res[i] = char('0' + (bit & 1));
        carry = bit >> 1;
    }
    string extended = (carry ? string("1") + res : res);
    return {res, extended};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string bin;
    if (!(cin >> bin)) return 0;
    if (!validBinary(bin)) {
        cerr << "Invalid binary input\n";
        return 1;
    }

    string ones = onesComplement(bin);
    auto twos = twosComplement(bin);

    cout << "Input:            " << bin << '\n';
    cout << "1's complement:   " << ones << '\n';
    cout << "2's complement:   " << twos.first << '\n';
    cout << "2's (with carry): " << twos.second << '\n';
    return 0;
}