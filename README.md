# Additional lab: Creating datetime syscall in xv6
## Authors: [Danylo Kalchenko](https:\\github\kalchenkod)

## Usage
Setting up xv6 OS
```
git clone https://github.com/kalchenkod/xv6-practice.git
cd xv6-practice
cd xv6-public
make
make qemu-nox
```
Performing datetime syscall in xv6
```
datetime
[hour:minute:second day-month-year]  //Expected result
```

## Changes
- *syscall.h* -- define syscall and assign its number 
- *syscall.c* -- add pointer to array of syscall function pointers (above number is an index). Also creating function prototype here
- *sysproc.c* -- Implementing the syscall function 
- *user.S* and *user.h* -- Creating OS interface for this system call (defining function to be used in user programm calling syscall)
- *datetime.c* -- user programm using syscall to show date and time

## Extra
For completing the task *cmostime* function was used, which fills already defined *struct rtcdate* with current date and time.
