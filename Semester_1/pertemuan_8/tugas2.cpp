#include <iostream>
#include <algorithm>
#include <cstring>
#include <cctype>
using namespace std;

char* strlwr_custom(char* s) {
    for (int i = 0; s[i]; i++) {
        s[i] = tolower(s[i]);
    }
    return s;
}

int main() {
    string text = "KAMPUS UNGU INSTITUT BISNIS DAN INFORMATIKA KESATUAN";
    cout<<"Awal text :"<<text<<endl;
    reverse(text.begin(), text.end());

    char arr[200];
    strcpy(arr, text.c_str());

    strlwr_custom(arr);

    string hasil(arr);
    cout <<"Perubahan :"<< hasil<<endl;
    return 0;
}
