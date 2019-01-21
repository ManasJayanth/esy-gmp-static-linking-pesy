
# pesy-c-stubs


[![CircleCI](https://circleci.com/gh/yourgithubhandle/pesy-c-stubs/tree/master.svg?style=svg)](https://circleci.com/gh/yourgithubhandle/pesy-c-stubs/tree/master)


**Contains the following libraries and executables:**

```
pesy-c-stubs@0.0.0
│
├─test/
│   name:    TestPesyCStubs.exe
│   main:    TestPesyCStubs
│   require: pesy-c-stubs.lib
│
├─library/
│   library name: pesy-c-stubs.lib
│   namespace:    PesyCStubs
│   require:
│
└─executable/
    name:    PesyCStubsApp.exe
    main:    PesyCStubsApp
    require: pesy-c-stubs.lib
```

## Developing:

```
npm install -g esy
git clone <this-repo>
esy install
esy build
```

## Running Binary:

After building the project, you can run the main binary that is produced.

```
esy x PesyCStubsApp.exe 
```

## Running Tests:

```
# Runs the "test" command in `package.json`.
esy test
```
