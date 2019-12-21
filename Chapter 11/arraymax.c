// Arup Guha
// 10/3/08
// Code covered in COP 3223 on 10/2/08. This example reads in test data
// from a file, finds the highest score on the test, and then finds out
// how many people achieved that score.

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000

int main() {
    
    FILE *fin;
    
    // We assume the test data is in this file.
    fin = fopen("testdata.txt", "r");
    
    int numTests;
    fscanf(fin, "%d", &numTests);
    
    // Error message if we don't have enough storage space.
    if (numTests > MAX_SIZE) 
        printf("Sorry, this program can't accomodate the amount of data you have.\n");
    else {
     
        int i;
        int testScores[MAX_SIZE];
        
        // Read in all the scores.
        for (i=0; i<numTests; i++)
            fscanf(fin, "%d", &testScores[i]);
            
        int max = testScores[0];  
        
        // Find max test score - if we find a higher one, store it.
        for (i=1; i<numTests; i++)
            if (testScores[i] > max)
                max = testScores[i];  
                
        printf("The maximum test score is %d.\n", max);
        
        // Find out how many people scored this maximum.
        int numMax = 0;
        for (i=0; i<numTests; i++)
            if (testScores[i] == max)
                numMax++;
                
        // Print out how many people got the highest score. Do a singular and
        // plural case =)
        if (numMax > 1)
            printf("There were %d people who got the highest score.\n", numMax);
        else
            printf("There was 1 person who got the highest score.\n");
                
    }
    fclose(fin);

    system("PAUSE");
    return 0;
}