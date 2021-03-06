### Error before wasm get loaded and initialized

When we trying to access a function in wasm we might get an error like such:
![function call error](./error.png)

### Solution
When we use glue code to load `WASM modules` generated by Emscripten then we have to wait until it get loaded and initialized by JavaScript glue code, so if we try to access the function before its initialization then it will through an error as shown above. Solution to this is we have to use `  Module's  ` wasm utility `onRuntimeInitialized`, which will get executed after `wasm module` get loaded and ready to be used. and the result will look like this:

![Sol](./soln.png)
