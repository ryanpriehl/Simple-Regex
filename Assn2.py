import sys
import re

input_file = open(sys.argv[1], "r")
for line in input_file:
    line = line.strip()
    match_string = re.match(r"[$][\^]*((([1-9][0-9]{0,2}(,[0-9]{3})*))|0)([.][0-9]{2})?", line);
    if (match_string) and (match_string.group() == line):
        print("Matched: " +line)
    else:
        print("Not Matched: " +line)
