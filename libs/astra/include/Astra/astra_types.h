#ifndef ASTRA_TYPES_H
#define ASTRA_TYPES_H

#include <stdint.h>
#include <stddef.h>

const uint8_t ASTRA_MAX_READER_STREAMS = 16;

const int ASTRA_TIMEOUT_FOREVER = -1;
const int ASTRA_TIMEOUT_RETURN_IMMEDIATELY = 0;

typedef struct _astra_stream* astra_stream_t;

typedef int32_t astra_stream_type_t;
typedef int32_t astra_stream_subtype_t;
typedef int32_t astra_frame_index_t;

const astra_stream_subtype_t DEFAULT_SUBTYPE = 0;

typedef struct {
    astra_stream_type_t type;
    astra_stream_subtype_t subtype;
} astra_stream_desc_t;

typedef struct _astra_streamset* astra_streamset_t;
typedef struct _astra_streamconnection_handle* astra_streamconnection_handle_t;

typedef struct _astra_streamsetconnection* astra_streamsetconnection_t;
typedef struct _astra_streamconnection* astra_streamconnection_t;

typedef struct _astra_frame astra_frame_t;

typedef struct _astra_reader* astra_reader_t;
typedef struct _astra_reader_frame* astra_reader_frame_t;

typedef void* astra_parameter_data_t;
typedef int32_t astra_parameter_id;
typedef int32_t astra_command_id;

typedef struct _astra_parameter_bin* astra_result_token_t;
typedef struct _astra_parameter_bin* astra_parameter_bin_t;

typedef struct _astra_bin* astra_bin_t;

typedef enum {
    ASTRA_STATUS_SUCCESS = 0,
    ASTRA_STATUS_INVALID_PARAMETER = 1,
    ASTRA_STATUS_DEVICE_ERROR = 2,
    ASTRA_STATUS_TIMEOUT = 3,
    ASTRA_STATUS_INVALID_PARAMETER_TOKEN = 4,
    ASTRA_STATUS_INVALID_OPERATION = 5,
    ASTRA_STATUS_INTERNAL_ERROR = 6,
    ASTRA_STATUS_UNINITIALIZED = 7
} astra_status_t;

typedef size_t astra_callback_id_t;

typedef struct _astra_reader_callback_id* astra_reader_callback_id_t;

typedef void(*astra_frame_ready_callback_t)(void* clientTag,
                                            astra_reader_t reader,
                                            astra_reader_frame_t frame);

typedef enum {
    ASTRA_SEVERITY_UNKNOWN = 0,
    ASTRA_SEVERITY_FATAL   = 1,
    ASTRA_SEVERITY_ERROR   = 2,
    ASTRA_SEVERITY_WARN    = 3,
    ASTRA_SEVERITY_INFO    = 4,
    ASTRA_SEVERITY_DEBUG   = 5,
    ASTRA_SEVERITY_TRACE   = 6
} astra_log_severity_t;

typedef uint32_t astra_event_id;

#endif /* ASTRA_TYPES_H */
