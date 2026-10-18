type MyHashMap struct {
    numbuckets int
    bucket [][]entry
}

type entry struct {
    key int
    value int
}

func Constructor() MyHashMap {
    slots := 769
    return MyHashMap{
        numbuckets : slots,
        bucket : make([][]entry, slots),
    }
}

func (this *MyHashMap) __hash(key int) int {
    return key % this.numbuckets
}

func (this *MyHashMap) Put(key int, value int) {
    idx := this.__hash(key)

    for i, pair := range this.bucket[idx] {
        if pair.key == key {
            this.bucket[idx][i].value = value
            return
        }
    }
    this.bucket[idx] = append(this.bucket[idx], entry{key: key, value: value})
}

func (this *MyHashMap) Get(key int) int {
	idx := this.__hash(key)
	
	// Scan the bucket for the key
	for _, pair := range this.bucket[idx] {
		if pair.key == key {
			return pair.value
		}
	}
	
	// Return -1 if the key doesn't exist per problem requirements
	return -1
}

func (this *MyHashMap) Remove(key int) {
	idx := this.__hash(key)
	
	// Find the key and remove it from the slice
	for i, pair := range this.bucket[idx] {
		if pair.key == key {
			// Efficient way to delete an element from a slice while preserving order:
			this.bucket[idx] = append(this.bucket[idx][:i], this.bucket[idx][i+1:]...)
			return
		}
	}
}

/**
 * Your MyHashMap object will be instantiated and called as such:
 * obj := Constructor();
 * obj.Put(key,value);
 * param_2 := obj.Get(key);
 * obj.Remove(key);
 */