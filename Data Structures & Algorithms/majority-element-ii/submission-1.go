func majorityElement(nums []int) []int {
	var candidate1, candidate2 int
	var count1, count2 int
	var res [] int

	for _, n := range nums {
		if n == candidate1 {
			count1++
		} else if n == candidate2 {
			count2++
		} else if count1 == 0 {
			count1++
			candidate1 = n
		} else if count2 == 0 {
			count2++
			candidate2 = n
		} else {
			count1--
			count2--
		}
	}

	//verification pass

	count1 = 0
	count2 = 0

	for _, n := range nums {
		if n == candidate1 {
			count1++
		} else if n == candidate2 {
			count2++
		}
	}

	if count1 > len(nums) / 3 {
		res = append(res, candidate1)
	}
	
	if count2 > len(nums) / 3 {
		res = append(res, candidate2)
	}

	return res
	
}
