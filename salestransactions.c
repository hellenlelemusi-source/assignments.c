/*
name;lekipalu hellen lelemusi
regno;PA106/G/28728/25
Description ;program displaying sales transactions
*/
 #include <stdio.h>

int main() {
    FILE *file = fopen("C:\\Users\\User\\OneDrive\\Desktop\\sales.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    float amount;
	float total = 0;

    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }

    printf("Total sales for the day: %.2f\n", total);
    fclose(file);
    return 0;
}