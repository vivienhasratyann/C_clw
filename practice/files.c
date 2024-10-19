#include <stdio.h>

int main(){
    char line[255];
    FILE *file = fopen("text.txt", "r"); // a for append; w for write; r for read

    // fprintf(file, "new text\n");
    fgets(line, 255, file);
    printf("%s", line);
    fgets(line, 255, file);
    printf("%s", line);
    fgets(line, 255, file);
    printf("%s\n", line);


    fclose(file);

    return 0;
}