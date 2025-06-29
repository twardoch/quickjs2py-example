from distutils.core import Extension, setup

import pybindgen

mod = pybindgen.Module("hellojs")
mod.add_include('"hello.h"')
mod.add_function(
    "main",
    pybindgen.retval("int"),
    [pybindgen.param("int", "argc"), pybindgen.param("char", "argv")],
)
# int main(int argc, char **argv)
with open("hellojs.c", "w") as f:
    mod.generate(f)


module1 = Extension("demo", sources=["demo.c"])

setup(
    name="PackageName",
    version="1.0",
    description="This is a demo package",
    ext_modules=[module1],
)
