#include <iostream>
#include <string>
using namespace std;

void string_reverse(string& str, int start, int end) {
    char temp;
    while (start < end) {
        temp = str[start];
        str[start++] = str[end];
        str[end--] = temp;
    }
}

int main() {
  while (true) {
    printf("Type a sentence (then hit return): ");
    string line;
    getline(cin, line);
    if (!cin.good()) {
      printf("Done\n");
      return 0;
    }

    // put your code here
    int word_start = 0;
    for(int i = 0; i < line.length(); i++) {
        if (line[i] == ' ') {
            string_reverse(line, word_start, i-1);
            word_start = i + 1;
        }
    }
    string_reverse(line, word_start, line.length() - 1);
    printf("The reversed sentence:\n%s\n", line.c_str());
  }
}