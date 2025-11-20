// Last updated: 2025-11-21T00:12:27+05:00
// Last updated: 2025-11-21T00:09:50+05:00
// Last updated: 2025-11-22T00:05:28+05:00
// Last updated: 2025-10-30T20:34:53+05:00
// Last updated: 2025-10-30T20:32:31+05:00
int totalMoney(int n) {
    int total = 0;
    int week = 0;
    
    for (int day = 0; day < n; day++) {
        if (day % 7 == 0) {
            week++;
        }
        total += week + (day % 7);
    }
    
    return total;
}