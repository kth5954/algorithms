# cpp 파일 이름을 입력받아서 실행파일을 만들고 실행하는 스크립트
# 예시: ./run.sh 1000.cpp

# cpp 파일 이름을 입력받는다.
cpp_file=$1

# cpp 파일 이름에서 확장자를 제거한다.
file_name=${cpp_file%.*}

# cpp 파일을 컴파일한다.
g++ -o $file_name $cpp_file

# 컴파일된 실행파일을 실행한다.
./$file_name

# 실행 권한이 없다는 오류가 발생 시(permission denied: ./run.sh: Permission denied), chmod 명령어로 실행 권한을 부여해준다.
chmod +x run.sh