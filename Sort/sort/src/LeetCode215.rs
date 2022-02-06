pub fn find_kth_largest(mut nums:Vec<i32>, k:usize) -> i32{

    nums.sort();
    let res = nums.len()-k;
    return nums[res];
}