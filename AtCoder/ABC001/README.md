# ABC001

[トップ](https://atcoder.jp/contests/abc001)

- [積雪深差](https://atcoder.jp/contests/abc001/tasks/abc001_a)
- [視程の通報](https://atcoder.jp/contests/abc001/tasks/abc001_b)
- [風力観測](https://atcoder.jp/contests/abc001/tasks/abc001_c)
- [感雨時刻の整理](https://atcoder.jp/contests/abc001/tasks/abc001_d)

[解説](https://www.slideshare.net/chokudai/abc001)

## 積雪深差

文字通り`H1 - H2`を計算する。

## 視程の通報

`if - else if`で地道に場合分けして解く。

## 風力観測

配列を使う。  
風向は`(deg * 10 + 1125) / 2250 % 16`で一発で求まる。  
風速を分速から秒速に変換するのは、少し難しい。  
`floor((double)dis / 6.0 + 0.5) / 10.0`なら通るが、  
`floor(((double)dis / 60.0 + 0.05) * 10.0) / 10.0`だと通らない。

## 感雨時刻の整理

まだやってない
