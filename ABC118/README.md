# ABC118

[トップ](https://atcoder.jp/contests/abc118)

- [B +/- A](https://atcoder.jp/contests/abc118/tasks/abc118_a)
- [Foods Loved by Everyone](https://atcoder.jp/contests/abc118/tasks/abc118_b)
- [Monsters Battle Royale](https://atcoder.jp/contests/abc118/tasks/abc118_c)
- [Match Matching](https://atcoder.jp/contests/abc118/tasks/abc118_d)

[解説](https://img.atcoder.jp/abc118/editorial.pdf)

## B +/- A

A が B の約数であるということは、B が A で割り切れることなので、B を A で割った余りが 0 であるかを調べれば判定できる。  
よって `B % A == 0` ならば `A + B` そうでなければ `B - A`

## Foods Loved by Everyone

各食べ物 i についてそれを好きだと答えた人数をカウントし、配列 c で管理する。  
`c[i] == N` を満たす i をカウントした数が答え

## Monsters Battle Royale

すべての最大公約数を取ればいいらしい。（まだ理解していない）  

## Match Matching

DP で解くらしい。知らない。
