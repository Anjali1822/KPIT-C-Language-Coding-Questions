/*There are three pegs labeled A, B and C. Four disks are placed on 
peg A. The bottom-most disk is largest, and disks go on decreasing 
in size with the topmost disk being smallest. The objective of the 
game is to move the disks from peg A to peg C, using peg B as an 
auxiliary peg. The rules of the game are as follows: 
(1) Only one disk may be moved at a time, and it must be the top 
disk on one of the pegs. 
(2) A larger disk should never be placed on the top of a smaller 
disk. 
Write a program to print out the sequence in which the disks should 
be moved such that all disks on peg A are finally transferred to peg 
C. 
*/
#include <stdio.h>

void moveDisk(char source, char destination) {
    printf("Move disk from peg %c to peg %c\n", source, destination);
}

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        moveDisk(source, destination);
        return;
    }
    towerOfHanoi(n - 1, source, destination, auxiliary);
    moveDisk(source, destination);
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int numDisks = 4; 
    char source = 'A', auxiliary = 'B', destination = 'C';

    printf("Sequence of moves to solve Tower of Hanoi with %d disks:\n", numDisks);
    towerOfHanoi(numDisks, source, auxiliary, destination);

    return 0;
}
/*
OUTPUT:
Sequence of moves to solve Tower of Hanoi with 4 disks:
Move disk from peg A to peg B
Move disk from peg A to peg C
Move disk from peg B to peg C
Move disk from peg A to peg B
Move disk from peg C to peg A
Move disk from peg C to peg B
Move disk from peg A to peg B
Move disk from peg A to peg C
Move disk from peg B to peg C
Move disk from peg B to peg A
Move disk from peg C to peg A
Move disk from peg B to peg C
Move disk from peg A to peg B
Move disk from peg A to peg C
Move disk from peg B to peg C*/