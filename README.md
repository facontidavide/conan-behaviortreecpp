# conan-behaviortreecpp

## Build and Test

- You should have conan and Xcode/Visual Studio C++ SDK to build and test the package


### Additional (Not ready)

You can get sha256 checksum:

Windows: using powershell:
```
Get-fileHash .\BehaviorTree.CPP-3.8.3.tar.gz
```

Linux/MacOS
```
sha256sum BehaviorTree.CPP-3.8.3.tar.gz
```

```
conan create . -s build_type=Debug -s compiler.cppstd=17 --build=missing --version=4.1.0
```

For **conan 1.x**
```
conan create . 4.0.1@ -s build_type=Debug -s compiler.cppstd=17 --build missing 
```