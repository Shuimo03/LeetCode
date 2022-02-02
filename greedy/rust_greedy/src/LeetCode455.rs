struct Solution{
    
}

impl Solution {
    pub fn find_content_children(g: Vec<i32>, s: Vec<i32>) -> i32 {
        g.sort();
        s.sort();
        let mut child = 0;
        let mut cookie = 0;
        
        while child < g.len() && cookie < s.len() {
            if g[child] <= s[cookie]{
                child++;
            }
            cookie++;
        }
        return child;
    }
}