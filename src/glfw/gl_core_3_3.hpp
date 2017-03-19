/* Generated 2015-09-28 15:15 by Casfire Khronos Specification Parser - admin@casfire.com */
#ifndef _GL_CORE_3_3_HPP_
#define _GL_CORE_3_3_HPP_

#include <stddef.h>
#ifndef GLEXT_64_TYPES_DEFINED
/* This code block is duplicated in glxext.h, so must be protected */
#define GLEXT_64_TYPES_DEFINED
/* Define int32_t, int64_t, and uint64_t types for UST/MSC */
/* (as used in the GL_EXT_timer_query extension). */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#include <inttypes.h>
#elif defined(__sun__) || defined(__digital__)
#include <inttypes.h>
#if defined(__STDC__)
#if defined(__arch64__) || defined(_LP64)
typedef long int int64_t;
typedef unsigned long int uint64_t;
#else
typedef long long int int64_t;
typedef unsigned long long int uint64_t;
#endif /* __arch64__ */
#endif /* __STDC__ */
#elif defined( __VMS ) || defined(__sgi)
#include <inttypes.h>
#elif defined(__SCO__) || defined(__USLC__)
#include <stdint.h>
#elif defined(__UNIXOS2__) || defined(__SOL64__)
typedef long int int32_t;
typedef long long int int64_t;
typedef unsigned long long int uint64_t;
#elif defined(_WIN32) && defined(__GNUC__)
#include <stdint.h>
#elif defined(_WIN32)
typedef __int32 int32_t;
typedef __int64 int64_t;
typedef unsigned __int64 uint64_t;
#else
/* Fallback if nothing above works */
#include <inttypes.h>
#endif
#endif
#define GL_VERSION_1_0 1
#define GL_VERSION_1_1 1
#define GL_VERSION_1_2 1
#define GL_VERSION_1_3 1
#define GL_VERSION_1_4 1
#define GL_VERSION_1_5 1
#define GL_VERSION_2_0 1
#define GL_VERSION_2_1 1
#define GL_VERSION_3_0 1
#define GL_VERSION_3_1 1
#define GL_VERSION_3_2 1
#define GL_VERSION_3_3 1

namespace GL {
	
	typedef unsigned int GLenum;
	typedef float GLfloat;
	typedef int GLint;
	typedef int GLsizei;
	typedef unsigned int GLbitfield;
	typedef double GLdouble;
	typedef unsigned int GLuint;
	typedef unsigned char GLboolean;
	typedef unsigned char GLubyte;
	typedef ptrdiff_t GLsizeiptr;
	typedef ptrdiff_t GLintptr;
	typedef char GLchar;
	typedef short GLshort;
	typedef signed char GLbyte;
	typedef unsigned short GLushort;
	typedef struct __GLsync *GLsync;
	typedef uint64_t GLuint64;
	typedef int64_t GLint64;
	typedef void GLvoid;
	typedef float GLclampf;
	typedef double GLclampd;
	typedef unsigned short GLhalf;
	
