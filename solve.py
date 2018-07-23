if __name__ == "__main__":
    nums = list(map(int, input()[1:-1].split(",")))
    if (len(nums) == 1):
        print(nums[0])
    cur_sum = None
    prev_sum = nums[0]
    cur_max = nums[0]
    for i in range(1, len(nums)):
        cur_sum = max(prev_sum + nums[i], nums[i])
        if cur_max < cur_sum:
            cur_max = cur_sum
        prev_sum = cur_sum
    print(cur_max)
