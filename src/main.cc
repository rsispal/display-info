#include <napi.h>

Napi::Object getMonitorInfo(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    return Napi::Object::New(env);
}

Napi::Object Init(Napi::Env env, Napi::Object exports)
{
    exports.Set(Napi::String::New(env, "getMonitorInfo"),
                Napi::Function::New(env, getMonitorInfo));
    return exports;
}

NODE_API_MODULE(displayInfo, Init)