	enum {
		GL_COLOR_BUFFER_BIT = 0x00004000,
		GL_DEPTH_BUFFER_BIT = 0x00000100,
		GL_STENCIL_BUFFER_BIT = 0x00000400,
		GL_ALWAYS = 0x0207,
		GL_EQUAL = 0x0202,
		GL_GEQUAL = 0x0206,
		GL_GREATER = 0x0204,
		GL_LEQUAL = 0x0203,
		GL_LESS = 0x0201,
		GL_NEVER = 0x0200,
		GL_NOTEQUAL = 0x0205,
		GL_DST_ALPHA = 0x0304,
		GL_ONE = 1,
		GL_ONE_MINUS_DST_ALPHA = 0x0305,
		GL_ONE_MINUS_SRC_ALPHA = 0x0303,
		GL_ONE_MINUS_SRC_COLOR = 0x0301,
		GL_SRC_ALPHA = 0x0302,
		GL_SRC_COLOR = 0x0300,
		GL_ZERO = 0,
		GL_DST_COLOR = 0x0306,
		GL_ONE_MINUS_DST_COLOR = 0x0307,
		GL_SRC_ALPHA_SATURATE = 0x0308,
		GL_FALSE = 0,
		GL_TRUE = 1,
		GL_CLIP_DISTANCE0 = 0x3000,
		GL_CLIP_DISTANCE1 = 0x3001,
		GL_CLIP_DISTANCE2 = 0x3002,
		GL_CLIP_DISTANCE3 = 0x3003,
		GL_CLIP_DISTANCE4 = 0x3004,
		GL_CLIP_DISTANCE5 = 0x3005,
		GL_CLIP_DISTANCE6 = 0x3006,
		GL_CLIP_DISTANCE7 = 0x3007,
		GL_BACK = 0x0405,
		GL_FRONT = 0x0404,
		GL_FRONT_AND_BACK = 0x0408,
		GL_BYTE = 0x1400,
		GL_DOUBLE = 0x140A,
		GL_FLOAT = 0x1406,
		GL_INT = 0x1404,
		GL_SHORT = 0x1402,
		GL_UNSIGNED_BYTE = 0x1401,
		GL_UNSIGNED_INT = 0x1405,
		GL_UNSIGNED_SHORT = 0x1403,
		GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT = 0x00000001,
		GL_CONTEXT_COMPATIBILITY_PROFILE_BIT = 0x00000002,
		GL_CONTEXT_CORE_PROFILE_BIT = 0x00000001,
		GL_BACK_LEFT = 0x0402,
		GL_BACK_RIGHT = 0x0403,
		GL_FRONT_LEFT = 0x0400,
		GL_FRONT_RIGHT = 0x0401,
		GL_LEFT = 0x0406,
		GL_NONE = 0,
		GL_RIGHT = 0x0407,
		GL_BLEND = 0x0BE2,
		GL_COLOR_LOGIC_OP = 0x0BF2,
		GL_CULL_FACE = 0x0B44,
		GL_DEPTH_TEST = 0x0B71,
		GL_DITHER = 0x0BD0,
		GL_LINE_SMOOTH = 0x0B20,
		GL_POLYGON_OFFSET_FILL = 0x8037,
		GL_POLYGON_OFFSET_LINE = 0x2A02,
		GL_POLYGON_OFFSET_POINT = 0x2A01,
		GL_POLYGON_SMOOTH = 0x0B41,
		GL_SCISSOR_TEST = 0x0C11,
		GL_STENCIL_TEST = 0x0B90,
		GL_TEXTURE_1D = 0x0DE0,
		GL_TEXTURE_2D = 0x0DE1,
		GL_INVALID_ENUM = 0x0500,
		GL_INVALID_FRAMEBUFFER_OPERATION = 0x0506,
		GL_INVALID_OPERATION = 0x0502,
		GL_INVALID_VALUE = 0x0501,
		GL_NO_ERROR = 0,
		GL_OUT_OF_MEMORY = 0x0505,
		GL_LINEAR = 0x2601,
		GL_CCW = 0x0901,
		GL_CW = 0x0900,
		GL_ALIASED_LINE_WIDTH_RANGE = 0x846E,
		GL_BLEND_DST = 0x0BE0,
		GL_BLEND_SRC = 0x0BE1,
		GL_COLOR_CLEAR_VALUE = 0x0C22,
		GL_COLOR_WRITEMASK = 0x0C23,
		GL_CULL_FACE_MODE = 0x0B45,
		GL_DEPTH_CLEAR_VALUE = 0x0B73,
		GL_DEPTH_FUNC = 0x0B74,
		GL_DEPTH_RANGE = 0x0B70,
		GL_DEPTH_WRITEMASK = 0x0B72,
		GL_DOUBLEBUFFER = 0x0C32,
		GL_DRAW_BUFFER = 0x0C01,
		GL_FRONT_FACE = 0x0B46,
		GL_LINE_SMOOTH_HINT = 0x0C52,
		GL_LINE_WIDTH = 0x0B21,
		GL_LINE_WIDTH_GRANULARITY = 0x0B23,
		GL_LINE_WIDTH_RANGE = 0x0B22,
		GL_LOGIC_OP_MODE = 0x0BF0,
		GL_MAX_CLIP_DISTANCES = 0x0D32,
		GL_MAX_TEXTURE_SIZE = 0x0D33,
		GL_MAX_VIEWPORT_DIMS = 0x0D3A,
		GL_PACK_ALIGNMENT = 0x0D05,
		GL_PACK_LSB_FIRST = 0x0D01,
		GL_PACK_ROW_LENGTH = 0x0D02,
		GL_PACK_SKIP_PIXELS = 0x0D04,
		GL_PACK_SKIP_ROWS = 0x0D03,
		GL_PACK_SWAP_BYTES = 0x0D00,
		GL_POINT_SIZE = 0x0B11,
		GL_POINT_SIZE_GRANULARITY = 0x0B13,
		GL_POINT_SIZE_RANGE = 0x0B12,
		GL_POLYGON_MODE = 0x0B40,
		GL_POLYGON_OFFSET_FACTOR = 0x8038,
		GL_POLYGON_OFFSET_UNITS = 0x2A00,
		GL_POLYGON_SMOOTH_HINT = 0x0C53,
		GL_READ_BUFFER = 0x0C02,
		GL_SCISSOR_BOX = 0x0C10,
		GL_SMOOTH_LINE_WIDTH_GRANULARITY = 0x0B23,
		GL_SMOOTH_LINE_WIDTH_RANGE = 0x0B22,
		GL_SMOOTH_POINT_SIZE_GRANULARITY = 0x0B13,
		GL_SMOOTH_POINT_SIZE_RANGE = 0x0B12,
		GL_STENCIL_CLEAR_VALUE = 0x0B91,
		GL_STENCIL_FAIL = 0x0B94,
		GL_STENCIL_FUNC = 0x0B92,
		GL_STENCIL_PASS_DEPTH_FAIL = 0x0B95,
		GL_STENCIL_PASS_DEPTH_PASS = 0x0B96,
		GL_STENCIL_REF = 0x0B97,
		GL_STENCIL_VALUE_MASK = 0x0B93,
		GL_STENCIL_WRITEMASK = 0x0B98,
		GL_STEREO = 0x0C33,
		GL_SUBPIXEL_BITS = 0x0D50,
		GL_TEXTURE_BINDING_1D = 0x8068,
		GL_TEXTURE_BINDING_2D = 0x8069,
		GL_TEXTURE_BINDING_3D = 0x806A,
		GL_UNPACK_ALIGNMENT = 0x0CF5,
		GL_UNPACK_LSB_FIRST = 0x0CF1,
		GL_UNPACK_ROW_LENGTH = 0x0CF2,
		GL_UNPACK_SKIP_PIXELS = 0x0CF4,
		GL_UNPACK_SKIP_ROWS = 0x0CF3,
		GL_UNPACK_SWAP_BYTES = 0x0CF0,
		GL_VIEWPORT = 0x0BA2,
		GL_TEXTURE_ALPHA_SIZE = 0x805F,
		GL_TEXTURE_BLUE_SIZE = 0x805E,
		GL_TEXTURE_BORDER_COLOR = 0x1004,
		GL_TEXTURE_GREEN_SIZE = 0x805D,
		GL_TEXTURE_HEIGHT = 0x1001,
		GL_TEXTURE_INTERNAL_FORMAT = 0x1003,
		GL_TEXTURE_MAG_FILTER = 0x2800,
		GL_TEXTURE_MIN_FILTER = 0x2801,
		GL_TEXTURE_RED_SIZE = 0x805C,
		GL_TEXTURE_WIDTH = 0x1000,
		GL_TEXTURE_WRAP_S = 0x2802,
		GL_TEXTURE_WRAP_T = 0x2803,
		GL_DONT_CARE = 0x1100,
		GL_FASTEST = 0x1101,
		GL_NICEST = 0x1102,
		GL_FRAGMENT_SHADER_DERIVATIVE_HINT = 0x8B8B,
		GL_TEXTURE_COMPRESSION_HINT = 0x84EF,
		GL_REPLACE = 0x1E01,
		GL_AND = 0x1501,
		GL_AND_INVERTED = 0x1504,
		GL_AND_REVERSE = 0x1502,
		GL_CLEAR = 0x1500,
		GL_COPY = 0x1503,
		GL_COPY_INVERTED = 0x150C,
		GL_EQUIV = 0x1509,
		GL_INVERT = 0x150A,
		GL_NAND = 0x150E,
		GL_NOOP = 0x1505,
		GL_NOR = 0x1508,
		GL_OR = 0x1507,
		GL_OR_INVERTED = 0x150D,
		GL_OR_REVERSE = 0x150B,
		GL_SET = 0x150F,
		GL_XOR = 0x1506,
		GL_MAP_FLUSH_EXPLICIT_BIT = 0x0010,
		GL_MAP_INVALIDATE_BUFFER_BIT = 0x0008,
		GL_MAP_INVALIDATE_RANGE_BIT = 0x0004,
		GL_MAP_READ_BIT = 0x0001,
		GL_MAP_UNSYNCHRONIZED_BIT = 0x0020,
		GL_MAP_WRITE_BIT = 0x0002,
		GL_TEXTURE = 0x1702,
		GL_LINE = 0x1B01,
		GL_POINT = 0x1B00,
		GL_FILL = 0x1B02,
		GL_COLOR = 0x1800,
		GL_DEPTH = 0x1801,
		GL_STENCIL = 0x1802,
		GL_ALPHA = 0x1906,
		GL_BLUE = 0x1905,
		GL_DEPTH_COMPONENT = 0x1902,
		GL_GREEN = 0x1904,
		GL_RED = 0x1903,
		GL_RGB = 0x1907,
		GL_RGBA = 0x1908,
		GL_STENCIL_INDEX = 0x1901,
		GL_R3_G3_B2 = 0x2A10,
		GL_RGB10 = 0x8052,
		GL_RGB10_A2 = 0x8059,
		GL_RGB12 = 0x8053,
		GL_RGB16 = 0x8054,
		GL_RGB4 = 0x804F,
		GL_RGB5 = 0x8050,
		GL_RGB5_A1 = 0x8057,
		GL_RGB8 = 0x8051,
		GL_RGBA12 = 0x805A,
		GL_RGBA16 = 0x805B,
		GL_RGBA2 = 0x8055,
		GL_RGBA4 = 0x8056,
		GL_RGBA8 = 0x8058,
		GL_PACK_IMAGE_HEIGHT = 0x806C,
		GL_PACK_SKIP_IMAGES = 0x806B,
		GL_UNPACK_IMAGE_HEIGHT = 0x806E,
		GL_UNPACK_SKIP_IMAGES = 0x806D,
		GL_UNSIGNED_BYTE_3_3_2 = 0x8032,
		GL_UNSIGNED_INT_10_10_10_2 = 0x8036,
		GL_UNSIGNED_INT_8_8_8_8 = 0x8035,
		GL_UNSIGNED_SHORT_4_4_4_4 = 0x8033,
		GL_UNSIGNED_SHORT_5_5_5_1 = 0x8034,
		GL_POINT_FADE_THRESHOLD_SIZE = 0x8128,
		GL_LINES = 0x0001,
		GL_LINES_ADJACENCY = 0x000A,
		GL_LINE_LOOP = 0x0002,
		GL_LINE_STRIP = 0x0003,
		GL_LINE_STRIP_ADJACENCY = 0x000B,
		GL_POINTS = 0x0000,
		GL_TRIANGLES = 0x0004,
		GL_TRIANGLES_ADJACENCY = 0x000C,
		GL_TRIANGLE_FAN = 0x0006,
		GL_TRIANGLE_STRIP = 0x0005,
		GL_TRIANGLE_STRIP_ADJACENCY = 0x000D,
		GL_DECR = 0x1E03,
		GL_INCR = 0x1E02,
		GL_KEEP = 0x1E00,
		GL_EXTENSIONS = 0x1F03,
		GL_RENDERER = 0x1F01,
		GL_VENDOR = 0x1F00,
		GL_VERSION = 0x1F02,
		GL_NEAREST = 0x2600,
		GL_LINEAR_MIPMAP_LINEAR = 0x2703,
		GL_LINEAR_MIPMAP_NEAREST = 0x2701,
		GL_NEAREST_MIPMAP_LINEAR = 0x2702,
		GL_NEAREST_MIPMAP_NEAREST = 0x2700,
		GL_TEXTURE_WRAP_R = 0x8072,
		GL_PROXY_TEXTURE_1D = 0x8063,
		GL_PROXY_TEXTURE_2D = 0x8064,
		GL_PROXY_TEXTURE_3D = 0x8070,
		GL_TEXTURE_3D = 0x806F,
		GL_TEXTURE_BASE_LEVEL = 0x813C,
		GL_TEXTURE_MAX_LEVEL = 0x813D,
		GL_TEXTURE_MAX_LOD = 0x813B,
		GL_TEXTURE_MIN_LOD = 0x813A,
		GL_CLAMP_TO_BORDER = 0x812D,
		GL_CLAMP_TO_EDGE = 0x812F,
		GL_REPEAT = 0x2901,
		GL_TEXTURE_DEPTH = 0x8071,
		GL_MAX_3D_TEXTURE_SIZE = 0x8073,
		GL_UNSIGNED_BYTE_2_3_3_REV = 0x8362,
		GL_UNSIGNED_SHORT_5_6_5 = 0x8363,
		GL_UNSIGNED_SHORT_5_6_5_REV = 0x8364,
		GL_UNSIGNED_SHORT_4_4_4_4_REV = 0x8365,
		GL_UNSIGNED_SHORT_1_5_5_5_REV = 0x8366,
		GL_UNSIGNED_INT_8_8_8_8_REV = 0x8367,
		GL_UNSIGNED_INT_2_10_10_10_REV = 0x8368,
		GL_BGR = 0x80E0,
		GL_BGRA = 0x80E1,
		GL_MAX_ELEMENTS_VERTICES = 0x80E8,
		GL_MAX_ELEMENTS_INDICES = 0x80E9,
		GL_TEXTURE0 = 0x84C0,
		GL_TEXTURE1 = 0x84C1,
		GL_TEXTURE2 = 0x84C2,
		GL_TEXTURE3 = 0x84C3,
		GL_TEXTURE4 = 0x84C4,
		GL_TEXTURE5 = 0x84C5,
		GL_TEXTURE6 = 0x84C6,
		GL_TEXTURE7 = 0x84C7,
		GL_TEXTURE8 = 0x84C8,
		GL_TEXTURE9 = 0x84C9,
		GL_TEXTURE10 = 0x84CA,
		GL_TEXTURE11 = 0x84CB,
		GL_TEXTURE12 = 0x84CC,
		GL_TEXTURE13 = 0x84CD,
		GL_TEXTURE14 = 0x84CE,
		GL_TEXTURE15 = 0x84CF,
		GL_TEXTURE16 = 0x84D0,
		GL_TEXTURE17 = 0x84D1,
		GL_TEXTURE18 = 0x84D2,
		GL_TEXTURE19 = 0x84D3,
		GL_TEXTURE20 = 0x84D4,
		GL_TEXTURE21 = 0x84D5,
		GL_TEXTURE22 = 0x84D6,
		GL_TEXTURE23 = 0x84D7,
		GL_TEXTURE24 = 0x84D8,
		GL_TEXTURE25 = 0x84D9,
		GL_TEXTURE26 = 0x84DA,
		GL_TEXTURE27 = 0x84DB,
		GL_TEXTURE28 = 0x84DC,
		GL_TEXTURE29 = 0x84DD,
		GL_TEXTURE30 = 0x84DE,
		GL_TEXTURE31 = 0x84DF,
		GL_ACTIVE_TEXTURE = 0x84E0,
		GL_MULTISAMPLE = 0x809D,
		GL_SAMPLE_ALPHA_TO_COVERAGE = 0x809E,
		GL_SAMPLE_ALPHA_TO_ONE = 0x809F,
		GL_SAMPLE_COVERAGE = 0x80A0,
		GL_SAMPLE_BUFFERS = 0x80A8,
		GL_SAMPLES = 0x80A9,
		GL_SAMPLE_COVERAGE_VALUE = 0x80AA,
		GL_SAMPLE_COVERAGE_INVERT = 0x80AB,
		GL_TEXTURE_CUBE_MAP = 0x8513,
		GL_TEXTURE_BINDING_CUBE_MAP = 0x8514,
		GL_TEXTURE_CUBE_MAP_POSITIVE_X = 0x8515,
		GL_TEXTURE_CUBE_MAP_NEGATIVE_X = 0x8516,
		GL_TEXTURE_CUBE_MAP_POSITIVE_Y = 0x8517,
		GL_TEXTURE_CUBE_MAP_NEGATIVE_Y = 0x8518,
		GL_TEXTURE_CUBE_MAP_POSITIVE_Z = 0x8519,
		GL_TEXTURE_CUBE_MAP_NEGATIVE_Z = 0x851A,
		GL_PROXY_TEXTURE_CUBE_MAP = 0x851B,
		GL_MAX_CUBE_MAP_TEXTURE_SIZE = 0x851C,
		GL_COMPRESSED_RGB = 0x84ED,
		GL_COMPRESSED_RGBA = 0x84EE,
		GL_TEXTURE_COMPRESSED_IMAGE_SIZE = 0x86A0,
		GL_TEXTURE_COMPRESSED = 0x86A1,
		GL_NUM_COMPRESSED_TEXTURE_FORMATS = 0x86A2,
		GL_COMPRESSED_TEXTURE_FORMATS = 0x86A3,
		GL_BLEND_DST_RGB = 0x80C8,
		GL_BLEND_SRC_RGB = 0x80C9,
		GL_BLEND_DST_ALPHA = 0x80CA,
		GL_BLEND_SRC_ALPHA = 0x80CB,
		GL_DEPTH_COMPONENT16 = 0x81A5,
		GL_DEPTH_COMPONENT24 = 0x81A6,
		GL_DEPTH_COMPONENT32 = 0x81A7,
		GL_MIRRORED_REPEAT = 0x8370,
		GL_MAX_TEXTURE_LOD_BIAS = 0x84FD,
		GL_TEXTURE_LOD_BIAS = 0x8501,
		GL_INCR_WRAP = 0x8507,
		GL_DECR_WRAP = 0x8508,
		GL_TEXTURE_DEPTH_SIZE = 0x884A,
		GL_TEXTURE_COMPARE_MODE = 0x884C,
		GL_TEXTURE_COMPARE_FUNC = 0x884D,
		GL_FUNC_ADD = 0x8006,
		GL_FUNC_SUBTRACT = 0x800A,
		GL_FUNC_REVERSE_SUBTRACT = 0x800B,
		GL_MIN = 0x8007,
		GL_MAX = 0x8008,
		GL_CONSTANT_COLOR = 0x8001,
		GL_ONE_MINUS_CONSTANT_COLOR = 0x8002,
		GL_CONSTANT_ALPHA = 0x8003,
		GL_ONE_MINUS_CONSTANT_ALPHA = 0x8004,
		GL_BUFFER_SIZE = 0x8764,
		GL_BUFFER_USAGE = 0x8765,
		GL_QUERY_COUNTER_BITS = 0x8864,
		GL_CURRENT_QUERY = 0x8865,
		GL_QUERY_RESULT = 0x8866,
		GL_QUERY_RESULT_AVAILABLE = 0x8867,
		GL_ARRAY_BUFFER = 0x8892,
		GL_ELEMENT_ARRAY_BUFFER = 0x8893,
		GL_ARRAY_BUFFER_BINDING = 0x8894,
		GL_ELEMENT_ARRAY_BUFFER_BINDING = 0x8895,
		GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING = 0x889F,
		GL_READ_ONLY = 0x88B8,
		GL_WRITE_ONLY = 0x88B9,
		GL_READ_WRITE = 0x88BA,
		GL_BUFFER_ACCESS = 0x88BB,
		GL_BUFFER_MAPPED = 0x88BC,
		GL_BUFFER_MAP_POINTER = 0x88BD,
		GL_STREAM_DRAW = 0x88E0,
		GL_STREAM_READ = 0x88E1,
		GL_STREAM_COPY = 0x88E2,
		GL_STATIC_DRAW = 0x88E4,
		GL_STATIC_READ = 0x88E5,
		GL_STATIC_COPY = 0x88E6,
		GL_DYNAMIC_DRAW = 0x88E8,
		GL_DYNAMIC_READ = 0x88E9,
		GL_DYNAMIC_COPY = 0x88EA,
		GL_SAMPLES_PASSED = 0x8914,
		GL_SRC1_ALPHA = 0x8589,
		GL_BLEND_EQUATION_RGB = 0x8009,
		GL_VERTEX_ATTRIB_ARRAY_ENABLED = 0x8622,
		GL_VERTEX_ATTRIB_ARRAY_SIZE = 0x8623,
		GL_VERTEX_ATTRIB_ARRAY_STRIDE = 0x8624,
		GL_VERTEX_ATTRIB_ARRAY_TYPE = 0x8625,
		GL_CURRENT_VERTEX_ATTRIB = 0x8626,
		GL_VERTEX_PROGRAM_POINT_SIZE = 0x8642,
		GL_VERTEX_ATTRIB_ARRAY_POINTER = 0x8645,
		GL_STENCIL_BACK_FUNC = 0x8800,
		GL_STENCIL_BACK_FAIL = 0x8801,
		GL_STENCIL_BACK_PASS_DEPTH_FAIL = 0x8802,
		GL_STENCIL_BACK_PASS_DEPTH_PASS = 0x8803,
		GL_MAX_DRAW_BUFFERS = 0x8824,
		GL_DRAW_BUFFER0 = 0x8825,
		GL_DRAW_BUFFER1 = 0x8826,
		GL_DRAW_BUFFER2 = 0x8827,
		GL_DRAW_BUFFER3 = 0x8828,
		GL_DRAW_BUFFER4 = 0x8829,
		GL_DRAW_BUFFER5 = 0x882A,
		GL_DRAW_BUFFER6 = 0x882B,
		GL_DRAW_BUFFER7 = 0x882C,
		GL_DRAW_BUFFER8 = 0x882D,
		GL_DRAW_BUFFER9 = 0x882E,
		GL_DRAW_BUFFER10 = 0x882F,
		GL_DRAW_BUFFER11 = 0x8830,
		GL_DRAW_BUFFER12 = 0x8831,
		GL_DRAW_BUFFER13 = 0x8832,
		GL_DRAW_BUFFER14 = 0x8833,
		GL_DRAW_BUFFER15 = 0x8834,
		GL_BLEND_EQUATION_ALPHA = 0x883D,
		GL_MAX_VERTEX_ATTRIBS = 0x8869,
		GL_VERTEX_ATTRIB_ARRAY_NORMALIZED = 0x886A,
		GL_MAX_TEXTURE_IMAGE_UNITS = 0x8872,
		GL_FRAGMENT_SHADER = 0x8B30,
		GL_VERTEX_SHADER = 0x8B31,
		GL_MAX_FRAGMENT_UNIFORM_COMPONENTS = 0x8B49,
		GL_MAX_VERTEX_UNIFORM_COMPONENTS = 0x8B4A,
		GL_MAX_VARYING_FLOATS = 0x8B4B,
		GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS = 0x8B4C,
		GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS = 0x8B4D,
		GL_SHADER_TYPE = 0x8B4F,
		GL_FLOAT_VEC2 = 0x8B50,
		GL_FLOAT_VEC3 = 0x8B51,
		GL_FLOAT_VEC4 = 0x8B52,
		GL_INT_VEC2 = 0x8B53,
		GL_INT_VEC3 = 0x8B54,
		GL_INT_VEC4 = 0x8B55,
		GL_BOOL = 0x8B56,
		GL_BOOL_VEC2 = 0x8B57,
		GL_BOOL_VEC3 = 0x8B58,
		GL_BOOL_VEC4 = 0x8B59,
		GL_FLOAT_MAT2 = 0x8B5A,
		GL_FLOAT_MAT3 = 0x8B5B,
		GL_FLOAT_MAT4 = 0x8B5C,
		GL_SAMPLER_1D = 0x8B5D,
		GL_SAMPLER_2D = 0x8B5E,
		GL_SAMPLER_3D = 0x8B5F,
		GL_SAMPLER_CUBE = 0x8B60,
		GL_SAMPLER_1D_SHADOW = 0x8B61,
		GL_SAMPLER_2D_SHADOW = 0x8B62,
		GL_DELETE_STATUS = 0x8B80,
		GL_COMPILE_STATUS = 0x8B81,
		GL_LINK_STATUS = 0x8B82,
		GL_VALIDATE_STATUS = 0x8B83,
		GL_INFO_LOG_LENGTH = 0x8B84,
		GL_ATTACHED_SHADERS = 0x8B85,
		GL_ACTIVE_UNIFORMS = 0x8B86,
		GL_ACTIVE_UNIFORM_MAX_LENGTH = 0x8B87,
		GL_SHADER_SOURCE_LENGTH = 0x8B88,
		GL_ACTIVE_ATTRIBUTES = 0x8B89,
		GL_ACTIVE_ATTRIBUTE_MAX_LENGTH = 0x8B8A,
		GL_SHADING_LANGUAGE_VERSION = 0x8B8C,
		GL_CURRENT_PROGRAM = 0x8B8D,
		GL_POINT_SPRITE_COORD_ORIGIN = 0x8CA0,
		GL_LOWER_LEFT = 0x8CA1,
		GL_UPPER_LEFT = 0x8CA2,
		GL_STENCIL_BACK_REF = 0x8CA3,
		GL_STENCIL_BACK_VALUE_MASK = 0x8CA4,
		GL_STENCIL_BACK_WRITEMASK = 0x8CA5,
		GL_PIXEL_PACK_BUFFER = 0x88EB,
		GL_PIXEL_UNPACK_BUFFER = 0x88EC,
		GL_PIXEL_PACK_BUFFER_BINDING = 0x88ED,
		GL_PIXEL_UNPACK_BUFFER_BINDING = 0x88EF,
		GL_FLOAT_MAT2x3 = 0x8B65,
		GL_FLOAT_MAT2x4 = 0x8B66,
		GL_FLOAT_MAT3x2 = 0x8B67,
		GL_FLOAT_MAT3x4 = 0x8B68,
		GL_FLOAT_MAT4x2 = 0x8B69,
		GL_FLOAT_MAT4x3 = 0x8B6A,
		GL_SRGB = 0x8C40,
		GL_SRGB8 = 0x8C41,
		GL_SRGB_ALPHA = 0x8C42,
		GL_SRGB8_ALPHA8 = 0x8C43,
		GL_COMPRESSED_SRGB = 0x8C48,
		GL_COMPRESSED_SRGB_ALPHA = 0x8C49,
		GL_COMPARE_REF_TO_TEXTURE = 0x884E,
		GL_MAJOR_VERSION = 0x821B,
		GL_MINOR_VERSION = 0x821C,
		GL_NUM_EXTENSIONS = 0x821D,
		GL_CONTEXT_FLAGS = 0x821E,
		GL_COMPRESSED_RED = 0x8225,
		GL_COMPRESSED_RG = 0x8226,
		GL_RGBA32F = 0x8814,
		GL_RGB32F = 0x8815,
		GL_RGBA16F = 0x881A,
		GL_RGB16F = 0x881B,
		GL_VERTEX_ATTRIB_ARRAY_INTEGER = 0x88FD,
		GL_MAX_ARRAY_TEXTURE_LAYERS = 0x88FF,
		GL_MIN_PROGRAM_TEXEL_OFFSET = 0x8904,
		GL_MAX_PROGRAM_TEXEL_OFFSET = 0x8905,
		GL_CLAMP_READ_COLOR = 0x891C,
		GL_FIXED_ONLY = 0x891D,
		GL_MAX_VARYING_COMPONENTS = 0x8B4B,
		GL_TEXTURE_1D_ARRAY = 0x8C18,
		GL_PROXY_TEXTURE_1D_ARRAY = 0x8C19,
		GL_TEXTURE_2D_ARRAY = 0x8C1A,
		GL_PROXY_TEXTURE_2D_ARRAY = 0x8C1B,
		GL_TEXTURE_BINDING_1D_ARRAY = 0x8C1C,
		GL_TEXTURE_BINDING_2D_ARRAY = 0x8C1D,
		GL_R11F_G11F_B10F = 0x8C3A,
		GL_UNSIGNED_INT_10F_11F_11F_REV = 0x8C3B,
		GL_RGB9_E5 = 0x8C3D,
		GL_UNSIGNED_INT_5_9_9_9_REV = 0x8C3E,
		GL_TEXTURE_SHARED_SIZE = 0x8C3F,
		GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH = 0x8C76,
		GL_TRANSFORM_FEEDBACK_BUFFER_MODE = 0x8C7F,
		GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS = 0x8C80,
		GL_TRANSFORM_FEEDBACK_VARYINGS = 0x8C83,
		GL_TRANSFORM_FEEDBACK_BUFFER_START = 0x8C84,
		GL_TRANSFORM_FEEDBACK_BUFFER_SIZE = 0x8C85,
		GL_PRIMITIVES_GENERATED = 0x8C87,
		GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN = 0x8C88,
		GL_RASTERIZER_DISCARD = 0x8C89,
		GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS = 0x8C8A,
		GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS = 0x8C8B,
		GL_INTERLEAVED_ATTRIBS = 0x8C8C,
		GL_SEPARATE_ATTRIBS = 0x8C8D,
		GL_TRANSFORM_FEEDBACK_BUFFER = 0x8C8E,
		GL_TRANSFORM_FEEDBACK_BUFFER_BINDING = 0x8C8F,
		GL_RGBA32UI = 0x8D70,
		GL_RGB32UI = 0x8D71,
		GL_RGBA16UI = 0x8D76,
		GL_RGB16UI = 0x8D77,
		GL_RGBA8UI = 0x8D7C,
		GL_RGB8UI = 0x8D7D,
		GL_RGBA32I = 0x8D82,
		GL_RGB32I = 0x8D83,
		GL_RGBA16I = 0x8D88,
		GL_RGB16I = 0x8D89,
		GL_RGBA8I = 0x8D8E,
		GL_RGB8I = 0x8D8F,
		GL_RED_INTEGER = 0x8D94,
		GL_GREEN_INTEGER = 0x8D95,
		GL_BLUE_INTEGER = 0x8D96,
		GL_RGB_INTEGER = 0x8D98,
		GL_RGBA_INTEGER = 0x8D99,
		GL_BGR_INTEGER = 0x8D9A,
		GL_BGRA_INTEGER = 0x8D9B,
		GL_SAMPLER_1D_ARRAY = 0x8DC0,
		GL_SAMPLER_2D_ARRAY = 0x8DC1,
		GL_SAMPLER_1D_ARRAY_SHADOW = 0x8DC3,
		GL_SAMPLER_2D_ARRAY_SHADOW = 0x8DC4,
		GL_SAMPLER_CUBE_SHADOW = 0x8DC5,
		GL_UNSIGNED_INT_VEC2 = 0x8DC6,
		GL_UNSIGNED_INT_VEC3 = 0x8DC7,
		GL_UNSIGNED_INT_VEC4 = 0x8DC8,
		GL_INT_SAMPLER_1D = 0x8DC9,
		GL_INT_SAMPLER_2D = 0x8DCA,
		GL_INT_SAMPLER_3D = 0x8DCB,
		GL_INT_SAMPLER_CUBE = 0x8DCC,
		GL_INT_SAMPLER_1D_ARRAY = 0x8DCE,
		GL_INT_SAMPLER_2D_ARRAY = 0x8DCF,
		GL_UNSIGNED_INT_SAMPLER_1D = 0x8DD1,
		GL_UNSIGNED_INT_SAMPLER_2D = 0x8DD2,
		GL_UNSIGNED_INT_SAMPLER_3D = 0x8DD3,
		GL_UNSIGNED_INT_SAMPLER_CUBE = 0x8DD4,
		GL_UNSIGNED_INT_SAMPLER_1D_ARRAY = 0x8DD6,
		GL_UNSIGNED_INT_SAMPLER_2D_ARRAY = 0x8DD7,
		GL_QUERY_WAIT = 0x8E13,
		GL_QUERY_NO_WAIT = 0x8E14,
		GL_QUERY_BY_REGION_WAIT = 0x8E15,
		GL_QUERY_BY_REGION_NO_WAIT = 0x8E16,
		GL_BUFFER_ACCESS_FLAGS = 0x911F,
		GL_BUFFER_MAP_LENGTH = 0x9120,
		GL_BUFFER_MAP_OFFSET = 0x9121,
		GL_DEPTH_COMPONENT32F = 0x8CAC,
		GL_DEPTH32F_STENCIL8 = 0x8CAD,
		GL_FLOAT_32_UNSIGNED_INT_24_8_REV = 0x8DAD,
		GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING = 0x8210,
		GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE = 0x8211,
		GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE = 0x8212,
		GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE = 0x8213,
		GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE = 0x8214,
		GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE = 0x8215,
		GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE = 0x8216,
		GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE = 0x8217,
		GL_FRAMEBUFFER_DEFAULT = 0x8218,
		GL_FRAMEBUFFER_UNDEFINED = 0x8219,
		GL_DEPTH_STENCIL_ATTACHMENT = 0x821A,
		GL_MAX_RENDERBUFFER_SIZE = 0x84E8,
		GL_DEPTH_STENCIL = 0x84F9,
		GL_UNSIGNED_INT_24_8 = 0x84FA,
		GL_DEPTH24_STENCIL8 = 0x88F0,
		GL_TEXTURE_STENCIL_SIZE = 0x88F1,
		GL_TEXTURE_RED_TYPE = 0x8C10,
		GL_TEXTURE_GREEN_TYPE = 0x8C11,
		GL_TEXTURE_BLUE_TYPE = 0x8C12,
		GL_TEXTURE_ALPHA_TYPE = 0x8C13,
		GL_TEXTURE_DEPTH_TYPE = 0x8C16,
		GL_UNSIGNED_NORMALIZED = 0x8C17,
		GL_FRAMEBUFFER_BINDING = 0x8CA6,
		GL_DRAW_FRAMEBUFFER_BINDING = 0x8CA6,
		GL_RENDERBUFFER_BINDING = 0x8CA7,
		GL_READ_FRAMEBUFFER = 0x8CA8,
		GL_DRAW_FRAMEBUFFER = 0x8CA9,
		GL_READ_FRAMEBUFFER_BINDING = 0x8CAA,
		GL_RENDERBUFFER_SAMPLES = 0x8CAB,
		GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE = 0x8CD0,
		GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME = 0x8CD1,
		GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL = 0x8CD2,
		GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE = 0x8CD3,
		GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER = 0x8CD4,
		GL_FRAMEBUFFER_COMPLETE = 0x8CD5,
		GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT = 0x8CD6,
		GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT = 0x8CD7,
		GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER = 0x8CDB,
		GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER = 0x8CDC,
		GL_FRAMEBUFFER_UNSUPPORTED = 0x8CDD,
		GL_MAX_COLOR_ATTACHMENTS = 0x8CDF,
		GL_COLOR_ATTACHMENT0 = 0x8CE0,
		GL_COLOR_ATTACHMENT1 = 0x8CE1,
		GL_COLOR_ATTACHMENT2 = 0x8CE2,
		GL_COLOR_ATTACHMENT3 = 0x8CE3,
		GL_COLOR_ATTACHMENT4 = 0x8CE4,
		GL_COLOR_ATTACHMENT5 = 0x8CE5,
		GL_COLOR_ATTACHMENT6 = 0x8CE6,
		GL_COLOR_ATTACHMENT7 = 0x8CE7,
		GL_COLOR_ATTACHMENT8 = 0x8CE8,
		GL_COLOR_ATTACHMENT9 = 0x8CE9,
		GL_COLOR_ATTACHMENT10 = 0x8CEA,
		GL_COLOR_ATTACHMENT11 = 0x8CEB,
		GL_COLOR_ATTACHMENT12 = 0x8CEC,
		GL_COLOR_ATTACHMENT13 = 0x8CED,
		GL_COLOR_ATTACHMENT14 = 0x8CEE,
		GL_COLOR_ATTACHMENT15 = 0x8CEF,
		GL_COLOR_ATTACHMENT16 = 0x8CF0,
		GL_COLOR_ATTACHMENT17 = 0x8CF1,
		GL_COLOR_ATTACHMENT18 = 0x8CF2,
		GL_COLOR_ATTACHMENT19 = 0x8CF3,
		GL_COLOR_ATTACHMENT20 = 0x8CF4,
		GL_COLOR_ATTACHMENT21 = 0x8CF5,
		GL_COLOR_ATTACHMENT22 = 0x8CF6,
		GL_COLOR_ATTACHMENT23 = 0x8CF7,
		GL_COLOR_ATTACHMENT24 = 0x8CF8,
		GL_COLOR_ATTACHMENT25 = 0x8CF9,
		GL_COLOR_ATTACHMENT26 = 0x8CFA,
		GL_COLOR_ATTACHMENT27 = 0x8CFB,
		GL_COLOR_ATTACHMENT28 = 0x8CFC,
		GL_COLOR_ATTACHMENT29 = 0x8CFD,
		GL_COLOR_ATTACHMENT30 = 0x8CFE,
		GL_COLOR_ATTACHMENT31 = 0x8CFF,
		GL_DEPTH_ATTACHMENT = 0x8D00,
		GL_STENCIL_ATTACHMENT = 0x8D20,
		GL_FRAMEBUFFER = 0x8D40,
		GL_RENDERBUFFER = 0x8D41,
		GL_RENDERBUFFER_WIDTH = 0x8D42,
		GL_RENDERBUFFER_HEIGHT = 0x8D43,
		GL_RENDERBUFFER_INTERNAL_FORMAT = 0x8D44,
		GL_STENCIL_INDEX1 = 0x8D46,
		GL_STENCIL_INDEX4 = 0x8D47,
		GL_STENCIL_INDEX8 = 0x8D48,
		GL_STENCIL_INDEX16 = 0x8D49,
		GL_RENDERBUFFER_RED_SIZE = 0x8D50,
		GL_RENDERBUFFER_GREEN_SIZE = 0x8D51,
		GL_RENDERBUFFER_BLUE_SIZE = 0x8D52,
		GL_RENDERBUFFER_ALPHA_SIZE = 0x8D53,
		GL_RENDERBUFFER_DEPTH_SIZE = 0x8D54,
		GL_RENDERBUFFER_STENCIL_SIZE = 0x8D55,
		GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE = 0x8D56,
		GL_MAX_SAMPLES = 0x8D57,
		GL_FRAMEBUFFER_SRGB = 0x8DB9,
		GL_HALF_FLOAT = 0x140B,
		GL_COMPRESSED_RED_RGTC1 = 0x8DBB,
		GL_COMPRESSED_SIGNED_RED_RGTC1 = 0x8DBC,
		GL_COMPRESSED_RG_RGTC2 = 0x8DBD,
		GL_COMPRESSED_SIGNED_RG_RGTC2 = 0x8DBE,
		GL_RG = 0x8227,
		GL_RG_INTEGER = 0x8228,
		GL_R8 = 0x8229,
		GL_R16 = 0x822A,
		GL_RG8 = 0x822B,
		GL_RG16 = 0x822C,
		GL_R16F = 0x822D,
		GL_R32F = 0x822E,
		GL_RG16F = 0x822F,
		GL_RG32F = 0x8230,
		GL_R8I = 0x8231,
		GL_R8UI = 0x8232,
		GL_R16I = 0x8233,
		GL_R16UI = 0x8234,
		GL_R32I = 0x8235,
		GL_R32UI = 0x8236,
		GL_RG8I = 0x8237,
		GL_RG8UI = 0x8238,
		GL_RG16I = 0x8239,
		GL_RG16UI = 0x823A,
		GL_RG32I = 0x823B,
		GL_RG32UI = 0x823C,
		GL_VERTEX_ARRAY_BINDING = 0x85B5,
		GL_SAMPLER_2D_RECT = 0x8B63,
		GL_SAMPLER_2D_RECT_SHADOW = 0x8B64,
		GL_SAMPLER_BUFFER = 0x8DC2,
		GL_INT_SAMPLER_2D_RECT = 0x8DCD,
		GL_INT_SAMPLER_BUFFER = 0x8DD0,
		GL_UNSIGNED_INT_SAMPLER_2D_RECT = 0x8DD5,
		GL_UNSIGNED_INT_SAMPLER_BUFFER = 0x8DD8,
		GL_TEXTURE_BUFFER = 0x8C2A,
		GL_MAX_TEXTURE_BUFFER_SIZE = 0x8C2B,
		GL_TEXTURE_BINDING_BUFFER = 0x8C2C,
		GL_TEXTURE_BUFFER_DATA_STORE_BINDING = 0x8C2D,
		GL_TEXTURE_RECTANGLE = 0x84F5,
		GL_TEXTURE_BINDING_RECTANGLE = 0x84F6,
		GL_PROXY_TEXTURE_RECTANGLE = 0x84F7,
		GL_MAX_RECTANGLE_TEXTURE_SIZE = 0x84F8,
		GL_R8_SNORM = 0x8F94,
		GL_RG8_SNORM = 0x8F95,
		GL_RGB8_SNORM = 0x8F96,
		GL_RGBA8_SNORM = 0x8F97,
		GL_R16_SNORM = 0x8F98,
		GL_RG16_SNORM = 0x8F99,
		GL_RGB16_SNORM = 0x8F9A,
		GL_RGBA16_SNORM = 0x8F9B,
		GL_SIGNED_NORMALIZED = 0x8F9C,
		GL_PRIMITIVE_RESTART = 0x8F9D,
		GL_PRIMITIVE_RESTART_INDEX = 0x8F9E,
		GL_COPY_READ_BUFFER = 0x8F36,
		GL_COPY_WRITE_BUFFER = 0x8F37,
		GL_UNIFORM_BUFFER = 0x8A11,
		GL_UNIFORM_BUFFER_BINDING = 0x8A28,
		GL_UNIFORM_BUFFER_START = 0x8A29,
		GL_UNIFORM_BUFFER_SIZE = 0x8A2A,
		GL_MAX_VERTEX_UNIFORM_BLOCKS = 0x8A2B,
		GL_MAX_GEOMETRY_UNIFORM_BLOCKS = 0x8A2C,
		GL_MAX_FRAGMENT_UNIFORM_BLOCKS = 0x8A2D,
		GL_MAX_COMBINED_UNIFORM_BLOCKS = 0x8A2E,
		GL_MAX_UNIFORM_BUFFER_BINDINGS = 0x8A2F,
		GL_MAX_UNIFORM_BLOCK_SIZE = 0x8A30,
		GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS = 0x8A31,
		GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS = 0x8A32,
		GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS = 0x8A33,
		GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT = 0x8A34,
		GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH = 0x8A35,
		GL_ACTIVE_UNIFORM_BLOCKS = 0x8A36,
		GL_UNIFORM_TYPE = 0x8A37,
		GL_UNIFORM_SIZE = 0x8A38,
		GL_UNIFORM_NAME_LENGTH = 0x8A39,
		GL_UNIFORM_BLOCK_INDEX = 0x8A3A,
		GL_UNIFORM_OFFSET = 0x8A3B,
		GL_UNIFORM_ARRAY_STRIDE = 0x8A3C,
		GL_UNIFORM_MATRIX_STRIDE = 0x8A3D,
		GL_UNIFORM_IS_ROW_MAJOR = 0x8A3E,
		GL_UNIFORM_BLOCK_BINDING = 0x8A3F,
		GL_UNIFORM_BLOCK_DATA_SIZE = 0x8A40,
		GL_UNIFORM_BLOCK_NAME_LENGTH = 0x8A41,
		GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS = 0x8A42,
		GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES = 0x8A43,
		GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER = 0x8A44,
		GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER = 0x8A45,
		GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER = 0x8A46,
		GL_INVALID_INDEX = 0xFFFFFFFFu,
		GL_PROGRAM_POINT_SIZE = 0x8642,
		GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS = 0x8C29,
		GL_FRAMEBUFFER_ATTACHMENT_LAYERED = 0x8DA7,
		GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS = 0x8DA8,
		GL_GEOMETRY_SHADER = 0x8DD9,
		GL_GEOMETRY_VERTICES_OUT = 0x8916,
		GL_GEOMETRY_INPUT_TYPE = 0x8917,
		GL_GEOMETRY_OUTPUT_TYPE = 0x8918,
		GL_MAX_GEOMETRY_UNIFORM_COMPONENTS = 0x8DDF,
		GL_MAX_GEOMETRY_OUTPUT_VERTICES = 0x8DE0,
		GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS = 0x8DE1,
		GL_MAX_VERTEX_OUTPUT_COMPONENTS = 0x9122,
		GL_MAX_GEOMETRY_INPUT_COMPONENTS = 0x9123,
		GL_MAX_GEOMETRY_OUTPUT_COMPONENTS = 0x9124,
		GL_MAX_FRAGMENT_INPUT_COMPONENTS = 0x9125,
		GL_CONTEXT_PROFILE_MASK = 0x9126,
		GL_DEPTH_CLAMP = 0x864F,
		GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION = 0x8E4C,
		GL_FIRST_VERTEX_CONVENTION = 0x8E4D,
		GL_LAST_VERTEX_CONVENTION = 0x8E4E,
		GL_PROVOKING_VERTEX = 0x8E4F,
		GL_TEXTURE_CUBE_MAP_SEAMLESS = 0x884F,
		GL_MAX_SERVER_WAIT_TIMEOUT = 0x9111,
		GL_OBJECT_TYPE = 0x9112,
		GL_SYNC_CONDITION = 0x9113,
		GL_SYNC_STATUS = 0x9114,
		GL_SYNC_FLAGS = 0x9115,
		GL_SYNC_FENCE = 0x9116,
		GL_SYNC_GPU_COMMANDS_COMPLETE = 0x9117,
		GL_UNSIGNALED = 0x9118,
		GL_SIGNALED = 0x9119,
		GL_ALREADY_SIGNALED = 0x911A,
		GL_TIMEOUT_EXPIRED = 0x911B,
		GL_CONDITION_SATISFIED = 0x911C,
		GL_WAIT_FAILED = 0x911D,
		GL_TIMEOUT_IGNORED = 0xFFFFFFFFFFFFFFFFull,
		GL_SYNC_FLUSH_COMMANDS_BIT = 0x00000001,
		GL_SAMPLE_POSITION = 0x8E50,
		GL_SAMPLE_MASK = 0x8E51,
		GL_SAMPLE_MASK_VALUE = 0x8E52,
		GL_MAX_SAMPLE_MASK_WORDS = 0x8E59,
		GL_TEXTURE_2D_MULTISAMPLE = 0x9100,
		GL_PROXY_TEXTURE_2D_MULTISAMPLE = 0x9101,
		GL_TEXTURE_2D_MULTISAMPLE_ARRAY = 0x9102,
		GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY = 0x9103,
		GL_TEXTURE_BINDING_2D_MULTISAMPLE = 0x9104,
		GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY = 0x9105,
		GL_TEXTURE_SAMPLES = 0x9106,
		GL_TEXTURE_FIXED_SAMPLE_LOCATIONS = 0x9107,
		GL_SAMPLER_2D_MULTISAMPLE = 0x9108,
		GL_INT_SAMPLER_2D_MULTISAMPLE = 0x9109,
		GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE = 0x910A,
		GL_SAMPLER_2D_MULTISAMPLE_ARRAY = 0x910B,
		GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY = 0x910C,
		GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY = 0x910D,
		GL_MAX_COLOR_TEXTURE_SAMPLES = 0x910E,
		GL_MAX_DEPTH_TEXTURE_SAMPLES = 0x910F,
		GL_MAX_INTEGER_SAMPLES = 0x9110,
		GL_VERTEX_ATTRIB_ARRAY_DIVISOR = 0x88FE,
		GL_SRC1_COLOR = 0x88F9,
		GL_ONE_MINUS_SRC1_COLOR = 0x88FA,
		GL_ONE_MINUS_SRC1_ALPHA = 0x88FB,
		GL_MAX_DUAL_SOURCE_DRAW_BUFFERS = 0x88FC,
		GL_ANY_SAMPLES_PASSED = 0x8C2F,
		GL_SAMPLER_BINDING = 0x8919,
		GL_RGB10_A2UI = 0x906F,
		GL_TEXTURE_SWIZZLE_R = 0x8E42,
		GL_TEXTURE_SWIZZLE_G = 0x8E43,
		GL_TEXTURE_SWIZZLE_B = 0x8E44,
		GL_TEXTURE_SWIZZLE_A = 0x8E45,
		GL_TEXTURE_SWIZZLE_RGBA = 0x8E46,
		GL_TIME_ELAPSED = 0x88BF,
		GL_TIMESTAMP = 0x8E28,
		GL_INT_2_10_10_10_REV = 0x8D9F,
	};
	
