/* File generated automatically by the QuickJS compiler. */

#include "quickjs-libc.h"

const uint32_t hello_size = 94;

const uint8_t hello[94] = {
    0x02,
    0x03,
    0x08,
    0x6d,
    0x61,
    0x69,
    0x6e,
    0x10,
    0x68,
    0x65,
    0x6c,
    0x6c,
    0x6f,
    0x2e,
    0x6a,
    0x73,
    0x16,
    0x48,
    0x65,
    0x6c,
    0x6c,
    0x6f,
    0x20,
    0x57,
    0x6f,
    0x72,
    0x6c,
    0x64,
    0x0e,
    0x00,
    0x06,
    0x00,
    0x9e,
    0x01,
    0x00,
    0x01,
    0x00,
    0x01,
    0x00,
    0x01,
    0x10,
    0x01,
    0xa0,
    0x01,
    0x00,
    0x00,
    0x00,
    0x3f,
    0xdf,
    0x00,
    0x00,
    0x00,
    0x40,
    0xc1,
    0x00,
    0x40,
    0xdf,
    0x00,
    0x00,
    0x00,
    0x00,
    0xc6,
    0x28,
    0xc0,
    0x03,
    0x01,
    0x02,
    0x1f,
    0x2d,
    0x0e,
    0x43,
    0x06,
    0x00,
    0xbe,
    0x03,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x06,
    0x00,
    0x04,
    0xe1,
    0x00,
    0x00,
    0x00,
    0x28,
    0xc0,
    0x03,
    0x01,
    0x01,
    0x03,
};

int main(int argc, char **argv)
{
    JSRuntime *rt;
    JSContext *ctx;
    rt = JS_NewRuntime();
    ctx = JS_NewContextRaw(rt);
    JS_SetModuleLoaderFunc(rt, NULL, js_module_loader, NULL);
    JS_AddIntrinsicBaseObjects(ctx);
    JS_AddIntrinsicDate(ctx);
    JS_AddIntrinsicEval(ctx);
    JS_AddIntrinsicStringNormalize(ctx);
    JS_AddIntrinsicRegExp(ctx);
    JS_AddIntrinsicJSON(ctx);
    JS_AddIntrinsicProxy(ctx);
    JS_AddIntrinsicMapSet(ctx);
    JS_AddIntrinsicTypedArrays(ctx);
    JS_AddIntrinsicPromise(ctx);
    JS_AddIntrinsicBigInt(ctx);
    js_std_add_helpers(ctx, argc, argv);
    js_std_eval_binary(ctx, hello, hello_size, 0);
    js_std_loop(ctx);
    JS_FreeContext(ctx);
    JS_FreeRuntime(rt);
    return 0;
}
#include "quickjs-libc.h"
int main(int argc, char **argv);
