//
// MessagePack for C++ static resolution routine
//
// Copyright (C) 2014 KONDO Takatoshi
//
//    Licensed under the Apache License, Version 2.0 (the "License");
//    you may not use this file except in compliance with the License.
//    You may obtain a copy of the License at
//
//        http://www.apache.org/licenses/LICENSE-2.0
//
//    Unless required by applicable law or agreed to in writing, software
//    distributed under the License is distributed on an "AS IS" BASIS,
//    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//    See the License for the specific language governing permissions and
//    limitations under the License.
//
#ifndef MSGPACK_TYPE_UNORDERED_SET_FWD_HPP
#define MSGPACK_TYPE_UNORDERED_SET_FWD_HPP

#include "msgpack/versioning.hpp"
#include "msgpack/object_fwd.hpp"

#include <unordered_set>

namespace msgpack {

MSGPACK_API_VERSION_NAMESPACE(v1) {

template <typename T>
msgpack::object const& operator>> (msgpack::object const& o, std::unordered_set<T>& v);

template <typename Stream, typename T>
msgpack::packer<Stream>& operator<< (msgpack::packer<Stream>& o, const std::unordered_set<T>& v);

template <typename T>
void operator<< (msgpack::object::with_zone& o, const std::unordered_set<T>& v);

template <typename T>
msgpack::object const& operator>> (msgpack::object const& o, std::unordered_multiset<T>& v);

template <typename Stream, typename T>
msgpack::packer<Stream>& operator<< (msgpack::packer<Stream>& o, const std::unordered_multiset<T>& v);

template <typename T>
void operator<< (msgpack::object::with_zone& o, const std::unordered_multiset<T>& v);

}  // MSGPACK_API_VERSION_NAMESPACE(v1)

}  // namespace msgpack

#endif // MSGPACK_TYPE_UNORDERED_SET_FWD_HPP
