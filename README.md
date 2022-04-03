# 42_Old-CPP_Module_01

## Coding rules
- C++11以降の機能禁止
- using namespace禁止
- friend禁止

## Exercises
### ex00
Zombieクラス作成。

Zombieクラスのルール
- private name
- announce(void)というメンバー関数により、`<name> BraiiiiiiinnnzzzZ…`と出力する
- destrucorへデバッグメッセージを追加

### ex01
Zombiを複数作る関数を作成。

関数のルール
- Zombie*	zombieHorde(int N, std::string name)

### ex02
ポインタと参照を使った文字列表示。

### ex03
武器を持ち攻撃を行うHumanAとHumanBクラス、Weaponクラスの作成。

### ex04
ファイル名と2つの文字列を受け取るreplaceというプログラムの作成。

s1が出現するたびにs2に置換し、FILENAME.replaceに書き込む。

### ex05
メンバー関数へのポインタを使った演習。

### ex06
ex05のログレベルを指定できるプログラム作成。
