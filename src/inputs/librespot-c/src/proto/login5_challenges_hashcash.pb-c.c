/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: login5_challenges_hashcash.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "login5_challenges_hashcash.pb-c.h"
void   spotify__login5__v3__challenges__hashcash_challenge__init
                     (Spotify__Login5__V3__Challenges__HashcashChallenge         *message)
{
  static const Spotify__Login5__V3__Challenges__HashcashChallenge init_value = SPOTIFY__LOGIN5__V3__CHALLENGES__HASHCASH_CHALLENGE__INIT;
  *message = init_value;
}
size_t spotify__login5__v3__challenges__hashcash_challenge__get_packed_size
                     (const Spotify__Login5__V3__Challenges__HashcashChallenge *message)
{
  assert(message->base.descriptor == &spotify__login5__v3__challenges__hashcash_challenge__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t spotify__login5__v3__challenges__hashcash_challenge__pack
                     (const Spotify__Login5__V3__Challenges__HashcashChallenge *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &spotify__login5__v3__challenges__hashcash_challenge__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t spotify__login5__v3__challenges__hashcash_challenge__pack_to_buffer
                     (const Spotify__Login5__V3__Challenges__HashcashChallenge *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &spotify__login5__v3__challenges__hashcash_challenge__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Spotify__Login5__V3__Challenges__HashcashChallenge *
       spotify__login5__v3__challenges__hashcash_challenge__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Spotify__Login5__V3__Challenges__HashcashChallenge *)
     protobuf_c_message_unpack (&spotify__login5__v3__challenges__hashcash_challenge__descriptor,
                                allocator, len, data);
}
void   spotify__login5__v3__challenges__hashcash_challenge__free_unpacked
                     (Spotify__Login5__V3__Challenges__HashcashChallenge *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &spotify__login5__v3__challenges__hashcash_challenge__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   spotify__login5__v3__challenges__hashcash_solution__init
                     (Spotify__Login5__V3__Challenges__HashcashSolution         *message)
{
  static const Spotify__Login5__V3__Challenges__HashcashSolution init_value = SPOTIFY__LOGIN5__V3__CHALLENGES__HASHCASH_SOLUTION__INIT;
  *message = init_value;
}
size_t spotify__login5__v3__challenges__hashcash_solution__get_packed_size
                     (const Spotify__Login5__V3__Challenges__HashcashSolution *message)
{
  assert(message->base.descriptor == &spotify__login5__v3__challenges__hashcash_solution__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t spotify__login5__v3__challenges__hashcash_solution__pack
                     (const Spotify__Login5__V3__Challenges__HashcashSolution *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &spotify__login5__v3__challenges__hashcash_solution__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t spotify__login5__v3__challenges__hashcash_solution__pack_to_buffer
                     (const Spotify__Login5__V3__Challenges__HashcashSolution *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &spotify__login5__v3__challenges__hashcash_solution__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Spotify__Login5__V3__Challenges__HashcashSolution *
       spotify__login5__v3__challenges__hashcash_solution__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Spotify__Login5__V3__Challenges__HashcashSolution *)
     protobuf_c_message_unpack (&spotify__login5__v3__challenges__hashcash_solution__descriptor,
                                allocator, len, data);
}
void   spotify__login5__v3__challenges__hashcash_solution__free_unpacked
                     (Spotify__Login5__V3__Challenges__HashcashSolution *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &spotify__login5__v3__challenges__hashcash_solution__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor spotify__login5__v3__challenges__hashcash_challenge__field_descriptors[2] =
{
  {
    "prefix",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Spotify__Login5__V3__Challenges__HashcashChallenge, prefix),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "length",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Spotify__Login5__V3__Challenges__HashcashChallenge, length),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned spotify__login5__v3__challenges__hashcash_challenge__field_indices_by_name[] = {
  1,   /* field[1] = length */
  0,   /* field[0] = prefix */
};
static const ProtobufCIntRange spotify__login5__v3__challenges__hashcash_challenge__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor spotify__login5__v3__challenges__hashcash_challenge__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "spotify.login5.v3.challenges.HashcashChallenge",
  "HashcashChallenge",
  "Spotify__Login5__V3__Challenges__HashcashChallenge",
  "spotify.login5.v3.challenges",
  sizeof(Spotify__Login5__V3__Challenges__HashcashChallenge),
  2,
  spotify__login5__v3__challenges__hashcash_challenge__field_descriptors,
  spotify__login5__v3__challenges__hashcash_challenge__field_indices_by_name,
  1,  spotify__login5__v3__challenges__hashcash_challenge__number_ranges,
  (ProtobufCMessageInit) spotify__login5__v3__challenges__hashcash_challenge__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor spotify__login5__v3__challenges__hashcash_solution__field_descriptors[2] =
{
  {
    "suffix",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Spotify__Login5__V3__Challenges__HashcashSolution, suffix),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "duration",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Spotify__Login5__V3__Challenges__HashcashSolution, duration),
    &google__protobuf__duration__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned spotify__login5__v3__challenges__hashcash_solution__field_indices_by_name[] = {
  1,   /* field[1] = duration */
  0,   /* field[0] = suffix */
};
static const ProtobufCIntRange spotify__login5__v3__challenges__hashcash_solution__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor spotify__login5__v3__challenges__hashcash_solution__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "spotify.login5.v3.challenges.HashcashSolution",
  "HashcashSolution",
  "Spotify__Login5__V3__Challenges__HashcashSolution",
  "spotify.login5.v3.challenges",
  sizeof(Spotify__Login5__V3__Challenges__HashcashSolution),
  2,
  spotify__login5__v3__challenges__hashcash_solution__field_descriptors,
  spotify__login5__v3__challenges__hashcash_solution__field_indices_by_name,
  1,  spotify__login5__v3__challenges__hashcash_solution__number_ranges,
  (ProtobufCMessageInit) spotify__login5__v3__challenges__hashcash_solution__init,
  NULL,NULL,NULL    /* reserved[123] */
};
