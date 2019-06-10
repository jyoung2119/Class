#!/usr/bin/env python

import os, subprocess, sys
from os import system

"""
# Given a folder directory, build a dictionary that contains the file path as a key and files
# contained in it as the values in a list.
# example:  on the desktop, Folder1 contains two jpegs and another folder named Folder2. Folder2 has two txt files.
# The dictionary would look like 
	file_dict = {'desktop\Folder1': ['my_jpg1','my_jpg2'], 'desktop\Folder1\Folder2': ['my_txt1','my_txt2']}
"""
def first_test(folder_path):
	file_dict = {}

	for root, _, files in os.walk(folder_path):
		file_dict[root] = files

	return file_dict

"""
# Provided a command line string (e.g., something like 'ipconfig'), execute the operation, and
# save the results to a txt file with the name given
"""
def second_test(cmdline, filename):
	with open(filename, "w") as output:
		subprocess.call(cmdline, stdout=output)

	return None