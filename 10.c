#include <stdio.h>

void busiestRow(int grid[10][10], int r, int c) {
int maxTotal = -1;
int bestRow = 0;

for (int i = 0; i < r; i++) {
    int total = 0;

    for (int j = 0; j < c; j++) {
        total += grid[i][j];
    }

    if (total > maxTotal) {
        maxTotal = total;
        bestRow = i;
    }
}

printf("Row %d, Total %d\n", bestRow, maxTotal);


}

int main() {
int grid[10][10] = {
{2, 0, 1},
{3, 3, 1},
{1, 1, 1}
};


int r = 3, c = 3;

busiestRow(grid, r, c);

return 0;


}
