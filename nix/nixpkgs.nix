with import <nixpkgs> {};

fetchFromGitHub {
  owner = "NixOS";
  repo = "nixpkgs-channels";
  rev = "a41668f4412b75b65d65a46d352552546488c3c7";
  sha256 = "1b5h4pr7h7k9761niadnsi5z5ggn72r29qqhdrpghsca86nsac4c";
}
