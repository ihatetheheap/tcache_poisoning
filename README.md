# tcache_poisoning
Proof-of-concept displaying how you can abuse a UAF to poison the tcache, by overwriting the fd pointer, forcing malloc to return an arbitrary pointer/address.
