#!/bin/sh
sed '/^#/d' /etc/passwd | awk 'NR % 2 == 0' | cut -d ':' -f 1 | rev | sort -r | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2" | awk '{printf "%s, ", $0}' | sed 's/,\ $/./' | tr -d '\n'
