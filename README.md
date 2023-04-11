# Test and demonstration of lock_guard in multithreaded C++

lock_guard: when an object is created, it tries to get the mutex (by calling lock()), and when the object is destroyed, it automatically releases the mutex (by calling unlock())

- How checking code?
```
cd folder
git clone https://github.com/FloyzenCode/lock-guard-demo/
```
```
Run the code using Visual Studio or another environment
```
---
![image](https://user-images.githubusercontent.com/107361187/231245929-dfa004ea-3754-4168-9715-d57010d03878.png)
---
