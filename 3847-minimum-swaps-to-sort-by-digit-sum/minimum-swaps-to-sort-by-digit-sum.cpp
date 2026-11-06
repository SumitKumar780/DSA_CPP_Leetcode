class Solution {
public:

    int getDigitSum(int num) {
        int sum = 0;

        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }

        return sum;
    }

    int minSwaps(vector<int>& nums) {

        int n = nums.size();

        vector<int> afterSorted(nums);

        auto lambda = [&](int num1, int num2) {

            int numA = getDigitSum(num1);
            int numB = getDigitSum(num2);

            if (numA != numB) {
                return numA < numB;
            }

            return num1 < num2;
        };

        sort(afterSorted.begin(), afterSorted.end(), lambda);

        unordered_map<int, int> valtoIdx;

        for (int i = 0; i < n; i++) {
            valtoIdx[nums[i]] = i;
        }

        int swapC = 0;

        for (int i = 0; i < n; i++) {

            int expectedVal = afterSorted[i];
            int currVal = nums[i];

            if (expectedVal == currVal)
                continue;

            int idx = valtoIdx[expectedVal];

            swap(nums[i], nums[idx]);

            // Update both indices
            valtoIdx[currVal] = idx;
            valtoIdx[expectedVal] = i;

            swapC++;
        }

        return swapC;
    }
};