extern crate regex;
use regex::Regex;
use std::io;

fn main(){
	let email_regex = Regex::new(r"^([a-z0-9]+@([a-z0-9])+([\-\.]{1}[a-z0-9]+)*\.[a-z]{2,6})").unwrap();
	let mut email = String::new();
	println!("Enter the Email: {}",email);
	std::io::stdin().read_line(&mut email).unwrap();
	if email_regex.is_match(&email){
   		println!("{} is valid: {}", email,email_regex.is_match(&email));
   	}
  else{
    println!("Invalid E-mail!");
    }  
  }  
