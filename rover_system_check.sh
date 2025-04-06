#!/bin/bash
#performing a pre mission check  on the rover
#generate random battery percentage (0-100)
battery_percentage$((RANDOM%101)) #modular division with 101 generates remainders between 0 to 100
#check Battery status
if[ $battery_percentage -lt 20 ]; then
echo "Battery low ! Return to base!"
exit 1 #exit the script with an error which indicates system failure (Here battery insufficient)
fi #used to close if
# ping google.com to check network connectivity
ping -c 1 google.com &> /dev/null
if [ $? -ne 0 ]; then
echo "communication failure!"
exit 1
fi
#if both checks pass
echo "All systems are operational!"

