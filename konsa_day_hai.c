#include <stdio.h>
int main() {
    int day, month, year;

    printf("Enter date (DD MM YYYY): ");
    scanf("%d %d %d", &day, &month, &year);
    
    // Jan & Feb are 13 and 14 of last year
    if (month < 3) {
        month += 12;
        year -= 1;
    }

    int k, j, h;
    k = year % 100;  // Last two digits of year
    j = year / 100;  // First two digits (century)
    
    // Zeller relation
    h = (day + (13 * (month + 1)) / 5 + k + (k / 4) + (j / 4) + (5 * j)) % 7;

	//not using if else 
	
    const char *days[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
	month -= 12;
  	year += 1;
    printf("The day on %d/%d/%d is %s!", day,month,year, days[h]);
    
    return 0;
}
