#!/bin/bash
cat /etc/passwd | grep -v '#' | awk 'NR % 2 == 0' | cut -d ':' -f1 | rev | sort -r | awk 'NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]' | awk '{ printf $0", " }' | sed 's/, $/./'
