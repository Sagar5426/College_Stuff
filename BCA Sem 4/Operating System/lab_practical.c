#include <stdio.h>

#define NUM_PROCESSES 5

typedef struct {
    int pid;       
    int burstTime; 
    int priority;  
} Process;


void sortProcessesByPriority(Process processes[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (processes[j].priority > processes[j + 1].priority) {
                Process temp = processes[j];
                processes[j] = processes[j + 1];
                processes[j + 1] = temp;
            }
        }
    }
}


void displayProcesses(Process processes[], int n) {
    printf("\nProcess ID\tBurst Time\tPriority\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%d\t\t%d\n", processes[i].pid, processes[i].burstTime, processes[i].priority);
    }
}

int main() {
    Process processes[NUM_PROCESSES];

    printf("Enter burst time and priority for %d processes:\n", NUM_PROCESSES);
    for (int i = 0; i < NUM_PROCESSES; i++) {
        processes[i].pid = i + 1;
        printf("Process %d:\n", i + 1);
        printf("Burst Time: ");
        scanf("%d", &processes[i].burstTime);
        printf("Priority: ");
        scanf("%d", &processes[i].priority);
    }

    sortProcessesByPriority(processes, NUM_PROCESSES);

    
    displayProcesses(processes, NUM_PROCESSES);

    return 0;
}
