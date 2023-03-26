# mac에서 gcc 및 bits/stdc++.h 사용하기

## gcc 설치

```bash
$ brew install gcc
```

## stdc++.h 추가

### 1. 주소에 있는 text를 복사

- 링크 주소: https://raw.githubusercontent.com/wnghdcjfe/wnghdcjfe.github.io/master/bits/stdc++.h

### 2. /usr/local/include에 bits/stdc++.h 생성

```bash
$ cd /usr/local/include
$ sudo touch bits/stdc++.h
```

### 3. 생성한 bits/stdc++.h에 복사한 text 붙여넣기

```bash
$ sudo vim bits/stdc++.h
```
