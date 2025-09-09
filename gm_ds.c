#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter the number of distinct values: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Number of values must be a positive integer.\n");
        return 1;
    }

    double x[n];
    int freq[n];
    
    printf("Enter the values (x) and their corresponding frequencies (f):\n");
    for (int i = 0; i < n; i++) {
        printf("Value x[%d]: ", i + 1);
        scanf("%lf", &x[i]);
        if (x[i] <= 0) {
            printf("Values must be positive for geometric mean calculation.\n");
            return 1;
        }
        printf("Frequency f[%d]: ", i + 1);
        scanf("%d", &freq[i]);
        if (freq[i] < 0) {
            printf("Frequencies cannot be negative.\n");
            return 1;
        }
    }

    double sum_f = 0.0;
    double sum_f_logx = 0.0;

    printf("\n------------------------------------------------\n");
    printf("|   x   |   f   |   log(x)   |  f * log(x)  |\n");
    printf("------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        double log_x = log(x[i]);
        double f_log_x = freq[i] * log_x;
        sum_f += freq[i];
        sum_f_logx += f_log_x;
        printf("| %5.2lf | %5d | %10.4lf | %12.4lf |\n", x[i], freq[i], log_x, f_log_x);
    }
    printf("------------------------------------------------\n");

    double geometric_mean;
    if (sum_f > 0) {
        double weighted_avg_of_logs = sum_f_logx / n;
        geometric_mean = exp(weighted_avg_of_logs);
        printf("\nSum of frequencies (Σf) = %5.0lf\n", sum_f);
        printf("Sum of f * log(x) (Σf*log(x)) = %5.4lf\n", sum_f_logx );
        printf("Weighted Geometric Mean = exp(Σf*log(x) / Σf) = %lf\n", geometric_mean);
    } else {
        printf("\nError: The sum of frequencies is zero, which means there are no data points.\n");
        return 1;
    }

    return 0;
}
