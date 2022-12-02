#include<stdio.h>
#include<string.h>
int main () 
{
    char allNames[10][32];
    scanf("%s", allNames[0]);
    scanf("%s", allNames[1]);
    scanf("%s", allNames[2]);
    scanf("%s", allNames[3]);
    scanf("%s", allNames[4]);
    scanf("%s", allNames[5]);
    scanf("%s", allNames[6]);
    scanf("%s", allNames[7]);
    scanf("%s", allNames[8]);
    scanf("%s", allNames[9]);
    printf("%s\n%s\n%s\n", allNames[2], allNames[6], allNames[8]);
    return 0;
}