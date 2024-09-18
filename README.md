# icu-binaries [![build](https://github.com/gavv/icu-binaries/actions/workflows/build.yml/badge.svg)](https://github.com/gavv/icu-binaries/actions/workflows/build.yml)

Prebuilt [ICU](https://github.com/unicode-org/icu) binaries for Windows (x64 MSVC) and macOS (universal binaries).

Binaries are built and published automatically using Github Actions. You can either use binaries from this repo, or fork the repo and configure your own build, so that you can completely trust the build results.

Branch    | Description
--------- | ------
[`main`](https://github.com/gavv/icu-binaries) | build script and github actions config
[`macos`](https://github.com/gavv/icu-binaries/tree/macos) | macOS binaries (suitable both for Intel and M1)
[`VS2019_MD`](https://github.com/gavv/icu-binaries/tree/VS2019_MD) | Windows binaries (Visual Studio 2019, MD runtime)
[`VS2019_MDd`](https://github.com/gavv/icu-binaries/tree/VS2019_MDd) | Windows binaries (Visual Studio 2019, MDd runtime)

The list of available versions is [available here](https://github.com/gavv/icu-binaries/tags).

The library is built using [MSYS2](https://www.msys2.org/) with MSVC toolchain from Visual Studio 2019. There are separate builds for `/MD` and `/MDd` runtime, published as different branches and tags.
