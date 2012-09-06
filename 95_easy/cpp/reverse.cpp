#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

int main() {
  vector<string> lines;
  vector<string>::reverse_iterator rLineIT;

  while(cin) {
    string input_line;
    getline(cin, input_line);
    lines.push_back(input_line);
  };

  for(rLineIT = lines.rbegin(); rLineIT < lines.rend(); ++rLineIT) {
    stringstream ss(*rLineIT);
    vector<string> parts;
    vector<string>::reverse_iterator rPartIT;
    string item;

    while(getline(ss, item, ' ')) {
      parts.push_back(item);
    }

    for(rPartIT = parts.rbegin(); rPartIT < parts.rend(); ++rPartIT) {
      cout << *rPartIT;

      if(parts.rend() != rPartIT + 1) {
	cout << " ";
      }
    }

    cout << endl;
  }

  return 0;
}
