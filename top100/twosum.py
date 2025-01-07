from typing import List


class Solution:
    '''
    输入：给定一个整数数组 nums 和一个目标值 target，要求在数组中找到两个数，它们的和为 target，并返回它们的下标。
    输出：返回这两个数的下标，保证每个输入只有唯一的答案。
    输入：nums = [2,7,11,15], target = 9
    输出：[0,1]
    解释：因为 nums[0] + nums[1] == 9 ，返回 [0, 1] 。

    也就是说在一个 list 中找到一组符合 target 的目标条件就可以了，输入实例也有可能是 [1,2,7,8,11,15] 只需要输出 [1,8] 或者 [2,7] 数组下标即可。
    '''
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        if len(nums) == 0:
            return []

        for i in range(len(nums)):
            for j in range(i+1,len(nums)):
                if nums[i] + nums[j] == target:
                    return [i,j]
        return []

    '''
    使用双指针方法来实现:
        1.首先使用排序，来保证大小顺序。
        2. 设置头尾指针
    '''

    def double_point_two_sum(self, nums: List[int], target: int) -> List[int]:
        # 将原数组的元素与下标一起构成元组，并排序
        nums = sorted((num, i) for i, num in enumerate(nums))

        left, right = 0, len(nums) - 1

        while left < right:
            # 访问元组的第一个元素是数组值
            if nums[left][0] + nums[right][0] == target:
                # 返回原始下标
                return [nums[left][1], nums[right][1]]
            elif nums[left][0] + nums[right][0] < target:
                left += 1
            else:
                right -= 1

        return []  # 如果没有找到满足条件的元素，返回空列表


    '''
    使用 map 来统计 nums 中
    '''
    def hash_two_sum(self, nums: List[int], target: int) -> List[int]:
        hash_map = {

        }

        for i,num in enumerate(nums):
            # 计算差值
            complement = target - num

            if complement in hash_map:
                return[hash_map[complement],i]

            hash_map[num] = i

        return []



if __name__ == '__main__':
    solution = Solution()
    nums = [7, 2, 15, 11]
    nums = sorted((num, i) for i, num in enumerate(nums))
    print(nums[0])
