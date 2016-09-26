//
//  _   _         ______    _ _ _   _             _ _ _
// | \ | |       |  ____|  | (_) | (_)           | | | |
// |  \| | ___   | |__   __| |_| |_ _ _ __   __ _| | | |
// | . ` |/ _ \  |  __| / _` | | __| | '_ \ / _` | | | |
// | |\  | (_) | | |___| (_| | | |_| | | | | (_| |_|_|_|
// |_| \_|\___/  |______\__,_|_|\__|_|_| |_|\__, (_|_|_)
//                                           __/ |
//                                          |___/
// 
// This file is auto-generated. Do not edit manually
// 
// Copyright 2016 Automatak LLC
// 
// Automatak LLC (www.automatak.com) licenses this file
// to you under the the Apache License Version 2.0 (the "License"):
// 
// http://www.apache.org/licenses/LICENSE-2.0.html
//

#include "JNITaskInfo.h"

namespace jni
{
    bool TaskInfo::init(JNIEnv* env)
    {
        auto clazzTemp = env->FindClass("Lcom/automatak/dnp3/TaskInfo;");
        this->clazz = (jclass) env->NewGlobalRef(clazzTemp);
        env->DeleteLocalRef(clazzTemp);

        this->init3Constructor = env->GetMethodID(this->clazz, "<init>", "(Lcom/automatak/dnp3/enums/MasterTaskType;Lcom/automatak/dnp3/enums/TaskCompletion;Lcom/automatak/dnp3/TaskId;)V");
        if(!this->init3Constructor) return false;

        return true;
    }

    void TaskInfo::cleanup(JNIEnv* env)
    {
        env->DeleteGlobalRef(this->clazz);
    }

    jobject TaskInfo::init3(JNIEnv* env, jobject arg0, jobject arg1, jobject arg2)
    {
        return env->NewObject(this->clazz, this->init3Constructor, arg0, arg1, arg2);
    }
}
