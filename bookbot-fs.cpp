#include <fstream>
#include <string>

#include "bookbot-fs.h"

using namespace std;

// IMPORTANT NOTE: I copy pasted this directly from somebody's question here:
// https://stackoverflow.com/q/8255935 😁

string file_path_to_text(char *file_path) {
  string result{""};
  string FILE_LINE;
  ifstream infile;
  infile.open(file_path);
  if (infile.fail()) {
    // TODO: decide on an actual error handling approach here pls 🙏
    return result;
  }

  while (!infile.eof()) {
    getline(infile, FILE_LINE);
    result += FILE_LINE;
  }

  return result;
}
