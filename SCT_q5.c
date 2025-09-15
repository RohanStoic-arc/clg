#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    printf("Enter number of classes: ");
    scanf("%d", &n);

    float lower[n], upper[n], freq[n], mid[n], cum_freq[n];

    printf("Enter lower limit, upper limit and frequency for each class:\n");
    for (i = 0; i < n; i++) {
        printf("Class %d (lower upper freq): ", i+1);
        scanf("%f %f %f", &lower[i], &upper[i], &freq[i]);
        mid[i] = (lower[i] + upper[i]) / 2.0;
    }

    // cumulative frequency
    cum_freq[0] = freq[0];
    for (i = 1; i < n; i++)
        cum_freq[i] = cum_freq[i-1] + freq[i];

    float N = cum_freq[n-1];
    float h = upper[0] - lower[0];

    // mean
    float sum_fx = 0;
    for (i = 0; i < n; i++)
        sum_fx += freq[i] * mid[i];
    float mean = sum_fx / N;

    // median
    int median_index = 0;
    for (i = 0; i < n; i++) {
        if (cum_freq[i] >= N/2) {
            median_index = i;
            break;
        }
    }
    float L = lower[median_index];
    float CF = (median_index == 0) ? 0 : cum_freq[median_index-1];
    float f_m = freq[median_index];
    float median = L + ((N/2 - CF)/f_m) * h;

    // mode
    int modal_index = 0;
    float maxf = freq[0];
    for (i = 1; i < n; i++) {
        if (freq[i] > maxf) {
            maxf = freq[i];
            modal_index = i;
        }
    }
    float Lm = lower[modal_index];
    float f1 = freq[modal_index];
    float f0 = (modal_index == 0) ? 0 : freq[modal_index-1];
    float f2 = (modal_index == n-1) ? 0 : freq[modal_index+1];
    float mode = Lm + ((f1 - f0)/(2*f1 - f0 - f2)) * h;

    // Table header
    printf("\n%-10s %-6s %-6s %-6s %-10s %-9s %-10s %-9s %-10s %-9s %-10s\n",
           "Class","x","f","CF","f*x",
           "|x-mean|","f|x-mean|","|x-med|","f|x-med|","|x-mode|","f|x-mode|");

    // accumulators for MD
    float md_mean=0, md_median=0, md_mode=0;

    // Table rows
    for (i = 0; i < n; i++) {
        float fx = freq[i]*mid[i];
        float abs_mean = fabs(mid[i]-mean);
        float fabs_mean = freq[i]*abs_mean;

        float abs_med = fabs(mid[i]-median);
        float fabs_med = freq[i]*abs_med;

        float abs_mode = fabs(mid[i]-mode);
        float fabs_mode = freq[i]*abs_mode;

        md_mean   += fabs_mean;
        md_median += fabs_med;
        md_mode   += fabs_mode;

        printf("%5.0f-%-4.0f %6.2f %6.0f %6.0f %10.2f %9.2f %10.2f %9.2f %10.2f %9.2f %10.2f\n",
               lower[i], upper[i], mid[i], freq[i], cum_freq[i],
               fx, abs_mean, fabs_mean, abs_med, fabs_med, abs_mode, fabs_mode);
    }

    md_mean /= N;
    md_median /= N;
    md_mode /= N;

    printf("\nMean = %.2f", mean);
    printf("\nMedian = %.2f", median);
    printf("\nMode = %.2f", mode);
    printf("\nMean Deviation from Mean = %.2f", md_mean);
    printf("\nMean Deviation from Median = %.2f", md_median);
    printf("\nMean Deviation from Mode = %.2f\n", md_mode);

    return 0;
}
