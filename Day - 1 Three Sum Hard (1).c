#include <stdio.h>
#include <stdlib.h>

typedef struct HashMap {
    int key;
    int value;
} HashMap;

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;

    
    HashMap* hashMap = (HashMap*)malloc(numsSize * sizeof(HashMap));

    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];

        for (int j = 0; j < i; j++) {
            if (hashMap[j].key == complement) {
                result[0] = hashMap[j].value;
                result[1] = i;
                free(hashMap);
                return result;
            }
        }

        hashMap[i].key = nums[i];
        hashMap[i].value = i;
    }

    free(hashMap);

    *returnSize = 0;
    free(result);
    return NULL;
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;

    int* result = twoSum(nums, numsSize, target, &returnSize);

    if (result != NULL) {
        printf("Indices: %d, %d\n", result[0], result[1]);
        free(result);
    } else {
        printf("No solution found.\n");
    }

    return 0;
}