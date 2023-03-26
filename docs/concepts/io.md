# 입력과 출력

C++의 대표적인 입력 관련 함수는 다음과 같다.

* `cin` : 표준 입력 스트림, 개행문자를 만날 때까지 입력을 받는다.
* `scanf` : C의 `scanf` 함수
* `getline` : 한 줄을 읽는다.

## `cin`

`cin`은 표준 입력 스트림으로, `>>` 연산자를 통해 입력을 받는다. `>>` 연산자는 공백문자를 만날 때까지 입력을 받는다. 

```cpp
int a, b;
cin >> a >> b;
```

## `scanf`

`scanf`는 C의 `scanf` 함수와 동일하다. `scanf`는 `&` 연산자를 통해 입력을 받는다.

```cpp
int a, b;
scanf("%d %d", &a, &b);
```

### `scanf`로 받을 수 있는 타입 

| 타입 | 형식 문자 |
| :--- | :--- |
| `int` | `%d` |
| `long long` | `%lld` |
| `char` | `%c` |
| `string` | `%s` |
| `float` | `%f` |
| `double` | `%lf` |




## `getline`

`getline`은 한 줄을 읽는다. `getline`은 `>>` 연산자와 달리 개행문자를 만날 때까지 입력을 받는다.

```cpp
string s;
getline(cin, s);
```



