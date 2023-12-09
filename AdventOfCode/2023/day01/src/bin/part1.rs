fn main() {
    //let input: &str = include_str!("./input1.txt");
    let input: &str = "
        1abc2
        pqr3stu8vwx
        a1b2c3d4e5f
        treb7uchet";
    let output: i32 = part1(input);    
    dbg!(output);
}

fn part1(input: &str) -> i32 {
    /*
    input.lines().filter_map(|line| {
        let digits: Vec<_> = line.chars().filter(|c| c.is_digit(10)).collect();
        if let (Some(&first), Some(&last)) = (digits.first(), digits.last()) {
            Some(first.to_digit(10).unwrap() as i32 * 10 + last.to_digit(10).unwrap() as i32)
        } else {
            None
        }
    }).sum()
     */
    println!("{:?}", input.lines().filter_map());
    return 0;
}


#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test() {
        let result = part1("
            1abc2
            pqr3stu8vwx
            a1b2c3d4e5f
            treb7uchet");
        assert_eq!(result, 142);
    }
}
