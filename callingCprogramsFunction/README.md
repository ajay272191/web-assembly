## Calling C function from JavaScript Code
When we want to call a custom function we need specify as a Exported function while compiling with emscripten, also when we will be doing so, we need to specify the main function too otherwise it will be eliminated as dead code Export it if you want main() to run.

### Reading String return from C function

When we call a `C function` let `_greetX()` then a pointer to that message/string is being returned, to read that `Memory location` it privide an inbuild function called `   ccall()   `.  

Command to Export function is as such:
### Compilation
```
emcc forLoop.c -s WASM=1 -s EXPORTED_FUNCTIONS='['_wCount', '_main', '_greetX']'  -o forLoop.js
```
It will export wcount and main function specified in our c code and a `  wasm  ` file which will have all our logic and a `   js   ` file which is a glue code help to load wasm to browser, here we need to include only js file to our `   HTML  ` file.

</br>


### Serving files

To start a inbuilt server provided by Emscripten itself used Command:
```
emrun --no_browser --port 8080 index.html
```
