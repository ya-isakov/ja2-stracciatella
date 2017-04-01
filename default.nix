{
    nixpkgs ? import ./nix/nixpkgs.nix
}:
with import nixpkgs {}; stdenv.mkDerivation {
   name = "stracciatella";
   src = ./.;
   buildInputs = [ stdenv git cmake gcc rustc cargo SDL2 boost ];
}
