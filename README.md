# 没想好名字的Lang
---

因为不想实现return所以他是个类似scala的函数式语言，于是要实现Func类型变量...

## BNF
理论上这里要写BNF但是...一言难尽

## 语法规则
数据类型暂时只有int和string,语句之间要么换行要么分号和golang一样。数组之后再加。  
**Assginment**  
```
foo = 1
bar = "hello world"
foo = 1; bar = 2
```

**while**  
```
sum = 0
while i < 100 {
    sum = sum + i
    i = i + 1
}
sum
```

**if**  
```
foo = 1
bar = 2
if foo = 1 {
    bar = bar + 1
} else {
    bar = 0
}
bar
```
**Function**  
若有多个参数用逗号隔开
```
def fact(n) {
    f = 1
    while n > 0 {
        f = f * n
        n = n - 1
    }
    f
}
n = fact(9)
```