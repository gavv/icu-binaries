GENCCODE_ASSEMBLY_TYPE=-a gcc-darwin
SO=dylib
SOBJ=dylib
A=a
LIBPREFIX=lib
LIB_EXT_ORDER=.75.1.dylib
COMPILE=cc -DU_ALL_IMPLEMENTATION -DU_ATTRIBUTE_DEPRECATED=   -DU_HAVE_STRTOD_L=1 -DU_HAVE_XLOCALE_H=1  -std=c11 -fPIC -O2 -mmacosx-version-min=10.15 -arch x86_64 -arch arm64   -fno-common -c
LIBFLAGS=-I/usr/local/include  -dynamic
GENLIB=cc -dynamiclib -dynamic -std=c11 -fPIC -O2 -mmacosx-version-min=10.15 -arch x86_64 -arch arm64   -lc++ -mmacosx-version-min=10.15 -arch x86_64 -arch arm64  
LDICUDTFLAGS=
LD_SONAME=-Wl,-compatibility_version -Wl,75 -Wl,-current_version -Wl,75.1 -install_name  
RPATH_FLAGS=
BIR_LDFLAGS=
AR=ar
ARFLAGS=r -c
RANLIB=ranlib
INSTALL_CMD=/usr/bin/install -c
