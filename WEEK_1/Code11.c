/*If ages of Ram, Shyam and Ajay are input through the keyboard, 
write a program to determine the youngest of the three.*/
#include<stdio.h>

int main()
{
    int ram,shym,ajay;
    printf("\nEnter Ages of Ram shyam and Ajay : ");
    scanf("%d%d%d",&ram,&shym,&ajay);
    
    
    if(ram<shym && ram<ajay){
        printf("\nYoungest is Ram : %d ",ram);
    }else if(shym<ram && shym<ajay){
        printf("\nYoungest is Shyam : %d ",shym);
    }
    else{
        printf("\nYoungest is Ajay : %d ",ajay);
    }
    return 0;
}
/*OUTPUT
Enter Ages of Ram shyam and Ajay : 20 22 25

Youngest is Ram : 20 
*/