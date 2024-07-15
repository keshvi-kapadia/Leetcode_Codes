/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double c, int* returnSize) {
    double *p=(double *)malloc(2*sizeof(double));
    *returnSize=2;
    p[0]=c+273.15;
    p[1]= c * 1.80 + 32.00;
    return p;
}