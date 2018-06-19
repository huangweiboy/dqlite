#ifndef DQLITE_TEST_RESPONSE_H
#define DQLITE_TEST_RESPONSE_H

#include "../src/response.h"

#include "message.h"

DQLITE__SCHEMA_DECODER_DEFINE(test_response, DQLITE__RESPONSE_SCHEMA_TYPES);

TEST_MESSAGE_SEND_DEFINE(welcome, DQLITE__RESPONSE_SCHEMA_WELCOME);
TEST_MESSAGE_SEND_DEFINE(servers, DQLITE__RESPONSE_SCHEMA_SERVERS);
TEST_MESSAGE_SEND_DEFINE(db, DQLITE__RESPONSE_SCHEMA_DB);

#endif /* DQLITE_TEST_RESPONSE_H */