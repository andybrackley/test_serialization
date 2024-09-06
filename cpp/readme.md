# Tutorials

https://www.youtube.com/watch?v=kswbIXYBCpo

## Links

https://conan.io/center/recipes?value=mongo

## Terminal

### Build

$ conan profile detect
$ conan install . --output-folder=build --build=missing
$ cmake --list-presets

$ cmake --preset conan-default
$ cmake --build --preset conan-release

### Debug

$ conan install . --output-folder=build --build=missing --settings=build_type=Debug

$ cmake --build --preset conan-debug

### Clean

$ rm -rf build

### Libs

[capnproto](https://conan.io/center/recipes/capnproto?version=1.0.2)

