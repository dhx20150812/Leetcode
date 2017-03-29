/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
 //从根号往大找
int* constructRectangle(int area, int* returnSize) {
    *returnSize = 2;
    int *res = (int*)malloc(2*sizeof(int));
    int sq = (int)sqrt(area);
    if(sq*sq==area){
        res[0] = sq;
        res[1] = sq;
        return res;
    }
    sq += 1;
    while(area%sq!=0){
        sq++;
    }
    res[0] = sq;
    res[1] = area/sq;
    return res;
}
