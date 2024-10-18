#include <stdio.h>
#include <math.h>

int main() {
    float firstTerm, commonRatio, numTerms, sum = 0;

    printf("Input the first number of the G.P. series: ");
    scanf("%f", &firstTerm);
    printf("Input the number or terms in the G.P. series: ");
    scanf("%f", &numTerms);
    printf("Input the common ratio of G.P. series: ");
    scanf("%f", &commonRatio);

    printf("The numbers for the G.P. series:\n");
    for (int i = 0; i < numTerms; i++) {
        float term = firstTerm * pow(commonRatio, i);
        printf("%.6f ", term);
        sum += term;
    }

    printf("\nThe Sum of the G.P. series: %.6f\n", sum);

    return 0;
}
