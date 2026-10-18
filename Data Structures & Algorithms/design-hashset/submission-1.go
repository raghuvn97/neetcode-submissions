import "slices"

type MyHashSet struct {
	numbuckets int 
	buckets [][] int
}

func Constructor() MyHashSet {
    slots := 917

	return MyHashSet {
		numbuckets : slots,
		buckets : make([][]int, slots),
	}
}

func __hash__(key int, slots int) int {
	return key % slots
}

func (this *MyHashSet) Add(key int) {
	idx := __hash__(key, this.numbuckets)
    if !slices.Contains(this.buckets[idx], key){
		this.buckets[idx] = append(this.buckets[idx], key)
	}
}

func (this *MyHashSet) Remove(key int) {
    idx := __hash__(key, this.numbuckets)
	i := slices.Index(this.buckets[idx], key)
	if slices.Contains(this.buckets[idx], key) {
		this.buckets[idx] = slices.Delete(this.buckets[idx], i, i + 1)
	}
}

func (this *MyHashSet) Contains(key int) bool {
    idx := __hash__(key, this.numbuckets)
	return slices.Contains(this.buckets[idx], key) 
}

/**
 * Your MyHashSet object will be instantiated and called as such:
 * obj := Constructor();
 * obj.Add(key);
 * obj.Remove(key);
 * param_3 := obj.Contains(key);
 */
 