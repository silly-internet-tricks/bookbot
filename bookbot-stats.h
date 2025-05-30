#ifndef BOOKBOT_STATS_H
#define BOOKBOT_STATS_H

#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

typedef struct char_count {
  char c;
  int n;
} char_count_t;

int get_num_words(string text);
unordered_map<char, int> count_characters(string text);
vector<char_count_t>

sort_character_counts(unordered_map<char, int> character_counts);

#endif
