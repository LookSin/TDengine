/*
 * Copyright (c) 2019 TAOS Data, Inc. <jhtao@taosdata.com>
 *
 * This program is free software: you can use, redistribute, and/or modify
 * it under the terms of the GNU Affero General Public License, version 3
 * or later ("AGPL"), as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _TD_COMMON_TOKEN_H_
#define _TD_COMMON_TOKEN_H_

#define TK_OR                   1
#define TK_AND                  2
#define TK_UNION                3
#define TK_ALL                  4
#define TK_MINUS                5
#define TK_EXCEPT               6
#define TK_INTERSECT            7
#define TK_NK_BITAND            8
#define TK_NK_BITOR             9
#define TK_NK_LSHIFT            10
#define TK_NK_RSHIFT            11
#define TK_NK_PLUS              12
#define TK_NK_MINUS             13
#define TK_NK_STAR              14
#define TK_NK_SLASH             15
#define TK_NK_REM               16
#define TK_NK_CONCAT            17
#define TK_CREATE               18
#define TK_ACCOUNT              19
#define TK_NK_ID                20
#define TK_PASS                 21
#define TK_NK_STRING            22
#define TK_ALTER                23
#define TK_PPS                  24
#define TK_TSERIES              25
#define TK_STORAGE              26
#define TK_STREAMS              27
#define TK_QTIME                28
#define TK_DBS                  29
#define TK_USERS                30
#define TK_CONNS                31
#define TK_STATE                32
#define TK_USER                 33
#define TK_ENABLE               34
#define TK_NK_INTEGER           35
#define TK_SYSINFO              36
#define TK_DROP                 37
#define TK_GRANT                38
#define TK_ON                   39
#define TK_TO                   40
#define TK_REVOKE               41
#define TK_FROM                 42
#define TK_NK_COMMA             43
#define TK_READ                 44
#define TK_WRITE                45
#define TK_NK_DOT               46
#define TK_DNODE                47
#define TK_PORT                 48
#define TK_DNODES               49
#define TK_NK_IPTOKEN           50
#define TK_LOCAL                51
#define TK_QNODE                52
#define TK_BNODE                53
#define TK_SNODE                54
#define TK_MNODE                55
#define TK_DATABASE             56
#define TK_USE                  57
#define TK_FLUSH                58
#define TK_TRIM                 59
#define TK_IF                   60
#define TK_NOT                  61
#define TK_EXISTS               62
#define TK_BUFFER               63
#define TK_CACHEMODEL           64
#define TK_CACHESIZE            65
#define TK_COMP                 66
#define TK_DURATION             67
#define TK_NK_VARIABLE          68
#define TK_MAXROWS              69
#define TK_MINROWS              70
#define TK_KEEP                 71
#define TK_PAGES                72
#define TK_PAGESIZE             73
#define TK_TSDB_PAGESIZE        74
#define TK_PRECISION            75
#define TK_REPLICA              76
#define TK_STRICT               77
#define TK_VGROUPS              78
#define TK_SINGLE_STABLE        79
#define TK_RETENTIONS           80
#define TK_SCHEMALESS           81
#define TK_WAL_LEVEL            82
#define TK_WAL_FSYNC_PERIOD     83
#define TK_WAL_RETENTION_PERIOD 84
#define TK_WAL_RETENTION_SIZE   85
#define TK_WAL_ROLL_PERIOD      86
#define TK_WAL_SEGMENT_SIZE     87
#define TK_STT_TRIGGER          88
#define TK_TABLE_PREFIX         89
#define TK_TABLE_SUFFIX         90
#define TK_NK_COLON             91
#define TK_MAX_SPEED            92
#define TK_TABLE                93
#define TK_NK_LP                94
#define TK_NK_RP                95
#define TK_STABLE               96
#define TK_ADD                  97
#define TK_COLUMN               98
#define TK_MODIFY               99
#define TK_RENAME               100
#define TK_TAG                  101
#define TK_SET                  102
#define TK_NK_EQ                103
#define TK_USING                104
#define TK_TAGS                 105
#define TK_COMMENT              106
#define TK_BOOL                 107
#define TK_TINYINT              108
#define TK_SMALLINT             109
#define TK_INT                  110
#define TK_INTEGER              111
#define TK_BIGINT               112
#define TK_FLOAT                113
#define TK_DOUBLE               114
#define TK_BINARY               115
#define TK_TIMESTAMP            116
#define TK_NCHAR                117
#define TK_UNSIGNED             118
#define TK_JSON                 119
#define TK_VARCHAR              120
#define TK_MEDIUMBLOB           121
#define TK_BLOB                 122
#define TK_VARBINARY            123
#define TK_DECIMAL              124
#define TK_MAX_DELAY            125
#define TK_WATERMARK            126
#define TK_ROLLUP               127
#define TK_TTL                  128
#define TK_SMA                  129
#define TK_FIRST                130
#define TK_LAST                 131
#define TK_SHOW                 132
#define TK_DATABASES            133
#define TK_TABLES               134
#define TK_STABLES              135
#define TK_MNODES               136
#define TK_QNODES               137
#define TK_FUNCTIONS            138
#define TK_INDEXES              139
#define TK_ACCOUNTS             140
#define TK_APPS                 141
#define TK_CONNECTIONS          142
#define TK_LICENCES             143
#define TK_GRANTS               144
#define TK_QUERIES              145
#define TK_SCORES               146
#define TK_TOPICS               147
#define TK_VARIABLES            148
#define TK_CLUSTER              149
#define TK_BNODES               150
#define TK_SNODES               151
#define TK_TRANSACTIONS         152
#define TK_DISTRIBUTED          153
#define TK_CONSUMERS            154
#define TK_SUBSCRIPTIONS        155
#define TK_VNODES               156
#define TK_LIKE                 157
#define TK_INDEX                158
#define TK_FUNCTION             159
#define TK_INTERVAL             160
#define TK_TOPIC                161
#define TK_AS                   162
#define TK_WITH                 163
#define TK_META                 164
#define TK_CONSUMER             165
#define TK_GROUP                166
#define TK_DESC                 167
#define TK_DESCRIBE             168
#define TK_RESET                169
#define TK_QUERY                170
#define TK_CACHE                171
#define TK_EXPLAIN              172
#define TK_ANALYZE              173
#define TK_VERBOSE              174
#define TK_NK_BOOL              175
#define TK_RATIO                176
#define TK_NK_FLOAT             177
#define TK_OUTPUTTYPE           178
#define TK_AGGREGATE            179
#define TK_BUFSIZE              180
#define TK_STREAM               181
#define TK_INTO                 182
#define TK_TRIGGER              183
#define TK_AT_ONCE              184
#define TK_WINDOW_CLOSE         185
#define TK_IGNORE               186
#define TK_EXPIRED              187
#define TK_SUBTABLE             188
#define TK_KILL                 189
#define TK_CONNECTION           190
#define TK_TRANSACTION          191
#define TK_BALANCE              192
#define TK_VGROUP               193
#define TK_MERGE                194
#define TK_REDISTRIBUTE         195
#define TK_SPLIT                196
#define TK_DELETE               197
#define TK_INSERT               198
#define TK_NULL                 199
#define TK_NK_QUESTION          200
#define TK_NK_ARROW             201
#define TK_ROWTS                202
#define TK_TBNAME               203
#define TK_QSTART               204
#define TK_QEND                 205
#define TK_QDURATION            206
#define TK_WSTART               207
#define TK_WEND                 208
#define TK_WDURATION            209
#define TK_IROWTS               210
#define TK_QTAGS                211
#define TK_CAST                 212
#define TK_NOW                  213
#define TK_TODAY                214
#define TK_TIMEZONE             215
#define TK_CLIENT_VERSION       216
#define TK_SERVER_VERSION       217
#define TK_SERVER_STATUS        218
#define TK_CURRENT_USER         219
#define TK_COUNT                220
#define TK_LAST_ROW             221
#define TK_CASE                 222
#define TK_END                  223
#define TK_WHEN                 224
#define TK_THEN                 225
#define TK_ELSE                 226
#define TK_BETWEEN              227
#define TK_IS                   228
#define TK_NK_LT                229
#define TK_NK_GT                230
#define TK_NK_LE                231
#define TK_NK_GE                232
#define TK_NK_NE                233
#define TK_MATCH                234
#define TK_NMATCH               235
#define TK_CONTAINS             236
#define TK_IN                   237
#define TK_JOIN                 238
#define TK_INNER                239
#define TK_SELECT               240
#define TK_DISTINCT             241
#define TK_WHERE                242
#define TK_PARTITION            243
#define TK_BY                   244
#define TK_SESSION              245
#define TK_STATE_WINDOW         246
#define TK_SLIDING              247
#define TK_FILL                 248
#define TK_VALUE                249
#define TK_NONE                 250
#define TK_PREV                 251
#define TK_LINEAR               252
#define TK_NEXT                 253
#define TK_HAVING               254
#define TK_RANGE                255
#define TK_EVERY                256
#define TK_ORDER                257
#define TK_SLIMIT               258
#define TK_SOFFSET              259
#define TK_LIMIT                260
#define TK_OFFSET               261
#define TK_ASC                  262
#define TK_NULLS                263
#define TK_ABORT                264
#define TK_AFTER                265
#define TK_ATTACH               266
#define TK_BEFORE               267
#define TK_BEGIN                268
#define TK_BITAND               269
#define TK_BITNOT               270
#define TK_BITOR                271
#define TK_BLOCKS               272
#define TK_CHANGE               273
#define TK_COMMA                274
#define TK_COMPACT              275
#define TK_CONCAT               276
#define TK_CONFLICT             277
#define TK_COPY                 278
#define TK_DEFERRED             279
#define TK_DELIMITERS           280
#define TK_DETACH               281
#define TK_DIVIDE               282
#define TK_DOT                  283
#define TK_EACH                 284
#define TK_FAIL                 285
#define TK_FILE                 286
#define TK_FOR                  287
#define TK_GLOB                 288
#define TK_ID                   289
#define TK_IMMEDIATE            290
#define TK_IMPORT               291
#define TK_INITIALLY            292
#define TK_INSTEAD              293
#define TK_ISNULL               294
#define TK_KEY                  295
#define TK_MODULES              296
#define TK_NK_BITNOT            297
#define TK_NK_SEMI              298
#define TK_NOTNULL              299
#define TK_OF                   300
#define TK_PLUS                 301
#define TK_PRIVILEGE            302
#define TK_RAISE                303
#define TK_REPLACE              304
#define TK_RESTRICT             305
#define TK_ROW                  306
#define TK_SEMI                 307
#define TK_STAR                 308
#define TK_STATEMENT            309
#define TK_STRING               310
#define TK_TIMES                311
#define TK_UPDATE               312
#define TK_VALUES               313
#define TK_VARIABLE             314
#define TK_VIEW                 315
#define TK_WAL                  316

#define TK_NK_SPACE   300
#define TK_NK_COMMENT 301
#define TK_NK_ILLEGAL 302
#define TK_NK_HEX     303  // hex number  0x123
#define TK_NK_OCT     304  // oct number
#define TK_NK_BIN     305  // bin format data 0b111

#define TK_NK_NIL 65535

#endif /*_TD_COMMON_TOKEN_H_*/
