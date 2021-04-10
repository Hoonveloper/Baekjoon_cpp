# Map & Unordered Map

C++에는 여러 맵이 존재하지만 이 두 맵이 가장 유명하다고 한다 .

Map은 balanced map 으로 불리고  red-black 트리로 구현되었다.

unordered map은 hash table로 구현되었다.즉 해시맵인것이고

사용방법은 완전 동일하다.

데이터가 적으면 똑같지만

해시 테이블은 데이터가 많아지면 비둘기집의 원리에 의해 해쉬충돌이 일어나 성능이 떨어진다.



​	 비둘기집의 원리 : *n*+1마리의 비둘기와 n*n*개의 비둘기집이 있다고 가정할 때 모든 비둘기집에 비둘기가 빠짐없이 들어가야 하고, 한 집당 한 마리씩만 존재한다고 가정하면, 비둘기집에 최대 n*n*마리의 비둘기만이 존재할 수 있게 되는데, 비둘기의 숫자는 n+1*n*+1마리이기에 어느 집에도 들어가지 못한 비둘기 한 마리가 남을 수밖에 없게 되므로 전제조건들 사이에 [모순](https://namu.wiki/w/모순)이 발생하게 된다.



따라서 데이터가 적으면 unorderd, 많으면 map이 유리하다고만 생각하자. 



## Map

맵은 인덱스를 문자열로 받는 배열이라고 생각하자.

일반 배열은 arr[1] 이런식으로 번호를 받지만

맵은 m["jihoon"] 이런식으로 문자열로 받는 것이다.

어디서 많이 본 것 같은데

엣날에 파이썬을 공부하다가 배운 dictionary와 유사하다. 

```c++
#include <map>
#include <iostream>

using namespace std;

int main() {
    map<string, int> m;

    /*insert*/cout<<"**********insert**********"<<endl;
    /*1*/m.insert(pair<string, int>("marin", 40));
    /*2*/m.insert(make_pair("scv", 60));
    /*3*/m["firebat"] = 50;

    /*iterate*/cout<<"**********iterate**********"<<endl;
    /*1*/map<string, int>::iterator it; // auto it = m.begin()도 가능
    for (it = m.begin(); it != m.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    /*2*/for (pair<string, int> atom : m) {
        cout << atom.first << " " << atom.second << endl;
    }

    /*find*/cout<<"**********find**********"<<endl;
    /*1*/cout<<m.find("scv")->first<<" "<<m.find("scv")->second<<endl;
    /*2*/cout<<"scv"<<" "<<m["scv"]<<endl;


    /*erase*/cout<<"**********erase**********"<<endl;
    /*1*/m.erase("scv");
    /*2*/m.erase(m.find("marin"));
    for (pair<string, int> atom : m) {
        cout << atom.first << " " << atom.second << endl;
    }

    /*size*/cout<<"**********size**********"<<endl;
    cout<<m.size()<<endl;

    /*empty*/cout<<"**********empty**********"<<endl;
    cout<<m.empty()<<endl;

    return 0;
}
```

출처=https://kamang-it.tistory.com/entry/mapunorderedmapC%EC%97%90%EC%84%9C-map%EB%94%95%EC%85%94%EB%84%88%EB%A6%ACdictionary-%EC%97%B0%EA%B4%80%EB%B0%B0%EC%97%B4associate-array%ED%95%B4%EC%8B%9C%EB%A7%B5hash-map%EC%82%AC%EC%9A%A9%ED%95%98%EA%B8%B0map%EA%B3%BC-unorderedmap-%EA%B7%B8%EB%A6%AC%EA%B3%A0-%EC%B0%A8%EC%9D%B4%EC%A0%90