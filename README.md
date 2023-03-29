# conan-behaviortreecpp

## Build and Test

- You should have conan and Xcode/Visual Studio C++ SDK to build and test the package

To create the package using provided version in local cache and test it:

```bash
conan create . -s build_type=Debug -s compiler.cppstd=17 --build missing --version 4.1.0

# for conan 1.x, the syntax
conan create . 4.0.1@ -s build_type=Debug -s compiler.cppstd=17 --build missing 
```

### Adding a new version

You can **add a version** into the package and test it by following instructions above. Then, `conandata.yml` file should be changed regarding the new version.


1. Add the version under sources. To do that you should provide a URL and its sha256 cheksum. To get the checksum, please download target file and then:
   ```bash
   # MacOS/Linux
   sha256sum BehaviorTree.CPP-x.x.x.tar.gz
   
   # Windows
   Get-fileHash .\BehaviorTree.CPP-x.x.x.tar.gz
   ```
2. Create patches if needed and add them under `patches` key in `conandata.yml`
3. To make the version compilable by `conan-center-io` ci, add the version into `config.yml` in the recipe.