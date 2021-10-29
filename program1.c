 #include <stdio.h>
 
 int main() {
    int year = -1;
    
    printf("Enter the year you were born: ");
    scanf("%d", &year);
    printf("%s %d %s\n", "You are approximately", 2017 - year, "years old");
 }
 
