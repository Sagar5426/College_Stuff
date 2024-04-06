#include <stdio.h>

#define ROW 4
#define COL 4

//value changes only at index 0 in front[ROW]

int front[ROW] = {-1, -1, -1, -1};
int rear[ROW] = {-1, -1, -1, -1};


void insertionPriorityQueue(int queue[ROW][COL], int element, int pr) {
    if ((front[pr] == (rear[pr] + 1) % COL) || (front[pr] == 0 && rear[pr] == COL - 1)) {
        printf("Overflow\n");
        return;
    } else {
        if (rear[pr] == -1) {
            front[pr] = 0;
            rear[pr] = 0;
        } else {
            rear[pr] = (rear[pr] + 1) % COL;
        }
        queue[pr][rear[pr]] = element;
    }
}

void delPriorityQueue(int queue[ROW][COL]) {
    int pr = 0;
    while (pr < ROW) {
        if (front[pr] >= 0) {
            if (front[pr] == rear[pr]) {
                front[pr] = -1;
                rear[pr] = -1;
            } else {
                front[pr] = (front[pr] + 1) % COL;
                break;
            }
        } else {
            pr++;
        }
    }
    if (pr == ROW) {
        printf("Queue is empty\n");
    }
}

void printPriorityQueue(int queue[ROW][COL]) {
    printf("Priority Queue:\n");
    for (int i = 0; i < ROW; i++) {
        printf("Priority %d: ", i);
        if (front[i] != -1) {
            for (int j = front[i]; j != rear[i]; j = (j + 1) % COL) {
                printf("%d ", queue[i][j]);
            }
            printf("%d", queue[i][rear[i]]);
        }
        printf("\n");
    }
}

int main() {
    int queue[ROW][COL];
    int element = 10;
    int pr = 0;

    insertionPriorityQueue(queue, element, pr);
    insertionPriorityQueue(queue, 20, pr);
    insertionPriorityQueue(queue, 30, pr);
    insertionPriorityQueue(queue, 60, pr);
    insertionPriorityQueue(queue, 70, pr);
    insertionPriorityQueue(queue, 40, 2);

    printPriorityQueue(queue);

    delPriorityQueue(queue);

    printPriorityQueue(queue);


    return 0;
}
