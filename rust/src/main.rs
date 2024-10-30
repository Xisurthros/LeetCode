use std::collections::HashMap;

macro_rules! assert_eq_print {
    ($left:expr, $right:expr) => {
        if $left == $right {
            println!("Assertion passed: {:?} == {:?}", $left, $right);
        } else {
            panic!("Assertion failed: {:?} != {:?}", $left, $right);
        }
    };
}

pub struct Solution;

impl Solution {
    pub fn nth_person_gets_nth_seat(n: i32) -> f64 {
        if n == 1 { 1.0 } else { 0.5 }
    }
}

pub struct Test;

impl Test {
    pub fn run_nth_person_gets_nth_seat() {
        let test_cases: HashMap<i32, f64> = [(1, 1.0), (2, 0.5)].iter().cloned().collect();

        for (&test, &expected) in &test_cases {
            let solution = Solution::nth_person_gets_nth_seat(test);
            assert_eq_print!(expected, solution);
        }
    }
}

fn main() {
    Test::run_nth_person_gets_nth_seat();
}

