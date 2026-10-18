func sortColors(nums []int) {
    var i int
    var j int
    k := len(nums) - 1

    for j <= k {

        if nums[j] == 1 {
            j += 1
        } else if nums[j] == 0 {
            nums[j], nums[i] = nums[i], nums[j]
            i += 1
            j += 1
        } else {
            nums[j], nums[k] = nums[k], nums[j]
            k -= 1

        }
    }

}
