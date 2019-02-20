# ABC003

[トップ](https://atcoder.jp/contests/abc003)

- [AtCoder社の給料](https://atcoder.jp/contests/abc003/tasks/abc003_1)
- [AtCoderトランプ](https://atcoder.jp/contests/abc003/tasks/abc003_2)
- [AtCoderプログラミング講座](https://atcoder.jp/contests/abc003/tasks/abc003_3)
- [AtCoder社の冬](https://atcoder.jp/contests/abc003/tasks/abc003_4)

[解説](https://www.slideshare.net/chokudai/abc003)

## AtCoder社の給料

`(n * (n + 1) * 10000 / (2 * n))`で一発  
期待値の計算

## AtCoderトランプ

比較して同じなら`continue`  
`@`があったら、相手が`@`か`atcoder`か判定して、違ったら「負け」  
そもそも`@`じゃなければ「負け」

## AtCoderプログラミング講座

ソートして、平均を取っていく。

## AtCoder社の冬

まだ、101点は取ってない。  
まず囲みの位置は、`(r - x + 1) * (c - y + 1)`通りある。  
そして囲みの中のデスクとサーバーラックの配置は、`(d+l)C(l)`通りある。  
コンビネーションはパスカルの三角形を用いて再帰的に求められる。  
これを用いれば、積ではなく和で計算できる。（余りが簡単に求められる）  
