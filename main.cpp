#include <random>
#include <iostream>

// cppで書くのほとんど初めてなので、後でキモかったら直してね。
// とりま勉強がてら
int main()
{
    std::random_device rd;                           // 真乱数。ハードウェアのノイズを使ってるらしい
    std::mt19937 mt(rd());                           // 疑似乱数のシードを真乱数にしてるっぽい
    std::uniform_int_distribution<int> dist(0, 300); // 0~300の範囲指定。あんまし分かってないので調べたい
    for (;;)
        std::cout << dist(mt) << std::endl;
}