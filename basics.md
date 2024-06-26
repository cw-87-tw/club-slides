# C++ 基礎語法

---

## 如何開始

1. 開檔案 (副檔名 .cpp)
2. 標頭檔 & std
```cpp
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
```

--

3. main函式
```cpp
int main() {
    //your code
    return 0;
}
```
4. 最後要加分號;

---

## 大綱

* 變數

* 輸入輸出

* 運算

---

## 變數

--

變數是什麼?

* 把值存下來
* 可以更改、使用

--

變數型態：

* **int, long long**： integer, 整數\
1, 1000...
* **float, double**： 小數\
2.5, 2.00...
* **char**： character, 字元\
'a', '#'...
* **string**： 字串\
"hello", "a"...
* **bool**： boolean, 布林值\
0/1

--

變數命名：
* 只能用英文字母、_、數字(不放開頭)
* 命名要有意義
* 不能重複、不能用到c++的關鍵字

變數宣告：
* 變數型態 變數名稱;
* 宣告後才能使用

--

```cpp
#include <bits/stdc++.h>
using namespace std;

//全域變數 global variables
int n;

int main() {
    //區域變數 local variables
    int n;
    return 0;
}
```

--

變數賦值： \
\
``n = 0;`` --> 把0指定給n

* =不是相等的意思，是把變數設成某個值
* 如果超出變數型態能存的範圍 => 溢位overflow

--

* 可以在定義時就給予變數一個最初的值
```cpp
#include <bits/stdc++.h>
using namespace std;

//全域變數 global variables
int n = 1;

int main() {
    //區域變數 local variables
    int n = 2;
    
    //如果在這裡使用n

    return 0;
}
```
這時在main()當中使用n，會是哪一個n呢?

---

## 輸入、輸出
cin, cout\
(std::cin, std::cout)

--

* 輸入：需要由使用者(題目)給我們資訊時
* 輸出：需要將資訊顯示到螢幕上時

--

cin >> n;\
\
cout << 2;\
cout << n;\
\
要注意方向!!

--

試試看：寫一個程式，當我們給他一個數字後，他能夠把這個數字顯示回螢幕上

--

同時輸入很多個變數?
* 可以連續寫 ``cin >> a >> b;``
* 程式怎麼分隔這些變數? 空格、換行等

同時輸出很多個變數?
* 連續寫 ``cout << c << d;``
* 中間可以用：空格```' '```、換行```'\n'```隔開

--

試試看：寫一個程式，當我們輸入"某數 某數"後，他能夠把這兩個數字以"(某數, 某數)"的樣子輸出

--

都說學程式的第一堂課就是Hello world!\
我們來實際寫一些Hello world題目吧\
[ZJ d483](https://zerojudge.tw/ShowProblem?problemid=d483)\
[ZJ a001](https://zerojudge.tw/ShowProblem?problemid=a001)

---

## 運算

--

* **\+**：加
* **-**：減
* **\***：乘
* **/**：整數除法 (無條件捨去)
* **%**：取餘數

--

* 想要除出小數點 --> 其中一個數字用小數型態
* 程式會自動先乘除後加減

--

練習看看：\
[ZJ a002](https://zerojudge.tw/ShowProblem?problemid=a002)\
[Sprout 芽芽停車場](https://neoj.sprout.tw/problem/805/)

---

## 變數運算、改值

--

```cpp
a = b + 1;
```
把a的值指定為"b的值+1"

```cpp
a = a + 1;
```
把a的值指定為"a的值+1"\
=>意思就是把a的值增加一

--

簡寫
```cpp
a += 1;
a *= 2;
a /= 5;
a %= 3;
```
```cpp
a++;
a--;
```
```cpp
++a;
--a;
```

--

注意執行的順序

例如：想要將x和y的值對調?

```cpp
int x = 1, y = 2;
x = y;
y = x;
```
這樣做會怎樣?

--

```cpp
int x = 1, y = 2;
x = y;  //現在x是2, y是2
y = x;  //現在x是2, y是2
```

正確做法：
```cpp
int x = 1, y = 2, tmp;
tmp = x;    //先把x原本的值暫存起來
x = y;
y = tmp;
```

---

## if, else

--

if : 如果\
else : 否則\
用來依照不同條件跟情形做不同的事情

--

```cpp
if (條件) {
    如果條件成立的話要做的事;
}
else {
    否則的話要做的事;
}
```
--

如果想要區分不只一種情況?\
=> 使用 else if

--

```cpp
if (條件1) {
    條件1成立要做的事;
}
else if (條件2) {
    條件1不成立且條件2成立要做的事;
}
else if (條件3) {
    條件1和2不成立且條件3成立要做的事;
}
else {
    所有條件都不成立的話要做的事;
}
```

--

比較：
```cpp
if (條件1) {
    條件1成立;
}
if (條件2) {
    條件2成立;
}
```

--

比較：
```cpp
if (條件1) {
    條件1成立;
}
if (條件2) {
    條件2成立;
}
else {
    條件2不成立;
}
```

--

### 條件的寫法：

* 是否相等 ==
* 是否不相等 !=
* 是否大於 >
* 是否小於 <
* 大於等於 >=
* 小於等於 <=

--

```cpp
if (a == b) {
    cout << a << '\n';
}
```
如果：條件 (a == b) 為 true\
=> 那麼輸出a的值

--

試試看：輸入兩個數字，輸出較大的那個。\
(一樣大就輸出任何一個)

--

條件不能連續寫!\
例如：沒有 a == b == c 這種寫法\
\
那要怎麼辦?

--

### 條件的合併

* 且 AND： &&
* 或 OR： ||

--

```cpp
if (a == b && b == c) {
    三個數都相等的話要做的事;
}
```

--

條件只有"成立"和"不成立"兩種狀態\
true 1 / false 0

(1 == 1) 代表的是 true 1\
(1 == 2) 代表的是 false 0

--

true：非零\
false：零

```cpp
if (1) {
    cout << "one\n";
}
if (0) {
    cout << "two\n";
}
if (-6) {
    cout << "three\n";
}
```

--

練習看看：

[Sprout 13號星期五](https://neoj.sprout.tw/problem/451/)\
[Sprout 三角形判斷](https://neoj.sprout.tw/problem/645/)\
[Sprout 季節判斷](https://neoj.sprout.tw/problem/208/)\
[ZJ a003](https://zerojudge.tw/ShowProblem?problemid=a003)\
[ZJ a004...會用到EOF, while](https://zerojudge.tw/ShowProblem?problemid=a004)\
[ZJ a005...會用到for或while](https://zerojudge.tw/ShowProblem?problemid=a005)\
[ZJ a006...會用到sqrt](https://zerojudge.tw/ShowProblem?problemid=a006)

---

## for 迴圈

---

## while 迴圈

--

基本語法

```cpp
while (/* condition */) {
    // do something
}

```

--

例子: 1 數到 100

```cpp
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 1;
    while (n <= 100) {
        cout << n << '\n';
        ++n;
    }
}
```

--

常用: 判斷數字位數

```cpp
int n, cnt = 0;
cin >> n;
while (n) {
    n /= 10;
    ++cnt;
}
```

--

常用: 多筆測資 (EOF 結束)
```cpp
while (cin >> n) {
    /* do something */
}
```
例題: [ZJ a004](https://zerojudge.tw/ShowProblem?problemid=a004)

--

生命週期 (大括號內部的只能在大括號內使用)
就跟前面講的 if 一樣

```cpp
	
