#include <string>

#include "bookbot-stats.h"

using namespace std;

string generate_report(char *file_path, int word_count,
                       vector<char_count_t> sorted_counts) {
  string result{"============ BOOKBOT ============\nAnalyzing book found at "};
  result += file_path;
  result += "...\n----------- Word Count ----------\nFound ";
  result += to_string(word_count);
  result += " total words\n--------- Character Count -------";
  for (int i = 0; i < sorted_counts.size(); i++) {
    result += "\n";
    result += sorted_counts.at(i).c;
    result += ": ";
    result += to_string(sorted_counts.at(i).n);
  }

  result += "\n============= END ===============";
  return result;
}
