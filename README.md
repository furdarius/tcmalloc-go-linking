Experiment with tcmalloc and Go binary linking using Bazel

```sh
docker build -t bazel-dev:2104 .
docker run --rm --net=host -it -v $(pwd):/app -w /app bazel-dev:2104
bazel build --cxxopt=-std=c++17 app
```
