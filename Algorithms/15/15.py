class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        dp_1 = []
        dp_2 = {}
        ans = []
        if nums.count(0) > 2:
            ans.append([0,0,0])
        for num in nums:
            if not num in dp_1:
                if -num in dp_2.keys():
                    for i,j in dp_2[-num]:
                        ans.append([i,j,num])
                for i in dp_1:
                    dp_2.setdefault(i + num, [])
                    if not sorted([i,num]) in dp_2[i + num]:
                        dp_2[i+num].append(sorted([i,num]))
                dp_1.append(num)
            elif num != 0 :
                dp_2.setdefault(2 * num, [])
                dp_2[2*num].append([num,num])
                if -2*num in dp_1:
                    ans.append([num,num,-2*num]) 
        return ans