#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(int arr[], int n, int &steps)
{
    for(int i =0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
            steps++; 
        }
    }
}

int main()
{
    
    int worst_case[] = {5, 4, 3, 2, 1};
    int n_worst = sizeof(worst_case) / sizeof(worst_case[0]);
    int steps_worst = 0;
    insertion_sort(worst_case, n_worst, steps_worst);
    cout << "Worst case sorted: ";
    for (int i = 0; i < n_worst; i++)
    {
        cout << worst_case[i] << " ";
    }
    cout << "\nNumber of steps (worst case): " << steps_worst << endl;

    
    int avg_case[] = {3, 1, 4, 5, 2};
    int n_avg = sizeof(avg_case) / sizeof(avg_case[0]);
    int steps_avg = 0;
    insertion_sort(avg_case, n_avg, steps_avg);
    cout << "Average case sorted: ";
    for (int i = 0; i < n_avg; i++)
    {
        cout << avg_case[i] << " ";
    }
    cout << "\nNumber of steps (average case): " << steps_avg << endl;

    
    int best_case[] = {1, 2, 3, 4, 5};
    int n_best = sizeof(best_case) / sizeof(best_case[0]);
    int steps_best = 0;
    insertion_sort(best_case, n_best, steps_best);
    cout << "Best case sorted: ";
    for (int i = 0; i < n_best; i++)
    {
        cout << best_case[i] << " ";
    }
    cout << "\nNumber of steps (best case): " << steps_best << endl;

    return 0;
}