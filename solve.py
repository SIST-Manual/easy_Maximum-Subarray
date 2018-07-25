# input parse section
nums = list(map(int, input()[1:-1].split(",")))
# initalize the current sum value and current maximum(in the process of traversing)
cur_sum = nums[0]
cur_max = nums[0]
for i in range(1, len(nums)):
	# Hint: whether a new start will lead to a larger sum?
    cur_sum = max(cur_sum + nums[i], nums[i])
    # May previous array has larger sum
    cur_max = max(cur_max, cur_sum)
print(cur_max)
