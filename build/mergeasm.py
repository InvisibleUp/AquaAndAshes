#!/usr/bin/python3
from __future__ import print_function
import fileinput

# Slurp up all lines
lines = list(fileinput.input())

# Replace any import statements with said file
l = 0
while l < len(lines):
	cmds = lines[l].split()
	l += 1

	if not "include" in cmds: continue

	filename = cmds[1].replace('"', '')	
	with open(filename) as f:
		tmp = lines[0:l - 1]  # Skip include line
		tmp.extend(f.readlines())
		tmp.extend(lines[l:])
		lines = tmp

for line in lines:
	print(line, end="")
			
