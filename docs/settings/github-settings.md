# Github settings

## Github 계정 Local 등록 여부 확인

```bash
$ git config --list
```

## Github 계정 Local 등록
```bash
$ git config --global user.name "Your Name"
$ git config --global user.email "
```

## 해당 폴더에서만 Github 계정 사용
```bash
$ git config user.name "Your Name"
$ git config user.email "Your Email"
```

## Github 계정 Local 삭제
```bash
$ git config --global --unset user.name
$ git config --global --unset user.email
```

## Github 레포지토리 연결 해제
```bash
$ git remote rm origin
```
