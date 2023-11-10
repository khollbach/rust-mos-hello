out/factorial: main.c out/factorial.ll
	mkdir -p out
	mos-sim-clang $^ -o $@ -Os

out/factorial.ll: factorial.rs
	mkdir -p out
	rustc $^ -o $@ --emit=llvm-ir --crate-type=rlib -C opt-level=s

clean:
	rm -rf out/
