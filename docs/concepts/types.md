# Types

## C++에서 제공하는 타입

| 타입 | 크기 | 범위 |
| :--- | :--- | :--- |
| `void` | 0 byte | 없음 |
| `bool` | 1 byte | `true` 또는 `false` |
| `char` | 1 byte | `-128` ~ `127` |
| `short` | 2 byte | `-32,768` ~ `32,767` |
| `int` | 4 byte | `-2,147,483,648` ~ `2,147,483,647` |
| `long` | 4 byte | `-2,147,483,648` ~ `2,147,483,647` |
| `long long` | 8 byte | `-9,223,372,036,854,775,808` ~ `9,223,372,036,854,775,807` |
| `float` | 4 byte | `1.2E-38` ~ `3.4E+38` |
| `double` | 8 byte | `2.3E-308` ~ `1.7E+308` |
| `long double` | 16 byte | `3.4E-4932` ~ `1.1E+4932` |
| `unsigned char` | 1 byte | `0` ~ `255` |
| `unsigned short` | 2 byte | `0` ~ `65,535` |
| `unsigned int` | 4 byte | `0` ~ `4,294,967,295` |
| `unsigned long` | 4 byte | `0` ~ `4,294,967,295` |
| `unsigned long long` | 8 byte | `0` ~ `18,446,744,073,709,551,615` |

## 자주 사용하는 타입

```
void, char, string, bool, int, long long, double, unsigned long long
```

### 1. `void`

`void`는 아무것도 없는 타입이다. `void`는 함수의 반환 타입으로 사용할 수 있다. `void`는 함수의 반환 타입으로 사용할 때, 함수가 반환하는 값이 없음을 의미한다.

### 2. `char`

`char`는 문자를 저장하는 타입이다. `char`는 `''`로 감싸서 사용한다.(큰 따옴표는 안 된다.)

### 3. `string`

`string`은 문자열을 저장하는 타입이다. `string`은 `""`로 감싸서 사용한다.(작은 따옴표는 안 된다.)

