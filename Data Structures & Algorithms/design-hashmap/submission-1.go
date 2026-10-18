import "slices"

type Entry struct {
	key int
	value int
}

func entryConstructor(key int, value int) Entry {
	return Entry {
		key : key,
		value : value,
	}
}


type MyHashMap struct {
	numbuckets int
	bucket [][]Entry
}

func Constructor() MyHashMap {
    slots := 917

	return MyHashMap {
		numbuckets : slots,
		bucket : make([][]Entry, slots),
	}
}

func __hash__(key int, slots int) int {
	return key % slots
}


func (this *MyHashMap) Put(key int, value int) {
	idx := __hash__(key, this.numbuckets)
	for i , entry := range this.bucket[idx] {
		if entry.key == key {
			this.bucket[idx][i].value = value
			return
		}
	}

	this.bucket[idx] = append(this.bucket[idx], entryConstructor(key, value))
}

func (this *MyHashMap) Get(key int) int {
    idx := __hash__(key, this.numbuckets)
	for _, entry := range this.bucket[idx] {
		if entry.key == key {
			return entry.value
		}
	}

	return -1
}

func (this *MyHashMap) Remove(key int) {
    idx := __hash__(key, this.numbuckets)
	for i, entry := range this.bucket[idx] {
		if entry.key == key {
			this.bucket[idx] = slices.Delete(this.bucket[idx], i, i+1)
			return
		}
	}
	return
}

/**
 * Your MyHashMap object will be instantiated and called as such:
 * obj := Constructor();
 * obj.Put(key,value);
 * param_2 := obj.Get(key);
 * obj.Remove(key);
 */