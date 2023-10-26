# TODO

from cs50 import get_string

# Prompt user for text
text = get_string("Text: ")

letters = 0
words = 1
sentences = 0

# Count number of letters, words and sentences
for i in text:
    if i.isalpha():
        letters += 1
    elif i == " ":
        words += 1
    elif i == "." or i == "!" or i == "?":
        sentences += 1
