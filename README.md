Library ▸ I/O
=============

Addressing, networking, database connectors.

[![Build Status](https://travis-ci.com/open-space-collective/library-io.svg?branch=master)](https://travis-ci.com/open-space-collective/library-io)
[![Code Coverage](https://codecov.io/gh/open-space-collective/library-io/branch/master/graph/badge.svg)](https://codecov.io/gh/open-space-collective/library-io)
[![Documentation](https://media.readthedocs.org/static/projects/badges/passing-flat.svg)](https://open-space-collective.github.io/library-io)
[![GitHub version](https://badge.fury.io/gh/open-space-collective%2Flibrary-io.svg)](https://badge.fury.io/gh/open-space-collective%2Flibrary-io)
[![PyPI version](https://badge.fury.io/py/LibraryIOPy.svg)](https://badge.fury.io/py/LibraryIOPy)
[![License](https://img.shields.io/badge/License-Apache%202.0-blue.svg)](https://opensource.org/licenses/Apache-2.0)

## Warning

Library **name** is yet to be defined.

Please check the following projects:

- [Naming Project](https://github.com/orgs/open-space-collective/projects/1)

*⚠ This library is still under heavy development. Do not use!*

## Structure

The **IO** library exhibits the following structure:

```txt
├── IP
│   ├── Address
│   └── TCP
│       ├── Client
│       ├── Server
│       └── HTTP
│           ├── Client
│           └── Server
└── URL
```

## Documentation

The documentation can be found here:

- [C++](https://open-space-collective.github.io/library-io)
- [Python](./bindings/python/docs)

## Tutorials

Various tutorials are available here:

- [C++](./tutorials/cpp)
- [Python](./tutorials/python)

## Setup

### Development

Using [Docker](https://www.docker.com) is recommended, as the development tools and dependencies setup is described in the provided [Dockerfile](./tools/development/docker/Dockerfile).

Instructions to install Docker can be found [here](https://docs.docker.com/install/).

Start the development environment:

```bash
./tools/development/start.sh
```

This will also build the `openspacecollective/library-io:latest` Docker image, if not already.

If installing Docker is not an option, please manually install the development tools (GCC, CMake) and the dependencies.
The procedure should be similar to the one described in the [Dockerfile](./tools/development/docker/Dockerfile).

### Build

From the development environment:

```bash
./build.sh
```

Manually:

```bash
mkdir -p build
cd build
cmake ..
make
```

### Test

From the development environment:

```bash
./test.sh
```

Manually:

```bash
./bin/library-io.test
```

## Dependencies

The **IO** library internally uses the following dependencies:

| Name                | Version | License                | Link                                                                                                   |
|---------------------|---------|------------------------|--------------------------------------------------------------------------------------------------------|
| Boost               | 1.67.0  | BSL-1.0                | [boost.org](https://www.boost.org)                                                                     |
| C++ Network Library | 0.13.0  | BSL-1.0                | [cpp-netlib.org](https://cpp-netlib.org)                                                               |
| Pistache            | master  | Apache License 2.0     | [pistache.io](http://pistache.io)                                                                      |
| Core                | master  | Apache License 2.0     | [github.com/open-space-collective/library-core](https://github.com/open-space-collective/library-core) |

## Contribution

Contributions are more than welcome!

Please read our [contributing guide](CONTRIBUTING.md) to learn about our development process, how to propose fixes and improvements, and how to build and test the code.

## Special Thanks

*To be completed...*

## License

Apache License 2.0
