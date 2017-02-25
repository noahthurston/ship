# ship
"ship" is a small program that automates the three git commands needed to submit for grading
Should run on any macOS or Linux OS with git installed, just navigate to your git repo and run the command

Command:
ship "my commit message"

To install:
1. clone/download the repo.  
2. navigate to the "ship" folder and run "chmod +x ship" to make the program executable.  
3. copy the "ship" executable to your $PATH, usually /usr/local/bin (you can find it by running "echo $PATH").  


The program is already compiled, but if you want to edit and recompile it, just navigate to the folder main.c is in and run "gcc -o ship main.c" (you'll still have to chmod it and copy it to your $PATH). 
