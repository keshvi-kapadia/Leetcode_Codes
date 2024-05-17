int comp_func(void* a, void* b){
    return *(int*)b - *(int*)a;
}

int numRescueBoats(int* people, int peopleSize, int limit) {
    qsort(people, peopleSize, sizeof(int), comp_func);
    int start = 0, end = peopleSize - 1;
    int out = 0;
    while(start <= end){
        if(people[start] + people[end] <= limit)
            end--;
        start++;
        out++;
    }
    return out;
}