#include <algorithm>
#include <locale>
#include <string>
#include <unordered_map>
#include <vector>

#include "bookbot-stats.h"

using namespace std;

// IMPORTANT NOTE: I copy pasted this directly from somebody's question here:
// https://stackoverflow.com/q/8255935 😁

unordered_map<char, int> count_characters(string text) {
  locale LOCALE;
  unordered_map<char, int> dict{};
  for (int i{0}; i < text.length(); i++) {
    if (isalpha(text.at(i), LOCALE)) {
      char key = tolower(text.at(i));
      if (dict.find(key) != dict.end())
        dict[key]++;
      else
        dict[key] = 1;
    }
  }

  return dict;
}

int get_num_words(string text) {
  locale LOCALE;
  int word_count{0};
  unordered_map<char, int> dict{};

  for (int i{0}; i < text.length(); i++) {
    if (i > 0 and !isspace(text.at(i - 1), LOCALE) and
        isspace(text.at(i), LOCALE))
      word_count++;
  }

  return word_count;
}

bool sort_char_count(char_count_t a, char_count_t b) { return b.n < a.n; }

vector<char_count_t>
sort_character_counts(unordered_map<char, int> character_counts) {
  vector<char_count_t> result{};
  for (auto iter = character_counts.begin(); iter != character_counts.end();
       ++iter) {
    char_count_t c{iter->first, iter->second};
    result.push_back(c);
  }

  sort(result.begin(), result.end(), sort_char_count);
  return result;
}
