# conan-behaviortreecpp

For Windows:
```
Get-fileHash .\BehaviorTree.CPP-3.8.3.tar.gz
```

For Linux/MacOS
```
sha256sum BehaviorTree.CPP-3.8.3.tar.gz
```

```
conan create . -s build_type=Debug -s compiler.cppstd=17 --build=missing --version=4.1.0
```

For conan<2.0.0
```
conan create . 4.0.1@ -s build_type=Debug -s compiler.cppstd=17 --build missing 
```