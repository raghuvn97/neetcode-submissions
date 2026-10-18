func subarraySum(nums []int, k int) int {
	var count int
	var sumSoFar int
	prefixsum := make(map[int]int)

	prefixsum[0] = 1


	for _, n := range nums {
		sumSoFar += n
		
		if freq, exists := prefixsum[sumSoFar-k];exists {
			count += freq
		}

		prefixsum[sumSoFar]++
	}

	return count
}
