// build.rs
fn main() {
    cc::Build::new().file("src/badmem.c").compile("anything");
}
