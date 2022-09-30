#rm -r framework_build
cmake -D CMAKE_INSTALL_PREFIX="../template_install" \
      -D CMAKE_BUILD_TYPE=Release                       \
      -D SINGULAR_HOME=/scratch/singular-gpispace/Singular420      \
      -B template_build                                \
      -S .
cmake --build template_build --target install -j $(nproc)


