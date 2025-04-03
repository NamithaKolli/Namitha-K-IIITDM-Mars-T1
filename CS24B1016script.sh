#!/bin/bash/
#Question 1
mkdir rover_mission #creating a new directory
pwd
cd rover_mission #Navigating into the directory
#Question 2
touch log1.txt log2.txt log3.txt #creating empty text files
ls #checking if the files are created
#Question 3
mv log1.txt mission_log.txt # syntax to rename a file is mv oldfile_name newfile_name
ls #checking if the file is renamed
#Question 4
find . -type f -name "* .log"
# . is to start searching in the current directory
# - type f is to look for files only
# * .log is to search for files with .log extension
#Question 5
nano mission_log.txt #command to open the file to enter some sample commands
cat mission_log.txt #displays the command without opening the file
#Question 6
nano mission_log.txt #entering random  text to search the word ERROR
grep "ERROR" mission_log.txt
#Question 7
wc -l mission_log.txt #command to display number lines in a text file
#Question 8
date
#Question 9
top #this command gives dynamic information about system resource usage and performance i updated time to time
#Question 10
#sudo shutdown +10
