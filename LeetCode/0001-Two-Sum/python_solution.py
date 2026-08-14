class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """

        indicies = []

        for x in range(len(nums)):
            searchingFor = target - nums[x]
            for y in range(x+1, len(nums)):
                if nums[y] == searchingFor:
                    indicies.append(x)
                    indicies.append(y)
                    return indicies