impl Solution {
    pub fn contains_nearby_duplicate(nums: Vec<i32>, k: i32) -> bool {
        use::std::collections::HashMap;
        let mut cache = HashMap::new();

        for i in 0..nums.len(){
            if let Some(&value) = cache.get(&nums[i]) { if i32::abs((value - i) as i32) <= k { return true; } }
            cache.insert(nums[i],i);
        }
        return false
    }
}