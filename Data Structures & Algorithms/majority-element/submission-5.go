func majorityElement(nums []int) int {
    var count int
	var candidate int
	var i int

	for i < len(nums) {
		if count == 0 {
			count = 1
			candidate = nums[i]
		} else if nums[i] != candidate {
			count -= 1
		} else {
			count += 1
		}

		i += 1
	}

	return candidate
}
