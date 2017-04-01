with import <nixpkgs> {}; stdenv.mkDerivation {
   name = "stracciatella";
   buildInputs = [ stdenv git cmake gcc rustc cargo SDL2 boost ];
}
