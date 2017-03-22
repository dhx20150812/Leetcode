/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    if (!digits) return NULL;
    *returnSize = digitsSize;
    for (int i = digitsSize - 1; i >= 0; i--) {
        if (++digits[i] < 10) { return digits; }
        digits[i] = 0;
    }
    digits = (int*)realloc(digits, ++(*returnSize) * sizeof(int));
    digits[*returnSize - 1] = 0;
    digits[0] = 1;
    return digits;
}
