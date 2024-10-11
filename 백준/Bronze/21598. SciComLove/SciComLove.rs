use std::io::stdin;
fn main() {
    let mut n = String::new();
    let str: String = String::from("SciComLove");
    stdin().read_line(&mut n);
    let n: u32 = n.trim().parse().unwrap();
    for i in (0..n) {
        println!("{}", str);
    }
}