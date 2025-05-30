from stats import get_num_words
from sys import argv
from sys import exit

if len(argv) != 2:
    print('Usage: python3 main.py <path_to_book>')
    exit(1)

get_num_words(argv[1])
