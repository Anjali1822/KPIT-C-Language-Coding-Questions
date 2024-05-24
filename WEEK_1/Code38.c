/*Write a program to find the grace marks for a student using switch. 
The user should enter the class obtained by the student and the 
number of subjects he has failed in. Use the following logic: 

If the student gets first class and he fails in more than 3 
subjects, he does not get any grace. Otherwise, he gets a grace 
of 5 marks per subject. 

If the student gets second class and he fails in more than 2 
subjects, he does not get any grace. Otherwise, he gets a grace 
of 4 marks per subject. 

If the student gets third class and he fails in more than 1 
subject, then he does not get any grace. Otherwise, he gets a 
grace of 5 marks. */

#include <stdio.h>

int main() {
    int class_obtained, subjects_failed;
    int grace_marks = 0;

    printf("Enter the class obtained by the student (1 for First class, 2 for Second class, 3 for Third class): ");
    scanf("%d", &class_obtained);

    printf("Enter the number of subjects failed by the student: ");
    scanf("%d", &subjects_failed);

    switch (class_obtained) {
        case 1: // First class
            if (subjects_failed > 3) {
                grace_marks = 0;
            } else {
                grace_marks = subjects_failed * 5;
            }
            break;
        case 2: // Second class
            if (subjects_failed > 2) {
                grace_marks = 0;
            } else {
                grace_marks = subjects_failed * 4;
            }
            break;
        case 3: // Third class
            if (subjects_failed > 1) {
                grace_marks = 0;
            } else {
                grace_marks = 5;
            }
            break;
        default:
            printf("Invalid class entered!\n");
            return 1;
    }

    printf("Grace marks awarded: %d\n", grace_marks);

    return 0;
}
/*OUTPUT:
Enter the class obtained by the student (1 for First class, 2 for Second class, 3 for Third class): 1
Enter the number of subjects failed by the student: 2
Grace marks awarded: 10*/