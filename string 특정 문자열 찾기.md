## string 특정 문자열 찾기

```

#include <iostream>
#include <string>
using namespace std;
int main() {
  string s;
  cin>>s;
  if(s.find('+')==string::npos){
    printf("npos당첨 \n");
  }
  else printf("not npos\n");
}
```

<string> 헤더 안에 있는 find() method.

string에 char 혹은 str 있으면  해당 idx를 반환하고

없으면 npos값 반환 .

npos값 비교하고 싶으면 

```c++
s.find('+')==string::npos
```

## string 특정 문자열 기준으로 자르기

<sstream> 헤더 사용

```c++
#include <sstream>
#include <vector>
int main() {
	string s="i love you";
	string stringbuffer; //자른 문자열 임시 보관
	istringstream ss(s);
	vector<string> v;
	while(getline(ss,stringbuffer,' ')){
		v.push_back(stringbuffer) // i , love, you
	}

}
```





## 추가

https://velog.io/@sangbooom/%EB%82%B4%EA%B0%80-%EC%93%B0%EB%A0%A4%EA%B3%A0-%EC%A0%95%EB%A6%AC%ED%95%B4%EB%86%93%EC%9D%80-%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98-%EA%BF%80%ED%8C%81

c++로 알고리즘을 풀 때 꿀팁들을 모아놓은 블로그다.