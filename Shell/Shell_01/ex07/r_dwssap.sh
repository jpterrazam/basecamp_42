#!/bin/sh
cat /etc/passwd | cut -d':' -f1 | sed -n 'n;p' | rev | sort -r | awk 'NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]' | sed -z 's/\n/, /g' | sed -z 's/, $/./'