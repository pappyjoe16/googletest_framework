INSTRUCTION ON HOW TO INSTALL gtest (googletest)
1. run command "sudo apt install libgtest-dev googletest" This command will install both gtest and clone the googletest 
   repository in /usr/src
2. To compile "sudo cmake -Bbuild"
3. To build the google test framework "sudo cmake --build build"


Another method is to clone a repository from github
   git clone https://github.com/google/googletest.git -b release-1.12.0
   cd googletest 
   cmake -Bbuild
   cmake --buil build
