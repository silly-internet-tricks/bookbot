#include <iostream>

#include <unordered_map>

#include "bookbot-fs.h"
#include "bookbot-report.h"
#include "bookbot-stats.h"

using namespace std;

// IMPORTANT NOTE: I copy pasted this directly from somebody's question here:
// https://stackoverflow.com/q/8255935 😁

int main(int argc, char *argv[]) {
  if (argc != 2) {
    cout << "The file path is required (as the only command line arg "
            "😵‍💫).\n";
    return 1;
  }

  string text = file_path_to_text(argv[1]);
  if (text == "")
    cout << "The text came out empty. This probably means there was a file "
            "read error. 🔥"
         << endl;

  int word_count;
  word_count = get_num_words(text);
  auto counts = count_characters(text);
  auto sorted_counts = sort_character_counts(counts);
  auto report = generate_report(argv[1], word_count, sorted_counts);
  cout << report << endl;
  return 0;
}
