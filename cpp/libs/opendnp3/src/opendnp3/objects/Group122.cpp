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
// Copyright 2013 Automatak LLC
// 
// Automatak LLC (www.automatak.com) licenses this file
// to you under the the Apache License Version 2.0 (the "License"):
// 
// http://www.apache.org/licenses/LICENSE-2.0.html
//

#include "Group122.h"

#include <openpal/serialization/Format.h>
#include <openpal/serialization/Parse.h>

using namespace openpal;

namespace opendnp3 {

bool Group122Var1::Read(ReadBufferView& buffer, Group122Var1& output)
{
  return Parse::Many(buffer, output.flags, output.assocId, output.value);
}

bool Group122Var1::Write(const Group122Var1& arg, openpal::WriteBufferView& buffer)
{
  return Format::Many(buffer, arg.flags, arg.assocId, arg.value);
}

bool Group122Var2::Read(ReadBufferView& buffer, Group122Var2& output)
{
  return Parse::Many(buffer, output.flags, output.assocId, output.value, output.time);
}

bool Group122Var2::Write(const Group122Var2& arg, openpal::WriteBufferView& buffer)
{
  return Format::Many(buffer, arg.flags, arg.assocId, arg.value, arg.time);
}


}