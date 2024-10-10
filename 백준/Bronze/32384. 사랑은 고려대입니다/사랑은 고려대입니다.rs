use std::io::stdin;
fn main(){
    let mut n = String::new();
    stdin().read_line(&mut n);
    let n : u32 = n.trim().parse().unwrap();
    for i in (0..n) {
        print!("{}", String::from("LoveisKoreaUniversity "));
    }

}