# Dynamically link esy-gmp

otool -L `esy x which PesyCStubsApp.exe` doesn't show libgmp as dyn linked