	extern void (*glActiveTexture)(GLenum texture);
	extern void (*glAttachShader)(GLuint program, GLuint shader);
	extern void (*glBeginConditionalRender)(GLuint id, GLenum mode);
	extern void (*glBeginQuery)(GLenum target, GLuint id);
	extern void (*glBeginTransformFeedback)(GLenum primitiveMode);
	extern void (*glBindAttribLocation)(GLuint program, GLuint index, const GLchar *name);
	extern void (*glBindBuffer)(GLenum target, GLuint buffer);
	extern void (*glBindBufferBase)(GLenum target, GLuint index, GLuint buffer);
	extern void (*glBindBufferRange)(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
	extern void (*glBindFragDataLocation)(GLuint program, GLuint color, const GLchar *name);
	extern void (*glBindFragDataLocationIndexed)(GLuint program, GLuint colorNumber, GLuint index, const GLchar *name);
	extern void (*glBindFramebuffer)(GLenum target, GLuint framebuffer);
	extern void (*glBindRenderbuffer)(GLenum target, GLuint renderbuffer);
	extern void (*glBindSampler)(GLuint unit, GLuint sampler);
	extern void (*glBindTexture)(GLenum target, GLuint texture);
	extern void (*glBindVertexArray)(GLuint array);
	extern void (*glBlendColor)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
	extern void (*glBlendEquation)(GLenum mode);
	extern void (*glBlendEquationSeparate)(GLenum modeRGB, GLenum modeAlpha);
	extern void (*glBlendFunc)(GLenum sfactor, GLenum dfactor);
	extern void (*glBlendFuncSeparate)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
	extern void (*glBlitFramebuffer)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
	extern void (*glBufferData)(GLenum target, GLsizeiptr size, const void *data, GLenum usage);
	extern void (*glBufferSubData)(GLenum target, GLintptr offset, GLsizeiptr size, const void *data);
	extern GLenum (*glCheckFramebufferStatus)(GLenum target);
	extern void (*glClampColor)(GLenum target, GLenum clamp);
	extern void (*glClear)(GLbitfield mask);
	extern void (*glClearBufferfi)(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
	extern void (*glClearBufferfv)(GLenum buffer, GLint drawbuffer, const GLfloat *value);
	extern void (*glClearBufferiv)(GLenum buffer, GLint drawbuffer, const GLint *value);
	extern void (*glClearBufferuiv)(GLenum buffer, GLint drawbuffer, const GLuint *value);
	extern void (*glClearColor)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
	extern void (*glClearDepth)(GLdouble depth);
	extern void (*glClearStencil)(GLint s);
	extern GLenum (*glClientWaitSync)(GLsync sync, GLbitfield flags, GLuint64 timeout);
	extern void (*glColorMask)(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
	extern void (*glColorMaski)(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
	extern void (*glCompileShader)(GLuint shader);
	extern void (*glCompressedTexImage1D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data);
	extern void (*glCompressedTexImage2D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data);
	extern void (*glCompressedTexImage3D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data);
	extern void (*glCompressedTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
	extern void (*glCompressedTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
	extern void (*glCompressedTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
	extern void (*glCopyBufferSubData)(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
	extern void (*glCopyTexImage1D)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
	extern void (*glCopyTexImage2D)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
	extern void (*glCopyTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
	extern void (*glCopyTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
	extern void (*glCopyTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
	extern GLuint (*glCreateProgram)();
	extern GLuint (*glCreateShader)(GLenum type);
	extern void (*glCullFace)(GLenum mode);
	extern void (*glDeleteBuffers)(GLsizei n, const GLuint *buffers);
	extern void (*glDeleteFramebuffers)(GLsizei n, const GLuint *framebuffers);
	extern void (*glDeleteProgram)(GLuint program);
	extern void (*glDeleteQueries)(GLsizei n, const GLuint *ids);
	extern void (*glDeleteRenderbuffers)(GLsizei n, const GLuint *renderbuffers);
	extern void (*glDeleteSamplers)(GLsizei count, const GLuint *samplers);
	extern void (*glDeleteShader)(GLuint shader);
	extern void (*glDeleteSync)(GLsync sync);
	extern void (*glDeleteTextures)(GLsizei n, const GLuint *textures);
	extern void (*glDeleteVertexArrays)(GLsizei n, const GLuint *arrays);
	extern void (*glDepthFunc)(GLenum func);
	extern void (*glDepthMask)(GLboolean flag);
	extern void (*glDepthRange)(GLdouble near, GLdouble far);
	extern void (*glDetachShader)(GLuint program, GLuint shader);
	extern void (*glDisable)(GLenum cap);
	extern void (*glDisableVertexAttribArray)(GLuint index);
	extern void (*glDisablei)(GLenum target, GLuint index);
	extern void (*glDrawArrays)(GLenum mode, GLint first, GLsizei count);
	extern void (*glDrawArraysInstanced)(GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
	extern void (*glDrawBuffer)(GLenum buf);
	extern void (*glDrawBuffers)(GLsizei n, const GLenum *bufs);
	extern void (*glDrawElements)(GLenum mode, GLsizei count, GLenum type, const void *indices);
	extern void (*glDrawElementsBaseVertex)(GLenum mode, GLsizei count, GLenum type, const void *indices, GLint basevertex);
	extern void (*glDrawElementsInstanced)(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount);
	extern void (*glDrawElementsInstancedBaseVertex)(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex);
	extern void (*glDrawRangeElements)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices);
	extern void (*glDrawRangeElementsBaseVertex)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices, GLint basevertex);
	extern void (*glEnable)(GLenum cap);
	extern void (*glEnableVertexAttribArray)(GLuint index);
	extern void (*glEnablei)(GLenum target, GLuint index);
	extern void (*glEndConditionalRender)();
	extern void (*glEndQuery)(GLenum target);
	extern void (*glEndTransformFeedback)();
	extern GLsync (*glFenceSync)(GLenum condition, GLbitfield flags);
	extern void (*glFinish)();
	extern void (*glFlush)();
	extern void (*glFlushMappedBufferRange)(GLenum target, GLintptr offset, GLsizeiptr length);
	extern void (*glFramebufferRenderbuffer)(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
	extern void (*glFramebufferTexture)(GLenum target, GLenum attachment, GLuint texture, GLint level);
	extern void (*glFramebufferTexture1D)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
	extern void (*glFramebufferTexture2D)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
	extern void (*glFramebufferTexture3D)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
	extern void (*glFramebufferTextureLayer)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
	extern void (*glFrontFace)(GLenum mode);
	extern void (*glGenBuffers)(GLsizei n, GLuint *buffers);
	extern void (*glGenFramebuffers)(GLsizei n, GLuint *framebuffers);
	extern void (*glGenQueries)(GLsizei n, GLuint *ids);
	extern void (*glGenRenderbuffers)(GLsizei n, GLuint *renderbuffers);
	extern void (*glGenSamplers)(GLsizei count, GLuint *samplers);
	extern void (*glGenTextures)(GLsizei n, GLuint *textures);
	extern void (*glGenVertexArrays)(GLsizei n, GLuint *arrays);
	extern void (*glGenerateMipmap)(GLenum target);
	extern void (*glGetActiveAttrib)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
	extern void (*glGetActiveUniform)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
	extern void (*glGetActiveUniformBlockName)(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName);
	extern void (*glGetActiveUniformBlockiv)(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params);
	extern void (*glGetActiveUniformName)(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName);
	extern void (*glGetActiveUniformsiv)(GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params);
	extern void (*glGetAttachedShaders)(GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders);
	extern GLint (*glGetAttribLocation)(GLuint program, const GLchar *name);
	extern void (*glGetBooleani_v)(GLenum target, GLuint index, GLboolean *data);
	extern void (*glGetBooleanv)(GLenum pname, GLboolean *data);
	extern void (*glGetBufferParameteri64v)(GLenum target, GLenum pname, GLint64 *params);
	extern void (*glGetBufferParameteriv)(GLenum target, GLenum pname, GLint *params);
	extern void (*glGetBufferPointerv)(GLenum target, GLenum pname, void **params);
	extern void (*glGetBufferSubData)(GLenum target, GLintptr offset, GLsizeiptr size, void *data);
	extern void (*glGetCompressedTexImage)(GLenum target, GLint level, void *img);
	extern void (*glGetDoublev)(GLenum pname, GLdouble *data);
	extern GLenum (*glGetError)();
	extern void (*glGetFloatv)(GLenum pname, GLfloat *data);
	extern GLint (*glGetFragDataIndex)(GLuint program, const GLchar *name);
	extern GLint (*glGetFragDataLocation)(GLuint program, const GLchar *name);
	extern void (*glGetFramebufferAttachmentParameteriv)(GLenum target, GLenum attachment, GLenum pname, GLint *params);
	extern void (*glGetInteger64i_v)(GLenum target, GLuint index, GLint64 *data);
	extern void (*glGetInteger64v)(GLenum pname, GLint64 *data);
	extern void (*glGetIntegeri_v)(GLenum target, GLuint index, GLint *data);
	extern void (*glGetIntegerv)(GLenum pname, GLint *data);
	extern void (*glGetMultisamplefv)(GLenum pname, GLuint index, GLfloat *val);
	extern void (*glGetProgramInfoLog)(GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
	extern void (*glGetProgramiv)(GLuint program, GLenum pname, GLint *params);
	extern void (*glGetQueryObjecti64v)(GLuint id, GLenum pname, GLint64 *params);
	extern void (*glGetQueryObjectiv)(GLuint id, GLenum pname, GLint *params);
	extern void (*glGetQueryObjectui64v)(GLuint id, GLenum pname, GLuint64 *params);
	extern void (*glGetQueryObjectuiv)(GLuint id, GLenum pname, GLuint *params);
	extern void (*glGetQueryiv)(GLenum target, GLenum pname, GLint *params);
	extern void (*glGetRenderbufferParameteriv)(GLenum target, GLenum pname, GLint *params);
	extern void (*glGetSamplerParameterIiv)(GLuint sampler, GLenum pname, GLint *params);
	extern void (*glGetSamplerParameterIuiv)(GLuint sampler, GLenum pname, GLuint *params);
	extern void (*glGetSamplerParameterfv)(GLuint sampler, GLenum pname, GLfloat *params);
	extern void (*glGetSamplerParameteriv)(GLuint sampler, GLenum pname, GLint *params);
	extern void (*glGetShaderInfoLog)(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
	extern void (*glGetShaderSource)(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source);
	extern void (*glGetShaderiv)(GLuint shader, GLenum pname, GLint *params);
	extern const GLubyte *(*glGetString)(GLenum name);
	extern const GLubyte *(*glGetStringi)(GLenum name, GLuint index);
	extern void (*glGetSynciv)(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values);
	extern void (*glGetTexImage)(GLenum target, GLint level, GLenum format, GLenum type, void *pixels);
	extern void (*glGetTexLevelParameterfv)(GLenum target, GLint level, GLenum pname, GLfloat *params);
	extern void (*glGetTexLevelParameteriv)(GLenum target, GLint level, GLenum pname, GLint *params);
	extern void (*glGetTexParameterIiv)(GLenum target, GLenum pname, GLint *params);
	extern void (*glGetTexParameterIuiv)(GLenum target, GLenum pname, GLuint *params);
	extern void (*glGetTexParameterfv)(GLenum target, GLenum pname, GLfloat *params);
	extern void (*glGetTexParameteriv)(GLenum target, GLenum pname, GLint *params);
	extern void (*glGetTransformFeedbackVarying)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
	extern GLuint (*glGetUniformBlockIndex)(GLuint program, const GLchar *uniformBlockName);
	extern void (*glGetUniformIndices)(GLuint program, GLsizei uniformCount, const GLchar *const*uniformNames, GLuint *uniformIndices);
	extern GLint (*glGetUniformLocation)(GLuint program, const GLchar *name);
	extern void (*glGetUniformfv)(GLuint program, GLint location, GLfloat *params);
	extern void (*glGetUniformiv)(GLuint program, GLint location, GLint *params);
	extern void (*glGetUniformuiv)(GLuint program, GLint location, GLuint *params);
	extern void (*glGetVertexAttribIiv)(GLuint index, GLenum pname, GLint *params);
	extern void (*glGetVertexAttribIuiv)(GLuint index, GLenum pname, GLuint *params);
	extern void (*glGetVertexAttribPointerv)(GLuint index, GLenum pname, void **pointer);
	extern void (*glGetVertexAttribdv)(GLuint index, GLenum pname, GLdouble *params);
	extern void (*glGetVertexAttribfv)(GLuint index, GLenum pname, GLfloat *params);
	extern void (*glGetVertexAttribiv)(GLuint index, GLenum pname, GLint *params);
	extern void (*glHint)(GLenum target, GLenum mode);
	extern GLboolean (*glIsBuffer)(GLuint buffer);
	extern GLboolean (*glIsEnabled)(GLenum cap);
	extern GLboolean (*glIsEnabledi)(GLenum target, GLuint index);
	extern GLboolean (*glIsFramebuffer)(GLuint framebuffer);
	extern GLboolean (*glIsProgram)(GLuint program);
	extern GLboolean (*glIsQuery)(GLuint id);
	extern GLboolean (*glIsRenderbuffer)(GLuint renderbuffer);
	extern GLboolean (*glIsSampler)(GLuint sampler);
	extern GLboolean (*glIsShader)(GLuint shader);
	extern GLboolean (*glIsSync)(GLsync sync);
	extern GLboolean (*glIsTexture)(GLuint texture);
	extern GLboolean (*glIsVertexArray)(GLuint array);
	extern void (*glLineWidth)(GLfloat width);
	extern void (*glLinkProgram)(GLuint program);
	extern void (*glLogicOp)(GLenum opcode);
	extern void *(*glMapBuffer)(GLenum target, GLenum access);
	extern void *(*glMapBufferRange)(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
	extern void (*glMultiDrawArrays)(GLenum mode, const GLint *first, const GLsizei *count, GLsizei drawcount);
	extern void (*glMultiDrawElements)(GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount);
	extern void (*glMultiDrawElementsBaseVertex)(GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount, const GLint *basevertex);
	extern void (*glPixelStoref)(GLenum pname, GLfloat param);
	extern void (*glPixelStorei)(GLenum pname, GLint param);
	extern void (*glPointParameterf)(GLenum pname, GLfloat param);
	extern void (*glPointParameterfv)(GLenum pname, const GLfloat *params);
	extern void (*glPointParameteri)(GLenum pname, GLint param);
	extern void (*glPointParameteriv)(GLenum pname, const GLint *params);
	extern void (*glPointSize)(GLfloat size);
	extern void (*glPolygonMode)(GLenum face, GLenum mode);
	extern void (*glPolygonOffset)(GLfloat factor, GLfloat units);
	extern void (*glPrimitiveRestartIndex)(GLuint index);
	extern void (*glProvokingVertex)(GLenum mode);
	extern void (*glQueryCounter)(GLuint id, GLenum target);
	extern void (*glReadBuffer)(GLenum src);
	extern void (*glReadPixels)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void *pixels);
	extern void (*glRenderbufferStorage)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
	extern void (*glRenderbufferStorageMultisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
	extern void (*glSampleCoverage)(GLfloat value, GLboolean invert);
	extern void (*glSampleMaski)(GLuint maskNumber, GLbitfield mask);
	extern void (*glSamplerParameterIiv)(GLuint sampler, GLenum pname, const GLint *param);
	extern void (*glSamplerParameterIuiv)(GLuint sampler, GLenum pname, const GLuint *param);
	extern void (*glSamplerParameterf)(GLuint sampler, GLenum pname, GLfloat param);
	extern void (*glSamplerParameterfv)(GLuint sampler, GLenum pname, const GLfloat *param);
	extern void (*glSamplerParameteri)(GLuint sampler, GLenum pname, GLint param);
	extern void (*glSamplerParameteriv)(GLuint sampler, GLenum pname, const GLint *param);
	extern void (*glScissor)(GLint x, GLint y, GLsizei width, GLsizei height);
	extern void (*glShaderSource)(GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length);
	extern void (*glStencilFunc)(GLenum func, GLint ref, GLuint mask);
	extern void (*glStencilFuncSeparate)(GLenum face, GLenum func, GLint ref, GLuint mask);
	extern void (*glStencilMask)(GLuint mask);
	extern void (*glStencilMaskSeparate)(GLenum face, GLuint mask);
	extern void (*glStencilOp)(GLenum fail, GLenum zfail, GLenum zpass);
	extern void (*glStencilOpSeparate)(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
	extern void (*glTexBuffer)(GLenum target, GLenum internalformat, GLuint buffer);
	extern void (*glTexImage1D)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels);
	extern void (*glTexImage2D)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels);
	extern void (*glTexImage2DMultisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
	extern void (*glTexImage3D)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
	extern void (*glTexImage3DMultisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
	extern void (*glTexParameterIiv)(GLenum target, GLenum pname, const GLint *params);
	extern void (*glTexParameterIuiv)(GLenum target, GLenum pname, const GLuint *params);
	extern void (*glTexParameterf)(GLenum target, GLenum pname, GLfloat param);
	extern void (*glTexParameterfv)(GLenum target, GLenum pname, const GLfloat *params);
	extern void (*glTexParameteri)(GLenum target, GLenum pname, GLint param);
	extern void (*glTexParameteriv)(GLenum target, GLenum pname, const GLint *params);
	extern void (*glTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
	extern void (*glTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
	extern void (*glTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
	extern void (*glTransformFeedbackVaryings)(GLuint program, GLsizei count, const GLchar *const*varyings, GLenum bufferMode);
	extern void (*glUniform1f)(GLint location, GLfloat v0);
	extern void (*glUniform1fv)(GLint location, GLsizei count, const GLfloat *value);
	extern void (*glUniform1i)(GLint location, GLint v0);
	extern void (*glUniform1iv)(GLint location, GLsizei count, const GLint *value);
	extern void (*glUniform1ui)(GLint location, GLuint v0);
	extern void (*glUniform1uiv)(GLint location, GLsizei count, const GLuint *value);
	extern void (*glUniform2f)(GLint location, GLfloat v0, GLfloat v1);
	extern void (*glUniform2fv)(GLint location, GLsizei count, const GLfloat *value);
	extern void (*glUniform2i)(GLint location, GLint v0, GLint v1);
	extern void (*glUniform2iv)(GLint location, GLsizei count, const GLint *value);
	extern void (*glUniform2ui)(GLint location, GLuint v0, GLuint v1);
	extern void (*glUniform2uiv)(GLint location, GLsizei count, const GLuint *value);
	extern void (*glUniform3f)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
	extern void (*glUniform3fv)(GLint location, GLsizei count, const GLfloat *value);
	extern void (*glUniform3i)(GLint location, GLint v0, GLint v1, GLint v2);
	extern void (*glUniform3iv)(GLint location, GLsizei count, const GLint *value);
	extern void (*glUniform3ui)(GLint location, GLuint v0, GLuint v1, GLuint v2);
	extern void (*glUniform3uiv)(GLint location, GLsizei count, const GLuint *value);
	extern void (*glUniform4f)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
	extern void (*glUniform4fv)(GLint location, GLsizei count, const GLfloat *value);
	extern void (*glUniform4i)(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
	extern void (*glUniform4iv)(GLint location, GLsizei count, const GLint *value);
	extern void (*glUniform4ui)(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
	extern void (*glUniform4uiv)(GLint location, GLsizei count, const GLuint *value);
	extern void (*glUniformBlockBinding)(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
	extern void (*glUniformMatrix2fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glUniformMatrix2x3fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glUniformMatrix2x4fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glUniformMatrix3fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glUniformMatrix3x2fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glUniformMatrix3x4fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glUniformMatrix4fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glUniformMatrix4x2fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glUniformMatrix4x3fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern GLboolean (*glUnmapBuffer)(GLenum target);
	extern void (*glUseProgram)(GLuint program);
	extern void (*glValidateProgram)(GLuint program);
	extern void (*glVertexAttrib1d)(GLuint index, GLdouble x);
	extern void (*glVertexAttrib1dv)(GLuint index, const GLdouble *v);
	extern void (*glVertexAttrib1f)(GLuint index, GLfloat x);
	extern void (*glVertexAttrib1fv)(GLuint index, const GLfloat *v);
	extern void (*glVertexAttrib1s)(GLuint index, GLshort x);
	extern void (*glVertexAttrib1sv)(GLuint index, const GLshort *v);
	extern void (*glVertexAttrib2d)(GLuint index, GLdouble x, GLdouble y);
	extern void (*glVertexAttrib2dv)(GLuint index, const GLdouble *v);
	extern void (*glVertexAttrib2f)(GLuint index, GLfloat x, GLfloat y);
	extern void (*glVertexAttrib2fv)(GLuint index, const GLfloat *v);
	extern void (*glVertexAttrib2s)(GLuint index, GLshort x, GLshort y);
	extern void (*glVertexAttrib2sv)(GLuint index, const GLshort *v);
	extern void (*glVertexAttrib3d)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
	extern void (*glVertexAttrib3dv)(GLuint index, const GLdouble *v);
	extern void (*glVertexAttrib3f)(GLuint index, GLfloat x, GLfloat y, GLfloat z);
	extern void (*glVertexAttrib3fv)(GLuint index, const GLfloat *v);
	extern void (*glVertexAttrib3s)(GLuint index, GLshort x, GLshort y, GLshort z);
	extern void (*glVertexAttrib3sv)(GLuint index, const GLshort *v);
	extern void (*glVertexAttrib4Nbv)(GLuint index, const GLbyte *v);
	extern void (*glVertexAttrib4Niv)(GLuint index, const GLint *v);
	extern void (*glVertexAttrib4Nsv)(GLuint index, const GLshort *v);
	extern void (*glVertexAttrib4Nub)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
	extern void (*glVertexAttrib4Nubv)(GLuint index, const GLubyte *v);
	extern void (*glVertexAttrib4Nuiv)(GLuint index, const GLuint *v);
	extern void (*glVertexAttrib4Nusv)(GLuint index, const GLushort *v);
	extern void (*glVertexAttrib4bv)(GLuint index, const GLbyte *v);
	extern void (*glVertexAttrib4d)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
	extern void (*glVertexAttrib4dv)(GLuint index, const GLdouble *v);
	extern void (*glVertexAttrib4f)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
	extern void (*glVertexAttrib4fv)(GLuint index, const GLfloat *v);
	extern void (*glVertexAttrib4iv)(GLuint index, const GLint *v);
	extern void (*glVertexAttrib4s)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
	extern void (*glVertexAttrib4sv)(GLuint index, const GLshort *v);
	extern void (*glVertexAttrib4ubv)(GLuint index, const GLubyte *v);
	extern void (*glVertexAttrib4uiv)(GLuint index, const GLuint *v);
	extern void (*glVertexAttrib4usv)(GLuint index, const GLushort *v);
	extern void (*glVertexAttribDivisor)(GLuint index, GLuint divisor);
	extern void (*glVertexAttribI1i)(GLuint index, GLint x);
	extern void (*glVertexAttribI1iv)(GLuint index, const GLint *v);
	extern void (*glVertexAttribI1ui)(GLuint index, GLuint x);
	extern void (*glVertexAttribI1uiv)(GLuint index, const GLuint *v);
	extern void (*glVertexAttribI2i)(GLuint index, GLint x, GLint y);
	extern void (*glVertexAttribI2iv)(GLuint index, const GLint *v);
	extern void (*glVertexAttribI2ui)(GLuint index, GLuint x, GLuint y);
	extern void (*glVertexAttribI2uiv)(GLuint index, const GLuint *v);
	extern void (*glVertexAttribI3i)(GLuint index, GLint x, GLint y, GLint z);
	extern void (*glVertexAttribI3iv)(GLuint index, const GLint *v);
	extern void (*glVertexAttribI3ui)(GLuint index, GLuint x, GLuint y, GLuint z);
	extern void (*glVertexAttribI3uiv)(GLuint index, const GLuint *v);
	extern void (*glVertexAttribI4bv)(GLuint index, const GLbyte *v);
	extern void (*glVertexAttribI4i)(GLuint index, GLint x, GLint y, GLint z, GLint w);
	extern void (*glVertexAttribI4iv)(GLuint index, const GLint *v);
	extern void (*glVertexAttribI4sv)(GLuint index, const GLshort *v);
	extern void (*glVertexAttribI4ubv)(GLuint index, const GLubyte *v);
	extern void (*glVertexAttribI4ui)(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
	extern void (*glVertexAttribI4uiv)(GLuint index, const GLuint *v);
	extern void (*glVertexAttribI4usv)(GLuint index, const GLushort *v);
	extern void (*glVertexAttribIPointer)(GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
	extern void (*glVertexAttribP1ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
	extern void (*glVertexAttribP1uiv)(GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
	extern void (*glVertexAttribP2ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
	extern void (*glVertexAttribP2uiv)(GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
	extern void (*glVertexAttribP3ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
	extern void (*glVertexAttribP3uiv)(GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
	extern void (*glVertexAttribP4ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
	extern void (*glVertexAttribP4uiv)(GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
	extern void (*glVertexAttribPointer)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer);
	extern void (*glViewport)(GLint x, GLint y, GLsizei width, GLsizei height);
	extern void (*glWaitSync)(GLsync sync, GLbitfield flags, GLuint64 timeout);
	
	typedef void* (*GLFunctionLoader)(const char*);
	extern bool glLoadFunctions(const GLFunctionLoader &load);
	extern bool glLoadFunctions();
	template <typename P> inline bool glLoadFunctions(const P &proc) {
		return glLoadFunctions(reinterpret_cast<GLFunctionLoader>(proc));
	}
	
} // GL

#endif // _GL_CORE_3_3_HPP_
