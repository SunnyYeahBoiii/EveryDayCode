## - N-th Fibonacci Number in O(1) : 
![](https://github.com/SunnyYeahBoiii/EveryDayCode/blob/main/Code%20c%E1%BB%A7a%20Sunny/Images/Fibonacci_Formula.png?raw=true)

- C++ Code:

```c++
    int n;
	cin >> n;
	double a = (1 + sqrt(5)) / 2 , b = (1 - sqrt(5)) / 2;
	double number = (pow(a , n) - (pow(b , n))) / sqrt(5);

	cout << number << endl;
```
