\\ Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. 
Print the maximum elements for each window separated by spaces as output. 

  #include <stdio.h>

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter subarray size k: ");
    scanf("%d", &k);

    printf("Maximum elements of each subarray: ");

    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];

        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > max)
                max = arr[j];
        }

        printf("%d", max);
        if (i < n - k)
            printf(" ");
    }

    printf("\n");
    return 0;
}

