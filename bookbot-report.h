#include "bookbot-stats.h"
#include <string>

using namespace std;

string generate_report(char *file_path, int word_count,
                       vector<char_count_t> sorted_counts);
