/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
    double *answer=(double*)malloc(2*sizeof(double));
    *returnSize=2;
    double kelvin = celsius + 273.15;
    double Fahrenheit = celsius * 1.80 + 32.00;
    answer[0]=kelvin;
    answer[1]=Fahrenheit;
    return answer;
}