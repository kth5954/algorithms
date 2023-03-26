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

### T개의 getline을 받는 경우

여러 개의 `getline`을 받을 때는 `bufferflush`를 해주어야 한다. `bufferflush`는 `getline`을 한 번 더 받아서 버퍼를 비워주는 역할을 한다.
버퍼란 입력을 받을 때, 입력을 받는 공간을 말한다. `getline`을 한 번 받으면 버퍼에 개행문자가 남아있기 때문에, `getline`을 한 번 더 받아서 버퍼를 비워주어야 한다.

```cpp
int T;
string bufferflush;
cin >> T;
getline(cin, bufferflush);
```
