# TheChernoCPP

📺[视频链接](https://www.youtube.com/playlist?list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb)

## 23. Enum

- just integer
- a set of values
- a way to a name to a value

⭐[EnumPratice](./code/Log.cpp)

```cpp
int A = 0;
int B = 1;
int C = 2;  // are not group

int main()
{
    int value = B;

    if(value == B){
        // Do something here    
    }
}
```

```cpp
// by defult the first one will be 0,
// increment one by one
enum Example : unsigned char{
    A, B, C
};

int main()
{
    Example value = B;

    if(value == B){
        // Do something here    
    }
}
```

## 67. Union

```cpp
```