#include <iostream>
using namespace std;
int main () {
    int cnt = 0;
    while (cnt < 5) {
        int i = 0;
        cnt++;
    }
    cout << i << '\n'; // error
}
```

--

例題: [3n + 1](https://neoj.sprout.tw/problem/801/)

--

練習題: 題單上的其他 while 題目

---

## 字串 string (C++ string)

--

字串就是很多個字元組成的\
"hello" = 'h' + 'e' + 'l' + 'l' + 'o'

--

怎麼表示字串中的各個字元?

程式的大概念：\
0-base --> 從0開始算

--

string s = "hello";

s[0]：'h'\
s[1]：'e'\
s[2]：'l'\
s[3]：'l'\
s[4]：'o'

--

### 輸入輸出

```cpp
string s;
cin >> s;
cout << s << '\n';
cout << s[0] << '\n'; // 輸出字串的最前面一項
```

--

輸入

```
Hello
```

輸出

```
Hello
H
```


--

### 其他常用操作
s.size(): 取得長度\
s.push_back(char): 在字串最後增加字元
s = s + s: 把 s 複製一份接到最後面

```cpp
string s;
cin >> s;
cout << s.size() << '\n';
s.push_back('!');
cout << s << '\n';
cout << s + "!!" << '\n';
```

--

輸入
```
Hello
```

輸出
```
5
Hello!
Hello!!!
```

--

### 其他常用操作
s.substr(startPos, length)
取得從 startPos(包含) 開始共 length 個字元所組成的字串

```cpp
string s = "hello";
cout << s.substr(1, 3);
```
輸出
```
ell
```
--

```cpp
string s;
cin >> s;
cout << s + "!";
```
輸入
```
Hello World
```

輸出
```
Hello World!
```
...嗎?

--

實際情況

輸入
```
Hello World
```

輸出
```
Hello!
```

為什麼 World 不見了?

--

因為預設 cin 只會讀到第一個空格或換行(不會讀入空格或換行)\
因此如果想要讀多個字可以這樣寫:
```cpp
string s, t;
cin >> s >> t;
cout << s + " " + t << '\n';
```

--

輸入
```
Hello World
```

輸出
```
Hello World
```

--

也可以使用 getline!

```cpp
string s;
getline(cin, s);
cout << s << '\n';
```

--

### ASCII Code

--

字串是如何被電腦儲存的?\
先把字串轉換成一個數字，才方便儲存\
而這個轉換又被稱作: ASCII Code

--

這些數字有什麼特別的嗎?
觀察一下以下對應關係

--

數字
![數字](ascii1.png)

--

大寫英文字母
![大寫英文字母](ascii2.png)

--

小寫英文字母
![小寫英文字母](ascii3.png)

--

相鄰的字母之間的 ASCII code 是連續的!

'a' + 1 == 'b'

--

知道這個可以幹嘛?
1. 字元加減
2. 大小寫轉換

--

例題: [凱薩加密](https://neoj.sprout.tw/problem/217/)

--

範例做法:\
先將字母做簡單對應('a' -> 0, 'b' -> 1 ...)\
把字元加 3，若字元大於 25 則減 26\
把字母從字元對應回字元輸出

--

參考程式碼

```cpp
#include<bits/stdc++.h>
using namespace std;

string s;

int main() {
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        int x = s[i] - 'a';
        x += 3;
        if (x > 25) x -= 26;
        cout << (char) (x + 'a'); // 若不加 (char) 的話會跑出數字!
    }
    cout << '\n'; // 最後記得要換行
}
```

--

剩下題目很多需要搭配陣列觀念才能解 
因為 string 本身就是一個陣列!