# Namitha-K-IIITDM-Mars-T1
This is my submission of mars club task 1 2025.  
Finally completed all the light dose and medium dose qousetions and 1 hard dose. The questions were really amazing .  
#**Light Dose**  
  
*Questions 1 to 10 are in CS24B1016script.sh file*  
*Question for Bashscripting is in rover_system_check.sh file*  
To solve light dose problems it is necessary to learn the basic commands of linux terminal and bashscripting  
Basic linux commands:  
1.mkdir-create a new directory in the current directory  
2.cd-change to other directory  
3.rmdir-remove directory  
4.gedit-edit text file  
5.nano-used to edit bashscript etc...  
##What is Bash script actually and why is it useful?  
it is a simple text file which stores a series of commands which can be executed when thefile is attached by setting it to  
basb type (generally.sh extension file starting with #!/bin/bash)  
It makes life simple , as we do not have to type the repeating commands in a program again and again.  
I followed the following link for learning basic bash commands : [https://devhints.io/bash]  
#**Medium Dose** 
  
##**Question 1**  
The rover's camera is mounted ahead of the center so it rotates by 360 degrees before cente of the rover reaches the markdown  
so everytime a markdown is detected the coordinate of y(i considered ) should be shifted by 55 cm.  
using shifting of origin method:  
x′=x−a      y′=y−b      z′=z−b  
*(x,y,z) are the original coordinates of the point.  
*(a,b,c) is the new origin of the coordinate system.  
*(x′,y′,z') are the new coordinates of the point after shifting the origin. 
  
##**Question 2**  
*Morse code is a encoded sequence of (.)dots and (-)dashes that must be decoded to be understood by humans.  
*its quite not possible someone would see all the symbols of morse code(but i had to type for the code!) so i'll just give one example A is ".-".  
*in a morse code words are separated by *double spaces* and letters are separated by *single spaces* so i used *strtok* to separate out each word  
and further each letter in each word to print its english equivalent by checking with values of morse code stored in sequence in an *array*.  
  
##**Question 3**  
*This was personally the easiest question for me because i didnt have to learn any new concept or fact to solve this.   
*Though the sample input was a single word I thought that if rover really wanted to send some encrypted message it wouldn't be a single word  
so I considered taking input as a sentence in the code. {scanf("%[^\n]",encrypted_input);}  
*Here the logic in each word is to decode a word we have to set a loop counter (in my case j) and go j word back for each letter while j is 
incremented for each letter.  
*Here the wrap up case is important as if the letter to be decoded is A we will get some symbols instead of letters which is not the expected  
output(only Capital letters) so I considered the wrapping up case using :  
if(input[i]<'A')//Handling the case where the character goes less than A  
     {  
         input[i]=input[i]+26;  
     }  
       
##**Question 4**  
*This program reads numerical data from a file (log.txt) and applies two different types of filters to smooth the data: Muchiko Filter (average filter) and Sanchiko Filter (median filter).  
*To calculate Hybrid I calculated the mean of Sanchiko and Muchiko filter  
*considering various out puts I think *Hybrid filter is the best* as it smoothes the data and also noise is removed upto some extent.  
  
##**Question 5**  
*The 3D system of angles is also called Euler angles (roll,pitch,yaw) which we are sending to the friendly aliens Muchiko and Sanchiko  
*But they dont understand this they understand a 4 number system called quaternion system .  
*This system is better than our's because it avoids Gimbal lock.  
  
**FORMULA**:  
*x,y,z (roll,yaw,pitch) are the input 3D Euler angles  
let x',y',z' denote the half angles x/2,y/2 and z/2  
**W**,**X**.**Y**,**Z** Denote the Angles in 4 number system  
**W**=cos(x)×cos(y)×cos(z) + sin(x)×sin(y)×sin(z)  
**X**=sin(x)×cos(y)×cos(z) - cos(x)×sin(y)×sin(z)  
**Y**=cos(x)×sin(y)×cos(z) + sin(x)×cos(y)×sin(z)  
**Z**=cos(x)×cos(y)×sin(z) - sin(x)×sin(y)×cos(z)  
  
#**Hard Dose**  
  
##**Question 1**  
to read the input from the Obstacles.txt file the following file handling commands are necessary  
1.fopen(): Opens a file for reading, writing, or appending.  
2.fscanf(): Reads formatted data from the file (like scanf()).  
3.fclose() :to close the file  
This is my submission of mars club task 1 2025.
## Git Push Screenshots
### First Push
![Push Git](push_git.png)
### Second Push
![Push 2](push2.png)
