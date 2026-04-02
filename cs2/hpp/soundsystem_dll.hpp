// Generated using https://github.com/ikhsanprasetyo/source2-dumper
// 2026-04-02 18:55:24.612541300 +07:00

#pragma once

#include <cstddef>
#include <cstdint>

namespace source2_dumper {
    namespace schemas {
        // Module: soundsystem.dll
        // Class count: 127
        // Enum count: 19
        namespace soundsystem_dll {
            // Alignment: 4
            // Member count: 2
            enum class EMode_t : uint32_t {
                Peak = 0x0,
                RMS = 0x1
            };
            // Alignment: 4
            // Member count: 39
            enum class VMixGraphCommandID_t : uint32_t {
                CMD_INVALID = 0xFFFFFFFF,
                CMD_CONTROL_INPUT_STORE = 0x1,
                CMD_CONTROL_INPUT_STORE_DB = 0x2,
                CMD_CONTROL_TRANSIENT_INPUT_STORE = 0x3,
                CMD_CONTROL_TRANSIENT_INPUT_RESET = 0x4,
                CMD_CONTROL_OUTPUT_STORE = 0x5,
                CMD_CONTROL_EVALUATE_CURVE = 0x6,
                CMD_CONTROL_COPY = 0x7,
                CMD_CONTROL_COND_COPY_IF_NEGATIVE = 0x8,
                CMD_CONTROL_REMAP_LINEAR = 0x9,
                CMD_CONTROL_REMAP_SINE = 0xA,
                CMD_CONTROL_REMAP_LOGLINEAR = 0xB,
                CMD_CONTROL_MAX = 0xC,
                CMD_CONTROL_RESET_TIMER = 0xD,
                CMD_CONTROL_INCREMENT_TIMER = 0xE,
                CMD_CONTROL_EVAL_ENVELOPE = 0xF,
                CMD_CONTROL_SINE_BLEND = 0x10,
                CMD_PROCESSOR_SET_CONTROL_VALUE = 0x11,
                CMD_PROCESSOR_SET_NAME_INPUT = 0x12,
                CMD_PROCESSOR_SET_CONTROL_ARRAYVALUE = 0x13,
                CMD_PROCESSOR_STORE_CONTROL_VALUE = 0x14,
                CMD_PROCESSOR_SET_VSND_VALUE = 0x15,
                CMD_SUBMIX_PROCESS = 0x16,
                CMD_SUBMIX_GENERATE = 0x17,
                CMD_SUBMIX_GENERATE_SIDECHAIN = 0x18,
                CMD_SUBMIX_DEBUG = 0x19,
                CMD_SUBMIX_MIX2x1 = 0x1A,
                CMD_SUBMIX_OUTPUT = 0x1B,
                CMD_SUBMIX_OUTPUTx2 = 0x1C,
                CMD_SUBMIX_COPY = 0x1D,
                CMD_SUBMIX_ACCUMULATE = 0x1E,
                CMD_SUBMIX_METER = 0x1F,
                CMD_SUBMIX_METER_SPECTRUM = 0x20,
                CMD_IMPULSERESPONSE_INPUT_STORE = 0x21,
                CMD_PROCESSOR_SET_IMPULSERESPONSE_VALUE = 0x22,
                CMD_REMAP_VSND_TO_IMPULSERESPONSE = 0x23,
                CMD_IMPULSERESPONSE_RESET = 0x24,
                CMD_BLEND_VSNDS_TO_IMPULSERESPONSE = 0x25,
                CMD_IMPULSERESPONSE_DELAY = 0x26
            };
            // Alignment: 1
            // Member count: 5
            enum class EWaveform : uint8_t {
                Sine = 0x0,
                Square = 0x1,
                Saw = 0x2,
                Triangle = 0x3,
                Noise = 0x4
            };
            // Alignment: 4
            // Member count: 5
            enum class VMixLFOShape_t : uint32_t {
                LFO_SHAPE_SINE = 0x0,
                LFO_SHAPE_SQUARE = 0x1,
                LFO_SHAPE_TRI = 0x2,
                LFO_SHAPE_SAW = 0x3,
                LFO_SHAPE_NOISE = 0x4
            };
            // Alignment: 2
            // Member count: 10
            enum class VMixFilterType_t : uint16_t {
                FILTER_UNKNOWN = 0xFFFF,
                FILTER_LOWPASS = 0x0,
                FILTER_HIGHPASS = 0x1,
                FILTER_BANDPASS = 0x2,
                FILTER_NOTCH = 0x3,
                FILTER_PEAKING_EQ = 0x4,
                FILTER_LOW_SHELF = 0x5,
                FILTER_HIGH_SHELF = 0x6,
                FILTER_ALLPASS = 0x7,
                FILTER_PASSTHROUGH = 0x8
            };
            // Alignment: 4
            // Member count: 3
            enum class SosActionStopType_t : uint32_t {
                SOS_STOPTYPE_NONE = 0x0,
                SOS_STOPTYPE_TIME = 0x1,
                SOS_STOPTYPE_OPVAR = 0x2
            };
            // Alignment: 4
            // Member count: 6
            enum class SosEditItemType_t : uint32_t {
                SOS_EDIT_ITEM_TYPE_SOUNDEVENTS = 0x0,
                SOS_EDIT_ITEM_TYPE_SOUNDEVENT = 0x1,
                SOS_EDIT_ITEM_TYPE_LIBRARYSTACKS = 0x2,
                SOS_EDIT_ITEM_TYPE_STACK = 0x3,
                SOS_EDIT_ITEM_TYPE_OPERATOR = 0x4,
                SOS_EDIT_ITEM_TYPE_FIELD = 0x5
            };
            // Alignment: 4
            // Member count: 5
            enum class PlayBackMode_t : uint32_t {
                Random = 0x0,
                RandomNoRepeats = 0x1,
                RandomAvoidLast = 0x2,
                Sequential = 0x3,
                RandomWeights = 0x4
            };
            // Alignment: 4
            // Member count: 3
            enum class SosGroupFieldBehavior_t : uint32_t {
                kIgnore = 0x0,
                kBranch = 0x1,
                kMatch = 0x2
            };
            // Alignment: 4
            // Member count: 30
            enum class soundlevel_t : uint32_t {
                SNDLVL_NONE = 0x0,
                SNDLVL_20dB = 0x14,
                SNDLVL_25dB = 0x19,
                SNDLVL_30dB = 0x1E,
                SNDLVL_35dB = 0x23,
                SNDLVL_40dB = 0x28,
                SNDLVL_45dB = 0x2D,
                SNDLVL_50dB = 0x32,
                SNDLVL_55dB = 0x37,
                SNDLVL_IDLE = 0x3C,
                SNDLVL_60dB = 0x3C,
                SNDLVL_65dB = 0x41,
                SNDLVL_STATIC = 0x42,
                SNDLVL_70dB = 0x46,
                SNDLVL_NORM = 0x4B,
                SNDLVL_75dB = 0x4B,
                SNDLVL_80dB = 0x50,
                SNDLVL_TALKING = 0x50,
                SNDLVL_85dB = 0x55,
                SNDLVL_90dB = 0x5A,
                SNDLVL_95dB = 0x5F,
                SNDLVL_100dB = 0x64,
                SNDLVL_105dB = 0x69,
                SNDLVL_110dB = 0x6E,
                SNDLVL_120dB = 0x78,
                SNDLVL_130dB = 0x82,
                SNDLVL_GUNFIRE = 0x8C,
                SNDLVL_140dB = 0x8C,
                SNDLVL_150dB = 0x96,
                SNDLVL_180dB = 0xB4
            };
            // Alignment: 4
            // Member count: 2
            enum class VMixPannerType_t : uint32_t {
                PANNER_TYPE_LINEAR = 0x0,
                PANNER_TYPE_EQUAL_POWER = 0x1
            };
            // Alignment: 4
            // Member count: 6
            enum class VMixChannelOperation_t : uint32_t {
                VMIX_CHAN_STEREO = 0x0,
                VMIX_CHAN_LEFT = 0x1,
                VMIX_CHAN_RIGHT = 0x2,
                VMIX_CHAN_SWAP = 0x3,
                VMIX_CHAN_MONO = 0x4,
                VMIX_CHAN_MID_SIDE = 0x5
            };
            // Alignment: 1
            // Member count: 13
            enum class EMidiNote : uint8_t {
                C = 0x0,
                C_Sharp = 0x1,
                D = 0x2,
                D_Sharp = 0x3,
                E = 0x4,
                F = 0x5,
                F_Sharp = 0x6,
                G = 0x7,
                G_Sharp = 0x8,
                A = 0x9,
                A_Sharp = 0xA,
                B = 0xB,
                Count = 0xC
            };
            // Alignment: 1
            // Member count: 4
            enum class CVSoundFormat_t : uint8_t {
                PCM16 = 0x0,
                PCM8 = 0x1,
                MP3 = 0x2,
                ADPCM = 0x3
            };
            // Alignment: 1
            // Member count: 9
            enum class VMixFilterSlope_t : uint8_t {
                FILTER_SLOPE_1POLE_6dB = 0x0,
                FILTER_SLOPE_1POLE_12dB = 0x1,
                FILTER_SLOPE_1POLE_18dB = 0x2,
                FILTER_SLOPE_1POLE_24dB = 0x3,
                FILTER_SLOPE_12dB = 0x4,
                FILTER_SLOPE_24dB = 0x5,
                FILTER_SLOPE_36dB = 0x6,
                FILTER_SLOPE_48dB = 0x7,
                FILTER_SLOPE_MAX = 0x7
            };
            // Alignment: 4
            // Member count: 2
            enum class SosActionLimitSortType_t : uint32_t {
                SOS_LIMIT_SORTTYPE_HIGHEST = 0x0,
                SOS_LIMIT_SORTTYPE_LOWEST = 0x1
            };
            // Alignment: 4
            // Member count: 3
            enum class VMixSubgraphSwitchInterpolationType_t : uint32_t {
                SUBGRAPH_INTERPOLATION_TEMPORAL_CROSSFADE = 0x0,
                SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT = 0x1,
                SUBGRAPH_INTERPOLATION_KEEP_LAST_SUBGRAPH_RUNNING = 0x2
            };
            // Alignment: 4
            // Member count: 2
            enum class SosGroupType_t : uint32_t {
                SOS_GROUPTYPE_DYNAMIC = 0x0,
                SOS_GROUPTYPE_STATIC = 0x1
            };
            // Alignment: 4
            // Member count: 2
            enum class SosActionSetParamSortType_t : uint32_t {
                SOS_SETPARAM_SORTTYPE_HIGHEST = 0x0,
                SOS_SETPARAM_SORTTYPE_LOWEST = 0x1
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // �&���
            // 
            // 
            namespace CVMixInputBase {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // p����
            // 
            // 
            // 
            // `յ��
            // ȿ���
            // ؿ���
            // 
            // @SH�� H��H�p�
            // H�\$H�t$WH��@H��@
            // H�\$WH�� H�ً�H���
            // @UATAWH��0HcE3�H�\$XL��H�t$`H��H�rH�|$hL�l$(L�-�c
            // ���������������H��)D
            // H�\$WH�� ���
            // �
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // @SH�� H��H�P�
            // L��
            // H�\$WH�� H����H���
            // H�\$H�l$H�t$ WATAUAVAWH�� L�rH�=�8
            // ���������������H��)D
            // H�\$H�t$WH�� H���
            // �
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // 
            // 
            // MPropertyFriendlyName
            // 
            // �����
            // 
            // �����
            // 
            // 
            // 
            // 
            // 
            // ����
            // �����
            // 
            // 
            // 
            // 
            // �
            // H��
            // 2��������������̰��������������H��)D
            // H�\$L�D$H�T$UVWATAUAVAWH��H��
            // @SH�� ��KF
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // 
            // 
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // 
            // �
            // H���
            // 2��������������̰��������������H��)D
            // H�\$VWATAUAWH��P���
            // @SH�� ��KF
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // ����
            // 0����
            // @����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // @SH�� H��H��
            // L��
            // H�\$WH�� H�ً�H���
            // H��UVATAUH��8���H��
            // ���������������H��)D
            // @SH�� ���
            // �
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // 
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // H�\$WH��0H��H������H��@
            // H���
            // 2��������������̰��������������H��)D
            // L��SUVWATH��`I�8�����M�kM��M�s�H��M�{�L��A�kH����
            // @SH�� ��KF
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // `#���
            // 
            // ����
            // 
            // 
            // 
            // 
            // 
            // �����
            // p ���
            // 
            // @SH�� H��H���
            // L�a�
            // H�\$WH�� H����H���
            // H�\$H�t$WH�� H���
            // ���������������H��)D
            // H�\$WH�� H���
            // �
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // 
            // 
            // 
            // �����
            // 
            // �����
            // 
            // 
            // MPropertyStartGroup
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // @����
            // h����
            // 
            // @����
            // �����
            // 
            // 
            // MPropertyStartGroup
            // MPropertyFriendlyName
            // 
            // 
            // MPropertySuppressExpr
            // MPropertyFriendlyName
            // MPropertySuppressExpr
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // 
            // H�\$H�t$H�|$UH��H��0H��H������H�wt
            // H�q
            // 2��������������̰��������������H��)D
            // H��SWAWH��
            // @SH�� ��KF
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // 
            // L��H�I��23
            // H��H�I��<3
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // �
            // H�\$H�l$H�t$WAVAWH��0H�L��L��H��H�IA��I��H�h� 
            // H��(H��P�@H��(��������������H�IH�H�`X�����M��D��H��H�I�.A3
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H��H�IH�H���
            // H�\$H�t$WH�� ǁ�
            // 3���������������@SH�� H�;�B
            // H��(H����
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // H��H�I�J3
            // H�\$H�l$H�t$H�|$ AVH��0H�L��H��H��H�II��H�p�
            !
            // H�H�`h���������.}AF
            // .}AF
            // �
            // M��D��H��H�I�.A3
            // H����������������
            // L��D��H�II��H�H���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CVoiceContainerBlender {
                constexpr std::ptrdiff_t m_firstSound = 0xA8; // CSoundContainerReference
                constexpr std::ptrdiff_t m_secondSound = 0xC0; // CSoundContainerReference
                constexpr std::ptrdiff_t m_flBlendFactor = 0xD8; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // PR���
            // p~���
            // 
            // 
            // 
            //  ����
            // 
            // 
            // 
            // 
            // 
            // 
            // �S���
            // 
            // 
            // 
            // 
            // 
            // 
            // `V���
            // 
            // 
            // 
            // �q���
            // 
            // �����
            // MKV3TransferName
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // p����
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // �^���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �,���
            // 
            // 
            // ����
            // !���
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // FILTER_UNKNOWN
            // FILTER_HIGHPASS
            // FILTER_BANDPASS
            // FILTER_NOTCH
            // FILTER_PEAKING_EQ
            // FILTER_LOW_SHELF
            // FILTER_HIGH_SHELF
            // FILTER_ALLPASS
            // FILTER_PASSTHROUGH
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // FILTER_SLOPE_1POLE_12dB
            // FILTER_SLOPE_1POLE_18dB
            // FILTER_SLOPE_1POLE_24dB
            // FILTER_SLOPE_12dB
            // FILTER_SLOPE_24dB
            // FILTER_SLOPE_36dB
            // FILTER_SLOPE_48dB
            // FILTER_SLOPE_MAX
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // LFO_SHAPE_SQUARE
            // LFO_SHAPE_TRI
            // LFO_SHAPE_SAW
            // LFO_SHAPE_NOISE
            // 
            // 
            // 
            // 
            // 
            // 
            // PANNER_TYPE_EQUAL_POWER
            // 
            // 
            // 
            // SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT
            // SUBGRAPH_INTERPOLATION_KEEP_LAST_SUBGRAPH_RUNNING
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // VMIX_CHAN_LEFT
            // VMIX_CHAN_RIGHT
            // VMIX_CHAN_SWAP
            // VMIX_CHAN_MONO
            // VMIX_CHAN_MID_SIDE
            // 
            // 
            // 
            // 
            // �y���
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // CMD_INVALID
            // CMD_CONTROL_INPUT_STORE
            // CMD_CONTROL_INPUT_STORE_DB
            // CMD_CONTROL_TRANSIENT_INPUT_STORE
            // CMD_CONTROL_TRANSIENT_INPUT_RESET
            // CMD_CONTROL_OUTPUT_STORE
            // CMD_CONTROL_EVALUATE_CURVE
            // CMD_CONTROL_COPY
            // CMD_CONTROL_COND_COPY_IF_NEGATIVE
            // CMD_CONTROL_REMAP_LINEAR
            // CMD_CONTROL_REMAP_SINE
            // CMD_CONTROL_REMAP_LOGLINEAR
            // CMD_CONTROL_MAX
            // CMD_CONTROL_RESET_TIMER
            // CMD_CONTROL_INCREMENT_TIMER
            // CMD_CONTROL_EVAL_ENVELOPE
            // CMD_CONTROL_SINE_BLEND
            // CMD_PROCESSOR_SET_CONTROL_VALUE
            // CMD_PROCESSOR_SET_NAME_INPUT
            // CMD_PROCESSOR_SET_CONTROL_ARRAYVALUE
            // CMD_PROCESSOR_STORE_CONTROL_VALUE
            // CMD_PROCESSOR_SET_VSND_VALUE
            // CMD_SUBMIX_PROCESS
            // CMD_SUBMIX_GENERATE
            namespace CVMixPitchShiftProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixPitchShiftDesc_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            namespace VMixFreeverbDesc_t {
                constexpr std::ptrdiff_t m_flRoomSize = 0x0; // float32
                constexpr std::ptrdiff_t m_flDamp = 0x4; // float32
                constexpr std::ptrdiff_t m_flWidth = 0x8; // float32
                constexpr std::ptrdiff_t m_flLateReflections = 0xC; // float32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            namespace CVoiceContainerStaticAdditiveSynth__CHarmonic {
                constexpr std::ptrdiff_t m_nWaveform = 0x0; // EWaveform
                constexpr std::ptrdiff_t m_nFundamental = 0x1; // EMidiNote
                constexpr std::ptrdiff_t m_nOctave = 0x4; // int32
                constexpr std::ptrdiff_t m_flCents = 0x8; // float32
                constexpr std::ptrdiff_t m_flPhase = 0xC; // float32
                constexpr std::ptrdiff_t m_curve = 0x10; // CPiecewiseCurve
                constexpr std::ptrdiff_t m_volumeScaling = 0x50; // CVoiceContainerStaticAdditiveSynth::CGainScalePerInstance
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // �����
            // 
            namespace CVoiceContainerStaticAdditiveSynth__CTone {
                constexpr std::ptrdiff_t m_harmonics = 0x0; // CUtlVector<CVoiceContainerStaticAdditiveSynth::CHarmonic>
                constexpr std::ptrdiff_t m_curve = 0x18; // CPiecewiseCurve
                constexpr std::ptrdiff_t m_bSyncInstances = 0x58; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �
            // H���;
            // 2��������������̰��������������H��)D
            // L�D$SVAT��p
            // fA�@
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // @SH��`���
            // A���������������2��������������̰��������������H��)D
            // 
            // MPropertyFriendlyName
            // 
            // 
            // @����
            // 
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // RandomNoRepeats
            // 
            // RandomAvoidLast
            // 
            // Sequential
            // 
            // RandomWeights
            // 
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // 
            // 
            // ����
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // �
            // H���;
            // 2��������������̰��������������H��)D
            // H�\$H�t$H�|$AVH��0H�I��H��L���
            // H�\$H�t$WH�� �m�
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // H�\$H�l$H�t$WAVAWH��@3�H�rM��H�Z D�L��H����E��u9�9����t3��
            // H�\$WH�� ��H���L�����t��
            // 3���������������@SH�� H�;�B
            // H��(H����
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // H��H�I�J3
            // H�\$H�l$H�t$H�|$ AVH��0H�L��H��H��H�II��H�p�
            !
            // H�H�`h���������.}AF
            // .}AF
            // �
            // M��D��H��H�I�.A3
            // H����������������
            // L��D��H�II��H�H���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // H�\$H�t$H�|$ AVH�� I��L��H��D9A(��
            // H�A ������������@WH��0H��I��H�I L��H��t3L�ZH�@M�
            // 3���������������@SH�� H�;�B
            // ��ufAn��[��A
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // H�\$H�t$H�|$ AVH�� I��L��H��D9A(��
            // H�A ������������@WH��0H��I��H�I L��H��t3L�ZH�@M�
            // 3���������������@SH�� H�;�B
            // ��ufAn��[��A
            // H�i
            // H��(H�I����2�H��(�������������H�9�
            // ��t
            �
            // 
            // H��
            // H�9�
            // H�A������������H�yK
            // H��
            // H�\$H�t$WH�� H�AH��H���
            // ��t
            �
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �4���
            // P����
            // 
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // 
            // p����
            // �����
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // 
            // p����
            // �����
            // 
            // 
            // 
            // 
            // 
            // ����
            // �����
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // H�\$WH�� ��H���l�����tH��R#
            // 3���������������@SH�� H�;�B
            // H��(H����
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // H��H�I�J3
            // H�\$H�l$H�t$H�|$ AVH��0H�L��H��H��H�II��H�p�
            !
            // H�H�`h���������.}AF
            // .}AF
            // �
            // M��D��H��H�I�.A3
            // H����������������
            // L��D��H�II��H�H���
            // 
            // H�\$H�t$WH��0H��H���֌��H��@
            // H��}.
            // 2��������������̰��������������H��)D
            // @SVWH��0H�iV#
            // H�\$H�t$WH�� H���
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // ���������������H��)D
            // D���
            // H�\$WH�� ��H��������t��
            // 3���������������@SH�� H�;�B
            // H��(H����
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // H��H�I�J3
            // H�\$H�l$H�t$H�|$ AVH��0H�L��H��H��H�II��H�p�
            !
            // H�H�`h���������.}AF
            // .}AF
            // �
            // M��D��H��H�I�.A3
            // H����������������
            // L��D��H�II��H�H���
            // 
            // H�\$H�l$H�t$H�|$ AVH��0H��H�������H��@
            // H���
            // 2��������������̰��������������H��)D
            // @SVWH��0L�d$XH��L��L�t$`L�|$h��
            // H�\$H�t$WH�� H���
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // ���������������H��)D
            // D���
            namespace CVoiceContainerRandomSampler {
                constexpr std::ptrdiff_t m_flAmplitude = 0xB8; // float32
                constexpr std::ptrdiff_t m_flAmplitudeJitter = 0xBC; // float32
                constexpr std::ptrdiff_t m_flTimeJitter = 0xC0; // float32
                constexpr std::ptrdiff_t m_flMaxLength = 0xC4; // float32
                constexpr std::ptrdiff_t m_nNumDelayVariations = 0xC8; // int32
                constexpr std::ptrdiff_t m_grainResources = 0xD0; // CUtlVector<CStrongHandle<InfoForResourceTypeCVoiceContainerBase>>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // X=���
            // 
            // �=���
            // 
            // �=���
            // 
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // 
            // MPropertyFriendlyName
            // 
            // 8>���
            // 
            // P>���
            // ���
            // 
            // 
            // `8���
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // MPropertyAttributeRange
            // 
            // 
            // (?���
            // 4?���
            // MPropertyFriendlyName
            // MPropertyAttributeRange
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // p;���
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // �c���
            // �����
            // 
            // 
            // 
            // 
            // 
            // �>���
            // 
            // 
            // 
            // @���
            // 
            // 
            // 
            // pC���
            // 
            //  (���
            // 
            // 0���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MKV3TransferName
            // MKV3TransferName
            // MKV3TransferName
            // MKV3TransferName
            // MKV3TransferName
            // 
            // 
            // �Y���
            //  Z���
            // Z���
            // �F���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            //  O���
            // `����
            // Е���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // �����
            // @Y���
            // @+���
            // �����
            // 
            // e���
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // �\���
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // ����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CVMixSteamAudioDirectProcessorDesc {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // p����
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // �^���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �,���
            // 
            // 
            // ����
            // !���
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // FILTER_UNKNOWN
            // FILTER_HIGHPASS
            // FILTER_BANDPASS
            // FILTER_NOTCH
            // FILTER_PEAKING_EQ
            // FILTER_LOW_SHELF
            // FILTER_HIGH_SHELF
            // FILTER_ALLPASS
            // FILTER_PASSTHROUGH
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // FILTER_SLOPE_1POLE_12dB
            // FILTER_SLOPE_1POLE_18dB
            // FILTER_SLOPE_1POLE_24dB
            // FILTER_SLOPE_12dB
            // FILTER_SLOPE_24dB
            // FILTER_SLOPE_36dB
            // FILTER_SLOPE_48dB
            // FILTER_SLOPE_MAX
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // LFO_SHAPE_SQUARE
            // LFO_SHAPE_TRI
            // LFO_SHAPE_SAW
            // LFO_SHAPE_NOISE
            // 
            // 
            // 
            // 
            // 
            // 
            // PANNER_TYPE_EQUAL_POWER
            // 
            // 
            // 
            // SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT
            // SUBGRAPH_INTERPOLATION_KEEP_LAST_SUBGRAPH_RUNNING
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // VMIX_CHAN_LEFT
            // VMIX_CHAN_RIGHT
            // VMIX_CHAN_SWAP
            // VMIX_CHAN_MONO
            // VMIX_CHAN_MID_SIDE
            // 
            // 
            // 
            // 
            // �y���
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // CMD_INVALID
            // CMD_CONTROL_INPUT_STORE
            // CMD_CONTROL_INPUT_STORE_DB
            // CMD_CONTROL_TRANSIENT_INPUT_STORE
            // CMD_CONTROL_TRANSIENT_INPUT_RESET
            // CMD_CONTROL_OUTPUT_STORE
            // CMD_CONTROL_EVALUATE_CURVE
            // CMD_CONTROL_COPY
            // CMD_CONTROL_COND_COPY_IF_NEGATIVE
            // CMD_CONTROL_REMAP_LINEAR
            // CMD_CONTROL_REMAP_SINE
            // CMD_CONTROL_REMAP_LOGLINEAR
            // CMD_CONTROL_MAX
            // CMD_CONTROL_RESET_TIMER
            // CMD_CONTROL_INCREMENT_TIMER
            // CMD_CONTROL_EVAL_ENVELOPE
            // CMD_CONTROL_SINE_BLEND
            // CMD_PROCESSOR_SET_CONTROL_VALUE
            // CMD_PROCESSOR_SET_NAME_INPUT
            // CMD_PROCESSOR_SET_CONTROL_ARRAYVALUE
            // CMD_PROCESSOR_STORE_CONTROL_VALUE
            // CMD_PROCESSOR_SET_VSND_VALUE
            // CMD_SUBMIX_PROCESS
            // CMD_SUBMIX_GENERATE
            // CMD_SUBMIX_GENERATE_SIDECHAIN
            // CMD_SUBMIX_DEBUG
            // CMD_SUBMIX_MIX2x1
            // CMD_SUBMIX_OUTPUT
            // CMD_SUBMIX_OUTPUTx2
            // CMD_SUBMIX_COPY
            // CMD_SUBMIX_ACCUMULATE
            // CMD_SUBMIX_METER
            // CMD_SUBMIX_METER_SPECTRUM
            // CMD_IMPULSERESPONSE_INPUT_STORE
            // CMD_PROCESSOR_SET_IMPULSERESPONSE_VALUE
            // CMD_REMAP_VSND_TO_IMPULSERESPONSE
            // CMD_IMPULSERESPONSE_RESET
            // CMD_BLEND_VSNDS_TO_IMPULSERESPONSE
            // CMD_IMPULSERESPONSE_DELAY
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �l���
            // 
            // 
            namespace CVMixSteamAudioHRTFProcessorDesc {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // H�\$H�l$H�t$ WH��p
            // H��T
            // ���������������H��)D
            // �y
            // @SH�� H���r���H�Ӎ9
            // H�\$WH�� H��@
            // H�\$WH�� ��H���|33
            // �
            // ���������������H��)D
            // ���������������H��)D
            // �
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // @SH�� H�����H���9
            // H�\$WH�� H��@
            // H�\$WH�� ��H���|33
            // �
            // @SH�� H��E��~"H�|$0A��H���R��H��
            // ���������������H��)D
            // H�\$WH��@H��H�
            H����
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // ���������������H��)D
            // �����
            // P����
            // 
            // 0����
            // @����
            // P����
            // p����
            // �����
            // �����
            // 
            // P����
            // �����
            // �����
            // �����
            // `����
            // �����
            // 0����
            //  ����
            // �����
            // 0����
            // ����
            // 
            // H�\$H�t$WH��PI��A��H���ö��H�ȅ���
            // 
            // 
            // 
            // 
            // 
            // @M���
            // �����
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // �����
            // @SH�� H�����H���9
            // L�q�
            // H�\$WH�� ��H���,
            // H�\$H�t$H�|$ UATAUAVAWH��H��`H�rH��
            // L��UWAUAVH��hI�yI��A�C ����L���D$ ����L��H����
            // H��H��x
            // H�\$WH��@H��H�
            H����
            // H��H�XH�pH�xUH�h�H���
            // ���������������H��)D
            // 2��������������̰��������������H��)D
            // Hc��
            // 
            // @����
            // �����
            // 
            // MPropertyFriendlyName
            // 
            // 
            // h����
            // 
            // �����
            // 
            // MPropertyFriendlyName
            // 
            // 
            // �����
            // 
            // �����
            // 
            // �����
            // 
            // �����
            // 
            // �����
            // 
            // 
            // 
            // 
            // �����
            // 
            // Г���
            // MPropertyFriendlyName
            // 
            // 
            // 
            // @[���
            // ����
            // (����
            // 
            // 
            // 
            // @SH�� H������H�C�9
            // L���
            // H�\$WH�� ��H���,
            // H�\$H�l$H�t$WH�� 3�H��3�H��f����
            // ���������������H��)D
            // @SUWH�� H��H�t$@L�t$P�L�|$XH���
            // �
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // 
            // L��H�I��23
            // H��H�I��<3
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // �
            // H�\$H�l$H�t$WAVAWH��0H�L��L��H��H�IA��I��H�h� 
            // H��(H��P�@H��(��������������H�IH�H�`X�����M��D��H��H�I�.A3
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H��H�IH�H���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // H�\$H�l$H�t$H�|$ AVH�� E3����A���H��A��tH�YHcqH��H�H;�s"H�K8H��tH�H;����P L�s8H��@H;�rދGD�w����v����uH���
            // H�t$ AVH�� M��H��D9A(��
            // H�E�
            // 9Q(������������Hc��
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // H�\$H�l$H�t$H�|$ AVH�� E3����A���H��A��tH�YHcqH��H�H;�s"H�K8H��tH�H;����P L�s8H��@H;�rދGD�w����v����uH���
            // H�t$ AVH�� M��H��D9A(��
            // H�E�
            // 9Q(������������Hc��
            // 
            // H�i
            // H���
            // H�A������������H�yK
            // H��
            // L�
            Ic��
            // ��t
            �
            // 
            // H��
            // H�ɩ
            // H�A������������H�yK
            // 0����
            // 
            // 
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // �����
            // P����
            // 
            // 
            // 
            // 
            // 
            // �����
            // К���
            // �����
            // 
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // �����
            // ț���
            // �����
            // 
            // �4���
            // P����
            // 
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            namespace CVoiceContainerDefault {
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CVSound {
                constexpr std::ptrdiff_t m_nRate = 0x0; // int32
                constexpr std::ptrdiff_t m_nFormat = 0x4; // CVSoundFormat_t
                constexpr std::ptrdiff_t m_nChannels = 0x8; // uint32
                constexpr std::ptrdiff_t m_nLoopStart = 0xC; // int32
                constexpr std::ptrdiff_t m_nSampleCount = 0x10; // uint32
                constexpr std::ptrdiff_t m_flDuration = 0x14; // float32
                constexpr std::ptrdiff_t m_Sentences = 0x18; // CUtlVector<CAudioSentence>
                constexpr std::ptrdiff_t m_nStreamingSize = 0x30; // uint32
                constexpr std::ptrdiff_t m_nSeekTable = 0x38; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_nLoopEnd = 0x50; // int32
                constexpr std::ptrdiff_t m_encodedHeader = 0x58; // CUtlBinaryBlock
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataNodeType
            // 
            // 
            // MPropertyDescription
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            namespace CDSPPresetMixgroupModifierTable {
                constexpr std::ptrdiff_t m_table = 0x0; // CUtlVector<CDspPresetModifierList>
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // �
            // H���*
            // H�L$UVWAUH�l$�H��
            // �̛��
            // X����
            // �����
            // 
            // 
            // 
            // H�\$H�t$WH��0H��@
            // H���*
            // H�L$AWH��p�QM����yA�x(
            // Û��
            // �����
            // 
            // 
            // @SH�� H��H�p�1
            // �
            // @SH�� H����tH��'
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // 
            // 
            // 
            // �
            // H�q�*
            // L�D$SH��p�QI�؉T$ ��yA�x(
            //  ����
            // �����
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // 
            // 
            // �����
            // 
            // �����
            // 
            // �����
            // `����
            // h����
            // 
            // �����
            // 
            // �����
            // ����
            // 
            // 
            // 
            // ����
            // �����
            // 
            // �����
            // 
            // �����
            // 
            // 
            // �����
            // `����
            // 
            // �����
            // 
            // �����
            // p����
            // 
            // �����
            // 
            // �����
            // 
            // �����
            // 
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // H��XL��E���
            // P+���
            // �)���
            // �&���
            // �#���
            // � ���
            // 0���
            // �.���
            // 0���
            // 
            // .���
            // `-���
            // p/���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CSosGroupActionSoundeventClusterSchema {
                constexpr std::ptrdiff_t m_nMinNearby = 0x8; // int32
                constexpr std::ptrdiff_t m_flClusterEpsilon = 0xC; // float32
                constexpr std::ptrdiff_t m_shouldPlayOpvar = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_shouldPlayClusterChild = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_clusterSizeOpvar = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_groupBoundingBoxMinsOpvar = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_groupBoundingBoxMaxsOpvar = 0x30; // CUtlString
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // 
            // 
            // @SH�� H��H���1
            // �
            // @SH�� H����tH��'
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // 
            // 
            // 
            // H�\$WH��0H��@
            // H�9�*
            // @SH��@)t$ W��qI��/���
            // `����
            // ����
            // 
            // 
            // @SH�� H��H�0�1
            // �
            // @SH�� H����tH��'
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �����
            // 
            // 
            // 
            // kBranch
            // 
            // kMatch
            // 
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // SOS_GROUPTYPE_STATIC
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // SOS_SETPARAM_SORTTYPE_LOWEST
            // 
            // 
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // SOS_LIMIT_SORTTYPE_LOWEST
            // 
            // MPropertyFriendlyName
            // 
            // SOS_STOPTYPE_TIME
            // 
            // SOS_STOPTYPE_OPVAR
            // 
            // 
            // 
            // P����
            //  ����
            // D����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            //  3���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // SNDLVL_20dB
            // SNDLVL_25dB
            // SNDLVL_30dB
            // SNDLVL_35dB
            // SNDLVL_40dB
            // SNDLVL_45dB
            // SNDLVL_50dB
            // SNDLVL_55dB
            // SNDLVL_IDLE
            // SNDLVL_60dB
            // SNDLVL_65dB
            // SNDLVL_STATIC
            // SNDLVL_70dB
            // SNDLVL_NORM
            // SNDLVL_75dB
            // SNDLVL_80dB
            // SNDLVL_TALKING
            // SNDLVL_85dB
            // SNDLVL_90dB
            // SNDLVL_95dB
            // SNDLVL_100dB
            // SNDLVL_105dB
            // SNDLVL_110dB
            // SNDLVL_120dB
            // SNDLVL_130dB
            // SNDLVL_GUNFIRE
            // SNDLVL_140dB
            // SNDLVL_150dB
            // SNDLVL_180dB
            // 
            // 
            // �,���
            // �*���
            // �(���
            // �%���
            // 
            // ����
            // ����
            // 
            // p.���
            // �-���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CSosGroupActionSetSoundeventParameterSchema {
                constexpr std::ptrdiff_t m_nMaxCount = 0x8; // int32
                constexpr std::ptrdiff_t m_flMinValue = 0xC; // float32
                constexpr std::ptrdiff_t m_flMaxValue = 0x10; // float32
                constexpr std::ptrdiff_t m_opvarName = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_nSortType = 0x20; // SosActionSetParamSortType_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // ؇���
            // �����
            namespace CSoundContainerReference {
                constexpr std::ptrdiff_t m_bUseReference = 0x0; // bool
                constexpr std::ptrdiff_t m_sound = 0x8; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
                constexpr std::ptrdiff_t m_pSound = 0x10; // CVoiceContainerBase*
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // �����
            // ����
            // 
            // 
            // MPropertySuppressExpr
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // P���
            // �����
            // �����
            // 
            // MPropertyFriendlyName
            // MPropertySuppressExpr
            // MPropertyFriendlyName
            // MPropertySuppressExpr
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // ���
            // h����
            // x����
            // 
            // 
            // �����
            // �����
            // 
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // 
            // p���
            // 
            // 
            // �����
            // Њ���
            // 
            // 
            // 
            // 
            // 
            // (>���
            // 
            // 
            // 
            // �����
            // 
            // 
            // 
            // �k���
            // �����
            // Ћ���
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // H�\$H�l$H�t$ WH��p
            // H��T
            // ���������������H��)D
            // �y
            // @SH�� H���r���H�Ӎ9
            // H�\$WH�� H��@
            // H�\$WH�� ��H���|33
            // �
            // ���������������H��)D
            // ���������������H��)D
            // �
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // @SH�� H�����H���9
            // H�\$WH�� H��@
            // H�\$WH�� ��H���|33
            // �
            // @SH�� H��E��~"H�|$0A��H���R��H��
            // ���������������H��)D
            // H�\$WH��@H��H�
            H����
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // ���������������H��)D
            // �����
            // P����
            // 
            // 0����
            // @����
            // P����
            // p����
            // �����
            // �����
            // 
            // P����
            // �����
            // �����
            // �����
            // `����
            // �����
            // 0����
            //  ����
            // �����
            // 0����
            // ����
            // 
            // H�\$H�t$WH��PI��A��H���ö��H�ȅ���
            // 
            // 
            // 
            // 
            // 
            // @M���
            // �����
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // �����
            // @SH�� H�����H���9
            // L�q�
            // H�\$WH�� ��H���,
            // H�\$H�t$H�|$ UATAUAVAWH��H��`H�rH��
            // L��UWAUAVH��hI�yI��A�C ����L���D$ ����L��H����
            // H��H��x
            // H�\$WH��@H��H�
            H����
            // H��H�XH�pH�xUH�h�H���
            // ���������������H��)D
            // 2��������������̰��������������H��)D
            // Hc��
            // 
            // @����
            // �����
            // 
            // MPropertyFriendlyName
            // 
            // 
            // h����
            // 
            // �����
            // 
            // MPropertyFriendlyName
            // 
            // 
            // �����
            // 
            // �����
            // 
            // �����
            // 
            // �����
            // 
            // �����
            // 
            // 
            // 
            // 
            // �����
            // 
            // Г���
            // MPropertyFriendlyName
            // 
            // 
            // 
            // @[���
            // ����
            // (����
            // 
            // 
            // 
            // @SH�� H������H�C�9
            // L���
            // H�\$WH�� ��H���,
            // H�\$H�l$H�t$WH�� 3�H��3�H��f����
            // ���������������H��)D
            // @SUWH�� H��H�t$@L�t$P�L�|$XH���
            // �
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // 
            // L��H�I��23
            // H��H�I��<3
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // �
            // H�\$H�l$H�t$WAVAWH��0H�L��L��H��H�IA��I��H�h� 
            // H��(H��P�@H��(��������������H�IH�H�`X�����M��D��H��H�I�.A3
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H��H�IH�H���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // H�\$H�l$H�t$H�|$ AVH�� E3����A���H��A��tH�YHcqH��H�H;�s"H�K8H��tH�H;����P L�s8H��@H;�rދGD�w����v����uH���
            // H�t$ AVH�� M��H��D9A(��
            // H�E�
            // 9Q(������������Hc��
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CVoiceContainerNull {
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace VMixSubgraphSwitchDesc_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_effectName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_subgraphs = 0x10; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_interpolationMode = 0x28; // VMixSubgraphSwitchInterpolationType_t
                constexpr std::ptrdiff_t m_bOnlyTailsOnFadeOut = 0x2C; // bool
                constexpr std::ptrdiff_t m_flInterpolationTime = 0x30; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataNodeType
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            namespace CVoiceContainerAnalysisBase {
                constexpr std::ptrdiff_t m_bRegenerateCurveOnCompile = 0x8; // bool
                constexpr std::ptrdiff_t m_curve = 0x10; // CPiecewiseCurve
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // H�\$H�t$WH��0H��@
            // H���*
            // @UVAVH��0M�pI��H��M���~
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // �
            // H���*
            // H��AVH��
            // 
            // 
            // 
            // ����
            // X����
            // p����
            // @����
            // ����
            // h����
            // 0����
            // 
            // �����
            // ����
            // 
            // 
            // 
            // H�\$WH��0H��@
            // H�q�*
            // H��H�HUH�����H���
            // `ߛ��
            // X����
            // �����
            // �����
            // �����
            // �����
            // 
            // 
            // 
            // �
            // H���*
            // H��L�@H�HUH�����H���
            // �כ��
            // �����
            // �����
            // ����
            // 0����
            // P����
            // p����
            // �����
            // �����
            // 
            // 
            // 
            // @SH�� H��H���1
            // �
            // H�\$WH�� H�ً�H��H�9
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // 
            // 
            // @SH�� H��H���1
            // �
            // @SH�� H����tH��'
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // 
            // 
            // 
            // H�\$WH��0H��@
            // H�9�*
            // @SH��@)t$ W��qI��/���
            // `����
            // ����
            // 
            // 
            // @SH�� H��H�0�1
            // �
            // @SH�� H����tH��'
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �����
            // 
            // 
            // 
            // kBranch
            // 
            // kMatch
            // 
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // SOS_GROUPTYPE_STATIC
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // SOS_SETPARAM_SORTTYPE_LOWEST
            // 
            // 
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // SOS_LIMIT_SORTTYPE_LOWEST
            // 
            // MPropertyFriendlyName
            // 
            // SOS_STOPTYPE_TIME
            // 
            // SOS_STOPTYPE_OPVAR
            // 
            // 
            // 
            // P����
            //  ����
            // D����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            //  3���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // SNDLVL_20dB
            // SNDLVL_25dB
            // SNDLVL_30dB
            // SNDLVL_35dB
            // SNDLVL_40dB
            // SNDLVL_45dB
            // SNDLVL_50dB
            // SNDLVL_55dB
            // SNDLVL_IDLE
            // SNDLVL_60dB
            // SNDLVL_65dB
            // SNDLVL_STATIC
            // SNDLVL_70dB
            // SNDLVL_NORM
            // SNDLVL_75dB
            // SNDLVL_80dB
            // SNDLVL_TALKING
            // SNDLVL_85dB
            // SNDLVL_90dB
            // SNDLVL_95dB
            // SNDLVL_100dB
            // SNDLVL_105dB
            // SNDLVL_110dB
            // SNDLVL_120dB
            // SNDLVL_130dB
            // SNDLVL_GUNFIRE
            // SNDLVL_140dB
            // SNDLVL_150dB
            // SNDLVL_180dB
            // 
            // 
            // �,���
            // �*���
            // �(���
            // �%���
            // 
            // ����
            // ����
            // 
            namespace CSosGroupActionSoundeventMinMaxValuesSchema {
                constexpr std::ptrdiff_t m_strQueryPublicFieldName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_strDelayPublicFieldName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_bExcludeStoppedSounds = 0x18; // bool
                constexpr std::ptrdiff_t m_bExcludeDelayedSounds = 0x19; // bool
                constexpr std::ptrdiff_t m_bExcludeSoundsBelowThreshold = 0x1A; // bool
                constexpr std::ptrdiff_t m_flExcludeSoundsMinThresholdValue = 0x1C; // float32
                constexpr std::ptrdiff_t m_bExcludSoundsAboveThreshold = 0x20; // bool
                constexpr std::ptrdiff_t m_flExcludeSoundsMaxThresholdValue = 0x24; // float32
                constexpr std::ptrdiff_t m_strMinValueName = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_strMaxValueName = 0x30; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // CMD_INVALID
            // CMD_CONTROL_INPUT_STORE
            // CMD_CONTROL_INPUT_STORE_DB
            // CMD_CONTROL_TRANSIENT_INPUT_STORE
            // CMD_CONTROL_TRANSIENT_INPUT_RESET
            // CMD_CONTROL_OUTPUT_STORE
            // CMD_CONTROL_EVALUATE_CURVE
            // CMD_CONTROL_COPY
            // CMD_CONTROL_COND_COPY_IF_NEGATIVE
            // CMD_CONTROL_REMAP_LINEAR
            // CMD_CONTROL_REMAP_SINE
            // CMD_CONTROL_REMAP_LOGLINEAR
            // CMD_CONTROL_MAX
            // CMD_CONTROL_RESET_TIMER
            // CMD_CONTROL_INCREMENT_TIMER
            // CMD_CONTROL_EVAL_ENVELOPE
            // CMD_CONTROL_SINE_BLEND
            // CMD_PROCESSOR_SET_CONTROL_VALUE
            // CMD_PROCESSOR_SET_NAME_INPUT
            // CMD_PROCESSOR_SET_CONTROL_ARRAYVALUE
            // CMD_PROCESSOR_STORE_CONTROL_VALUE
            // CMD_PROCESSOR_SET_VSND_VALUE
            // CMD_SUBMIX_PROCESS
            // CMD_SUBMIX_GENERATE
            // CMD_SUBMIX_GENERATE_SIDECHAIN
            // CMD_SUBMIX_DEBUG
            // CMD_SUBMIX_MIX2x1
            // CMD_SUBMIX_OUTPUT
            // CMD_SUBMIX_OUTPUTx2
            // CMD_SUBMIX_COPY
            // CMD_SUBMIX_ACCUMULATE
            // CMD_SUBMIX_METER
            // CMD_SUBMIX_METER_SPECTRUM
            // CMD_IMPULSERESPONSE_INPUT_STORE
            // CMD_PROCESSOR_SET_IMPULSERESPONSE_VALUE
            // CMD_REMAP_VSND_TO_IMPULSERESPONSE
            // CMD_IMPULSERESPONSE_RESET
            // CMD_BLEND_VSNDS_TO_IMPULSERESPONSE
            // CMD_IMPULSERESPONSE_DELAY
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �l���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // MPropertyAttributeRange
            // 
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // 
            // 
            // MPropertyFriendlyName
            // MPropertyAttributeRange
            // 
            // 
            // ]���
            // �\���
            // 
            // MPropertyFriendlyName
            // MPropertyAttributeRange
            // 
            // 
            // �]���
            // �����
            // 
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // �/���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �t���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            //  g���
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // @SH�� H���
            // H��@
            // H��@
            // 3���������������@SH�� H�;�B
            // H���.
            // 3���������������@SH�� H�;�B
            // 3���������������@SH�� H�;�B
            // 3���������������@SH�� H�;�B
            // ���������������H��)D
            // 2��������������̰��������������H��)D
            // 3���������������@SH�� H�;�B
            // 2��������������̰��������������H��)D
            // �
            // 2��������������̰��������������H��)D
            // ���������������H��)D
            namespace CVMixEnvelopeProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixEnvelopeDesc_t
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            namespace CVMixCommand {
                constexpr std::ptrdiff_t m_nCommand = 0x0; // VMixGraphCommandID_t
                constexpr std::ptrdiff_t m_nParameterNameHash = 0x4; // uint32
                constexpr std::ptrdiff_t m_nOutputSubmix = 0x8; // int32
                constexpr std::ptrdiff_t m_nInputSubmix0 = 0xC; // int32
                constexpr std::ptrdiff_t m_nInputSubmix1 = 0x10; // int32
                constexpr std::ptrdiff_t m_nProcessor = 0x14; // int32
                constexpr std::ptrdiff_t m_nInputValue0 = 0x18; // int32
                constexpr std::ptrdiff_t m_nInputValue1 = 0x1C; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // �&���
            // 
            // 
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // 
            // 
            // �=���
            // 8����
            // x����
            // 
            // 
            // >���
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // �>���
            // 
            // MPropertyFriendlyName
            // MPropertyAttributeRange
            // 
            // X=���
            // `?���
            // 8>���
            // 
            // �?���
            // ���
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // �����
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �`���
            // �Y���
            // �Y���
            // �Y���
            // 
            // 
            // MKV3TransferName
            // MKV3TransferName
            // MKV3TransferName
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // ����
            // �H���
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // ণ��
            // 
            // �)���
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // PR���
            // p~���
            // 
            // 
            // 
            //  ����
            // 
            // 
            // 
            // 
            // 
            // 
            // �S���
            // 
            // 
            // 
            // 
            // 
            // 
            // `V���
            // 
            // 
            // 
            // �q���
            // 
            // �����
            // MKV3TransferName
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // p����
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // �^���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �,���
            // 
            // 
            // ����
            // !���
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // FILTER_UNKNOWN
            // FILTER_HIGHPASS
            // FILTER_BANDPASS
            // FILTER_NOTCH
            // FILTER_PEAKING_EQ
            // FILTER_LOW_SHELF
            // FILTER_HIGH_SHELF
            // FILTER_ALLPASS
            // FILTER_PASSTHROUGH
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // FILTER_SLOPE_1POLE_12dB
            // FILTER_SLOPE_1POLE_18dB
            // FILTER_SLOPE_1POLE_24dB
            // FILTER_SLOPE_12dB
            // FILTER_SLOPE_24dB
            // FILTER_SLOPE_36dB
            namespace CVMixControlInput {
                constexpr std::ptrdiff_t m_flDefaultValue = 0x10; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // 
            // 
            // MPropertyFriendlyName
            // MPropertyAttributeRange
            // 
            // 
            // ]���
            // �\���
            // 
            // MPropertyFriendlyName
            // MPropertyAttributeRange
            // 
            // 
            // �]���
            // �����
            // 
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // �/���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �t���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            //  g���
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // @SH�� H���
            // H��@
            // H��@
            // 3���������������@SH�� H�;�B
            // H���.
            // 3���������������@SH�� H�;�B
            // 3���������������@SH�� H�;�B
            // 3���������������@SH�� H�;�B
            // ���������������H��)D
            // 2��������������̰��������������H��)D
            // 3���������������@SH�� H�;�B
            // 2��������������̰��������������H��)D
            // �
            // 2��������������̰��������������H��)D
            // ���������������H��)D
            // 2��������������̰��������������H��)D
            // �
            // 2��������������̰��������������H��)D
            // 2��������������̰��������������H��)D
            // 3���������������@SH�� H�;�B
            // 2��������������̰��������������H��)D
            // 2��������������̰��������������H��)D
            // H��@
            // �
            // �
            // 2��������������̰��������������H��)D
            // 
            // H�\$WH�� H�ً�H��xH�9
            // H�QH�E,
            // H�Q H��G
            // �A(������������̋A,�������������H�\$H�l$VH�� 3ۋ�H��9Y~/H�|$0��H�F�D.uH�L��H��P8��H��0;^|�H�|$0H�\$8H�l$@H�� ^�������
            // H�A`������������H���.
            // 3���������������@SH�� H�;�B
            // 3���������������@SH�� H�;�B
            // 3���������������@SH�� H�;�B
            // ���������������H��)D
            // �AT������������H�\$H�l$H�t$WH�� H��H��H���
            // �AP�������������@SUVAVH��(H�|$P2�Hc��
            // H�\$H�t$WH�� H��I��H�QH��H������H��tL��D
            // H�Q@I��H��tI������I��B�<
            // �A\�����������̋AX�������������ATH��@���0
            // �AV������������H�\$WH��
            // 2��������������̰��������������H��)D
            // �
            // 2��������������̰��������������H��)D
            // 2��������������̰��������������H��)D
            // 3���������������@SH�� H�;�B
            // 2��������������̰��������������H��)D
            // 2��������������̰��������������H��)D
            // H��@
            // �
            // �AW�������������AW������������H�\$H�t$ WH��
            // 2��������������̰��������������H��)D
            // �
            // 
            // �;'
            // H���?
            // H���8�����������@SH�� H��H������H��H�� [�r�����@SH�� H��H�������H��H�� [������@SH�� H��H���ߏ��H��H�� [鲜����@SH�� H��H��迏�
            // H��(�����H��t�
            // @SH�� H��H�г
            // H�\$H�t$ WH��@H��@
            // H�Y!
            // H�\$WH�� H��
            // 
            // H�\$H�l$H�t$ WH��
            // H�9�
            // @SH�� H��H�������H��H�� [������@SH�� H��H���ߎ��H��H�� [鲱����@SH�� H��H��迎��H��H�� [�R�����@SH�� H��H��蟎��H��H�� [������
            // H�\$WH�� H��I�ع 
            // @SH�� H���BI��H���:
            // H�\$H�t$ WH��@H��@
            // H��!
            // H�\$WH�� H�ً�H�� H�9
            // 
            // H�\$H�l$H�t$ WH��p
            // H���
            // @SH�� H��H��迏��H��H�� [�R�����@SH�� H��H��蟏��H��H�� [������@SH�� H��H������H��H�� [钤����@SH�� H��H���_���H��H�� [�2�����
            // H�\$WH�� H��I�ع@
            // @SH�� H��H�P�
            // L�A�
            // H��!
            // H�\$WH�� H�'
            // 
            // H�\$H�l$H�t$ WH��p
            // H��
            // @SH�� H��H���?���H��H�� [�Ҿ����@SH�� H��H������H��H�� [�r�����@SH�� H��H�������H��H�� [������@SH�� H��H���ߍ��H��H�� [������
            // H�\$WH�� H��I�ع0	
            // @SH�� H��H�p�
            // L�A�
            // H��!
            // H�\$WH�� H�
            // 
            // H�\$H�l$H�t$ WH��p
            // H��
            // @SH�� H��H��蟏��H��H�� [������@SH�� H��H������H��H�� [钤����@SH�� H��H���_���H��H�� [�2�����@SH�� H��H���?���H��H�� [�ҩ����
            // H�\$H�t$WH�� H��I��
            // @SH�� H��H�`�
            // H�\$H�t$ WH��@H��@
            // H��!
            // H�\$WH�� H��
            // 
            // H�\$WH��0H��H���'
            // H�ٷ
            // @SH�� H��H������H��H�� [�r�����@SH�� H��H�������H��H�� [������@SH�� H��H���ߏ��H��H�� [鲜����@SH�� H��H��迏��H��H�� [�R�����
            // @SWATAUH��(L��I�ع�
            // @SH�� H��H���
            // H�\$H�t$ WH��@H��@
            // H��!
            // H�\$WH�� H��
            // 
            // H�\$H�l$H�t$ WH��p
            // H���
            // @SH�� H��H��迍��H��H�� [�R�����@SH�� H��H��蟍��H��H�� [�������@SH�� H��H������H��H�� [������@SH�� H��H���_���H��H�� [�2�����
            // H�\$WH�� H��I�عP
            // @SH�� H��H���
            // L�1�
            // H��!
            // H�\$WH�� H�
            // 
            // H�\$H�l$H�t$ WH��p
            // H�9�
            // @SH�� H��H���?���H��H�� [�ҩ����@SH�� H��H������H��H�� [�r�����@SH�� H��H�������H��H�� [������@SH�� H��H���ߎ��H��H�� [鲱����
            // H�\$UVWH��0H��I�ع�	
            // @SH�� H��H��
            // L�Q�
            // H��!
            // H�\$WH�� H�'
            // 
            // H�\$H�l$H�t$ WH��p
            // H��
            // @SH�� H��H������H��H�� [钤����@SH�� H��H���_���H��H�� [�2�����@SH�� H��H���?���H��H�� [�ҩ����@SH�� H��H������H��H�� [�r�����
            // H�\$H�l$H�t$WH�� H��I�ع`

            // @SH�� H��H��
            // H�\$H�t$ WH��@H��@
            // H�i!
            // H�\$WH�� H��
            // 
            // H�\$H�l$H�t$ WH��p
            // H���
            // @SH�� H��H���ߍ��H��H�� [������@SH�� H��H��迍��H��H�� [�R�����@SH�� H��H��蟍��H��H�� [�������@SH�� H��H������H��H�� [������
            // H�L��H��I��H�` H�L��H��I��H� �H�L��H��I��H�`8H�L��H��I��H�`(H�L��H��I��H�`@H�L��H��I��H�`0H�L��H��I��H�`H�\$H�t$WH�� H
            // @SH�� H��H�0�
            // L���
            // H��!
            // H�\$WH�� H�g
            // 
            // H�\$H�l$H�t$ WH��p
            // H��
            // @SH�� H��H������H��H�� [�r�����@UH��H��
            // H�\$H�t$WH�� H��I���
            // @SH�� H��H��
            // H�\$H�t$ WH��@H��@
            // H��!
            // H�\$WH�� H��
            // 
            // H�\$H�l$H�t$ WH��p
            // H�I�
            // @SH�� H��H���?���H��H�� [�������@SH�� H��H������H��H�� [�r�����@UH��H��
            // H�\$H�l$ WH�� H��I����
            // @SH�� H��H���
            // L�q�
            // H��!
            // H�\$WH�� H�
            // 
            // H�\$H�l$H�t$ WH��p
            // H�a�
            // @SH�� H��H������H��H�� [�r�����@SH�� H��H�������H��H�� [������@SH�� H��H���ߍ��H��H�� [������@SH�� H��H��迍��H��H�� [�R�����
            // H�\$H�t$WH�� H��I��
            // @SH�� H��H���
            // H�\$H�t$ WH��@H��@
            // H��!
            // H�\$WH�� H�ً�H�� H�9
            // 
            // �;'
            // H�a�
            // H���8�����������@SH�� H��H������H��H�� [�r�����@SH�� H��H�������H��H�� [������@SH�� H��H���ߏ��H��H�� [鲜����@SH�� H��H��迏�
            // H�L��H��I��H�`8H�L��H��I��H�`(H�L��H��I��H�`@H�L��H��I��H�`0H�L��H��I��H�`H�\$H�t$WH�� H��D
            // @SH�� H��H�@�
            namespace CVMixBoxverbProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixBoxverbDesc_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 0\���
            // d\���
            // 
            // �\���
            // �����
            // 8>���
            // 
            // 
            // �\���
            // �\���
            // MPropertyFriendlyName
            // MPropertyAttributeRange
            // 
            // 
            // H]���
            // �\���
            // 
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // 
            // 
            // �]���
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P����
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            namespace CVMixDynamicsCompressorProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixDynamicsCompressorDesc_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // �����
            namespace VMixPannerDesc_t {
                constexpr std::ptrdiff_t m_type = 0x0; // VMixPannerType_t
                constexpr std::ptrdiff_t m_flStrength = 0x4; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // 
            // 
            // @SH�� H��H�p�1
            // H�\$H�t$H�|$ UH��H��@H��@
            // H�\$WH�� H�ً�H��0H�9
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // �
            // H���*
            // H�L$UVWAUH�l$�H��
            // �̛��
            // X����
            // �����
            // 
            // 
            // 
            // H�\$H�t$WH��0H��@
            // H���*
            // H�L$AWH��p�QM����yA�x(
            // Û��
            // �����
            // 
            // 
            // @SH�� H��H�p�1
            // �
            // @SH�� H����tH��'
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // 
            // 
            // 
            // �
            // H�q�*
            // L�D$SH��p�QI�؉T$ ��yA�x(
            //  ����
            // �����
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // 
            // 
            // �����
            // 
            // �����
            // 
            // �����
            // `����
            // h����
            // 
            // �����
            // 
            // �����
            // ����
            // 
            // 
            // 
            // ����
            // �����
            // 
            // �����
            // 
            // �����
            // 
            // 
            // �����
            // `����
            // 
            // �����
            // 
            // �����
            // p����
            // 
            // �����
            // 
            // �����
            // 
            // �����
            // 
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // H��XL��E���
            // P+���
            // �)���
            // �&���
            // �#���
            // � ���
            // 0���
            // �.���
            // 0���
            // 
            // .���
            // `-���
            // p/���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CSosGroupActionSoundeventPrioritySchema {
                constexpr std::ptrdiff_t m_priorityValue = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_priorityVolumeScalar = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_priorityContributeButDontRead = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_bPriorityReadButDontContribute = 0x20; // CUtlString
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // H�\$WH�� ��H���l�����tH��R#
            // 3���������������@SH�� H�;�B
            // H��(H����
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // H��H�I�J3
            // H�\$H�l$H�t$H�|$ AVH��0H�L��H��H��H�II��H�p�
            !
            // H�H�`h���������.}AF
            // .}AF
            // �
            // M��D��H��H�I�.A3
            // H����������������
            // L��D��H�II��H�H���
            // 
            // H�\$H�t$WH��0H��H���֌��H��@
            // H��}.
            // 2��������������̰��������������H��)D
            // @SVWH��0H�iV#
            // H�\$H�t$WH�� H���
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // ���������������H��)D
            // D���
            // H�\$WH�� ��H��������t��
            // 3���������������@SH�� H�;�B
            // H��(H����
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // H��H�I�J3
            // H�\$H�l$H�t$H�|$ AVH��0H�L��H��H��H�II��H�p�
            !
            // H�H�`h���������.}AF
            // .}AF
            // �
            // M��D��H��H�I�.A3
            // H����������������
            // L��D��H�II��H�H���
            // 
            // H�\$H�l$H�t$H�|$ AVH��0H��H�������H��@
            // H���
            // 2��������������̰��������������H��)D
            // @SVWH��0L�d$XH��L��L�t$`L�|$h��
            // H�\$H�t$WH�� H���
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // ���������������H��)D
            // D���
            // @SH�� H��H�`
            // H�\$H�t$WH��@H��@
            // H�\$WH�� ��H���L=����t��
            // H�\$UVWATAWH��`H�rH���
            // H��H�XH�hH�pH�x AVH��`)p�I��)x�H���=`
            // ���������������H��)D
            // H�\$WH��@H��H�
            H����
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // 2��������������̰��������������H��)D
            // 
            // 
            // 
            // ����
            // ����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // @SH�� H��袷��H��+
            // L��<
            // H�\$H�t$WH�� H�ً�H���
            // H�\$H�t$H�|$ UATAUAVAWH��$ ���H���
            // H�\$WH�� I��I������H�H�������
            // @SH��`H���
            // H�\$WH��@H��H�
            H����
            // H��H�XH�pH�xUH�h�H���
            // ���������������H��)D
            // 2��������������̰��������������H��)D
            // H�H��H���
            // p����
            // 
            // �����
            // h����
            // 
            // 
            // 
            // �
            // H��y.
            // 2��������������̰��������������H��)D
            // @SVAVH��@H��L�d$p�@
            // @SH�� I��H��t H�H�����
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // ���
            // A���������������2��������������̰��������������H��)D
            // H�\$WH�� ��H��������t��
            // 3���������������@SH�� H�;�B
            // H��(H����
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // H��H�I�J3
            // H�\$H�l$H�t$H�|$ AVH��0H�L��H��H��H�II��H�p�
            !
            // H�H�`h���������.}AF
            // .}AF
            // �
            // M��D��H��H�I�.A3
            // H����������������
            // L��D��H�II��H�H���
            // 
            // H�\$H�t$H�|$ AVH�� I��L��H��D9A(��
            // H�A ������������@WH��0H��I��H�I L��H��t3L�ZH�@M�
            // �
            // ��u
            A�A�
            // 
            // 
            // H���
            // H��w
            // H�A������������H�yK
            // H�\$WH�� ��H���������t��
            // 3���������������@SH�� H�;�B
            // H��(H����
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // H��H�I�J3
            // H�\$H�l$H�t$H�|$ AVH��0H�L��H��H��H�II��H�p�
            !
            // H�H�`h���������.}AF
            // .}AF
            // �
            // M��D��H��H�I�.A3
            // H����������������
            // L��D��H�II��H�H���
            // 
            // H�\$H�t$H�|$ AVH�� I��L��H��D9A(��
            // H�A ������������@WH��0H��I��H�I L��H��t3L�ZH�@M�
            // 3���������������@SH�� H�;�B
            // ��ufAn��[��A
            // H�\$H�l$H�t$H�|$ AVH�� E3����A���H��A��tH�YHcqH��H�H;�s"H�K8H��tH�H;����P L�s8H��@H;�rދGD�w����v����uH���
            // H�t$ AVH�� M��H��D9A(��
            // H�A�
            // 9Q(������������Hc��
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // H�\$H�l$H�t$H�|$ AVH�� E3����A���H��A��tH�YHcqH��H�H;�s"H�K8H��tH�H;����P L�s8H��@H;�rދGD�w����v����uH���
            // H�t$ AVH�� M��H��D9A(��
            // H�A�
            // 9Q(������������Hc��
            // 
            // H���
            // H��a
            // H�A������������H�yK
            // H���
            // L�A���
            // ��t
            �
            // 
            // H��
            // H�i^
            // H�A������������H�yK
            // H�	�
            // H�
            A�
            // ��t
            �
            // 
            // H�1�
            // H�I[
            // H�A������������H�yK
            // H�Y�
            // H�
            A�
            // ��t
            �
            // 
            // H���
            // H�)X
            // H�A������������H�yK
            // H�)�
            // @SH�� H�AH��H���
            // ��t
            �
            // 
            // L��H�I��23
            // H��H�I��<3
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // �
            // H�\$H�l$H�t$WAVAWH��0H�L��L��H��H�IA��I��H�h� 
            // H��(H��P�@H��(��������������H�IH�H�`X�����M��D��H��H�I�.A3
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H�A���
            // H�Y�
            // @SH�� H�AH��H���
            // ��t
            �
            // 
            // @SH�� H�l$0H��H�I ��H�|$@H��t
            H��
            // 3���������������@SH�� H�;�B
            // H�I H�H�`�����@SH�� H��H�I H��PH�H��H�� [H���
            // H�I H�H�`0�����H��(H�I H��P����H��(���������H�I H�H�`P�����H�I H�H�`H�����H�I H�H�`p�����H�I H�H�`@�����H�I H�H�`8�����
            // H�I H�H�`@�����H�I H�H�`8�����@SH��0H��)t$ H�I (�H��Ph��uK.5�
            // H�I H�H�`P�����H�I H�H�`H�����H�I H�H�`p�����H�I H�H�`@�����H�I H�H�`8�����@SH��0H��)t$ H�I (�H��Ph��uK.5�
            // H�\$H�t$H�|$AVH��0H�H��H�I I��L��H�xH��PA�H�\$ L��H��I����H�\$@H�t$HH�|$PH��0A^���������H�\$H�l$H�t$H�|$ AVH��0H�H��
            // H�H�`h���������.}AF
            // .}AF
            // H�I H�H�``�����H�\$WH�� H��H��H�I H��P �GH�CHD�@D�GH�CH�P�G�����WH�CHfn
            // M��D��H��H�I�.A3
            // 3���������������@SH�� H�;�B
            // H�I H�H�`H�����H�I H�H�`p�����H�I H�H�`@�����H�I H�H�`8�����@SH��0H��)t$ H�I (�H��Ph��uK.5�
            // 
            // 
            // PCM8
            // MP3
            // ADPCM
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            namespace CVoiceContainerRealtimeFMSineWave {
                constexpr std::ptrdiff_t m_flCarrierFrequency = 0xA8; // float32
                constexpr std::ptrdiff_t m_flModulatorFrequency = 0xAC; // float32
                constexpr std::ptrdiff_t m_flModulatorAmount = 0xB0; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // ����
            // 
            // SOS_EDIT_ITEM_TYPE_SOUNDEVENT
            namespace SelectedEditItemInfo_t {
                constexpr std::ptrdiff_t m_EditItems = 0x0; // CUtlVector<SosEditItemInfo_t>
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            namespace VMixModDelayDesc_t {
                constexpr std::ptrdiff_t m_feedbackFilter = 0x0; // VMixFilterDesc_t
                constexpr std::ptrdiff_t m_bPhaseInvert = 0x10; // bool
                constexpr std::ptrdiff_t m_flGlideTime = 0x14; // float32
                constexpr std::ptrdiff_t m_flDelay = 0x18; // float32
                constexpr std::ptrdiff_t m_flOutputGain = 0x1C; // float32
                constexpr std::ptrdiff_t m_flFeedbackGain = 0x20; // float32
                constexpr std::ptrdiff_t m_flModRate = 0x24; // float32
                constexpr std::ptrdiff_t m_flModDepth = 0x28; // float32
                constexpr std::ptrdiff_t m_bApplyAntialiasing = 0x2C; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // PR���
            // p~���
            // 
            // 
            // 
            //  ����
            // 
            // 
            // 
            // 
            // 
            // 
            // �S���
            // 
            // 
            // 
            // 
            // 
            // 
            // `V���
            // 
            // 
            // 
            // �q���
            // 
            // �����
            // MKV3TransferName
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // p����
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // �^���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �,���
            // 
            // 
            // ����
            // !���
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // FILTER_UNKNOWN
            // FILTER_HIGHPASS
            // FILTER_BANDPASS
            // FILTER_NOTCH
            // FILTER_PEAKING_EQ
            // FILTER_LOW_SHELF
            // FILTER_HIGH_SHELF
            // FILTER_ALLPASS
            // FILTER_PASSTHROUGH
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // FILTER_SLOPE_1POLE_12dB
            // FILTER_SLOPE_1POLE_18dB
            // FILTER_SLOPE_1POLE_24dB
            // FILTER_SLOPE_12dB
            // FILTER_SLOPE_24dB
            // FILTER_SLOPE_36dB
            // FILTER_SLOPE_48dB
            // FILTER_SLOPE_MAX
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // LFO_SHAPE_SQUARE
            // LFO_SHAPE_TRI
            // LFO_SHAPE_SAW
            // LFO_SHAPE_NOISE
            // 
            // 
            // 
            // 
            // 
            // 
            // PANNER_TYPE_EQUAL_POWER
            // 
            // 
            // 
            // SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT
            // SUBGRAPH_INTERPOLATION_KEEP_LAST_SUBGRAPH_RUNNING
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // VMIX_CHAN_LEFT
            // VMIX_CHAN_RIGHT
            // VMIX_CHAN_SWAP
            // VMIX_CHAN_MONO
            // VMIX_CHAN_MID_SIDE
            // 
            // 
            // 
            // 
            // �y���
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // CMD_INVALID
            // CMD_CONTROL_INPUT_STORE
            // CMD_CONTROL_INPUT_STORE_DB
            // CMD_CONTROL_TRANSIENT_INPUT_STORE
            // CMD_CONTROL_TRANSIENT_INPUT_RESET
            // CMD_CONTROL_OUTPUT_STORE
            // CMD_CONTROL_EVALUATE_CURVE
            // CMD_CONTROL_COPY
            // CMD_CONTROL_COND_COPY_IF_NEGATIVE
            // CMD_CONTROL_REMAP_LINEAR
            // CMD_CONTROL_REMAP_SINE
            // CMD_CONTROL_REMAP_LOGLINEAR
            // CMD_CONTROL_MAX
            // CMD_CONTROL_RESET_TIMER
            // CMD_CONTROL_INCREMENT_TIMER
            // CMD_CONTROL_EVAL_ENVELOPE
            // CMD_CONTROL_SINE_BLEND
            // CMD_PROCESSOR_SET_CONTROL_VALUE
            // CMD_PROCESSOR_SET_NAME_INPUT
            // CMD_PROCESSOR_SET_CONTROL_ARRAYVALUE
            // CMD_PROCESSOR_STORE_CONTROL_VALUE
            // CMD_PROCESSOR_SET_VSND_VALUE
            // CMD_SUBMIX_PROCESS
            // CMD_SUBMIX_GENERATE
            namespace CVMixNameInputMeter {
                constexpr std::ptrdiff_t m_nValueIndex = 0x10; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // �c���
            // �����
            // 
            // 
            // 
            // 
            // 
            // �>���
            // 
            // 
            // 
            // @���
            // 
            // 
            // 
            // pC���
            // 
            //  (���
            // 
            // 0���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MKV3TransferName
            // MKV3TransferName
            // MKV3TransferName
            // MKV3TransferName
            // MKV3TransferName
            // 
            // 
            // �Y���
            //  Z���
            // Z���
            // �F���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            //  O���
            // `����
            // Е���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // �����
            // @Y���
            // @+���
            // �����
            // 
            // e���
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // �\���
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // ����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CVMixDynamics3BandProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixDynamics3BandDesc_t
            }
            // Parent: None
            // Field count: 17
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            namespace VMixBoxverbDesc_t {
                constexpr std::ptrdiff_t m_flSizeMax = 0x0; // float32
                constexpr std::ptrdiff_t m_flSizeMin = 0x4; // float32
                constexpr std::ptrdiff_t m_flComplexity = 0x8; // float32
                constexpr std::ptrdiff_t m_flDiffusion = 0xC; // float32
                constexpr std::ptrdiff_t m_flModDepth = 0x10; // float32
                constexpr std::ptrdiff_t m_flModRate = 0x14; // float32
                constexpr std::ptrdiff_t m_bParallel = 0x18; // bool
                constexpr std::ptrdiff_t m_filterType = 0x1C; // VMixFilterDesc_t
                constexpr std::ptrdiff_t m_flWidth = 0x2C; // float32
                constexpr std::ptrdiff_t m_flHeight = 0x30; // float32
                constexpr std::ptrdiff_t m_flDepth = 0x34; // float32
                constexpr std::ptrdiff_t m_flFeedbackScale = 0x38; // float32
                constexpr std::ptrdiff_t m_flFeedbackWidth = 0x3C; // float32
                constexpr std::ptrdiff_t m_flFeedbackHeight = 0x40; // float32
                constexpr std::ptrdiff_t m_flFeedbackDepth = 0x44; // float32
                constexpr std::ptrdiff_t m_flOutputGain = 0x48; // float32
                constexpr std::ptrdiff_t m_flTaps = 0x4C; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // 
            // 
            // �����
            // 
            // �����
            // 
            // �����
            // `����
            // h����
            // 
            // �����
            // 
            // �����
            // ����
            // 
            // 
            // 
            // ����
            // �����
            // 
            // �����
            // 
            // �����
            // 
            // 
            // �����
            // `����
            // 
            // �����
            // 
            // �����
            // p����
            // 
            // �����
            // 
            // �����
            // 
            // �����
            // 
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // H��XL��E���
            // P+���
            // �)���
            // �&���
            // �#���
            // � ���
            // 0���
            // �.���
            // 0���
            // 
            // .���
            // `-���
            // p/���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CSosGroupActionSchema {
            }
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyReadonlyExpr
            // MPropertySuppressExpr
            // MPropertyStartGroup
            // MPropertyStartGroup
            // MPropertySuppressExpr
            namespace CSosSoundEventGroupSchema {
                constexpr std::ptrdiff_t m_nGroupType = 0x8; // SosGroupType_t
                constexpr std::ptrdiff_t m_bBlocksEvents = 0xC; // bool
                constexpr std::ptrdiff_t m_nBlockMaxCount = 0x10; // int32
                constexpr std::ptrdiff_t m_flMemberLifespanTime = 0x14; // float32
                constexpr std::ptrdiff_t m_bInvertMatch = 0x18; // bool
                constexpr std::ptrdiff_t m_Behavior_EventName = 0x1C; // SosGroupFieldBehavior_t
                constexpr std::ptrdiff_t m_matchSoundEventName = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_bMatchEventSubString = 0x28; // bool
                constexpr std::ptrdiff_t m_matchSoundEventSubString = 0x30; // CUtlString
                constexpr std::ptrdiff_t m_Behavior_EntIndex = 0x38; // SosGroupFieldBehavior_t
                constexpr std::ptrdiff_t m_flEntIndex = 0x3C; // float32
                constexpr std::ptrdiff_t m_Behavior_Opvar = 0x40; // SosGroupFieldBehavior_t
                constexpr std::ptrdiff_t m_flOpvar = 0x44; // float32
                constexpr std::ptrdiff_t m_Behavior_String = 0x48; // SosGroupFieldBehavior_t
                constexpr std::ptrdiff_t m_opvarString = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_vActions = 0x58; // CUtlVector<CSosGroupActionSchema*>
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            namespace VMixDynamics3BandDesc_t {
                constexpr std::ptrdiff_t m_fldbGainOutput = 0x0; // float32
                constexpr std::ptrdiff_t m_flRMSTimeMS = 0x4; // float32
                constexpr std::ptrdiff_t m_fldbKneeWidth = 0x8; // float32
                constexpr std::ptrdiff_t m_flDepth = 0xC; // float32
                constexpr std::ptrdiff_t m_flWetMix = 0x10; // float32
                constexpr std::ptrdiff_t m_flTimeScale = 0x14; // float32
                constexpr std::ptrdiff_t m_flLowCutoffFreq = 0x18; // float32
                constexpr std::ptrdiff_t m_flHighCutoffFreq = 0x1C; // float32
                constexpr std::ptrdiff_t m_bPeakMode = 0x20; // bool
                constexpr std::ptrdiff_t m_bandDesc = 0x24; // VMixDynamicsBand_t[3]
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �`���
            // �Y���
            // �Y���
            // �Y���
            // 
            // 
            // MKV3TransferName
            // MKV3TransferName
            // MKV3TransferName
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // ����
            // �H���
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // ণ��
            // 
            // �)���
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // PR���
            // p~���
            // 
            // 
            // 
            //  ����
            // 
            // 
            // 
            // 
            // 
            // 
            // �S���
            // 
            // 
            // 
            // 
            // 
            // 
            // `V���
            // 
            // 
            // 
            // �q���
            // 
            // �����
            // MKV3TransferName
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // p����
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // �^���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �,���
            // 
            // 
            // ����
            // !���
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // FILTER_UNKNOWN
            // FILTER_HIGHPASS
            // FILTER_BANDPASS
            // FILTER_NOTCH
            // FILTER_PEAKING_EQ
            // FILTER_LOW_SHELF
            // FILTER_HIGH_SHELF
            // FILTER_ALLPASS
            // FILTER_PASSTHROUGH
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // FILTER_SLOPE_1POLE_12dB
            // FILTER_SLOPE_1POLE_18dB
            // FILTER_SLOPE_1POLE_24dB
            // FILTER_SLOPE_12dB
            // FILTER_SLOPE_24dB
            // FILTER_SLOPE_36dB
            // FILTER_SLOPE_48dB
            // FILTER_SLOPE_MAX
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // LFO_SHAPE_SQUARE
            // LFO_SHAPE_TRI
            // LFO_SHAPE_SAW
            // LFO_SHAPE_NOISE
            // 
            // 
            // 
            // 
            // 
            // 
            // PANNER_TYPE_EQUAL_POWER
            // 
            // 
            // 
            // SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT
            // SUBGRAPH_INTERPOLATION_KEEP_LAST_SUBGRAPH_RUNNING
            // 
            // 
            // 
            // 
            namespace CVMixEQ8ProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixEQ8Desc_t
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyDescription
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CDSPMixgroupModifier {
                constexpr std::ptrdiff_t m_mixgroup = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_flModifier = 0x8; // float32
                constexpr std::ptrdiff_t m_flModifierMin = 0xC; // float32
                constexpr std::ptrdiff_t m_flSourceModifier = 0x10; // float32
                constexpr std::ptrdiff_t m_flSourceModifierMin = 0x14; // float32
                constexpr std::ptrdiff_t m_flListenerReverbModifierWhenSourceReverbIsActive = 0x18; // float32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // p����
            namespace CAudioMorphData {
                constexpr std::ptrdiff_t m_times = 0x0; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_nameHashCodes = 0x18; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_nameStrings = 0x30; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_samples = 0x48; // CUtlVector<CUtlVector<float32>>
                constexpr std::ptrdiff_t m_flEaseIn = 0x60; // float32
                constexpr std::ptrdiff_t m_flEaseOut = 0x64; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            namespace VMixDualCompressorDesc_t {
                constexpr std::ptrdiff_t m_flRMSTimeMS = 0x0; // float32
                constexpr std::ptrdiff_t m_fldbKneeWidth = 0x4; // float32
                constexpr std::ptrdiff_t m_flWetMix = 0x8; // float32
                constexpr std::ptrdiff_t m_bPeakMode = 0xC; // bool
                constexpr std::ptrdiff_t m_bandDesc = 0x10; // VMixDynamicsBand_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // �����
            // 
            // 
            // 
            // 
            // �����
            // 
            // ����
            // 
            // 
            // 
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // 
            // ����
            // MPropertyFriendlyName
            // 
            // 
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // p����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // ����
            // 
            // (����
            // 
            // 
            // H����
            // �G���
            // 
            // 
            // 
            // MPropertySuppressExpr
            // 
            // 
            // 
            // MPropertySuppressExpr
            // MPropertyFriendlyName
            // 
            // 
            // MPropertySuppressExpr
            // 
            // 
            // 
            // MPropertySuppressExpr
            // MPropertyFriendlyName
            // 
            // 
            // MPropertySuppressExpr
            // 
            // 
            // 
            // MPropertySuppressExpr
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // `I���
            // @����
            // `����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // @SH�� H��H��?
            // L�a�
            // @UH�� H�\$0H��H�|$@H���
            // H�\$H�t$H�|$ UATAUAVAWH�l$�H��
            // @SUWH�� Ic��
            // H��H��
            // H�\$WH��@H��H�
            H����
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // 2��������������̰��������������H��)D
            // 
            // �;
            // H�A;
            // 2��������������̰��������������H��)D
            // @SVAVH��@L�d$pL��L�|$0M��L���p
            // A�@
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // ���������������H��)D
            // A���������������2��������������̰��������������H��)D
            // 
            // 
            // 
            // 
            // @����
            // @����
            // 
            // 
            // 
            // @����
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // p����
            // 
            // 
            // 
            // `յ��
            // ȿ���
            // ؿ���
            // 
            // @SH�� H��H�p�
            // H�\$H�t$WH��@H��@
            // H�\$WH�� H�ً�H���
            // @UATAWH��0HcE3�H�\$XL��H�t$`H��H�rH�|$hL�l$(L�-�c
            // ���������������H��)D
            // H�\$WH�� ���
            // �
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // @SH�� H��H�P�
            // L��
            // H�\$WH�� H����H���
            // H�\$H�l$H�t$ WATAUAVAWH�� L�rH�=�8
            // ���������������H��)D
            // H�\$H�t$WH�� H���
            // �
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // 
            // 
            // MPropertyFriendlyName
            // 
            // �����
            // 
            // �����
            // 
            // 
            // 
            // 
            // 
            // ����
            // �����
            // 
            // 
            // 
            // 
            // �
            // H��
            // 2��������������̰��������������H��)D
            // H�\$L�D$H�T$UVWATAUAVAWH��H��
            // @SH�� ��KF
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // 
            // 
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // 
            // �
            // H���
            // 2��������������̰��������������H��)D
            // H�\$VWATAUAWH��P���
            // @SH�� ��KF
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // ����
            // 0����
            // @����
            // 
            // 
            // 
            namespace CVoiceContainerStaticAdditiveSynth {
                constexpr std::ptrdiff_t m_tones = 0xB8; // CUtlVector<CVoiceContainerStaticAdditiveSynth::CTone>
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // H�\$WH��0H��H���+���H��@
            // H�i:
            // 2��������������̰��������������H��)D
            // @SVWH��0L�d$XH��L��L�t$`L�|$h��
            // A�@
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // ���������������H��)D
            // A���������������2��������������̰��������������H��)D
            // @SH�� H��H��E
            // L�q�
            // H�\$WH�� ��H���<�����t��
            // H�\$H�l$H�t$ WAVAWH�� H�ZL�=�{
            // H��H�pWH��@I��H��M���n
            // ���������������H��)D
            // H�\$WH��@H��H�
            H����
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // 2��������������̰��������������H��)D
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // p����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �ӵ��
            // �����
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            //  ����
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // H�\$WH��0H��H���kZ��H�D�
            // H���
            // 2��������������̰��������������H��)D
            // H�l$ VWATH��`���
            // @SH�� ��KF
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // 
            // �
            // H���
            // 2��������������̰��������������H��)D
            // H�\$L�D$H�T$UVWATAUAVAWH��H��
            // @SH�� ��KF
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // 
            // 
            // 
            // �����
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // @SH�� H��H���
            // L�A
            
            // H�\$WH�� H����H���
            // H�\$H�l$H�t$ WATAUAVAWH�� L�rL�-�>
            // ���������������H��)D
            // H�\$H�t$WH�� H���
            // �
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // 
            // 
            // 
            // `����
            // 
            // 
            // 
            // 
            // 
            // 
            // �����
            // �����
            // �����
            // 
            // 
            // 
            // 
            // 
            // @SH�� H��H���
            // L�!�
            // H�\$WH�� H�ً�H���
            // ���
            // ���������������H��)D
            // @SH�� ���
            // �
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // 
            // 
            // `����
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �
            // H�ɾ
            // 2��������������̰��������������H��)D
            // H�\$H�l$H�t$H�|$ AVH��03�I��H��L��@8��
            // @SH�� ��KF
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // 
            // 
            // 
            // �����
            // 
            // 
            // @���
            // �����
            // ����
            // @SH�� H��H���
            // L���
            // H�\$WH�� H����H���
            // H�\$H�l$H�t$ WATAUAVAWH�� H�rL�-�'
            // ���������������H��)D
            // H�\$WH�� H���
            // �
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // �����
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // 
            // 
            // H�\$WH��0H��H�����H��@
            // H�a�
            // 2��������������̰��������������H��)D
            // H�\$ VH�� H��H�L$0H�T$0I��H�L$8�,���H�H�
            // @SH�� ��KF
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // 
            // 
            // 
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // �����
            // ����
            // 
            // 
            // MPropertySuppressExpr
            // MPropertyFriendlyName
            // 
            // MPropertySuppressExpr
            // MPropertyFriendlyName
            // 
            // 
            // �����
            // �����
            namespace CVoiceContainerShapedNoise {
                constexpr std::ptrdiff_t m_bUseCurveForFrequency = 0xA8; // bool
                constexpr std::ptrdiff_t m_flFrequency = 0xAC; // float32
                constexpr std::ptrdiff_t m_frequencySweep = 0xB0; // CPiecewiseCurve
                constexpr std::ptrdiff_t m_bUseCurveForResonance = 0xF0; // bool
                constexpr std::ptrdiff_t m_flResonance = 0xF4; // float32
                constexpr std::ptrdiff_t m_resonanceSweep = 0xF8; // CPiecewiseCurve
                constexpr std::ptrdiff_t m_bUseCurveForAmplitude = 0x138; // bool
                constexpr std::ptrdiff_t m_flGainInDecibels = 0x13C; // float32
                constexpr std::ptrdiff_t m_gainSweep = 0x140; // CPiecewiseCurve
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyDescription
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPropertyFriendlyName
            // 
            // 
            // 
            namespace CDspPresetModifierList {
                constexpr std::ptrdiff_t m_dspName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_modifiers = 0x8; // CUtlVector<CDSPMixgroupModifier>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataNodeType
            // MVDataFileExtension
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // 	���
            // �����
            // �����
            // �����
            // �����
            // 
            // 
            // 
            // 
            // @SH�� H��H��y
            // L���
            // ���������������H��)D
            // �A�A
            // 
            // �{
            // H�A�;
            // ���������������H��)D
            // H�\$H�t$WH�� H�y
            // H�\$WH�� I��L��H��H��uf�A0�C�A4��4�C�CfnA([��C�YA<茛
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // 
            // �{
            // H��;
            // 2��������������̰��������������H��)D
            // H�\$H�l$H�t$WAVAWH��0H��M����
            // fA�@A�@
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // �T
            // �
            // 2��������������̰��������������H��)D
            // ���������������H��)D
            // A���������������2��������������̰��������������H��)D
            // �����
            // �����
            // P����
            // �����
            // �����
            // `����
            // �����
            // �����
            // 0����
            // p����
            // @����
            // �����
            // ����
            // �����
            // p����
            // �����
            //  ����
            // p����
            // 0����
            // �����
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �
            // H���;
            // 2��������������̰��������������H��)D
            // L�D$SVAT��p
            // fA�@
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // @SH��`���
            // A���������������2��������������̰��������������H��)D
            // 
            // MPropertyFriendlyName
            // 
            // 
            // @����
            // 
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // RandomNoRepeats
            // 
            // RandomAvoidLast
            // 
            // Sequential
            // 
            // RandomWeights
            // 
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // 
            // 
            // ����
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // �
            // H���;
            // 2��������������̰��������������H��)D
            // H�\$H�t$H�|$AVH��0H�I��H��L���
            // H�\$H�t$WH�� �m�
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // H�\$H�l$H�t$WAVAWH��@3�H�rM��H�Z D�L��H����E��u9�9����t3��
            // H�\$WH�� ��H���L�����t��
            // 3���������������@SH�� H�;�B
            // H��(H����
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // H��H�I�J3
            // H�\$H�l$H�t$H�|$ AVH��0H�L��H��H��H�II��H�p�
            !
            // H�H�`h���������.}AF
            // .}AF
            // �
            // M��D��H��H�I�.A3
            // H����������������
            // L��D��H�II��H�H���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // H�\$H�t$H�|$ AVH�� I��L��H��D9A(��
            // H�A ������������@WH��0H��I��H�I L��H��t3L�ZH�@M�
            // 3���������������@SH�� H�;�B
            // ��ufAn��[��A
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // H�\$H�t$H�|$ AVH�� I��L��H��D9A(��
            // H�A ������������@WH��0H��I��H�I L��H��t3L�ZH�@M�
            // 3���������������@SH�� H�;�B
            // ��ufAn��[��A
            // H�i
            // H��(H�I����2�H��(�������������H�9�
            // ��t
            �
            // 
            // H��
            // H�9�
            // H�A������������H�yK
            // H��
            // H�\$H�t$WH�� H�AH��H���
            // ��t
            �
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �4���
            // P����
            // 
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // 
            // p����
            // �����
            // 
            namespace CVoiceContainerBase {
                constexpr std::ptrdiff_t m_vSound = 0x28; // CVSound
                constexpr std::ptrdiff_t m_pEnvelopeAnalyzer = 0xA0; // CVoiceContainerAnalysisBase*
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // �/���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �t���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            //  g���
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // @SH�� H���
            // H��@
            // H��@
            // 3���������������@SH�� H�;�B
            // H���.
            // 3���������������@SH�� H�;�B
            // 3���������������@SH�� H�;�B
            // 3���������������@SH�� H�;�B
            // ���������������H��)D
            // 2��������������̰��������������H��)D
            // 3���������������@SH�� H�;�B
            // 2��������������̰��������������H��)D
            // �
            // 2��������������̰��������������H��)D
            // ���������������H��)D
            // 2��������������̰��������������H��)D
            // �
            // 2��������������̰��������������H��)D
            // 2��������������̰��������������H��)D
            // 3���������������@SH�� H�;�B
            // 2��������������̰��������������H��)D
            // 2��������������̰��������������H��)D
            // H��@
            // �
            // �
            // 2��������������̰��������������H��)D
            // 
            // H�\$WH�� H�ً�H��xH�9
            // H�QH�E,
            // H�Q H��G
            // �A(������������̋A,�������������H�\$H�l$VH�� 3ۋ�H��9Y~/H�|$0��H�F�D.uH�L��H��P8��H��0;^|�H�|$0H�\$8H�l$@H�� ^�������
            // H�A`������������H���.
            // 3���������������@SH�� H�;�B
            // 3���������������@SH�� H�;�B
            // 3���������������@SH�� H�;�B
            // ���������������H��)D
            // �AT������������H�\$H�l$H�t$WH�� H��H��H���
            // �AP�������������@SUVAVH��(H�|$P2�Hc��
            // H�\$H�t$WH�� H��I��H�QH��H������H��tL��D
            // H�Q@I��H��tI������I��B�<
            // �A\�����������̋AX�������������ATH��@���0
            // �AV������������H�\$WH��
            // 2��������������̰��������������H��)D
            // �
            // 2��������������̰��������������H��)D
            // 2��������������̰��������������H��)D
            // 3���������������@SH�� H�;�B
            // 2��������������̰��������������H��)D
            // 2��������������̰��������������H��)D
            // H��@
            // �
            // �AW�������������AW������������H�\$H�t$ WH��
            // 2��������������̰��������������H��)D
            // �
            // 
            // �;'
            // H���?
            // H���8�����������@SH�� H��H������H��H�� [�r�����@SH�� H��H�������H��H�� [������@SH�� H��H���ߏ��H��H�� [鲜����@SH�� H��H��迏�
            // H��(�����H��t�
            // @SH�� H��H�г
            // H�\$H�t$ WH��@H��@
            // H�Y!
            // H�\$WH�� H��
            // 
            // H�\$H�l$H�t$ WH��
            // H�9�
            // @SH�� H��H�������H��H�� [������@SH�� H��H���ߎ��H��H�� [鲱����@SH�� H��H��迎��H��H�� [�R�����@SH�� H��H��蟎��H��H�� [������
            // H�\$WH�� H��I�ع 
            // @SH�� H���BI��H���:
            // H�\$H�t$ WH��@H��@
            // H��!
            // H�\$WH�� H�ً�H�� H�9
            // 
            // H�\$H�l$H�t$ WH��p
            // H���
            // @SH�� H��H��迏��H��H�� [�R�����@SH�� H��H��蟏��H��H�� [������@SH�� H��H������H��H�� [钤����@SH�� H��H���_���H��H�� [�2�����
            // H�\$WH�� H��I�ع@
            // @SH�� H��H�P�
            // L�A�
            // H��!
            // H�\$WH�� H�'
            // 
            // H�\$H�l$H�t$ WH��p
            // H��
            // @SH�� H��H���?���H��H�� [�Ҿ����@SH�� H��H������H��H�� [�r�����@SH�� H��H�������H��H�� [������@SH�� H��H���ߍ��H��H�� [������
            // H�\$WH�� H��I�ع0	
            // @SH�� H��H�p�
            // L�A�
            // H��!
            // H�\$WH�� H�
            // 
            // H�\$H�l$H�t$ WH��p
            // H��
            // @SH�� H��H��蟏��H��H�� [������@SH�� H��H������H��H�� [钤����@SH�� H��H���_���H��H�� [�2�����@SH�� H��H���?���H��H�� [�ҩ����
            // H�\$H�t$WH�� H��I��
            // @SH�� H��H�`�
            // H�\$H�t$ WH��@H��@
            // H��!
            // H�\$WH�� H��
            // 
            // H�\$WH��0H��H���'
            // H�ٷ
            // @SH�� H��H������H��H�� [�r�����@SH�� H��H�������H��H�� [������@SH�� H��H���ߏ��H��H�� [鲜����@SH�� H��H��迏��H��H�� [�R�����
            // @SWATAUH��(L��I�ع�
            // @SH�� H��H���
            // H�\$H�t$ WH��@H��@
            // H��!
            // H�\$WH�� H��
            // 
            // H�\$H�l$H�t$ WH��p
            // H���
            // @SH�� H��H��迍��H��H�� [�R�����@SH�� H��H��蟍��H��H�� [�������@SH�� H��H������H��H�� [������@SH�� H��H���_���H��H�� [�2�����
            // H�\$WH�� H��I�عP
            // @SH�� H��H���
            // L�1�
            // H��!
            // H�\$WH�� H�
            // 
            // H�\$H�l$H�t$ WH��p
            // H�9�
            // @SH�� H��H���?���H��H�� [�ҩ����@SH�� H��H������H��H�� [�r�����@SH�� H��H�������H��H�� [������@SH�� H��H���ߎ��H��H�� [鲱����
            // H�\$UVWH��0H��I�ع�	
            // @SH�� H��H��
            // L�Q�
            // H��!
            // H�\$WH�� H�'
            // 
            // H�\$H�l$H�t$ WH��p
            // H��
            // @SH�� H��H������H��H�� [钤����@SH�� H��H���_���H��H�� [�2�����@SH�� H��H���?���H��H�� [�ҩ����@SH�� H��H������H��H�� [�r�����
            // H�\$H�l$H�t$WH�� H��I�ع`

            // @SH�� H��H��
            // H�\$H�t$ WH��@H��@
            // H�i!
            // H�\$WH�� H��
            // 
            // H�\$H�l$H�t$ WH��p
            // H���
            // @SH�� H��H���ߍ��H��H�� [������@SH�� H��H��迍��H��H�� [�R�����@SH�� H��H��蟍��H��H�� [�������@SH�� H��H������H��H�� [������
            // H�L��H��I��H�` H�L��H��I��H� �H�L��H��I��H�`8H�L��H��I��H�`(H�L��H��I��H�`@H�L��H��I��H�`0H�L��H��I��H�`H�\$H�t$WH�� H
            // @SH�� H��H�0�
            // L���
            // H��!
            // H�\$WH�� H�g
            // 
            // H�\$H�l$H�t$ WH��p
            // H��
            // @SH�� H��H������H��H�� [�r�����@UH��H��
            // H�\$H�t$WH�� H��I���
            // @SH�� H��H��
            // H�\$H�t$ WH��@H��@
            // H��!
            // H�\$WH�� H��
            // 
            // H�\$H�l$H�t$ WH��p
            // H�I�
            // @SH�� H��H���?���H��H�� [�������@SH�� H��H������H��H�� [�r�����@UH��H��
            // H�\$H�l$ WH�� H��I����
            // @SH�� H��H���
            // L�q�
            // H��!
            // H�\$WH�� H�
            // 
            // H�\$H�l$H�t$ WH��p
            // H�a�
            // @SH�� H��H������H��H�� [�r�����@SH�� H��H�������H��H�� [������@SH�� H��H���ߍ��H��H�� [������@SH�� H��H��迍��H��H�� [�R�����
            // H�\$H�t$WH�� H��I��
            // @SH�� H��H���
            // H�\$H�t$ WH��@H��@
            // H��!
            // H�\$WH�� H�ً�H�� H�9
            // 
            // �;'
            // H�a�
            // H���8�����������@SH�� H��H������H��H�� [�r�����@SH�� H��H�������H��H�� [������@SH�� H��H���ߏ��H��H�� [鲜����@SH�� H��H��迏�
            // H�L��H��I��H�`8H�L��H��I��H�`(H�L��H��I��H�`@H�L��H��I��H�`0H�L��H��I��H�`H�\$H�t$WH�� H��D
            // @SH�� H��H�@�
            // H�\$H�t$WH��@H��@
            // H�	!
            // H�\$WH�� H��
            // 
            // �;'
            // H��
            // H���8�����������@SH�� H��H������H��H�� [�r�����@SH�� H��H�������H��H�� [������@SH�� H��H���ߏ��H��H�� [鲜����@SH�� H��H��迏�
            // H�L��H��I��H�`0H�L��H��I��H�`H�\$H�t$WH�� H��D
            // @SH�� H��H�p�
            // H�\$H�t$WH��@H��@
            // H�	!
            // H�\$WH�� H��
            // 
            // �;'
            // H�i�
            // H���8�����������@SH�� H��H������H��H�� [�r�����@SH�� H��H�������H��H�� [������@SH�� H��H���ߏ��H��H�� [鲜����@SH�� H��H��迏�
            // H�\$H�|$AVH�� H��I�ع�
            // @SH�� H��H���
            // L�1�
            // H��!
            // H�\$WH�� ��H���������t�X
            // 
            // H�QH�e,
            // H�QH��G
            // �

            // H�QHH��4
            // 3���������������@SH�� H�;�B
            // @SH�� H��H�����
            // 3���������������@SH�� H�;�B
            // 3���������������@SH�� H�;�B
            namespace CVMixDiffusorProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixDiffusorDesc_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // FILTER_UNKNOWN
            // FILTER_HIGHPASS
            // FILTER_BANDPASS
            // FILTER_NOTCH
            // FILTER_PEAKING_EQ
            // FILTER_LOW_SHELF
            // FILTER_HIGH_SHELF
            // FILTER_ALLPASS
            // FILTER_PASSTHROUGH
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // FILTER_SLOPE_1POLE_12dB
            // FILTER_SLOPE_1POLE_18dB
            // FILTER_SLOPE_1POLE_24dB
            // FILTER_SLOPE_12dB
            // FILTER_SLOPE_24dB
            // FILTER_SLOPE_36dB
            // FILTER_SLOPE_48dB
            // FILTER_SLOPE_MAX
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // LFO_SHAPE_SQUARE
            // LFO_SHAPE_TRI
            // LFO_SHAPE_SAW
            // LFO_SHAPE_NOISE
            // 
            // 
            // 
            // 
            // 
            // 
            // PANNER_TYPE_EQUAL_POWER
            // 
            // 
            // 
            // SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT
            // SUBGRAPH_INTERPOLATION_KEEP_LAST_SUBGRAPH_RUNNING
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // VMIX_CHAN_LEFT
            // VMIX_CHAN_RIGHT
            // VMIX_CHAN_SWAP
            // VMIX_CHAN_MONO
            // VMIX_CHAN_MID_SIDE
            // 
            // 
            // 
            // 
            // �y���
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // CMD_INVALID
            // CMD_CONTROL_INPUT_STORE
            // CMD_CONTROL_INPUT_STORE_DB
            // CMD_CONTROL_TRANSIENT_INPUT_STORE
            // CMD_CONTROL_TRANSIENT_INPUT_RESET
            // CMD_CONTROL_OUTPUT_STORE
            // CMD_CONTROL_EVALUATE_CURVE
            // CMD_CONTROL_COPY
            // CMD_CONTROL_COND_COPY_IF_NEGATIVE
            // CMD_CONTROL_REMAP_LINEAR
            // CMD_CONTROL_REMAP_SINE
            // CMD_CONTROL_REMAP_LOGLINEAR
            // CMD_CONTROL_MAX
            // CMD_CONTROL_RESET_TIMER
            // CMD_CONTROL_INCREMENT_TIMER
            // CMD_CONTROL_EVAL_ENVELOPE
            // CMD_CONTROL_SINE_BLEND
            // CMD_PROCESSOR_SET_CONTROL_VALUE
            // CMD_PROCESSOR_SET_NAME_INPUT
            // CMD_PROCESSOR_SET_CONTROL_ARRAYVALUE
            // CMD_PROCESSOR_STORE_CONTROL_VALUE
            // CMD_PROCESSOR_SET_VSND_VALUE
            // CMD_SUBMIX_PROCESS
            // CMD_SUBMIX_GENERATE
            // CMD_SUBMIX_GENERATE_SIDECHAIN
            // CMD_SUBMIX_DEBUG
            // CMD_SUBMIX_MIX2x1
            // CMD_SUBMIX_OUTPUT
            // CMD_SUBMIX_OUTPUTx2
            // CMD_SUBMIX_COPY
            // CMD_SUBMIX_ACCUMULATE
            // CMD_SUBMIX_METER
            // CMD_SUBMIX_METER_SPECTRUM
            // CMD_IMPULSERESPONSE_INPUT_STORE
            // CMD_PROCESSOR_SET_IMPULSERESPONSE_VALUE
            // CMD_REMAP_VSND_TO_IMPULSERESPONSE
            // CMD_IMPULSERESPONSE_RESET
            // CMD_BLEND_VSNDS_TO_IMPULSERESPONSE
            // CMD_IMPULSERESPONSE_DELAY
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �l���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CVMixUtilityProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixUtilityDesc_t
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �
            // H��y.
            // 2��������������̰��������������H��)D
            // H��SUAWH��
            // @SH�� I��H��t H�H�����
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // ���
            // A���������������2��������������̰��������������H��)D
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // @SH�� H���b���H��+
            // L��2
            // H�\$H�t$WH�� H�ً�H���
            // H�\$H�l$H�t$ WATAUAVAWH�� H�rL�-��
            // H�\$WH�� I��I���k���H�H�������
            // @SH��`H���
            // H�\$WH��@H��H�
            H����
            // H��H�XH�pH�xUH�h�H���
            // ���������������H��)D
            // 2��������������̰��������������H��)D
            // H�H��H���
            // 
            // L��H�I��23
            // H��H�I��<3
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // �
            // H�\$H�l$H�t$WAVAWH��0H�L��L��H��H�IA��I��H�h� 
            // H��(H��P�@H��(��������������H�IH�H�`X�����M��D��H��H�I�.A3
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H��H�IH�H���
            // H�\$H�l$H�t$H�|$ AVH�� E3����A���H��A��tH�YHcqH��H�H;�s"H�K8H��tH�H;����P L�s8H��@H;�rދGD�w����v����uH���
            // H�t$ AVH�� M��H��D9A(��
            // H�A�
            // 9Q(������������Hc��
            // 
            // 
            // H���
            // H�
            A�
            // ��t
            �
            // 
            // L��H�I��23
            // H��H�I��<3
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // �
            // H�\$H�l$H�t$WAVAWH��0H�L��L��H��H�IA��I��H�h� 
            // H��(H��P�@H��(��������������H�IH�H�`X�����M��D��H��H�I�.A3
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // ���
            // H�\$H�l$H�t$H�|$ AVH�� E3����A���H��A��tH�YHcqH��H�H;�s"H�K8H��tH�H;����P L�s8H��@H;�rދGD�w����v����uH���
            // H�t$ AVH�� M��H��D9A(��
            // H�E�
            // 9Q(������������Hc��
            // 
            // H�\$H�t$H�|$ AVH�� I��L��H��D9A(��
            // H�A ������������@WH��0H��I��H�I L��H��t3L�ZH�@M�
            // �
            // ��u
            A�A�
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // H�\$H�t$H�|$ AVH�� I��L��H��D9A(��
            // H�A ������������@WH��0H��I��H�I L��H��t3L�ZH�@M�
            // �
            // ��u
            A�A�
            // H���
            // L�
            A�A;��
            // ��t
            �
            // 
            // H���
            // H��_
            // H�A������������H�yK
            // H��
            // �AW�H��_��]e
            // ��t
            �
            // 
            // H�	�
            // H��\
            // H�A������������H�yK
            // H�1�
            // H�
            A�
            // ��t
            �
            // 
            // H�Y�
            // H��Y
            // H�A������������H�yK
            // H���
            // H�
            A�
            // ��t
            �
            // 
            // H�)�
            // H�)X
            // H�A������������H�yK
            // H�\$WH�� ��H���,�����t�@
            // 3���������������@SH�� H�;�B
            // H��(H����
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // H��H�I�J3
            // H�\$H�l$H�t$H�|$ AVH��0H�L��H��H��H�II��H�p�
            !
            // H�H�`h���������.}AF
            // .}AF
            // �
            // M��D��H��H�I�.A3
            // H����������������
            // L��D��H�II��H�H���
            // 
            // H�Y�
            // H�yY
            // H�A������������H�yK
            // 
            // @SH�� H��H�I H��PH�H��H�� [H���
            // H�I H�H�`�����H�AH�@���������H�I H�H�` �����H�I H�H�`0�����H��(H�I H��P����H��(���������H�I H�H�`P�����H�I H�H�`H�����
            // H�I H�H�` �����H�I H�H�`0�����H��(H�I H��P����H��(���������H�I H�H�`P�����H�I H�H�`H�����H�I H�H�`p�����H�I H�H�`@�����
            // H�I H�H�`8�����@SH��0H��)t$ H�I (�H��Ph��uK.5�
            // H�I H�H�`X�����H�I H�H�``�����H�\$WH�� H��H��H�I H��P �GH�CHD�@D�GH�CH�P�G�����WH�CHfn
            // H�\$H�l$H�t$H�|$ AVH��0H�H��H�I A��I��L��H�pH��Pf�\$(A�L��H�|$ H��I����H�\$@H�l$HH�t$PH�|$XH��0A^������H��(L��tU��t
            // H�AH�@���������H�I H�H�` �����H�I H�H�`0�����H��(H�I H��P����H��(���������H�I H�H�`P�����H�I H�H�`H�����H�I H�H�`p�����
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // H�I H�H�`p�����H�I H�H�`@�����H�I H�H�`8�����@SH��0H��)t$ H�I (�H��Ph��uK.5�
            // L��SH��`H�Y3�H����
            // H�\$WH�� H��H��H�I H��P �GH�CHD�@D�GH�CH�P�G�����WH�CHfn
            // H��(H�I H��P����H��(���������H�I H�H�`P�����H�I H�H�`H�����H�I H�H�`p�����H�I H�H�`@�����H�I H�H�`8�����@SH��0H��)t$ H�
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �����
            // 
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �����
            // MPropertyFriendlyName
            // 
            // 
            // �����
            // 
            // �����
            // 
            // p����
            // 
            // �����
            // 
            // �����
            // 
            // 
            // 
            // 
            //  $���
            // Ю���
            // ����
            // 
            // 
            // MPropertyFriendlyName
            // 
            // 
            // x����
            // 
            // 
            // 
            // '���
            // �����
            // �����
            // 
            // 
            // �+
            // H�Yz
            // @SVWAUH��
            // �y
            // @SH�� H��H� �
            // L���
            // H�\$WH�� H���
            // �
            // ���������������H��)D
            // ���������������H��)D
            // �
            // H�\$H�t$H�|$UH�l$�H��p
            // L��I�[WH��
            // ���������������H��)D
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CVoiceContainerGranulator {
                constexpr std::ptrdiff_t m_flGrainLength = 0xB8; // float32
                constexpr std::ptrdiff_t m_flGrainCrossfadeAmount = 0xBC; // float32
                constexpr std::ptrdiff_t m_flStartJitter = 0xC0; // float32
                constexpr std::ptrdiff_t m_flPlaybackJitter = 0xC4; // float32
                constexpr std::ptrdiff_t m_bShouldWraparound = 0xC8; // bool
                constexpr std::ptrdiff_t m_sourceAudio = 0xD0; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 0����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 0b���
            // 
            // 
            // 
            // 
            // 
            // 
            // �2���
            // 
            // 
            // 
            // 
            // 
            // 
            // H��(�����H��t�
            // H��@
            // H��(�����H��t�
            // H��@
            // 3���������������@SH�� H�;�B
            // @SH�� H��H�����
            // 3���������������@SH�� H�;�B
            // 3���������������@SH�� H�;�B
            // 2��������������̰��������������H��)D
            // @SH�� H�I���PH��H��H�� [H�%�^
            // H��@
            // 2��������������̰��������������H��)D
            // 3���������������@SH�� H�;�B
            // 2��������������̰��������������H��)D
            // A�
            // 3���������������@SH�� H�;�B
            // A�
            // 2��������������̰��������������H��)D
            // �
            // 3���������������@SH�� H�;�B
            // 2��������������̰��������������H��)D
            // 2��������������̰��������������H��)D
            // @SH��0H�H���P@H��t8H�H���P@H�\�
            // �
            // 2��������������̰��������������H��)D
            // �
            // 
            // H�QH�e,
            // H�QH��G
            // H��(�����H��t�
            // H�QHH��4
            // 3���������������@SH�� H�;�B
            // @SH�� H��H�����
            // 3���������������@SH�� H�;�B
            // 3���������������@SH�� H�;�B
            // �AU������������H�\$H�t$H�|$UH�l$�H���
            // H�Q8I��H��tI������I��B�<
            // H�Q0H�H
            // 2��������������̰��������������H��)D
            // �AX�������������ATH��@���0
            // 2��������������̰��������������H��)D
            // A�
            // 3���������������@SH�� H�;�B
            // A�
            // 2��������������̰��������������H��)D
            // �
            // 3���������������@SH�� H�;�B
            // H��(H�QxI��H��t*�:
            // 2��������������̰��������������H��)D
            // @SH��0H�H���P@H��t8H�H���P@H�\�
            // �
            // �AW������������H�\$H�t$ WH��
            // �
            // 
            // @SH�� H���rH��H��:
            // H�\$UVWAVAWH��H��@H��(
            // H�9!
            // H�\$WH�� H���:
            // 
            // H�\$WH��0H��H���
            // H�Q�
            // @SH�� H��H��蟎��H��H�� [������@SH�� H��H������H��H�� [钹����@SH�� H��H���_���H��H�� [�2�����@SH�� H��H���?���H��H�� [�Ҿ����
            // H�\$VWAWH��0L��I�ع�
            // @SH�� H��H���
            // H�\$H�t$ WH��@H��@
            // H�y!
            // H�\$WH�� H��
            // 
            // H�\$H�t$H�|$ AVH��
            // H�1�?
            // @SH�� H��H��蟍��H��H�� [�������@SH�� H��H������H��H�� [������@SH�� H��H���_���H��H�� [�2�����@SH�� H��H���?���H��H�� [�������
            // H�L��H��I��H� �H�L��H��I��H�`8H�L��H��I��H�`(H�L��H��I��H�`@H�L��H��I��H�`0H�L��H��I��H�`H�\$H�t$WH�� H��D
            // @SH�� H��H���
            // L���
            // H��!
            // H�\$WH�� H�
            // 
            // H�\$H�l$H�t$ WH��p
            // H���
            // @SH�� H��H�������H��H�� [������@SH�� H��H���ߍ��H��H�� [������@SH�� H��H��迍��H��H�� [�R�����@SH�� H��H��蟍��H��H�� [�������
            // H�\$H�t$WH�� H��I��
            // @SH�� H��H��
            // L���
            // H��!
            // H�\$WH�� H�
            // 
            // H�\$H�l$H�t$ WH��p
            // H�9�
            // @SH�� H��H������H��H�� [钹����@SH�� H��H���_���H��H�� [�2�����@SH�� H��H���?���H��H�� [�Ҿ����@SH�� H��H������H��H�� [�r�����
            // H�\$WH�� H��I�ع 	
            // @SH�� H��H���
            // H�\$H�t$ WH��@H��@
            // H�i!
            // H�\$WH�� H��
            // 
            // H�\$WH��0H��H���'
            // H���
            // @SH�� H��H�������H��H�� [������@SH�� H��H���ߏ��H��H�� [鲜����@SH�� H��H��迏��H��H�� [�R�����@SH�� H��H��蟏��H��H�� [������
            // @SWATAUH��(L��I�ع�
            // @SH�� H��H���
            // H�\$H�t$ WH��@H��@
            // H��!
            // H�\$WH�� H��
            // 
            // H�\$H�l$H�t$ WH��p
            // H���
            // @SH�� H��H���_���H��H�� [�2�����@SH�� H��H���?���H��H�� [�Ҿ����@SH�� H��H������H��H�� [�r�����@SH�� H��H�������H��H�� [������
            // @SAVAWH�� L��I�ع
            // @SH�� H��H��
            // L��
            // H�A!
            // H�\$WH�� H�g
            // 
            // H�\$H�l$H�t$ WH��p
            // H���
            // @SH�� H��H������H��H�� [�r�����@SH�� H��H�������H��H�� [������@SH�� H��H���ߎ��H��H�� [鲱����@SH�� H��H��迎��H��H�� [�R�����
            // H�\$H�l$WH�� H��I����	
            // @SH�� H��H��
            // L�A�
            // H��!
            // H�\$WH�� H�
            // 
            // H�\$H�l$H�t$ WH��p
            // H�)�
            // @SH�� H��H���_���H��H�� [�2�����@SH�� H��H���?���H��H�� [�ҩ����@SH�� H��H������H��H�� [�r�����@SH�� H��H�������H��H�� [������
            // H�\$WH�� H��I�ع8
            // @SH�� H��H�@�
            // L�a�
            // H��!
            // H�\$WH�� H�w
            // 
            // H�\$H�l$H�t$ WH��p
            // H��
            // @SH�� H��H��迎��H��H�� [�R�����@SH�� H��H��蟎��H��H�� [������@SH�� H��H������H��H�� [钹����@SH�� H��H���_���H��H�� [�2�����
            // H�\$H�t$WH��@H��I��
            // @SH�� H��H� �
            // H�\$H�t$ WH��@H��@
            // H��!
            // H�\$WH�� H��
            // 
            // H�\$H�l$H�t$ WH��p
            // H�!�
            // @SH�� H��H���ߏ��H��H�� [鲜����@SH�� H��H��迏��H��H�� [�R�����@SH�� H��H��蟏��H��H�� [������@SH�� H��H������H��H�� [钤����
            // H�L��H��I��H�`H�L��H��I��H�`H�L��H��I��H�` H�L��H��I��H� �H�L��H��I��H�`8H�L��H��I��H�`(H�L��H��I��H�`@H�L��H��I��H�`0
            // @SH�� H��H�@�
            // L��
            // H�!
            // H�\$WH�� H�
            // 
            // H�\$H�l$H�t$ WH��p
            // H�Q�
            // @SH�� H��H������H��H�� [������@SH�� H��H���_���H��H�� [�2�����@SH�� H��H���?���H��H�� [�������@SH�� H��H������H��H�� [�r�����
            // H�\$H�t$WH�� H��I�� 
            // @SH�� H��H�`�
            // L�!�
            // H�	!
            // H�\$WH�� H��
            // 
            // H�\$H�l$H�t$ WH��p
            // H�A�
            // @SH�� H��H���O���H��H�� [邍����H���8�����������@SH�� H��H������H��H�� [�r�����@SH�� H��H�������H��H�� [������@SH�� H��H���ߏ�
            // H�\$WH�� H��I�ع8
            // @SH�� H��H���
            // H�\$H�t$ WH��@H��@
            // H��!
            // H�\$WH�� H��
            // 
            // H�\$H�t$H�|$ AVH��
            // H��
            // @SH�� H��H���ߎ��H��H�� [鲱����@SH�� H��H��迎��H��H�� [�R�����@SH�� H��H��蟎��H��H�� [������@SH�� H��H������H��H�� [钹����
            // H�L��H��I��H�`H�L��H��I��H�` H�L��H��I��H� �H�L��H��I��H�`8H�L��H��I��H�`(H�L��H��I��H�`@H�L��H��I��H�`0H�L��H��I��H�`
            // @SH�� H��H� �
            // H�\$H�t$WH��@H��@
            // H�1!
            // H�\$WH�� H��
            // 
            // �;'
            // H���
            // H���8�����������@SH�� H��H������H��H�� [�r�����@SH�� H��H�������H��H�� [������@SH�� H��H���ߏ��H��H�� [鲜����@SH�� H��H��迏�
            // H�L��H��I��H�`@H�L��H��I��H�`0H�L��H��I��H�`H�\$H�t$WH�� H��D
            // @SH�� H��H���
            // H�\$H�t$WH��@H��@
            // H��!
            // H�\$WH�� H��
            // 
            // �;'
            // H�a�
            // H���8�����������@SH�� H��H������H��H�� [�r�����@SH�� H��H�������H��H�� [������@SH�� H��H���ߏ��H��H�� [鲜����@SH�� H��H��迏�
            // H�L��H��I��H�`(H�L��H��I��H�`@H�L��H��I��H�`0H�L��H��I��H�`H�\$H�t$WH�� H��D
            // @SH�� H��H��
            // H�\$H�t$WH��@H��@
            // H��!
            // H�\$WH�� H��
            // 
            // H�\$H�l$H�t$ WH��p
            // H�i�
            // @SH�� H��H���_���H��H�� [�2�����@SH�� H��H���?���H��H�� [�������@SH�� H��H������H��H�� [�r�����@UH��H��
            // H�L��H��I��H�`H�\$H�t$WH�� H��D
            // H�\$WH�� ��H��������t� 
            // H�QH�E,
            // H�Q H��G
            // �A(������������̋A,�������������H�\$H�l$VH�� 3ۋ�H��9Y~/H�|$0��H�F�D.uH�L��H��P8��H��0;^|�H�|$0H�\$8H�l$@H�� ^�������
            // H�A`������������H���.
            // 3���������������@SH�� H�;�B
            // 3���������������@SH�� H�;�B
            // 3���������������@SH�� H�;�B
            // H�\$H�l$H�t$WH�� H��H��H���
            // H�\$H�l$H�t$WATAUAVAWH�� �yT
            // �AP�������������@SUVAVH��(H�|$P2�Hc��
            // H�\$H�t$WH�� H��I��H�QH��H������H��tL��D
            // H�\$H�t$WH�� H��
            // �A\�����������̋AX�������������ATH��@���0
            // �AV������������H�\$WH��
            // 2��������������̰��������������H��)D
            // H��H�XH�pWH��
            // H�t$H�|$L�t$ UH�l$�H��
            // H�t$H�|$L�t$ UH�l$�H��
            // H�\$H�t$ WH��
            // H�\$H�t$WH�� ��@
            // @SH��PH���
            // H��@
            // H�\$H�t$WH�� H���
            // �AW�������������AW������������H�\$H�t$ WH��
            // H�\$WH�� H���
            // �
            // H�\$WH�� H��H���
            // ���������������H��)D
            // H�\$H�l$H�t$WH�� H�y
            // H�\$WH�� ��H��������t�@
            // H�QH�E,
            // H�Q H��G
            namespace CVMixPresetDSPProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixPresetDSPDesc_t
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            namespace VMixDelayDesc_t {
                constexpr std::ptrdiff_t m_feedbackFilter = 0x0; // VMixFilterDesc_t
                constexpr std::ptrdiff_t m_bEnableFilter = 0x10; // bool
                constexpr std::ptrdiff_t m_flDelay = 0x14; // float32
                constexpr std::ptrdiff_t m_flDirectGain = 0x18; // float32
                constexpr std::ptrdiff_t m_flDelayGain = 0x1C; // float32
                constexpr std::ptrdiff_t m_flFeedbackGain = 0x20; // float32
                constexpr std::ptrdiff_t m_flWidth = 0x24; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            namespace VMixEQ8Desc_t {
                constexpr std::ptrdiff_t m_stages = 0x0; // VMixFilterDesc_t[8]
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // �D���
            // 
            // 
            // �4���
            // 
            // 
            // MPropertyFriendlyName
            // MPropertyAttributeRange
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // 
            // 
            // x6���
            // �6���
            // 
            // �6���
            // �6���
            // X=���
            // `?���
            // ����
            // 
            // 7���
            // X=���
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �7���
            // 
            // �7���
            // 
            // 
            // 8����
            // x����
            // �F���
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // �����
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �j���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // ����
            // �{���
            // �3���
            // @5���
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // X=���
            // 
            // �=���
            // 
            // �=���
            // 
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // 
            // MPropertyFriendlyName
            // 
            // 8>���
            // 
            // P>���
            // ���
            // 
            // 
            // `8���
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // MPropertyAttributeRange
            // 
            // 
            // (?���
            // 4?���
            // MPropertyFriendlyName
            // MPropertyAttributeRange
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // p;���
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // �c���
            // �����
            // 
            // 
            // 
            // 
            // 
            // �>���
            // 
            // 
            // 
            // @���
            // 
            // 
            // 
            // pC���
            // 
            //  (���
            // 
            // 0���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MKV3TransferName
            // MKV3TransferName
            // MKV3TransferName
            // MKV3TransferName
            // MKV3TransferName
            // 
            // 
            // �Y���
            //  Z���
            // Z���
            // �F���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            //  O���
            namespace CVMixDynamicsProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixDynamicsDesc_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            namespace CVMixGraphDescData {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nGraphOutputChannels = 0x8; // int32
                constexpr std::ptrdiff_t m_bIsMainGraph = 0xC; // bool
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �
            // H�ɾ
            // 2��������������̰��������������H��)D
            // H�\$H�l$H�t$H�|$ AVH��03�I��H��L��@8��
            // @SH�� ��KF
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // 
            // 
            // 
            // �����
            // 
            // 
            // @���
            // �����
            // ����
            // @SH�� H��H���
            // L���
            // H�\$WH�� H����H���
            // H�\$H�l$H�t$ WATAUAVAWH�� H�rL�-�'
            // ���������������H��)D
            // H�\$WH�� H���
            // �
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // �����
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // 
            // 
            // H�\$WH��0H��H�����H��@
            // H�a�
            // 2��������������̰��������������H��)D
            // H�\$ VH�� H��H�L$0H�T$0I��H�L$8�,���H�H�
            // @SH�� ��KF
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // 
            // 
            // 
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // �����
            // ����
            // 
            // 
            // MPropertySuppressExpr
            // MPropertyFriendlyName
            // 
            // MPropertySuppressExpr
            // MPropertyFriendlyName
            // 
            // 
            // �����
            // �����
            // 
            // 
            // ����
            // h����
            // ����
            // �����
            // 
            // 
            // 
            // 
            // 
            // p>���
            // p����
            // �����
            // 
            // 
            // 
            // 
            // 
            // @SH�� H��H��
            // L�Ѭ
            // H�\$WH�� ��H���|�����t��
            // H��UVATAUH�h�H��
            // ���������������H��)D
            // ���������������H��)D
            // �
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // H�\$WH�� H�gz
            // 3���������������@SH�� H�;�B
            // H��(H����
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // H��H�I�J3
            // H�\$H�l$H�t$H�|$ AVH��0H�L��H��H��H�II��H�p�
            !
            // H�H�`h���������.}AF
            // .}AF
            // �
            // M��D��H��H�I�.A3
            // H����������������
            // L��D��H�II��H�H���
            // 
            // L��H�I��23
            // H��H�I��<3
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // �
            // H�\$H�l$H�t$WAVAWH��0H�L��L��H��H�IA��I��H�h� 
            // H��(H��P�@H��(��������������H�IH�H�`X�����M��D��H��H�I�.A3
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H��H�IH�H���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // H�\$H�l$H�t$H�|$ AVH�� E3����A���H��A��tH�YHcqH��H�H;�s"H�K8H��tH�H;����P L�s8H��@H;�rދGD�w����v����uH���
            // H�t$ AVH�� M��H��D9A(��
            // H�E�
            // 9Q(������������Hc��
            // 
            // 
            // 
            // H�g
            // L�
            A����
            // ��t
            �
            // 
            // H�	g
            // H��
            // H�A������������H�yK
            // H�ag
            // H�\$H�Q3�L��D��9��
            // ��t
            �
            // 
            // H�\$WH�� ��H��������t�H
            // 3���������������@SH�� H�;�B
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // �A0�������������H�\$WH��@H�H��H���P(��tH��tH9_u�C8H�\$PH��@_�H�L�D$ H��H�D$ ����H���D$(
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��P@H��H;�u�H�\$0H�t$8H�� _�������������H�\$H�t$WH�� �A$�����u3��H�
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // H�\$H�t$WH��0H�H��I��L�D$ H��H��A�E3�H���P�C$���uH�%
            // H�H�`h���������.}AF
            // .}AF
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�tH�@��H����
            // M��D��H��H�I�.A3
            // 3���������������@SH�� H�;�B
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H����
            // 
            // 
            // DA0������������H�l$H�t$WH��0�A I��H��H����tH�A�L�D$ H��E3�H���P�G �G$���H�\$@u3ɋы��
            H�W(H��H��H�H�<�H;�t$@
            // 3���������������@SH�� H�;�B
            // �y 
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��P8H��H;�u�H�\$0H�t$8H�� _�������������H��HH��)t$03��D$ 
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��PHH��H;�u�H�\$0H�t$8H�� _�������������H��H�XH�hH�pH�x AVH��@I��H��L
            // H��H�XfD�H L�@UVWATAUAVAWH���
            // H�\$H�t$WH�� �A$����
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // 
            // 
            // DA0������������H�l$H�t$WH��0�A I��H��H����tH�A�L�D$ H��E3�H���P�G �G$���H�\$@u3ɋы��
            H�W(H��H��H�H�<�H;�t$@
            // 3���������������@SH�� H�;�B
            // �y 
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��P8H��H;�u�H�\$0H�t$8H�� _�������������H��HH��)t$03��D$ 
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��PHH��H;�u�H�\$0H�t$8H�� _�������������H��H�XH�hH�pH�x AVH��@I��H��L
            // H��H�XfD�H L�@UVWATAUAVAWH��
            // H�\$H�t$WH�� �A$����
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // H�\$H�t$WH�� �AH
            // 3���������������@SH�� H�;�B
            // ���������������H��)D
            // �A0�������������H�\$WH��@H�H��H���P(��tH��tH9_u�C8H�\$PH��@_�H�L�D$ H��H�D$ ����H���D$(
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��P@H��H;�u�H�\$0H�t$8H�� _�������������H�\$H�t$WH�� �A$�����u3��H�
            // ���������������H��)D
            // �q�������������H��fD�H L�@H�PSUWATH��
            // H�H�`h���������.}AF
            // .}AF
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�tH�@��H����
            // M��D��H��H�I�.A3
            // 3���������������@SH�� H�;�B
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H����
            // 
            // DA0������������H�l$H�t$WH��0�A I��H��H����tH�A�L�D$ H��E3�H���P�G �G$���H�\$@u3ɋы��
            H�W(H��H��H�H�<�H;�t$@
            // 3���������������@SH�� H�;�B
            // �y 
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��P8H��H;�u�H�\$0H�t$8H�� _�������������H��HH��)t$03��D$ 
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��PHH��H;�u�H�\$0H�t$8H�� _�������������H��H�XH�hH�pH�x AVH��@I��H��L
            // fD�L$ L�D$H�T$SVATAUH��
            // ���
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // H�\$H�l$H�t$H�|$ AVH�� E3����A���H��A��tH�YHcqH��H�H;�s"H�K8H��tH�H;����P L�s8H��@H;�rދGD�w����v����uH���
            // H�t$ AVH�� M��H��D9A(��
            // H�A�
            // 9Q(������������Hc��
            // 
            // H�\$H�t$H�|$ AVH�� I��L��H��D9A(��
            // H�A ������������@WH��0H��I��H�I L��H��t3L�ZH�@M�
            // �
            // ��uA�fn���[��A
            // 
            // 
            // 
            // 
            // H��'
            // H�
            A�
            namespace CVoiceContainerLoopXFade {
                constexpr std::ptrdiff_t m_sound = 0xA8; // CSoundContainerReference
                constexpr std::ptrdiff_t m_flLoopEnd = 0xC0; // float32
                constexpr std::ptrdiff_t m_flLoopStart = 0xC4; // float32
                constexpr std::ptrdiff_t m_flFadeOut = 0xC8; // float32
                constexpr std::ptrdiff_t m_flFadeIn = 0xCC; // float32
                constexpr std::ptrdiff_t m_bPlayHead = 0xD0; // bool
                constexpr std::ptrdiff_t m_bPlayTail = 0xD1; // bool
                constexpr std::ptrdiff_t m_bEqualPow = 0xD2; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // p����
            // MGetKV3ClassDefaults
            // 
            namespace VMixPresetDSPDesc_t {
                constexpr std::ptrdiff_t m_effectName = 0x0; // CUtlString
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            namespace CAudioPhonemeTag {
                constexpr std::ptrdiff_t m_flStartTime = 0x0; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x4; // float32
                constexpr std::ptrdiff_t m_nPhonemeCode = 0x8; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // �����
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �`���
            // �Y���
            // �Y���
            // �Y���
            // 
            // 
            // MKV3TransferName
            // MKV3TransferName
            // MKV3TransferName
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // ����
            // �H���
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // ণ��
            // 
            // �)���
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // PR���
            // p~���
            // 
            // 
            // 
            //  ����
            // 
            // 
            // 
            // 
            // 
            // 
            // �S���
            // 
            // 
            // 
            // 
            // 
            // 
            // `V���
            // 
            // 
            // 
            // �q���
            // 
            // �����
            // MKV3TransferName
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // p����
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // �^���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �,���
            // 
            // 
            // ����
            // !���
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // FILTER_UNKNOWN
            // FILTER_HIGHPASS
            // FILTER_BANDPASS
            // FILTER_NOTCH
            // FILTER_PEAKING_EQ
            // FILTER_LOW_SHELF
            // FILTER_HIGH_SHELF
            // FILTER_ALLPASS
            // FILTER_PASSTHROUGH
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // FILTER_SLOPE_1POLE_12dB
            // FILTER_SLOPE_1POLE_18dB
            // FILTER_SLOPE_1POLE_24dB
            // FILTER_SLOPE_12dB
            // FILTER_SLOPE_24dB
            // FILTER_SLOPE_36dB
            // FILTER_SLOPE_48dB
            // FILTER_SLOPE_MAX
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // LFO_SHAPE_SQUARE
            // LFO_SHAPE_TRI
            // LFO_SHAPE_SAW
            // LFO_SHAPE_NOISE
            // 
            // 
            // 
            // 
            // 
            // 
            // PANNER_TYPE_EQUAL_POWER
            // 
            // 
            // 
            // SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT
            namespace CVMixControlInputArray {
                constexpr std::ptrdiff_t m_nArrayIndex = 0x10; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �`���
            // �Y���
            // �Y���
            // �Y���
            // 
            // 
            // MKV3TransferName
            // MKV3TransferName
            // MKV3TransferName
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // ����
            // �H���
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // ণ��
            // 
            // �)���
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // PR���
            // p~���
            // 
            // 
            // 
            //  ����
            // 
            // 
            // 
            // 
            // 
            // 
            // �S���
            // 
            // 
            // 
            // 
            // 
            // 
            // `V���
            // 
            // 
            // 
            // �q���
            // 
            // �����
            // MKV3TransferName
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // p����
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // �^���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �,���
            // 
            // 
            // ����
            // !���
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // FILTER_UNKNOWN
            // FILTER_HIGHPASS
            // FILTER_BANDPASS
            // FILTER_NOTCH
            // FILTER_PEAKING_EQ
            // FILTER_LOW_SHELF
            // FILTER_HIGH_SHELF
            // FILTER_ALLPASS
            // FILTER_PASSTHROUGH
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // FILTER_SLOPE_1POLE_12dB
            // FILTER_SLOPE_1POLE_18dB
            // FILTER_SLOPE_1POLE_24dB
            // FILTER_SLOPE_12dB
            // FILTER_SLOPE_24dB
            // FILTER_SLOPE_36dB
            // FILTER_SLOPE_48dB
            // FILTER_SLOPE_MAX
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // LFO_SHAPE_SQUARE
            // LFO_SHAPE_TRI
            // LFO_SHAPE_SAW
            // LFO_SHAPE_NOISE
            // 
            // 
            // 
            // 
            // 
            // 
            // PANNER_TYPE_EQUAL_POWER
            // 
            // 
            // 
            // SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT
            // SUBGRAPH_INTERPOLATION_KEEP_LAST_SUBGRAPH_RUNNING
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // VMIX_CHAN_LEFT
            namespace CVMixNameInput {
                constexpr std::ptrdiff_t m_defaultValue = 0x10; // CUtlString
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // �
            // H���*
            // H��AVH��
            // 
            // 
            // 
            // ����
            // X����
            // p����
            // @����
            // ����
            // h����
            // 0����
            // 
            // �����
            // ����
            // 
            // 
            // 
            // H�\$WH��0H��@
            // H�q�*
            // H��H�HUH�����H���
            // `ߛ��
            // X����
            // �����
            // �����
            // �����
            // �����
            // 
            // 
            // 
            // �
            // H���*
            // H��L�@H�HUH�����H���
            // �כ��
            // �����
            // �����
            // ����
            // 0����
            // P����
            // p����
            // �����
            // �����
            // 
            // 
            // 
            // @SH�� H��H���1
            // �
            // H�\$WH�� H�ً�H��H�9
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // 
            // 
            // @SH�� H��H���1
            // �
            // @SH�� H����tH��'
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // 
            // 
            // 
            // H�\$WH��0H��@
            // H�9�*
            // @SH��@)t$ W��qI��/���
            // `����
            // ����
            // 
            // 
            // @SH�� H��H�0�1
            // �
            // @SH�� H����tH��'
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �����
            // 
            // 
            // 
            // kBranch
            // 
            // kMatch
            // 
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // SOS_GROUPTYPE_STATIC
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // SOS_SETPARAM_SORTTYPE_LOWEST
            // 
            // 
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // SOS_LIMIT_SORTTYPE_LOWEST
            // 
            // MPropertyFriendlyName
            // 
            // SOS_STOPTYPE_TIME
            // 
            // SOS_STOPTYPE_OPVAR
            // 
            // 
            // 
            // P����
            //  ����
            // D����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            //  3���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // SNDLVL_20dB
            // SNDLVL_25dB
            // SNDLVL_30dB
            // SNDLVL_35dB
            // SNDLVL_40dB
            // SNDLVL_45dB
            // SNDLVL_50dB
            // SNDLVL_55dB
            // SNDLVL_IDLE
            // SNDLVL_60dB
            // SNDLVL_65dB
            // SNDLVL_STATIC
            // SNDLVL_70dB
            // SNDLVL_NORM
            // SNDLVL_75dB
            // SNDLVL_80dB
            // SNDLVL_TALKING
            // SNDLVL_85dB
            // SNDLVL_90dB
            // SNDLVL_95dB
            // SNDLVL_100dB
            // SNDLVL_105dB
            // SNDLVL_110dB
            // SNDLVL_120dB
            // SNDLVL_130dB
            // SNDLVL_GUNFIRE
            // SNDLVL_140dB
            // SNDLVL_150dB
            // SNDLVL_180dB
            // 
            // 
            // �,���
            // �*���
            // �(���
            // �%���
            // 
            // ����
            // ����
            // 
            // p.���
            // �-���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CSosGroupActionSoundeventCountSchema {
                constexpr std::ptrdiff_t m_bExcludeStoppedSounds = 0x8; // bool
                constexpr std::ptrdiff_t m_strCountKeyName = 0x10; // CUtlString
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // ����
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // @SH�� H��H��
            // L���
            // @SH�� I��H��tA�B���LcB u3��H�J�B+B$Hc�H�H���)��� 
            // �A�A
            // 
            // �
            // H��z
            // ���������������H��)D
            // H�\$H�t$WH��0H���
            // H�\$H�t$WH�� �m�
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // H���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // C_Sharp
            // D
            // D_Sharp
            // E
            // F
            // F_Sharp
            // G
            // G_Sharp
            // A
            // A_Sharp
            // B
            // Count
            // 
            // 
            // 
            // 
            // 
            // 
            // Square
            // Saw
            // Triangle
            // Noise
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // �����
            // 
            // 
            // 
            // 
            // �����
            // 
            // ����
            // 
            // 
            // 
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // 
            // ����
            // MPropertyFriendlyName
            // 
            // 
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // p����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // ����
            // 
            // (����
            // 
            // 
            // H����
            // �G���
            // 
            // 
            // 
            // MPropertySuppressExpr
            // 
            // 
            // 
            // MPropertySuppressExpr
            // MPropertyFriendlyName
            // 
            // 
            // MPropertySuppressExpr
            // 
            // 
            // 
            // MPropertySuppressExpr
            // MPropertyFriendlyName
            // 
            // 
            // MPropertySuppressExpr
            // 
            // 
            // 
            // MPropertySuppressExpr
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // `I���
            // @����
            // `����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // @SH�� H��H��?
            // L�a�
            // @UH�� H�\$0H��H�|$@H���
            // H�\$H�t$H�|$ UATAUAVAWH�l$�H��
            // @SUWH�� Ic��
            // H��H��
            // H�\$WH��@H��H�
            H����
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // 2��������������̰��������������H��)D
            // 
            // �;
            // H�A;
            // 2��������������̰��������������H��)D
            // @SVAVH��@L�d$pL��L�|$0M��L���p
            // A�@
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // ���������������H��)D
            // A���������������2��������������̰��������������H��)D
            // 
            // 
            // 
            // 
            // @����
            // @����
            // 
            // 
            // 
            // @����
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // 
            // 
            namespace CVoiceContainerEnvelopeAnalyzer {
                constexpr std::ptrdiff_t m_mode = 0x50; // EMode_t
                constexpr std::ptrdiff_t m_fAnalysisWindowMs = 0x54; // float32
                constexpr std::ptrdiff_t m_flThreshold = 0x58; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // �]���
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P����
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 0����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 0b���
            // 
            // 
            // 
            // 
            // 
            // 
            // �2���
            // 
            // 
            // 
            // 
            // 
            // 
            // H��(�����H��t�
            // H��@
            // H��(�����H��t�
            // H��@
            // 3���������������@SH�� H�;�B
            // @SH�� H��H�����
            // 3���������������@SH�� H�;�B
            // 3���������������@SH�� H�;�B
            // 2��������������̰��������������H��)D
            // @SH�� H�I���PH��H��H�� [H�%�^
            // H��@
            // 2��������������̰��������������H��)D
            // 3���������������@SH�� H�;�B
            // 2��������������̰��������������H��)D
            // A�
            // 3���������������@SH�� H�;�B
            // A�
            // 2��������������̰��������������H��)D
            // �
            // 3���������������@SH�� H�;�B
            // 2��������������̰��������������H��)D
            // 2��������������̰��������������H��)D
            // @SH��0H�H���P@H��t8H�H���P@H�\�
            // �
            // 2��������������̰��������������H��)D
            // �
            // 
            // H�QH�e,
            // H�QH��G
            // H��(�����H��t�
            // H�QHH��4
            // 3���������������@SH�� H�;�B
            // @SH�� H��H�����
            // 3���������������@SH�� H�;�B
            // 3���������������@SH�� H�;�B
            // �AU������������H�\$H�t$H�|$UH�l$�H���
            // H�Q8I��H��tI������I��B�<
            // H�Q0H�H
            // 2��������������̰��������������H��)D
            // �AX�������������ATH��@���0
            // 2��������������̰��������������H��)D
            // A�
            // 3���������������@SH�� H�;�B
            // A�
            // 2��������������̰��������������H��)D
            // �
            // 3���������������@SH�� H�;�B
            // H��(H�QxI��H��t*�:
            // 2��������������̰��������������H��)D
            // @SH��0H�H���P@H��t8H�H���P@H�\�
            // �
            // �AW������������H�\$H�t$ WH��
            // �
            // 
            // @SH�� H���rH��H��:
            // H�\$UVWAVAWH��H��@H��(
            // H�9!
            // H�\$WH�� H���:
            // 
            // H�\$WH��0H��H���
            // H�Q�
            // @SH�� H��H��蟎��H��H�� [������@SH�� H��H������H��H�� [钹����@SH�� H��H���_���H��H�� [�2�����@SH�� H��H���?���H��H�� [�Ҿ����
            // H�\$VWAWH��0L��I�ع�
            // @SH�� H��H���
            // H�\$H�t$ WH��@H��@
            // H�y!
            // H�\$WH�� H��
            // 
            // H�\$H�t$H�|$ AVH��
            // H�1�?
            // @SH�� H��H��蟍��H��H�� [�������@SH�� H��H������H��H�� [������@SH�� H��H���_���H��H�� [�2�����@SH�� H��H���?���H��H�� [�������
            // H�L��H��I��H� �H�L��H��I��H�`8H�L��H��I��H�`(H�L��H��I��H�`@H�L��H��I��H�`0H�L��H��I��H�`H�\$H�t$WH�� H��D
            // @SH�� H��H���
            // L���
            // H��!
            // H�\$WH�� H�
            // 
            // H�\$H�l$H�t$ WH��p
            // H���
            // @SH�� H��H�������H��H�� [������@SH�� H��H���ߍ��H��H�� [������@SH�� H��H��迍��H��H�� [�R�����@SH�� H��H��蟍��H��H�� [�������
            // H�\$H�t$WH�� H��I��
            // @SH�� H��H��
            // L���
            // H��!
            // H�\$WH�� H�
            // 
            // H�\$H�l$H�t$ WH��p
            // H�9�
            // @SH�� H��H������H��H�� [钹����@SH�� H��H���_���H��H�� [�2�����@SH�� H��H���?���H��H�� [�Ҿ����@SH�� H��H������H��H�� [�r�����
            // H�\$WH�� H��I�ع 	
            // @SH�� H��H���
            // H�\$H�t$ WH��@H��@
            // H�i!
            // H�\$WH�� H��
            // 
            // H�\$WH��0H��H���'
            // H���
            // @SH�� H��H�������H��H�� [������@SH�� H��H���ߏ��H��H�� [鲜����@SH�� H��H��迏��H��H�� [�R�����@SH�� H��H��蟏��H��H�� [������
            // @SWATAUH��(L��I�ع�
            // @SH�� H��H���
            // H�\$H�t$ WH��@H��@
            // H��!
            // H�\$WH�� H��
            // 
            // H�\$H�l$H�t$ WH��p
            // H���
            // @SH�� H��H���_���H��H�� [�2�����@SH�� H��H���?���H��H�� [�Ҿ����@SH�� H��H������H��H�� [�r�����@SH�� H��H�������H��H�� [������
            // @SAVAWH�� L��I�ع
            // @SH�� H��H��
            // L��
            // H�A!
            // H�\$WH�� H�g
            // 
            // H�\$H�l$H�t$ WH��p
            // H���
            // @SH�� H��H������H��H�� [�r�����@SH�� H��H�������H��H�� [������@SH�� H��H���ߎ��H��H�� [鲱����@SH�� H��H��迎��H��H�� [�R�����
            // H�\$H�l$WH�� H��I����	
            // @SH�� H��H��
            // L�A�
            // H��!
            // H�\$WH�� H�
            // 
            // H�\$H�l$H�t$ WH��p
            // H�)�
            // @SH�� H��H���_���H��H�� [�2�����@SH�� H��H���?���H��H�� [�ҩ����@SH�� H��H������H��H�� [�r�����@SH�� H��H�������H��H�� [������
            // H�\$WH�� H��I�ع8
            // @SH�� H��H�@�
            // L�a�
            // H��!
            // H�\$WH�� H�w
            // 
            // H�\$H�l$H�t$ WH��p
            // H��
            // @SH�� H��H��迎��H��H�� [�R�����@SH�� H��H��蟎��H��H�� [������@SH�� H��H������H��H�� [钹����@SH�� H��H���_���H��H�� [�2�����
            // H�\$H�t$WH��@H��I��
            // @SH�� H��H� �
            // H�\$H�t$ WH��@H��@
            // H��!
            // H�\$WH�� H��
            // 
            // H�\$H�l$H�t$ WH��p
            // H�!�
            // @SH�� H��H���ߏ��H��H�� [鲜����@SH�� H��H��迏��H��H�� [�R�����@SH�� H��H��蟏��H��H�� [������@SH�� H��H������H��H�� [钤����
            // H�L��H��I��H�`H�L��H��I��H�`H�L��H��I��H�` H�L��H��I��H� �H�L��H��I��H�`8H�L��H��I��H�`(H�L��H��I��H�`@H�L��H��I��H�`0
            // @SH�� H��H�@�
            // L��
            // H�!
            // H�\$WH�� H�
            // 
            // H�\$H�l$H�t$ WH��p
            // H�Q�
            // @SH�� H��H������H��H�� [������@SH�� H��H���_���H��H�� [�2�����@SH�� H��H���?���H��H�� [�������@SH�� H��H������H��H�� [�r�����
            // H�\$H�t$WH�� H��I�� 
            // @SH�� H��H�`�
            // L�!�
            // H�	!
            // H�\$WH�� H��
            // 
            // H�\$H�l$H�t$ WH��p
            // H�A�
            // @SH�� H��H���O���H��H�� [邍����H���8�����������@SH�� H��H������H��H�� [�r�����@SH�� H��H�������H��H�� [������@SH�� H��H���ߏ�
            // H�\$WH�� H��I�ع8
            // @SH�� H��H���
            // H�\$H�t$ WH��@H��@
            // H��!
            // H�\$WH�� H��
            // 
            // H�\$H�t$H�|$ AVH��
            // H��
            // @SH�� H��H���ߎ��H��H�� [鲱����@SH�� H��H��迎��H��H�� [�R�����@SH�� H��H��蟎��H��H�� [������@SH�� H��H������H��H�� [钹����
            // H�L��H��I��H�`H�L��H��I��H�` H�L��H��I��H� �H�L��H��I��H�`8H�L��H��I��H�`(H�L��H��I��H�`@H�L��H��I��H�`0H�L��H��I��H�`
            // @SH�� H��H� �
            // H�\$H�t$WH��@H��@
            // H�1!
            // H�\$WH�� H��
            // 
            // �;'
            // H���
            // H���8�����������@SH�� H��H������H��H�� [�r�����@SH�� H��H�������H��H�� [������@SH�� H��H���ߏ��H��H�� [鲜����@SH�� H��H��迏�
            // H�L��H��I��H�`@H�L��H��I��H�`0H�L��H��I��H�`H�\$H�t$WH�� H��D
            // @SH�� H��H���
            // H�\$H�t$WH��@H��@
            // H��!
            namespace CVMixBaseProcessorDesc {
                constexpr std::ptrdiff_t m_name = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_nChannels = 0x14; // int32
                constexpr std::ptrdiff_t m_flxfade = 0x18; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �`���
            // �Y���
            // �Y���
            // �Y���
            // 
            // 
            // MKV3TransferName
            // MKV3TransferName
            // MKV3TransferName
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // ����
            // �H���
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // ণ��
            // 
            // �)���
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // PR���
            // p~���
            // 
            // 
            // 
            //  ����
            // 
            // 
            // 
            // 
            // 
            // 
            // �S���
            // 
            // 
            // 
            // 
            // 
            // 
            // `V���
            // 
            // 
            // 
            // �q���
            // 
            // �����
            // MKV3TransferName
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // p����
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // �^���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �,���
            // 
            // 
            // ����
            // !���
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // FILTER_UNKNOWN
            // FILTER_HIGHPASS
            // FILTER_BANDPASS
            // FILTER_NOTCH
            // FILTER_PEAKING_EQ
            // FILTER_LOW_SHELF
            // FILTER_HIGH_SHELF
            // FILTER_ALLPASS
            // FILTER_PASSTHROUGH
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // FILTER_SLOPE_1POLE_12dB
            // FILTER_SLOPE_1POLE_18dB
            // FILTER_SLOPE_1POLE_24dB
            // FILTER_SLOPE_12dB
            // FILTER_SLOPE_24dB
            // FILTER_SLOPE_36dB
            // FILTER_SLOPE_48dB
            // FILTER_SLOPE_MAX
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // LFO_SHAPE_SQUARE
            // LFO_SHAPE_TRI
            // LFO_SHAPE_SAW
            // LFO_SHAPE_NOISE
            // 
            // 
            // 
            // 
            // 
            // 
            // PANNER_TYPE_EQUAL_POWER
            // 
            // 
            // 
            // SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT
            // SUBGRAPH_INTERPOLATION_KEEP_LAST_SUBGRAPH_RUNNING
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CVMixImpulseResponseInput {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �`���
            // �Y���
            // �Y���
            // �Y���
            // 
            // 
            // MKV3TransferName
            // MKV3TransferName
            // MKV3TransferName
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // ����
            // �H���
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // ণ��
            // 
            // �)���
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // PR���
            // p~���
            // 
            // 
            // 
            //  ����
            // 
            // 
            // 
            // 
            // 
            // 
            // �S���
            // 
            // 
            // 
            // 
            // 
            // 
            // `V���
            // 
            // 
            // 
            // �q���
            // 
            // �����
            // MKV3TransferName
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // p����
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // �^���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �,���
            // 
            // 
            // ����
            // !���
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // FILTER_UNKNOWN
            // FILTER_HIGHPASS
            // FILTER_BANDPASS
            // FILTER_NOTCH
            // FILTER_PEAKING_EQ
            // FILTER_LOW_SHELF
            // FILTER_HIGH_SHELF
            // FILTER_ALLPASS
            // FILTER_PASSTHROUGH
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // FILTER_SLOPE_1POLE_12dB
            // FILTER_SLOPE_1POLE_18dB
            // FILTER_SLOPE_1POLE_24dB
            // FILTER_SLOPE_12dB
            // FILTER_SLOPE_24dB
            // FILTER_SLOPE_36dB
            // FILTER_SLOPE_48dB
            // FILTER_SLOPE_MAX
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // LFO_SHAPE_SQUARE
            // LFO_SHAPE_TRI
            // LFO_SHAPE_SAW
            // LFO_SHAPE_NOISE
            // 
            // 
            // 
            // 
            // 
            // 
            // PANNER_TYPE_EQUAL_POWER
            // 
            // 
            // 
            // SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT
            // SUBGRAPH_INTERPOLATION_KEEP_LAST_SUBGRAPH_RUNNING
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // VMIX_CHAN_LEFT
            // VMIX_CHAN_RIGHT
            // VMIX_CHAN_SWAP
            // VMIX_CHAN_MONO
            namespace CVMixSteamAudioHybridReverbProcessorDesc {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CSoundEventMetaData {
                constexpr std::ptrdiff_t m_soundEventVMix = 0x0; // CStrongHandle<InfoForResourceTypeCVMixListResource>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            namespace VMixPitchShiftDesc_t {
                constexpr std::ptrdiff_t m_nGrainSampleCount = 0x0; // int32
                constexpr std::ptrdiff_t m_flPitchShift = 0x4; // float32
                constexpr std::ptrdiff_t m_nQuality = 0x8; // int32
                constexpr std::ptrdiff_t m_nProcType = 0xC; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // �>���
            // 
            // MPropertyFriendlyName
            // MPropertyAttributeRange
            // 
            // X=���
            // `?���
            // 8>���
            // 
            // �?���
            // ���
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // �����
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �`���
            // �Y���
            // �Y���
            // �Y���
            // 
            // 
            // MKV3TransferName
            // MKV3TransferName
            // MKV3TransferName
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // ����
            // �H���
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // ণ��
            // 
            // �)���
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // PR���
            // p~���
            // 
            // 
            // 
            //  ����
            // 
            // 
            // 
            // 
            // 
            // 
            // �S���
            // 
            // 
            // 
            // 
            // 
            // 
            // `V���
            // 
            // 
            // 
            // �q���
            // 
            // �����
            // MKV3TransferName
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // p����
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // �^���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �,���
            // 
            // 
            // ����
            // !���
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // FILTER_UNKNOWN
            // FILTER_HIGHPASS
            // FILTER_BANDPASS
            // FILTER_NOTCH
            // FILTER_PEAKING_EQ
            // FILTER_LOW_SHELF
            // FILTER_HIGH_SHELF
            // FILTER_ALLPASS
            // FILTER_PASSTHROUGH
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // FILTER_SLOPE_1POLE_12dB
            // FILTER_SLOPE_1POLE_18dB
            // FILTER_SLOPE_1POLE_24dB
            // FILTER_SLOPE_12dB
            // FILTER_SLOPE_24dB
            // FILTER_SLOPE_36dB
            // FILTER_SLOPE_48dB
            // FILTER_SLOPE_MAX
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // LFO_SHAPE_SQUARE
            // LFO_SHAPE_TRI
            // LFO_SHAPE_SAW
            namespace CVMixControlOutput {
                constexpr std::ptrdiff_t m_flDefaultValue = 0x10; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            //  O���
            // `����
            // Е���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // �����
            // @Y���
            // @+���
            // �����
            // 
            // e���
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // �\���
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // ����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CVMixModDelayProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixModDelayDesc_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 0\���
            // d\���
            // 
            // �\���
            // �����
            // 8>���
            // 
            // 
            // �\���
            // �\���
            // MPropertyFriendlyName
            // MPropertyAttributeRange
            // 
            // 
            // H]���
            // �\���
            // 
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // 
            // 
            // �]���
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P����
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CVMixShaperProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixShaperDesc_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            namespace CVMixAutomaticControlInput {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nControlInputIndex = 0x8; // int32
                constexpr std::ptrdiff_t m_bIsTrackSend = 0xC; // bool
                constexpr std::ptrdiff_t m_bIsStackVar = 0xD; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            namespace CAudioEmphasisSample {
                constexpr std::ptrdiff_t m_flTime = 0x0; // float32
                constexpr std::ptrdiff_t m_flValue = 0x4; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            //  O���
            // `����
            // Е���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // �����
            // @Y���
            // @+���
            // �����
            // 
            // e���
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // �\���
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // ����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CVMixOscProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixOscDesc_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            namespace CVMixCurveHeader {
                constexpr std::ptrdiff_t m_nControlPointCount = 0x0; // uint32
                constexpr std::ptrdiff_t m_nControlPointStart = 0x4; // uint32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // H�\$H�l$H�t$ WH��p
            // H��T
            // ���������������H��)D
            // �y
            // @SH�� H���r���H�Ӎ9
            // H�\$WH�� H��@
            // H�\$WH�� ��H���|33
            // �
            // ���������������H��)D
            // ���������������H��)D
            // �
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // @SH�� H�����H���9
            // H�\$WH�� H��@
            // H�\$WH�� ��H���|33
            // �
            // @SH�� H��E��~"H�|$0A��H���R��H��
            // ���������������H��)D
            // H�\$WH��@H��H�
            H����
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // ���������������H��)D
            // �����
            // P����
            // 
            // 0����
            // @����
            // P����
            // p����
            // �����
            // �����
            // 
            // P����
            // �����
            // �����
            // �����
            // `����
            // �����
            // 0����
            //  ����
            // �����
            // 0����
            // ����
            // 
            // H�\$H�t$WH��PI��A��H���ö��H�ȅ���
            // 
            // 
            // 
            // 
            // 
            // @M���
            // �����
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // �����
            // @SH�� H�����H���9
            // L�q�
            // H�\$WH�� ��H���,
            // H�\$H�t$H�|$ UATAUAVAWH��H��`H�rH��
            // L��UWAUAVH��hI�yI��A�C ����L���D$ ����L��H����
            // H��H��x
            // H�\$WH��@H��H�
            H����
            // H��H�XH�pH�xUH�h�H���
            // ���������������H��)D
            // 2��������������̰��������������H��)D
            // Hc��
            // 
            // @����
            // �����
            // 
            // MPropertyFriendlyName
            // 
            // 
            // h����
            // 
            // �����
            // 
            // MPropertyFriendlyName
            // 
            // 
            // �����
            // 
            // �����
            // 
            // �����
            // 
            // �����
            // 
            // �����
            // 
            // 
            // 
            // 
            // �����
            // 
            // Г���
            // MPropertyFriendlyName
            // 
            // 
            // 
            // @[���
            // ����
            // (����
            // 
            // 
            // 
            // @SH�� H������H�C�9
            // L���
            // H�\$WH�� ��H���,
            // H�\$H�l$H�t$WH�� 3�H��3�H��f����
            // ���������������H��)D
            // @SUWH�� H��H�t$@L�t$P�L�|$XH���
            // �
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // 
            // L��H�I��23
            // H��H�I��<3
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // �
            // H�\$H�l$H�t$WAVAWH��0H�L��L��H��H�IA��I��H�h� 
            // H��(H��P�@H��(��������������H�IH�H�`X�����M��D��H��H�I�.A3
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H��H�IH�H���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // H�\$H�l$H�t$H�|$ AVH�� E3����A���H��A��tH�YHcqH��H�H;�s"H�K8H��tH�H;����P L�s8H��@H;�rދGD�w����v����uH���
            // H�t$ AVH�� M��H��D9A(��
            // H�E�
            // 9Q(������������Hc��
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // H�\$H�l$H�t$H�|$ AVH�� E3����A���H��A��tH�YHcqH��H�H;�s"H�K8H��tH�H;����P L�s8H��@H;�rދGD�w����v����uH���
            // H�t$ AVH�� M��H��D9A(��
            // H�E�
            // 9Q(������������Hc��
            // 
            // H�i
            // H���
            // H�A������������H�yK
            // H��
            // L�
            Ic��
            // ��t
            �
            // 
            // H��
            // H�ɩ
            // H�A������������H�yK
            // 0����
            // 
            // 
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // �����
            // P����
            // 
            // 
            // 
            // 
            // 
            // �����
            // К���
            // �����
            // 
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // �����
            // ț���
            // �����
            // 
            // �4���
            // P����
            // 
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // О���
            // X����
            // x����
            // 
            // 
            // 
            // 
            // 
            // L��H�I��23
            // H��H�I��<3
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // �
            // H�\$H�l$H�t$WAVAWH��0H�L��L��H��H�IA��I��H�h� 
            // H��(H��P�@H��(��������������H�IH�H�`X�����M��D��H��H�I�.A3
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H��H�IH�H���
            // @SH�� H��肻��H�Ӥ+
            // L�AO
            // H�\$WH�� ��H���|33
            // �
            // H��H�XH�hH�pH�x ATAVAWH��
            // ���������������H��)D
            // H�\$WH��@H��H�
            H����
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // fn��
            // 
            // L��H�I��23
            // H��H�I��<3
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // �
            // H�\$H�l$H�t$WAVAWH��0H�L��L��H��H�IA��I��H�h� 
            // H��(H��P�@H��(��������������H�IH�H�`X�����M��D��H��H�I�.A3
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H��H�IH�H���
            // @SH�� H��H�p
            // H�\$H�t$WH��@H��@
            // H�\$WH�� ��H���L=����t��
            // �
            // H��H�XH�hH�pH�x ATAVAWH��
            // ���������������H��)D
            // H�\$WH��@H��H�
            H����
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // fn��
            // 
            // H�\$H�l$H�t$H�|$ AVH��0H��H�������H��@
            // H���
            // 2��������������̰��������������H��)D
            // @SVWH��0L�l$XH��L��L�t$`L�|$h��
            // H��t���
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // ���������������H��)D
            // D���
            // `����
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �
            // H��y.
            // 2��������������̰��������������H��)D
            // H��SUAWH��
            // @SH�� I��H��t H�H�����
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // ���
            // A���������������2��������������̰��������������H��)D
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // @SH�� H���b���H��+
            // L��2
            // H�\$H�t$WH�� H�ً�H���
            // H�\$H�l$H�t$ WATAUAVAWH�� H�rL�-��
            // H�\$WH�� I��I���k���H�H�������
            // @SH��`H���
            // H�\$WH��@H��H�
            H����
            // H��H�XH�pH�xUH�h�H���
            // ���������������H��)D
            // 2��������������̰��������������H��)D
            // H�H��H���
            // 
            // L��H�I��23
            // H��H�I��<3
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // �
            // H�\$H�l$H�t$WAVAWH��0H�L��L��H��H�IA��I��H�h� 
            // H��(H��P�@H��(��������������H�IH�H�`X�����M��D��H��H�I�.A3
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H��H�IH�H���
            // H�\$H�l$H�t$H�|$ AVH�� E3����A���H��A��tH�YHcqH��H�H;�s"H�K8H��tH�H;����P L�s8H��@H;�rދGD�w����v����uH���
            // H�t$ AVH�� M��H��D9A(��
            // H�A�
            // 9Q(������������Hc��
            // 
            // 
            // H���
            // H�
            A�
            // ��t
            �
            // 
            // L��H�I��23
            // H��H�I��<3
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // �
            // H�\$H�l$H�t$WAVAWH��0H�L��L��H��H�IA��I��H�h� 
            // H��(H��P�@H��(��������������H�IH�H�`X�����M��D��H��H�I�.A3
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // ���
            // H�\$H�l$H�t$H�|$ AVH�� E3����A���H��A��tH�YHcqH��H�H;�s"H�K8H��tH�H;����P L�s8H��@H;�rދGD�w����v����uH���
            // H�t$ AVH�� M��H��D9A(��
            // H�E�
            // 9Q(������������Hc��
            // 
            // H�\$H�t$H�|$ AVH�� I��L��H��D9A(��
            // H�A ������������@WH��0H��I��H�I L��H��t3L�ZH�@M�
            // �
            // ��u
            A�A�
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // H�\$H�t$H�|$ AVH�� I��L��H��D9A(��
            // H�A ������������@WH��0H��I��H�I L��H��t3L�ZH�@M�
            // �
            // ��u
            A�A�
            // H���
            // L�
            A�A;��
            // ��t
            �
            // 
            // H���
            // H��_
            // H�A������������H�yK
            // H��
            // �AW�H��_��]e
            // ��t
            �
            // 
            // H�	�
            // H��\
            // H�A������������H�yK
            // H�1�
            // H�
            A�
            // ��t
            �
            // 
            // H�Y�
            // H��Y
            // H�A������������H�yK
            // H���
            // H�
            A�
            // ��t
            �
            // 
            // H�)�
            // H�)X
            // H�A������������H�yK
            // H�\$WH�� ��H���,�����t�@
            // 3���������������@SH�� H�;�B
            // H��(H����
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // H��H�I�J3
            // H�\$H�l$H�t$H�|$ AVH��0H�L��H��H��H�II��H�p�
            !
            // H�H�`h���������.}AF
            // .}AF
            // �
            // M��D��H��H�I�.A3
            // H����������������
            // L��D��H�II��H�H���
            // 
            // H�Y�
            // H�yY
            // H�A������������H�yK
            // 
            // @SH�� H��H�I H��PH�H��H�� [H���
            // H�I H�H�`�����H�AH�@���������H�I H�H�` �����H�I H�H�`0�����H��(H�I H��P����H��(���������H�I H�H�`P�����H�I H�H�`H�����
            // H�I H�H�` �����H�I H�H�`0�����H��(H�I H��P����H��(���������H�I H�H�`P�����H�I H�H�`H�����H�I H�H�`p�����H�I H�H�`@�����
            // H�I H�H�`8�����@SH��0H��)t$ H�I (�H��Ph��uK.5�
            // H�I H�H�`X�����H�I H�H�``�����H�\$WH�� H��H��H�I H��P �GH�CHD�@D�GH�CH�P�G�����WH�CHfn
            // H�\$H�l$H�t$H�|$ AVH��0H�H��H�I A��I��L��H�pH��Pf�\$(A�L��H�|$ H��I����H�\$@H�l$HH�t$PH�|$XH��0A^������H��(L��tU��t
            // H�AH�@���������H�I H�H�` �����H�I H�H�`0�����H��(H�I H��P����H��(���������H�I H�H�`P�����H�I H�H�`H�����H�I H�H�`p�����
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // H�I H�H�`p�����H�I H�H�`@�����H�I H�H�`8�����@SH��0H��)t$ H�I (�H��Ph��uK.5�
            // L��SH��`H�Y3�H����
            // H�\$WH�� H��H��H�I H��P �GH�CHD�@D�GH�CH�P�G�����WH�CHfn
            // H��(H�I H��P����H��(���������H�I H�H�`P�����H�I H�H�`H�����H�I H�H�`p�����H�I H�H�`@�����H�I H�H�`8�����@SH��0H��)t$ H�
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �����
            // 
            namespace CVoiceContainerGenerator {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // 
            // 
            // H�\$WH��0H��H�����H��@
            // H�a�
            // 2��������������̰��������������H��)D
            // H�\$ VH�� H��H�L$0H�T$0I��H�L$8�,���H�H�
            // @SH�� ��KF
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // 
            // 
            // 
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // �����
            // ����
            // 
            // 
            // MPropertySuppressExpr
            // MPropertyFriendlyName
            // 
            // MPropertySuppressExpr
            // MPropertyFriendlyName
            // 
            // 
            // �����
            // �����
            // 
            // 
            // ����
            // h����
            // ����
            // �����
            // 
            // 
            // 
            // 
            // 
            // p>���
            // p����
            // �����
            // 
            // 
            // 
            // 
            // 
            // @SH�� H��H��
            // L�Ѭ
            // H�\$WH�� ��H���|�����t��
            // H��UVATAUH�h�H��
            // ���������������H��)D
            // ���������������H��)D
            // �
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // H�\$WH�� H�gz
            // 3���������������@SH�� H�;�B
            // H��(H����
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // H��H�I�J3
            // H�\$H�l$H�t$H�|$ AVH��0H�L��H��H��H�II��H�p�
            !
            // H�H�`h���������.}AF
            // .}AF
            // �
            // M��D��H��H�I�.A3
            // H����������������
            // L��D��H�II��H�H���
            // 
            // L��H�I��23
            // H��H�I��<3
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // �
            // H�\$H�l$H�t$WAVAWH��0H�L��L��H��H�IA��I��H�h� 
            // H��(H��P�@H��(��������������H�IH�H�`X�����M��D��H��H�I�.A3
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H��H�IH�H���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // H�\$H�l$H�t$H�|$ AVH�� E3����A���H��A��tH�YHcqH��H�H;�s"H�K8H��tH�H;����P L�s8H��@H;�rދGD�w����v����uH���
            // H�t$ AVH�� M��H��D9A(��
            // H�E�
            // 9Q(������������Hc��
            // 
            // 
            // 
            // H�g
            // L�
            A����
            // ��t
            �
            // 
            // H�	g
            // H��
            // H�A������������H�yK
            // H�ag
            // H�\$H�Q3�L��D��9��
            // ��t
            �
            // 
            // H�\$WH�� ��H��������t�H
            // 3���������������@SH�� H�;�B
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // �A0�������������H�\$WH��@H�H��H���P(��tH��tH9_u�C8H�\$PH��@_�H�L�D$ H��H�D$ ����H���D$(
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��P@H��H;�u�H�\$0H�t$8H�� _�������������H�\$H�t$WH�� �A$�����u3��H�
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // H�\$H�t$WH��0H�H��I��L�D$ H��H��A�E3�H���P�C$���uH�%
            // H�H�`h���������.}AF
            // .}AF
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�tH�@��H����
            // M��D��H��H�I�.A3
            // 3���������������@SH�� H�;�B
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H����
            // 
            // 
            // DA0������������H�l$H�t$WH��0�A I��H��H����tH�A�L�D$ H��E3�H���P�G �G$���H�\$@u3ɋы��
            H�W(H��H��H�H�<�H;�t$@
            // 3���������������@SH�� H�;�B
            // �y 
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��P8H��H;�u�H�\$0H�t$8H�� _�������������H��HH��)t$03��D$ 
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��PHH��H;�u�H�\$0H�t$8H�� _�������������H��H�XH�hH�pH�x AVH��@I��H��L
            // H��H�XfD�H L�@UVWATAUAVAWH���
            // H�\$H�t$WH�� �A$����
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // 
            // 
            // DA0������������H�l$H�t$WH��0�A I��H��H����tH�A�L�D$ H��E3�H���P�G �G$���H�\$@u3ɋы��
            H�W(H��H��H�H�<�H;�t$@
            // 3���������������@SH�� H�;�B
            // �y 
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��P8H��H;�u�H�\$0H�t$8H�� _�������������H��HH��)t$03��D$ 
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��PHH��H;�u�H�\$0H�t$8H�� _�������������H��H�XH�hH�pH�x AVH��@I��H��L
            // H��H�XfD�H L�@UVWATAUAVAWH��
            // H�\$H�t$WH�� �A$����
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // H�\$H�t$WH�� �AH
            // 3���������������@SH�� H�;�B
            // ���������������H��)D
            // �A0�������������H�\$WH��@H�H��H���P(��tH��tH9_u�C8H�\$PH��@_�H�L�D$ H��H�D$ ����H���D$(
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��P@H��H;�u�H�\$0H�t$8H�� _�������������H�\$H�t$WH�� �A$�����u3��H�
            // ���������������H��)D
            // �q�������������H��fD�H L�@H�PSUWATH��
            // H�H�`h���������.}AF
            // .}AF
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�tH�@��H����
            // M��D��H��H�I�.A3
            // 3���������������@SH�� H�;�B
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H����
            // 
            // DA0������������H�l$H�t$WH��0�A I��H��H����tH�A�L�D$ H��E3�H���P�G �G$���H�\$@u3ɋы��
            H�W(H��H��H�H�<�H;�t$@
            // 3���������������@SH�� H�;�B
            // �y 
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��P8H��H;�u�H�\$0H�t$8H�� _�������������H��HH��)t$03��D$ 
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��PHH��H;�u�H�\$0H�t$8H�� _�������������H��H�XH�hH�pH�x AVH��@I��H��L
            // fD�L$ L�D$H�T$SVATAUH��
            // ���
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // H�\$H�l$H�t$H�|$ AVH�� E3����A���H��A��tH�YHcqH��H�H;�s"H�K8H��tH�H;����P L�s8H��@H;�rދGD�w����v����uH���
            // H�t$ AVH�� M��H��D9A(��
            // H�A�
            // 9Q(������������Hc��
            // 
            // H�\$H�t$H�|$ AVH�� I��L��H��D9A(��
            // H�A ������������@WH��0H��I��H�I L��H��t3L�ZH�@M�
            // �
            // ��uA�fn���[��A
            // 
            // 
            // 
            // 
            // H��'
            // H�
            A�
            // ��t
            �
            // 
            // H��'
            // H���
            // H�A������������H�yK
            // H�(
            // H�
            A�
            // ��t
            �
            // 
            // H�9(
            // H�y�
            // H�A������������H�yK
            // H�a(
            // H�
            A�
            // ��t
            �
            // 
            // H��(
            // H�Y�
            // H�A������������H�yK
            // 
            // H�\$WH�� ��H��茷����t�8
            // 3���������������@SH�� H�;�B
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // �A0�������������H�\$WH��@H�H��H���P(��tH��tH9_u�C8H�\$PH��@_�H�L�D$ H��H�D$ ����H���D$(
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��P@H��H;�u�H�\$0H�t$8H�� _�������������H�\$H�t$WH�� �A$�����u3��H�
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // H�\$H�l$H�t$ AVH��0H�L��I��L�D$ H��H��A�E3�I���P3�9s ~8H�|$@3��C$���u3��H�K(H�L��I��H��P`��H��;s |�H�|$@H�\$HH�l$PH�
            // H�H�`h���������.}AF
            // .}AF
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�tH�@��H����
            // M��D��H��H�I�.A3
            // 3���������������@SH�� H�;�B
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H����
            // 
            // DA0������������H�l$H�t$WH��0�A I��H��H����tH�A�L�D$ H��E3�H���P�G �G$���H�\$@u3ɋы��
            H�W(H��H��H�H�<�H;�t$@
            // 3���������������@SH�� H�;�B
            // �y 
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��P8H��H;�u�H�\$0H�t$8H�� _�������������H��HH��)t$03��D$ 
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��PHH��H;�u�H�\$0H�t$8H�� _�������������H��H�XH�hH�pH�x AVH��@I��H��L
            // H�\$H�l$H�t$WATAUAVAWH��`H�H��E��L�D$ M��)t$PH��)|$@H��A�E3�H���P�G$���uL�4%
            // H�\$H�t$WH�� �A$����
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            namespace CVoiceContainerSet {
                constexpr std::ptrdiff_t m_soundsToPlay = 0xA8; // CUtlVector<CVoiceContainerSetElement>
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            namespace VMixConvolutionDesc_t {
                constexpr std::ptrdiff_t m_fldbGain = 0x0; // float32
                constexpr std::ptrdiff_t m_flPreDelayMS = 0x4; // float32
                constexpr std::ptrdiff_t m_flWetMix = 0x8; // float32
                constexpr std::ptrdiff_t m_fldbLow = 0xC; // float32
                constexpr std::ptrdiff_t m_fldbMid = 0x10; // float32
                constexpr std::ptrdiff_t m_fldbHigh = 0x14; // float32
                constexpr std::ptrdiff_t m_flLowCutoffFreq = 0x18; // float32
                constexpr std::ptrdiff_t m_flHighCutoffFreq = 0x1C; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // H�\$WH��0H��H�����H��@
            // H�a�
            // 2��������������̰��������������H��)D
            // H�\$ VH�� H��H�L$0H�T$0I��H�L$8�,���H�H�
            // @SH�� ��KF
            namespace CVoiceContainerSetElement {
                constexpr std::ptrdiff_t m_sound = 0x0; // CSoundContainerReference
                constexpr std::ptrdiff_t m_flVolumeDB = 0x18; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // H�\$H�l$H�t$ WH��p
            // H��T
            // ���������������H��)D
            // �y
            // @SH�� H���r���H�Ӎ9
            // H�\$WH�� H��@
            // H�\$WH�� ��H���|33
            // �
            // ���������������H��)D
            // ���������������H��)D
            // �
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // @SH�� H�����H���9
            // H�\$WH�� H��@
            // H�\$WH�� ��H���|33
            // �
            // @SH�� H��E��~"H�|$0A��H���R��H��
            // ���������������H��)D
            // H�\$WH��@H��H�
            H����
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // ���������������H��)D
            // �����
            // P����
            // 
            // 0����
            // @����
            // P����
            // p����
            // �����
            // �����
            // 
            // P����
            // �����
            // �����
            // �����
            // `����
            // �����
            // 0����
            //  ����
            // �����
            // 0����
            // ����
            // 
            // H�\$H�t$WH��PI��A��H���ö��H�ȅ���
            // 
            // 
            // 
            // 
            // 
            // @M���
            // �����
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // �����
            // @SH�� H�����H���9
            // L�q�
            // H�\$WH�� ��H���,
            // H�\$H�t$H�|$ UATAUAVAWH��H��`H�rH��
            // L��UWAUAVH��hI�yI��A�C ����L���D$ ����L��H����
            // H��H��x
            // H�\$WH��@H��H�
            H����
            // H��H�XH�pH�xUH�h�H���
            // ���������������H��)D
            // 2��������������̰��������������H��)D
            // Hc��
            // 
            // @����
            // �����
            // 
            // MPropertyFriendlyName
            // 
            // 
            // h����
            // 
            // �����
            // 
            // MPropertyFriendlyName
            // 
            // 
            // �����
            // 
            // �����
            // 
            // �����
            // 
            // �����
            // 
            // �����
            // 
            // 
            // 
            // 
            // �����
            // 
            // Г���
            // MPropertyFriendlyName
            // 
            // 
            // 
            // @[���
            // ����
            // (����
            // 
            // 
            // 
            // @SH�� H������H�C�9
            // L���
            // H�\$WH�� ��H���,
            // H�\$H�l$H�t$WH�� 3�H��3�H��f����
            // ���������������H��)D
            // @SUWH�� H��H�t$@L�t$P�L�|$XH���
            // �
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // 
            // L��H�I��23
            // H��H�I��<3
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // �
            // H�\$H�l$H�t$WAVAWH��0H�L��L��H��H�IA��I��H�h� 
            // H��(H��P�@H��(��������������H�IH�H�`X�����M��D��H��H�I�.A3
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H��H�IH�H���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // H�\$H�l$H�t$H�|$ AVH�� E3����A���H��A��tH�YHcqH��H�H;�s"H�K8H��tH�H;����P L�s8H��@H;�rދGD�w����v����uH���
            // H�t$ AVH�� M��H��D9A(��
            // H�E�
            // 9Q(������������Hc��
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // H�\$H�l$H�t$H�|$ AVH�� E3����A���H��A��tH�YHcqH��H�H;�s"H�K8H��tH�H;����P L�s8H��@H;�rދGD�w����v����uH���
            // H�t$ AVH�� M��H��D9A(��
            // H�E�
            // 9Q(������������Hc��
            // 
            // H�i
            // H���
            // H�A������������H�yK
            // H��
            // L�
            Ic��
            // ��t
            �
            // 
            // H��
            // H�ɩ
            // H�A������������H�yK
            // 0����
            // 
            // 
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // �����
            // P����
            // 
            // 
            // 
            // 
            // 
            // �����
            // К���
            // �����
            // 
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // �����
            // ț���
            // �����
            // 
            // �4���
            // P����
            // 
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // О���
            // X����
            // x����
            // 
            // 
            // 
            // 
            // 
            // L��H�I��23
            // H��H�I��<3
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // �
            // H�\$H�l$H�t$WAVAWH��0H�L��L��H��H�IA��I��H�h� 
            // H��(H��P�@H��(��������������H�IH�H�`X�����M��D��H��H�I�.A3
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H��H�IH�H���
            // @SH�� H��肻��H�Ӥ+
            // L�AO
            // H�\$WH�� ��H���|33
            // �
            // H��H�XH�hH�pH�x ATAVAWH��
            // ���������������H��)D
            // H�\$WH��@H��H�
            H����
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // fn��
            // 
            // L��H�I��23
            // H��H�I��<3
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // �
            // H�\$H�l$H�t$WAVAWH��0H�L��L��H��H�IA��I��H�h� 
            // H��(H��P�@H��(��������������H�IH�H�`X�����M��D��H��H�I�.A3
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H��H�IH�H���
            // @SH�� H��H�p
            // H�\$H�t$WH��@H��@
            // H�\$WH�� ��H���L=����t��
            // �
            // H��H�XH�hH�pH�x ATAVAWH��
            // ���������������H��)D
            // H�\$WH��@H��H�
            H����
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // fn��
            // 
            // H�\$H�l$H�t$H�|$ AVH��0H��H�������H��@
            // H���
            // 2��������������̰��������������H��)D
            // @SVWH��0L�l$XH��L��L�t$`L�|$h��
            // H��t���
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // ���������������H��)D
            // D���
            // `����
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �
            // H��y.
            // 2��������������̰��������������H��)D
            // H��SUAWH��
            // @SH�� I��H��t H�H�����
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // ���
            // A���������������2��������������̰��������������H��)D
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // @SH�� H���b���H��+
            // L��2
            // H�\$H�t$WH�� H�ً�H���
            // H�\$H�l$H�t$ WATAUAVAWH�� H�rL�-��
            // H�\$WH�� I��I���k���H�H�������
            // @SH��`H���
            // H�\$WH��@H��H�
            H����
            // H��H�XH�pH�xUH�h�H���
            // ���������������H��)D
            // 2��������������̰��������������H��)D
            // H�H��H���
            // 
            // L��H�I��23
            // H��H�I��<3
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // �
            // H�\$H�l$H�t$WAVAWH��0H�L��L��H��H�IA��I��H�h� 
            // H��(H��P�@H��(��������������H�IH�H�`X�����M��D��H��H�I�.A3
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H��H�IH�H���
            // H�\$H�l$H�t$H�|$ AVH�� E3����A���H��A��tH�YHcqH��H�H;�s"H�K8H��tH�H;����P L�s8H��@H;�rދGD�w����v����uH���
            // H�t$ AVH�� M��H��D9A(��
            // H�A�
            // 9Q(������������Hc��
            // 
            // 
            // H���
            // H�
            A�
            // ��t
            �
            // 
            // L��H�I��23
            // H��H�I��<3
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // �
            // H�\$H�l$H�t$WAVAWH��0H�L��L��H��H�IA��I��H�h� 
            // H��(H��P�@H��(��������������H�IH�H�`X�����M��D��H��H�I�.A3
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // ���
            // H�\$H�l$H�t$H�|$ AVH�� E3����A���H��A��tH�YHcqH��H�H;�s"H�K8H��tH�H;����P L�s8H��@H;�rދGD�w����v����uH���
            // H�t$ AVH�� M��H��D9A(��
            // H�E�
            // 9Q(������������Hc��
            // 
            // H�\$H�t$H�|$ AVH�� I��L��H��D9A(��
            // H�A ������������@WH��0H��I��H�I L��H��t3L�ZH�@M�
            // �
            // ��u
            A�A�
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // H�\$H�t$H�|$ AVH�� I��L��H��D9A(��
            // H�A ������������@WH��0H��I��H�I L��H��t3L�ZH�@M�
            // �
            // ��u
            A�A�
            // H���
            // L�
            A�A;��
            // ��t
            �
            // 
            // H���
            // H��_
            // H�A������������H�yK
            // H��
            // �AW�H��_��]e
            // ��t
            �
            // 
            // H�	�
            // H��\
            // H�A������������H�yK
            // H�1�
            // H�
            A�
            // ��t
            �
            // 
            // H�Y�
            // H��Y
            // H�A������������H�yK
            // H���
            // H�
            A�
            // ��t
            �
            // 
            // H�)�
            // H�)X
            // H�A������������H�yK
            // H�\$WH�� ��H���,�����t�@
            // 3���������������@SH�� H�;�B
            // H��(H����
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // H��H�I�J3
            // H�\$H�l$H�t$H�|$ AVH��0H�L��H��H��H�II��H�p�
            !
            // H�H�`h���������.}AF
            // .}AF
            // �
            // M��D��H��H�I�.A3
            // H����������������
            // L��D��H�II��H�H���
            // 
            // H�Y�
            // H�yY
            // H�A������������H�yK
            // 
            // @SH�� H��H�I H��PH�H��H�� [H���
            // H�I H�H�`�����H�AH�@���������H�I H�H�` �����H�I H�H�`0�����H��(H�I H��P����H��(���������H�I H�H�`P�����H�I H�H�`H�����
            // H�I H�H�` �����H�I H�H�`0�����H��(H�I H��P����H��(���������H�I H�H�`P�����H�I H�H�`H�����H�I H�H�`p�����H�I H�H�`@�����
            // H�I H�H�`8�����@SH��0H��)t$ H�I (�H��Ph��uK.5�
            // H�I H�H�`X�����H�I H�H�``�����H�\$WH�� H��H��H�I H��P �GH�CHD�@D�GH�CH�P�G�����WH�CHfn
            // H�\$H�l$H�t$H�|$ AVH��0H�H��H�I A��I��L��H�pH��Pf�\$(A�L��H�|$ H��I����H�\$@H�l$HH�t$PH�|$XH��0A^������H��(L��tU��t
            // H�AH�@���������H�I H�H�` �����H�I H�H�`0�����H��(H�I H��P����H��(���������H�I H�H�`P�����H�I H�H�`H�����H�I H�H�`p�����
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // H�I H�H�`p�����H�I H�H�`@�����H�I H�H�`8�����@SH��0H��)t$ H�I (�H��Ph��uK.5�
            // L��SH��`H�Y3�H����
            // H�\$WH�� H��H��H�I H��P �GH�CHD�@D�GH�CH�P�G�����WH�CHfn
            // H��(H�I H��P����H��(���������H�I H�H�`P�����H�I H�H�`H�����H�I H�H�`p�����H�I H�H�`@�����H�I H�H�`8�����@SH��0H��)t$ H�
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �����
            // 
            // �����
            namespace CVoiceContainerAsyncGenerator {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSoundInfoHeader {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            namespace SosEditItemInfo_t {
                constexpr std::ptrdiff_t itemType = 0x0; // SosEditItemType_t
                constexpr std::ptrdiff_t itemName = 0x8; // CUtlString
                constexpr std::ptrdiff_t itemTypeName = 0x10; // CUtlString
                constexpr std::ptrdiff_t itemKVString = 0x20; // CUtlString
                constexpr std::ptrdiff_t itemPos = 0x28; // Vector2D
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // �&���
            // 
            // 
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // 
            // 
            // �=���
            // 8����
            // x����
            // 
            // 
            // >���
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // �>���
            // 
            // MPropertyFriendlyName
            // MPropertyAttributeRange
            // 
            // X=���
            // `?���
            // 8>���
            // 
            // �?���
            // ���
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // �����
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �`���
            // �Y���
            // �Y���
            // �Y���
            // 
            // 
            // MKV3TransferName
            // MKV3TransferName
            // MKV3TransferName
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // ����
            // �H���
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // ণ��
            // 
            // �)���
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // PR���
            // p~���
            // 
            // 
            // 
            //  ����
            // 
            // 
            // 
            // 
            // 
            // 
            // �S���
            // 
            // 
            // 
            // 
            // 
            // 
            // `V���
            // 
            // 
            // 
            // �q���
            // 
            // �����
            // MKV3TransferName
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // p����
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // �^���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �,���
            // 
            // 
            // ����
            // !���
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // FILTER_UNKNOWN
            // FILTER_HIGHPASS
            // FILTER_BANDPASS
            // FILTER_NOTCH
            // FILTER_PEAKING_EQ
            // FILTER_LOW_SHELF
            // FILTER_HIGH_SHELF
            // FILTER_ALLPASS
            // FILTER_PASSTHROUGH
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // FILTER_SLOPE_1POLE_12dB
            // FILTER_SLOPE_1POLE_18dB
            // FILTER_SLOPE_1POLE_24dB
            // FILTER_SLOPE_12dB
            // FILTER_SLOPE_24dB
            namespace CVMixFlangerProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixFlangerDesc_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // �D���
            // 
            // 
            // �4���
            // 
            // 
            // MPropertyFriendlyName
            // MPropertyAttributeRange
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // 
            // 
            // x6���
            // �6���
            // 
            // �6���
            // �6���
            // X=���
            // `?���
            // ����
            // 
            // 7���
            // X=���
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �7���
            // 
            // �7���
            // 
            // 
            // 8����
            // x����
            // �F���
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // �����
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �j���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // ����
            // �{���
            // �3���
            // @5���
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // X=���
            // 
            // �=���
            // 
            // �=���
            // 
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // 
            // MPropertyFriendlyName
            // 
            // 8>���
            // 
            // P>���
            // ���
            // 
            // 
            // `8���
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // MPropertyAttributeRange
            // 
            // 
            // (?���
            // 4?���
            // MPropertyFriendlyName
            // MPropertyAttributeRange
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // p;���
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // �c���
            // �����
            // 
            // 
            // 
            // 
            // 
            // �>���
            // 
            // 
            // 
            // @���
            // 
            // 
            // 
            // pC���
            // 
            //  (���
            // 
            // 0���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MKV3TransferName
            // MKV3TransferName
            // MKV3TransferName
            // MKV3TransferName
            // MKV3TransferName
            // 
            // 
            // �Y���
            //  Z���
            // Z���
            // �F���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            //  O���
            // `����
            namespace CVMixEffectChainProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixEffectChainDesc_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // �\���
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // ����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CVMixFreeverbProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixFreeverbDesc_t
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            namespace VMixPlateverbDesc_t {
                constexpr std::ptrdiff_t m_flPrefilter = 0x0; // float32
                constexpr std::ptrdiff_t m_flInputDiffusion1 = 0x4; // float32
                constexpr std::ptrdiff_t m_flInputDiffusion2 = 0x8; // float32
                constexpr std::ptrdiff_t m_flDecay = 0xC; // float32
                constexpr std::ptrdiff_t m_flDamp = 0x10; // float32
                constexpr std::ptrdiff_t m_flFeedbackDiffusion1 = 0x14; // float32
                constexpr std::ptrdiff_t m_flFeedbackDiffusion2 = 0x18; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �j���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // ����
            // �{���
            // �3���
            // @5���
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // X=���
            // 
            // �=���
            // 
            // �=���
            // 
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // 
            // MPropertyFriendlyName
            // 
            // 8>���
            // 
            // P>���
            // ���
            // 
            // 
            // `8���
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // MPropertyAttributeRange
            // 
            // 
            // (?���
            // 4?���
            // MPropertyFriendlyName
            // MPropertyAttributeRange
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // p;���
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // �c���
            // �����
            // 
            // 
            // 
            // 
            // 
            // �>���
            // 
            // 
            // 
            // @���
            // 
            // 
            // 
            // pC���
            // 
            //  (���
            // 
            // 0���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MKV3TransferName
            // MKV3TransferName
            // MKV3TransferName
            // MKV3TransferName
            // MKV3TransferName
            // 
            // 
            // �Y���
            //  Z���
            // Z���
            // �F���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            //  O���
            // `����
            // Е���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // �����
            // @Y���
            // @+���
            // �����
            // 
            // e���
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // �\���
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // ����
            // 
            namespace CVMixConvolutionProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixConvolutionDesc_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // @����
            // P����
            namespace CSoundContainerReferenceArray {
                constexpr std::ptrdiff_t m_bUseReference = 0x0; // bool
                constexpr std::ptrdiff_t m_sounds = 0x8; // CUtlVector<CStrongHandle<InfoForResourceTypeCVoiceContainerBase>>
                constexpr std::ptrdiff_t m_pSounds = 0x20; // CUtlVector<CVoiceContainerBase*>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // ����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CVMixFilterProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixFilterDesc_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CVMixAdditionalOutput {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // @SH�� H���b���H��+
            // L��2
            // H�\$H�t$WH�� H�ً�H���
            // H�\$H�l$H�t$ WATAUAVAWH�� H�rL�-��
            // H�\$WH�� I��I���k���H�H�������
            // @SH��`H���
            // H�\$WH��@H��H�
            H����
            // H��H�XH�pH�xUH�h�H���
            // ���������������H��)D
            // 2��������������̰��������������H��)D
            // H�H��H���
            // 
            // L��H�I��23
            // H��H�I��<3
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // �
            // H�\$H�l$H�t$WAVAWH��0H�L��L��H��H�IA��I��H�h� 
            // H��(H��P�@H��(��������������H�IH�H�`X�����M��D��H��H�I�.A3
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H��H�IH�H���
            // H�\$H�l$H�t$H�|$ AVH�� E3����A���H��A��tH�YHcqH��H�H;�s"H�K8H��tH�H;����P L�s8H��@H;�rދGD�w����v����uH���
            // H�t$ AVH�� M��H��D9A(��
            // H�A�
            // 9Q(������������Hc��
            // 
            // 
            // H���
            // H�
            A�
            // ��t
            �
            // 
            // L��H�I��23
            // H��H�I��<3
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // �
            // H�\$H�l$H�t$WAVAWH��0H�L��L��H��H�IA��I��H�h� 
            // H��(H��P�@H��(��������������H�IH�H�`X�����M��D��H��H�I�.A3
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // ���
            // H�\$H�l$H�t$H�|$ AVH�� E3����A���H��A��tH�YHcqH��H�H;�s"H�K8H��tH�H;����P L�s8H��@H;�rދGD�w����v����uH���
            // H�t$ AVH�� M��H��D9A(��
            // H�E�
            // 9Q(������������Hc��
            // 
            // H�\$H�t$H�|$ AVH�� I��L��H��D9A(��
            // H�A ������������@WH��0H��I��H�I L��H��t3L�ZH�@M�
            // �
            // ��u
            A�A�
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // H�\$H�t$H�|$ AVH�� I��L��H��D9A(��
            // H�A ������������@WH��0H��I��H�I L��H��t3L�ZH�@M�
            // �
            // ��u
            A�A�
            // H���
            // L�
            A�A;��
            // ��t
            �
            // 
            // H���
            // H��_
            // H�A������������H�yK
            // H��
            // �AW�H��_��]e
            // ��t
            �
            // 
            // H�	�
            // H��\
            // H�A������������H�yK
            // H�1�
            // H�
            A�
            // ��t
            �
            // 
            // H�Y�
            // H��Y
            // H�A������������H�yK
            // H���
            // H�
            A�
            // ��t
            �
            // 
            // H�)�
            // H�)X
            // H�A������������H�yK
            // H�\$WH�� ��H���,�����t�@
            // 3���������������@SH�� H�;�B
            // H��(H����
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // H��H�I�J3
            // H�\$H�l$H�t$H�|$ AVH��0H�L��H��H��H�II��H�p�
            !
            // H�H�`h���������.}AF
            // .}AF
            // �
            // M��D��H��H�I�.A3
            // H����������������
            // L��D��H�II��H�H���
            // 
            // H�Y�
            // H�yY
            // H�A������������H�yK
            // 
            // @SH�� H��H�I H��PH�H��H�� [H���
            // H�I H�H�`�����H�AH�@���������H�I H�H�` �����H�I H�H�`0�����H��(H�I H��P����H��(���������H�I H�H�`P�����H�I H�H�`H�����
            // H�I H�H�` �����H�I H�H�`0�����H��(H�I H��P����H��(���������H�I H�H�`P�����H�I H�H�`H�����H�I H�H�`p�����H�I H�H�`@�����
            // H�I H�H�`8�����@SH��0H��)t$ H�I (�H��Ph��uK.5�
            // H�I H�H�`X�����H�I H�H�``�����H�\$WH�� H��H��H�I H��P �GH�CHD�@D�GH�CH�P�G�����WH�CHfn
            // H�\$H�l$H�t$H�|$ AVH��0H�H��H�I A��I��L��H�pH��Pf�\$(A�L��H�|$ H��I����H�\$@H�l$HH�t$PH�|$XH��0A^������H��(L��tU��t
            // H�AH�@���������H�I H�H�` �����H�I H�H�`0�����H��(H�I H��P����H��(���������H�I H�H�`P�����H�I H�H�`H�����H�I H�H�`p�����
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // H�I H�H�`p�����H�I H�H�`@�����H�I H�H�`8�����@SH��0H��)t$ H�I (�H��Ph��uK.5�
            // L��SH��`H�Y3�H����
            // H�\$WH�� H��H��H�I H��P �GH�CHD�@D�GH�CH�P�G�����WH�CHfn
            // H��(H�I H��P����H��(���������H�I H�H�`P�����H�I H�H�`H�����H�I H�H�`p�����H�I H�H�`@�����H�I H�H�`8�����@SH��0H��)t$ H�
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �����
            // 
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �����
            // MPropertyFriendlyName
            // 
            // 
            // �����
            // 
            // �����
            // 
            // p����
            // 
            // �����
            // 
            // �����
            // 
            // 
            // 
            // 
            //  $���
            // Ю���
            // ����
            // 
            // 
            // MPropertyFriendlyName
            // 
            // 
            // x����
            // 
            // 
            // 
            // '���
            // �����
            // �����
            // 
            // 
            // �+
            // H�Yz
            // @SVWAUH��
            // �y
            // @SH�� H��H� �
            // L���
            // H�\$WH�� H���
            // �
            // ���������������H��)D
            // ���������������H��)D
            // �
            // H�\$H�t$H�|$UH�l$�H��p
            // L��I�[WH��
            // ���������������H��)D
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CVoiceContainerTapePlayer {
                constexpr std::ptrdiff_t m_bShouldWraparound = 0xB8; // bool
                constexpr std::ptrdiff_t m_sourceAudio = 0xC0; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
                constexpr std::ptrdiff_t m_flTapeSpeedAttackTime = 0xC8; // float32
                constexpr std::ptrdiff_t m_flTapeSpeedReleaseTime = 0xCC; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // @SH�� H���
            // H��@
            // H��@
            // 3���������������@SH�� H�;�B
            // H���.
            // 3���������������@SH�� H�;�B
            // 3���������������@SH�� H�;�B
            // 3���������������@SH�� H�;�B
            // ���������������H��)D
            // 2��������������̰��������������H��)D
            // 3���������������@SH�� H�;�B
            // 2��������������̰��������������H��)D
            // �
            // 2��������������̰��������������H��)D
            // ���������������H��)D
            // 2��������������̰��������������H��)D
            // �
            // 2��������������̰��������������H��)D
            // 2��������������̰��������������H��)D
            // 3���������������@SH�� H�;�B
            // 2��������������̰��������������H��)D
            // 2��������������̰��������������H��)D
            // H��@
            // �
            // �
            // 2��������������̰��������������H��)D
            // 
            // H�\$WH�� H�ً�H��xH�9
            // H�QH�E,
            // H�Q H��G
            // �A(������������̋A,�������������H�\$H�l$VH�� 3ۋ�H��9Y~/H�|$0��H�F�D.uH�L��H��P8��H��0;^|�H�|$0H�\$8H�l$@H�� ^�������
            // H�A`������������H���.
            // 3���������������@SH�� H�;�B
            // 3���������������@SH�� H�;�B
            // 3���������������@SH�� H�;�B
            // ���������������H��)D
            // �AT������������H�\$H�l$H�t$WH�� H��H��H���
            // �AP�������������@SUVAVH��(H�|$P2�Hc��
            // H�\$H�t$WH�� H��I��H�QH��H������H��tL��D
            // H�Q@I��H��tI������I��B�<
            // �A\�����������̋AX�������������ATH��@���0
            // �AV������������H�\$WH��
            // 2��������������̰��������������H��)D
            // �
            // 2��������������̰��������������H��)D
            // 2��������������̰��������������H��)D
            // 3���������������@SH�� H�;�B
            // 2��������������̰��������������H��)D
            // 2��������������̰��������������H��)D
            // H��@
            // �
            // �AW�������������AW������������H�\$H�t$ WH��
            // 2��������������̰��������������H��)D
            // �
            // 
            // �;'
            // H���?
            // H���8�����������@SH�� H��H������H��H�� [�r�����@SH�� H��H�������H��H�� [������@SH�� H��H���ߏ��H��H�� [鲜����@SH�� H��H��迏�
            // H��(�����H��t�
            // @SH�� H��H�г
            // H�\$H�t$ WH��@H��@
            // H�Y!
            // H�\$WH�� H��
            // 
            // H�\$H�l$H�t$ WH��
            // H�9�
            // @SH�� H��H�������H��H�� [������@SH�� H��H���ߎ��H��H�� [鲱����@SH�� H��H��迎��H��H�� [�R�����@SH�� H��H��蟎��H��H�� [������
            // H�\$WH�� H��I�ع 
            // @SH�� H���BI��H���:
            // H�\$H�t$ WH��@H��@
            // H��!
            // H�\$WH�� H�ً�H�� H�9
            // 
            // H�\$H�l$H�t$ WH��p
            // H���
            // @SH�� H��H��迏��H��H�� [�R�����@SH�� H��H��蟏��H��H�� [������@SH�� H��H������H��H�� [钤����@SH�� H��H���_���H��H�� [�2�����
            // H�\$WH�� H��I�ع@
            // @SH�� H��H�P�
            // L�A�
            // H��!
            // H�\$WH�� H�'
            // 
            // H�\$H�l$H�t$ WH��p
            // H��
            // @SH�� H��H���?���H��H�� [�Ҿ����@SH�� H��H������H��H�� [�r�����@SH�� H��H�������H��H�� [������@SH�� H��H���ߍ��H��H�� [������
            // H�\$WH�� H��I�ع0	
            // @SH�� H��H�p�
            // L�A�
            // H��!
            // H�\$WH�� H�
            // 
            // H�\$H�l$H�t$ WH��p
            // H��
            // @SH�� H��H��蟏��H��H�� [������@SH�� H��H������H��H�� [钤����@SH�� H��H���_���H��H�� [�2�����@SH�� H��H���?���H��H�� [�ҩ����
            // H�\$H�t$WH�� H��I��
            // @SH�� H��H�`�
            // H�\$H�t$ WH��@H��@
            // H��!
            // H�\$WH�� H��
            // 
            // H�\$WH��0H��H���'
            // H�ٷ
            // @SH�� H��H������H��H�� [�r�����@SH�� H��H�������H��H�� [������@SH�� H��H���ߏ��H��H�� [鲜����@SH�� H��H��迏��H��H�� [�R�����
            // @SWATAUH��(L��I�ع�
            // @SH�� H��H���
            // H�\$H�t$ WH��@H��@
            // H��!
            // H�\$WH�� H��
            // 
            // H�\$H�l$H�t$ WH��p
            // H���
            // @SH�� H��H��迍��H��H�� [�R�����@SH�� H��H��蟍��H��H�� [�������@SH�� H��H������H��H�� [������@SH�� H��H���_���H��H�� [�2�����
            // H�\$WH�� H��I�عP
            // @SH�� H��H���
            // L�1�
            // H��!
            // H�\$WH�� H�
            // 
            // H�\$H�l$H�t$ WH��p
            // H�9�
            // @SH�� H��H���?���H��H�� [�ҩ����@SH�� H��H������H��H�� [�r�����@SH�� H��H�������H��H�� [������@SH�� H��H���ߎ��H��H�� [鲱����
            // H�\$UVWH��0H��I�ع�	
            // @SH�� H��H��
            // L�Q�
            // H��!
            // H�\$WH�� H�'
            // 
            // H�\$H�l$H�t$ WH��p
            // H��
            // @SH�� H��H������H��H�� [钤����@SH�� H��H���_���H��H�� [�2�����@SH�� H��H���?���H��H�� [�ҩ����@SH�� H��H������H��H�� [�r�����
            // H�\$H�l$H�t$WH�� H��I�ع`

            // @SH�� H��H��
            // H�\$H�t$ WH��@H��@
            // H�i!
            // H�\$WH�� H��
            // 
            // H�\$H�l$H�t$ WH��p
            // H���
            // @SH�� H��H���ߍ��H��H�� [������@SH�� H��H��迍��H��H�� [�R�����@SH�� H��H��蟍��H��H�� [�������@SH�� H��H������H��H�� [������
            // H�L��H��I��H�` H�L��H��I��H� �H�L��H��I��H�`8H�L��H��I��H�`(H�L��H��I��H�`@H�L��H��I��H�`0H�L��H��I��H�`H�\$H�t$WH�� H
            // @SH�� H��H�0�
            // L���
            // H��!
            // H�\$WH�� H�g
            // 
            // H�\$H�l$H�t$ WH��p
            // H��
            // @SH�� H��H������H��H�� [�r�����@UH��H��
            // H�\$H�t$WH�� H��I���
            // @SH�� H��H��
            // H�\$H�t$ WH��@H��@
            // H��!
            // H�\$WH�� H��
            // 
            // H�\$H�l$H�t$ WH��p
            // H�I�
            // @SH�� H��H���?���H��H�� [�������@SH�� H��H������H��H�� [�r�����@UH��H��
            // H�\$H�l$ WH�� H��I����
            // @SH�� H��H���
            // L�q�
            // H��!
            // H�\$WH�� H�
            // 
            // H�\$H�l$H�t$ WH��p
            // H�a�
            // @SH�� H��H������H��H�� [�r�����@SH�� H��H�������H��H�� [������@SH�� H��H���ߍ��H��H�� [������@SH�� H��H��迍��H��H�� [�R�����
            // H�\$H�t$WH�� H��I��
            // @SH�� H��H���
            // H�\$H�t$ WH��@H��@
            // H��!
            // H�\$WH�� H�ً�H�� H�9
            // 
            // �;'
            // H�a�
            // H���8�����������@SH�� H��H������H��H�� [�r�����@SH�� H��H�������H��H�� [������@SH�� H��H���ߏ��H��H�� [鲜����@SH�� H��H��迏�
            // H�L��H��I��H�`8H�L��H��I��H�`(H�L��H��I��H�`@H�L��H��I��H�`0H�L��H��I��H�`H�\$H�t$WH�� H��D
            // @SH�� H��H�@�
            // H�\$H�t$WH��@H��@
            // H�	!
            // H�\$WH�� H��
            // 
            // �;'
            // H��
            // H���8�����������@SH�� H��H������H��H�� [�r�����@SH�� H��H�������H��H�� [������@SH�� H��H���ߏ��H��H�� [鲜����@SH�� H��H��迏�
            // H�L��H��I��H�`0H�L��H��I��H�`H�\$H�t$WH�� H��D
            // @SH�� H��H�p�
            // H�\$H�t$WH��@H��@
            // H�	!
            // H�\$WH�� H��
            // 
            // �;'
            // H�i�
            // H���8�����������@SH�� H��H������H��H�� [�r�����@SH�� H��H�������H��H�� [������@SH�� H��H���ߏ��H��H�� [鲜����@SH�� H��H��迏�
            // H�\$H�|$AVH�� H��I�ع�
            // @SH�� H��H���
            // L�1�
            // H��!
            // H�\$WH�� ��H���������t�X
            // 
            // H�QH�e,
            // H�QH��G
            // �

            // H�QHH��4
            // 3���������������@SH�� H�;�B
            // @SH�� H��H�����
            // 3���������������@SH�� H�;�B
            // 3���������������@SH�� H�;�B
            // H�\$WH�� H���
            // H�\$H�l$H�t$WAVAWH�� H��
            // H�Q0H�H
            // H�\$H�l$H�t$WH�� H��
            // �AX�������������ATH��@���0
            // 2��������������̰��������������H��)D
            // A�
            // H�\$WH�� H���
            // H�\$H�t$H�|$ UH��H��
            // H�\$WH��
            // H��H�PSVAWH��@
            // H��H�XH�hVWAVH��
            // H��(H�QxI��H��t*�:
            // 2��������������̰��������������H��)D
            // @SH��0H�H���P@H��t8H�H���P@H�\�
            // H�\$H�t$WH�� H���
            // �AW������������H�\$H�t$ WH��
            // @SWAUH��0I��H��L��
            // 
            // ���������������H��)D
            // H�\$H�t$WH�� I��H��H��H��H��E���*�
            // 
            // H�QH�e,
            // H�QH��G
            // �

            // H�QHH��4
            // 3�H�� 
            // @SH�� H��H�����
            // 3���������������@SH�� H�;�B
            // 3���������������@SH�� H�;�B
            // H�\$WH�� H���
            // H�\$H�l$H�t$WAVAWH�� H��
            // H�Q0H�H
            // H�\$H�l$H�t$WH�� H��
            // �AX�������������ATH��@���0
            // 2��������������̰��������������H��)D
            // A�
            // H�\$WH�� H���
            // H�\$H�t$H�|$ UH��H��
            // H�\$WH��
            // H��H�PSVAWH��@
            // H��H�XH�hVWAVH��
            // H��(H�QxI��H��t*�:
            // 2��������������̰��������������H��)D
            // @SH��0H�H���P@H��t8H�H���P@H�\�
            // H�\$H�t$WH�� H���
            // �AW������������H�\$H�t$ WH��
            // @SWAUH��0I��H��L��
            // 
            // @SH��PH�I��JL�D$`H�D$`
            namespace CVMixSubgraphSwitchProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixSubgraphSwitchDesc_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            namespace VMixDiffusorDesc_t {
                constexpr std::ptrdiff_t m_flSize = 0x0; // float32
                constexpr std::ptrdiff_t m_flComplexity = 0x4; // float32
                constexpr std::ptrdiff_t m_flFeedback = 0x8; // float32
                constexpr std::ptrdiff_t m_flOutputGain = 0xC; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            //  O���
            // `����
            // Е���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // �����
            // @Y���
            // @+���
            // �����
            // 
            // e���
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // �\���
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // ����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CVMixSteamAudioPathingProcessorDesc {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // �����
            // @Y���
            // @+���
            // �����
            // 
            // e���
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // �\���
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // ����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CVMixPannerProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixPannerDesc_t
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            namespace VMixDynamicsCompressorDesc_t {
                constexpr std::ptrdiff_t m_fldbOutputGain = 0x0; // float32
                constexpr std::ptrdiff_t m_fldbCompressionThreshold = 0x4; // float32
                constexpr std::ptrdiff_t m_fldbKneeWidth = 0x8; // float32
                constexpr std::ptrdiff_t m_flCompressionRatio = 0xC; // float32
                constexpr std::ptrdiff_t m_flAttackTimeMS = 0x10; // float32
                constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x14; // float32
                constexpr std::ptrdiff_t m_flRMSTimeMS = 0x18; // float32
                constexpr std::ptrdiff_t m_flWetMix = 0x1C; // float32
                constexpr std::ptrdiff_t m_bPeakMode = 0x20; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // ����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CVMixStereoDelayProcessorDesc {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            namespace VMixShaperDesc_t {
                constexpr std::ptrdiff_t m_nShape = 0x0; // int32
                constexpr std::ptrdiff_t m_fldbDrive = 0x4; // float32
                constexpr std::ptrdiff_t m_fldbOutputGain = 0x8; // float32
                constexpr std::ptrdiff_t m_flWetMix = 0xC; // float32
                constexpr std::ptrdiff_t m_nOversampleFactor = 0x10; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            namespace VMixEnvelopeDesc_t {
                constexpr std::ptrdiff_t m_flAttackTimeMS = 0x0; // float32
                constexpr std::ptrdiff_t m_flHoldTimeMS = 0x4; // float32
                constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x8; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CAudioSentence {
                constexpr std::ptrdiff_t m_bShouldVoiceDuck = 0x0; // bool
                constexpr std::ptrdiff_t m_RunTimePhonemes = 0x8; // CUtlVector<CAudioPhonemeTag>
                constexpr std::ptrdiff_t m_EmphasisSamples = 0x20; // CUtlVector<CAudioEmphasisSample>
                constexpr std::ptrdiff_t m_morphData = 0x38; // CAudioMorphData
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // 
            // H�\$H�t$H�|$UH��H��0H��H������H�wt
            // H�q
            // 2��������������̰��������������H��)D
            // H��SWAWH��
            // @SH�� ��KF
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // 
            // L��H�I��23
            // H��H�I��<3
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // �
            // H�\$H�l$H�t$WAVAWH��0H�L��L��H��H�IA��I��H�h� 
            // H��(H��P�@H��(��������������H�IH�H�`X�����M��D��H��H�I�.A3
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H��H�IH�H���
            // H�\$H�t$WH�� ǁ�
            // 3���������������@SH�� H�;�B
            // H��(H����
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // H��H�I�J3
            // H�\$H�l$H�t$H�|$ AVH��0H�L��H��H��H�II��H�p�
            !
            // H�H�`h���������.}AF
            // .}AF
            // �
            // M��D��H��H�I�.A3
            // H����������������
            // L��D��H�II��H�H���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // H�\$H�t$H�|$ AVH�� I��L��H��D9A(��
            // H�A ������������@WH��0H��I��H�I L��H��t3L�ZH�@M�
            // 3���������������@SH�� H�;�B
            // ��ufAn��[��A
            // 
            // 
            // 
            // H�g
            // H���
            // H�A������������H�yK
            // H�	g
            // L��A���xH�A;��
            // ��t
            �
            // 
            // H�ag
            // H���
            // H�A������������H�yK
            // 
            // DA0������������H�l$H�t$WH��0�A I��H��H����tH�A�L�D$ H��E3�H���P�G �G$���H�\$@u3ɋы��
            H�W(H��H��H�H�<�H;�t$@
            // 3���������������@SH�� H�;�B
            // �y 
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��P8H��H;�u�H�\$0H�t$8H�� _�������������H��HH��)t$03��D$ 
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��PHH��H;�u�H�\$0H�t$8H�� _�������������H��H�XH�hH�pH�x AVH��@I��H��L
            // H�\$H�l$H�t$WATAUAVAWH��`H�H��E��L�D$ M��)t$PH��)|$@H��A�E3�H���PL�C@���*�H���%S���C$���uL�4%
            // H�\$H�t$WH�� �A$����
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // 
            // H�\$H�t$WH�� �A\3��qH��H�٩
            // 3���������������@SH�� H�;�B
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // �A0�������������H�\$WH��@H�H��H���P(��tH��tH9_u�C8H�\$PH��@_�H�L�D$ H��H�D$ ����H���D$(
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��P@H��H;�u�H�\$0H�t$8H�� _�������������H�\$H�t$WH�� �A$�����u3��H�
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // H�\$H�l$H�t$ AVH��0H�L��I��L�D$ H��H��A�E3�I���P3�9s ~8H�|$@3��C$���u3��H�K(H�L��I��H��P`��H��;s |�H�|$@H�\$HH�l$PH�
            // H�H�`h���������.}AF
            // .}AF
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�tH�@��H����
            // M��D��H��H�I�.A3
            // 3���������������@SH�� H�;�B
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H����
            // 
            // 
            // 
            // H�\$H�t$WH�� �AT3��q@��H�٩
            // 3���������������@SH�� H�;�B
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // �A0�������������H�\$WH��@H�H��H���P(��tH��tH9_u�C8H�\$PH��@_�H�L�D$ H��H�D$ ����H���D$(
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��P@H��H;�u�H�\$0H�t$8H�� _�������������H�\$H�t$WH�� �A$�����u3��H�
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // H�\$H�l$H�t$ AVH��0H�L��I��L�D$ H��H��A�E3�I���P3�9s ~8H�|$@3��C$���u3��H�K(H�L��I��H��P`��H��;s |�H�|$@H�\$HH�l$PH�
            // H�H�`h���������.}AF
            // .}AF
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�tH�@��H����
            // M��D��H��H�I�.A3
            // 3���������������@SH�� H�;�B
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H����
            // 
            // DA0������������H�l$H�t$WH��0�A I��H��H����tH�A�L�D$ H��E3�H���P�G �G$���H�\$@u3ɋы��
            H�W(H��H��H�H�<�H;�t$@
            // 3���������������@SH�� H�;�B
            // �y 
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��P8H��H;�u�H�\$0H�t$8H�� _�������������H��HH��)t$03��D$ 
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��PHH��H;�u�H�\$0H�t$8H�� _�������������H��H�XH�hH�pH�x AVH��@I��H��L
            // H��fD�H L�@H�PSUWATH��
            // ���
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // H�\$H�t$WH�� �A`
            // 3���������������@SH�� H�;�B
            // ���������������H��)D
            // �A0�������������H�\$WH��@H�H��H���P(��tH��tH9_u�C8H�\$PH��@_�H�L�D$ H��H�D$ ����H���D$(
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��P@H��H;�u�H�\$0H�t$8H�� _�������������H�\$H�t$WH�� �A$�����u3��H�
            // ���������������H��)D
            // �q�������������H��fD�H L�@H�PSUWATH��
            // H�H�`h���������.}AF
            // .}AF
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�tH�@��H����
            // M��D��H��H�I�.A3
            // 3���������������@SH�� H�;�B
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H����
            // 
            // H�\$H�t$H�|$ AVH�� I��L��H��D9A(��
            // H�A ������������@WH��0H��I��H�I L��H��t3L�ZH�@M�
            // �
            // ��u
            A�A�
            // H�\$H�l$H�t$H�|$ AVH�� E3����A���H��A��tH�YHcqH��H�H;�s"H�K8H��tH�H;����P L�s8H��@H;�rދGD�w����v����uH���
            // H�t$ AVH�� M��H��D9A(��
            // H���
            // 9Q(������������Hc��
            // 
            // 
            // 
            // H��'
            // H�)�
            // H�A������������H�yK
            // H��'
            // H�
            A�
            // ��t
            �
            // 
            // H�(
            // H�	�
            // H�A������������H�yK
            // H�9(
            // H�
            A�
            // ��t
            �
            // 
            // H�a(
            // H��
            // H�A������������H�yK
            // H��(
            // H�
            A�
            // ��t
            �
            // 
            // DA0������������H�l$H�t$WH��0�A I��H��H����tH�A�L�D$ H��E3�H���P�G �G$���H�\$@u3ɋы��
            H�W(H��H��H�H�<�H;�t$@
            // 3���������������@SH�� H�;�B
            // �y 
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��P8H��H;�u�H�\$0H�t$8H�� _�������������H��HH��)t$03��D$ 
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��PHH��H;�u�H�\$0H�t$8H�� _�������������H��H�XH�hH�pH�x AVH��@I��H��L
            // fD�L$ L�D$SVWATAUAWH��
            // H�\$H�t$WH�� �A$����
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // H�\$WH�� ��H���������t�x
            // 3���������������@SH�� H�;�B
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // �A0�������������H�\$WH��@H�H��H���P(��tH��tH9_u�C8H�\$PH��@_�H�L�D$ H��H�D$ ����H���D$(
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��P@H��H;�u�H�\$0H�t$8H�� _�������������H�\$H�t$WH�� �A$�����u3��H�
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // H�\$H�t$WH��0H�H��I��L�D$ H��H��A�E3�H���P�C$���uH�%
            // H�H�`h���������.}AF
            // .}AF
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�tH�@��H����
            // M��D��H��H�I�.A3
            // 3���������������@SH�� H�;�B
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H����
            // 
            // H�\$H�t$H�|$ AVH�� I��L��H��D9A(��
            // H�A ������������@WH��0H��I��H�I L��H��t3L�ZH�@M�
            // �
            // ��u
            A�A�
            // H��
            // @SH��0H�)t$ �A0�{A
            // ��t
            �
            // 
            // H�
            // H��
            // VApplication001
            // VEngineCvar007
            // VStringTokenSystem001
            // TestScriptMgr001
            // VProcessUtils002
            // VFileSystem017
            // VAsyncFileSystem2_001
            // ResourceSystem013
            // ResourceManifestRegistry001
            // ResourceHandleUtils001
            // SchemaSystem_001
            // ResourceCompilerSystem001
            // VMaterialSystem2_001
            // PostProcessingSystem_001
            // InputSystemVersion001
            // InputStackSystemVersion001
            // RenderDeviceMgr001
            // RenderUtils_001
            // SoundSystem001
            // SoundOpSystemEdit001
            // SoundOpSystem001
            // SteamAudio001
            // VP4003
            // Localize_001
            // VMediaFoundation001
            // VAvi001
            // VWebm001
            // VBik001
            // MeshSystem001
            // MeshUtils001
            // RenderDevice003
            // VRenderDeviceSetupV001
            // RenderHardwareConfig002
            // SceneSystem_002
            // IPulseSystem_001
            // SceneUtils_001
            // WorldRendererMgr001
            // AssetSystem001
            // AssetSystemTest001
            // ParticleSystemMgr003
            // VScriptManager010
            // PropertyEditorSystem_001
            namespace CVoiceContainerParameterBlender {
                constexpr std::ptrdiff_t m_firstSound = 0xA8; // CSoundContainerReference
                constexpr std::ptrdiff_t m_secondSound = 0xC0; // CSoundContainerReference
                constexpr std::ptrdiff_t m_bEnableOcclusionBlend = 0xD8; // bool
                constexpr std::ptrdiff_t m_curve1 = 0xE0; // CPiecewiseCurve
                constexpr std::ptrdiff_t m_curve2 = 0x120; // CPiecewiseCurve
                constexpr std::ptrdiff_t m_bEnableDistanceBlend = 0x160; // bool
                constexpr std::ptrdiff_t m_curve3 = 0x168; // CPiecewiseCurve
                constexpr std::ptrdiff_t m_curve4 = 0x1A8; // CPiecewiseCurve
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CVMixAudioMeter {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_displayName = 0x8; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // 
            // 
            // x6���
            // �6���
            // 
            // �6���
            // �6���
            // X=���
            // `?���
            // ����
            // 
            // 7���
            // X=���
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �7���
            // 
            // �7���
            // 
            // 
            // 8����
            // x����
            // �F���
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // �����
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �j���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // ����
            // �{���
            // �3���
            // @5���
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // X=���
            // 
            // �=���
            // 
            // �=���
            // 
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // 
            // MPropertyFriendlyName
            // 
            // 8>���
            // 
            // P>���
            // ���
            // 
            // 
            // `8���
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // MPropertyAttributeRange
            // 
            // 
            // (?���
            // 4?���
            // MPropertyFriendlyName
            // MPropertyAttributeRange
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // p;���
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // �c���
            // �����
            // 
            // 
            // 
            // 
            // 
            // �>���
            // 
            // 
            // 
            // @���
            // 
            // 
            // 
            // pC���
            // 
            //  (���
            // 
            // 0���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MKV3TransferName
            // MKV3TransferName
            // MKV3TransferName
            // MKV3TransferName
            // MKV3TransferName
            // 
            // 
            // �Y���
            //  Z���
            // Z���
            // �F���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            //  O���
            // `����
            // Е���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CVMixVocoderProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixVocoderDesc_t
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �����
            // 
            // 
            // 
            // kBranch
            // 
            // kMatch
            // 
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // SOS_GROUPTYPE_STATIC
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // SOS_SETPARAM_SORTTYPE_LOWEST
            // 
            // 
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // SOS_LIMIT_SORTTYPE_LOWEST
            // 
            // MPropertyFriendlyName
            // 
            // SOS_STOPTYPE_TIME
            // 
            // SOS_STOPTYPE_OPVAR
            // 
            // 
            // 
            // P����
            //  ����
            // D����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            //  3���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // SNDLVL_20dB
            // SNDLVL_25dB
            // SNDLVL_30dB
            // SNDLVL_35dB
            // SNDLVL_40dB
            // SNDLVL_45dB
            // SNDLVL_50dB
            // SNDLVL_55dB
            // SNDLVL_IDLE
            // SNDLVL_60dB
            // SNDLVL_65dB
            // SNDLVL_STATIC
            // SNDLVL_70dB
            // SNDLVL_NORM
            // SNDLVL_75dB
            // SNDLVL_80dB
            // SNDLVL_TALKING
            // SNDLVL_85dB
            // SNDLVL_90dB
            // SNDLVL_95dB
            // SNDLVL_100dB
            // SNDLVL_105dB
            // SNDLVL_110dB
            // SNDLVL_120dB
            // SNDLVL_130dB
            // SNDLVL_GUNFIRE
            // SNDLVL_140dB
            // SNDLVL_150dB
            // SNDLVL_180dB
            // 
            // 
            // �,���
            // �*���
            // �(���
            // �%���
            // 
            // ����
            // ����
            // 
            // p.���
            // �-���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CSosGroupActionLimitSchema {
                constexpr std::ptrdiff_t m_nMaxCount = 0x8; // int32
                constexpr std::ptrdiff_t m_nStopType = 0xC; // SosActionStopType_t
                constexpr std::ptrdiff_t m_nSortType = 0x10; // SosActionLimitSortType_t
                constexpr std::ptrdiff_t m_bStopImmediate = 0x14; // bool
                constexpr std::ptrdiff_t m_bCountStopped = 0x15; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // 
            // p����
            // �����
            // 
            // 
            // 
            // 
            // 
            // ����
            // �����
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // H�\$WH�� ��H���l�����tH��R#
            // 3���������������@SH�� H�;�B
            // H��(H����
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // H��H�I�J3
            // H�\$H�l$H�t$H�|$ AVH��0H�L��H��H��H�II��H�p�
            !
            // H�H�`h���������.}AF
            // .}AF
            // �
            // M��D��H��H�I�.A3
            // H����������������
            // L��D��H�II��H�H���
            // 
            // H�\$H�t$WH��0H��H���֌��H��@
            // H��}.
            // 2��������������̰��������������H��)D
            // @SVWH��0H�iV#
            // H�\$H�t$WH�� H���
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // ���������������H��)D
            // D���
            // H�\$WH�� ��H��������t��
            // 3���������������@SH�� H�;�B
            // H��(H����
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // H��H�I�J3
            // H�\$H�l$H�t$H�|$ AVH��0H�L��H��H��H�II��H�p�
            !
            // H�H�`h���������.}AF
            // .}AF
            // �
            // M��D��H��H�I�.A3
            // H����������������
            // L��D��H�II��H�H���
            // 
            // H�\$H�l$H�t$H�|$ AVH��0H��H�������H��@
            // H���
            // 2��������������̰��������������H��)D
            // @SVWH��0L�d$XH��L��L�t$`L�|$h��
            // H�\$H�t$WH�� H���
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // ���������������H��)D
            // D���
            // @SH�� H��H�`
            // H�\$H�t$WH��@H��@
            // H�\$WH�� ��H���L=����t��
            // H�\$UVWATAWH��`H�rH���
            // H��H�XH�hH�pH�x AVH��`)p�I��)x�H���=`
            // ���������������H��)D
            // H�\$WH��@H��H�
            H����
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // 2��������������̰��������������H��)D
            // 
            // 
            // 
            // ����
            // ����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // @SH�� H��袷��H��+
            // L��<
            // H�\$H�t$WH�� H�ً�H���
            // H�\$H�t$H�|$ UATAUAVAWH��$ ���H���
            // H�\$WH�� I��I������H�H�������
            // @SH��`H���
            // H�\$WH��@H��H�
            H����
            // H��H�XH�pH�xUH�h�H���
            // ���������������H��)D
            // 2��������������̰��������������H��)D
            // H�H��H���
            // p����
            // 
            // �����
            // h����
            // 
            // 
            // 
            // �
            // H��y.
            // 2��������������̰��������������H��)D
            // @SVAVH��@H��L�d$p�@
            // @SH�� I��H��t H�H�����
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // ���
            // A���������������2��������������̰��������������H��)D
            // H�\$WH�� ��H��������t��
            // 3���������������@SH�� H�;�B
            // H��(H����
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // H��H�I�J3
            // H�\$H�l$H�t$H�|$ AVH��0H�L��H��H��H�II��H�p�
            !
            // H�H�`h���������.}AF
            // .}AF
            // �
            // M��D��H��H�I�.A3
            // H����������������
            // L��D��H�II��H�H���
            // 
            // H�\$H�t$H�|$ AVH�� I��L��H��D9A(��
            // H�A ������������@WH��0H��I��H�I L��H��t3L�ZH�@M�
            // �
            // ��u
            A�A�
            // 
            // 
            // H���
            // H��w
            // H�A������������H�yK
            // H�\$WH�� ��H���������t��
            // 3���������������@SH�� H�;�B
            // H��(H����
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // H��H�I�J3
            // H�\$H�l$H�t$H�|$ AVH��0H�L��H��H��H�II��H�p�
            !
            // H�H�`h���������.}AF
            // .}AF
            // �
            // M��D��H��H�I�.A3
            // H����������������
            // L��D��H�II��H�H���
            // 
            // H�\$H�t$H�|$ AVH�� I��L��H��D9A(��
            // H�A ������������@WH��0H��I��H�I L��H��t3L�ZH�@M�
            // 3���������������@SH�� H�;�B
            // ��ufAn��[��A
            // H�\$H�l$H�t$H�|$ AVH�� E3����A���H��A��tH�YHcqH��H�H;�s"H�K8H��tH�H;����P L�s8H��@H;�rދGD�w����v����uH���
            // H�t$ AVH�� M��H��D9A(��
            // H�A�
            // 9Q(������������Hc��
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // H�\$H�l$H�t$H�|$ AVH�� E3����A���H��A��tH�YHcqH��H�H;�s"H�K8H��tH�H;����P L�s8H��@H;�rދGD�w����v����uH���
            // H�t$ AVH�� M��H��D9A(��
            // H�A�
            // 9Q(������������Hc��
            // 
            // H���
            // H��a
            // H�A������������H�yK
            // H���
            // L�A���
            // ��t
            �
            // 
            // H��
            // H�i^
            // H�A������������H�yK
            // H�	�
            // H�
            A�
            // ��t
            �
            // 
            // H�1�
            // H�I[
            // H�A������������H�yK
            // H�Y�
            // H�
            A�
            // ��t
            �
            // 
            // H���
            // H�)X
            // H�A������������H�yK
            // H�)�
            // @SH�� H�AH��H���
            // ��t
            �
            // 
            // L��H�I��23
            // H��H�I��<3
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // �
            // H�\$H�l$H�t$WAVAWH��0H�L��L��H��H�IA��I��H�h� 
            // H��(H��P�@H��(��������������H�IH�H�`X�����M��D��H��H�I�.A3
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H�A���
            // H�Y�
            // @SH�� H�AH��H���
            // ��t
            �
            // 
            // @SH�� H�l$0H��H�I ��H�|$@H��t
            H��
            // 3���������������@SH�� H�;�B
            // H�I H�H�`�����@SH�� H��H�I H��PH�H��H�� [H���
            // H�I H�H�`0�����H��(H�I H��P����H��(���������H�I H�H�`P�����H�I H�H�`H�����H�I H�H�`p�����H�I H�H�`@�����H�I H�H�`8�����
            // H�I H�H�`@�����H�I H�H�`8�����@SH��0H��)t$ H�I (�H��Ph��uK.5�
            // H�I H�H�`P�����H�I H�H�`H�����H�I H�H�`p�����H�I H�H�`@�����H�I H�H�`8�����@SH��0H��)t$ H�I (�H��Ph��uK.5�
            // H�\$H�t$H�|$AVH��0H�H��H�I I��L��H�xH��PA�H�\$ L��H��I����H�\$@H�t$HH�|$PH��0A^���������H�\$H�l$H�t$H�|$ AVH��0H�H��
            // H�H�`h���������.}AF
            // .}AF
            // H�I H�H�``�����H�\$WH�� H��H��H�I H��P �GH�CHD�@D�GH�CH�P�G�����WH�CHfn
            // M��D��H��H�I�.A3
            // 3���������������@SH�� H�;�B
            // H�I H�H�`H�����H�I H�H�`p�����H�I H�H�`@�����H�I H�H�`8�����@SH��0H��)t$ H�I (�H��Ph��uK.5�
            // 
            // 
            // PCM8
            // MP3
            // ADPCM
            namespace CVoiceContainerAmpedDecayingSineWave {
                constexpr std::ptrdiff_t m_flGainAmount = 0xB0; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // @SH�� H��H��
            // L���
            // @SH�� I��H��tA�B���LcB u3��H�J�B+B$Hc�H�H���)��� 
            // �A�A
            // 
            // �
            // H��z
            // ���������������H��)D
            // H�\$H�t$WH��0H���
            // H�\$H�t$WH�� �m�
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // H���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // C_Sharp
            // D
            // D_Sharp
            // E
            // F
            // F_Sharp
            // G
            // G_Sharp
            // A
            // A_Sharp
            // B
            // Count
            // 
            // 
            // 
            // 
            // 
            // 
            // Square
            // Saw
            // Triangle
            // Noise
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // �����
            // 
            // 
            // 
            // 
            // �����
            // 
            // ����
            // 
            // 
            // 
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // 
            // ����
            // MPropertyFriendlyName
            // 
            // 
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // p����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // ����
            // 
            // (����
            // 
            // 
            // H����
            // �G���
            // 
            // 
            // 
            // MPropertySuppressExpr
            // 
            // 
            // 
            // MPropertySuppressExpr
            // MPropertyFriendlyName
            // 
            // 
            // MPropertySuppressExpr
            // 
            // 
            // 
            // MPropertySuppressExpr
            // MPropertyFriendlyName
            // 
            // 
            // MPropertySuppressExpr
            // 
            // 
            // 
            // MPropertySuppressExpr
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // `I���
            // @����
            // `����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // @SH�� H��H��?
            // L�a�
            // @UH�� H�\$0H��H�|$@H���
            // H�\$H�t$H�|$ UATAUAVAWH�l$�H��
            // @SUWH�� Ic��
            // H��H��
            // H�\$WH��@H��H�
            H����
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // 2��������������̰��������������H��)D
            // 
            // �;
            // H�A;
            // 2��������������̰��������������H��)D
            // @SVAVH��@L�d$pL��L�|$0M��L���p
            // A�@
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // ���������������H��)D
            // A���������������2��������������̰��������������H��)D
            // 
            // 
            // 
            // 
            // @����
            // @����
            // 
            // 
            // 
            // @����
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // p����
            // 
            // 
            // 
            // `յ��
            // ȿ���
            // ؿ���
            // 
            // @SH�� H��H�p�
            namespace CVoiceContainerEnvelope {
                constexpr std::ptrdiff_t m_sound = 0xA8; // CStrongHandle<InfoForResourceTypeCVoiceContainerBase>
                constexpr std::ptrdiff_t m_analysisContainer = 0xB0; // CVoiceContainerAnalysisBase*
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            namespace VMixAutoFilterDesc_t {
                constexpr std::ptrdiff_t m_flEnvelopeAmount = 0x0; // float32
                constexpr std::ptrdiff_t m_flAttackTimeMS = 0x4; // float32
                constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x8; // float32
                constexpr std::ptrdiff_t m_filter = 0xC; // VMixFilterDesc_t
                constexpr std::ptrdiff_t m_flLFOAmount = 0x1C; // float32
                constexpr std::ptrdiff_t m_flLFORate = 0x20; // float32
                constexpr std::ptrdiff_t m_flPhase = 0x24; // float32
                constexpr std::ptrdiff_t m_nLFOShape = 0x28; // VMixLFOShape_t
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            namespace VMixDynamicsBand_t {
                constexpr std::ptrdiff_t m_fldbGainInput = 0x0; // float32
                constexpr std::ptrdiff_t m_fldbGainOutput = 0x4; // float32
                constexpr std::ptrdiff_t m_fldbThresholdBelow = 0x8; // float32
                constexpr std::ptrdiff_t m_fldbThresholdAbove = 0xC; // float32
                constexpr std::ptrdiff_t m_flRatioBelow = 0x10; // float32
                constexpr std::ptrdiff_t m_flRatioAbove = 0x14; // float32
                constexpr std::ptrdiff_t m_flAttackTimeMS = 0x18; // float32
                constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x1C; // float32
                constexpr std::ptrdiff_t m_bEnable = 0x20; // bool
                constexpr std::ptrdiff_t m_bSolo = 0x21; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // ����
            // 
            // 
            // 
            namespace VMixEffectChainDesc_t {
                constexpr std::ptrdiff_t m_effectName = 0x0; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // �&���
            // 
            // 
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // 
            // 
            // �=���
            // 8����
            // x����
            // 
            // 
            // >���
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // �>���
            // 
            // MPropertyFriendlyName
            // MPropertyAttributeRange
            // 
            // X=���
            // `?���
            // 8>���
            // 
            // �?���
            // ���
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // �����
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �`���
            // �Y���
            // �Y���
            // �Y���
            // 
            // 
            // MKV3TransferName
            // MKV3TransferName
            // MKV3TransferName
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // ����
            // �H���
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // ণ��
            // 
            // �)���
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // PR���
            // p~���
            // 
            // 
            // 
            //  ����
            // 
            // 
            // 
            // 
            // 
            // 
            // �S���
            // 
            // 
            // 
            // 
            // 
            // 
            // `V���
            // 
            // 
            // 
            // �q���
            // 
            // �����
            // MKV3TransferName
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // p����
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // �^���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �,���
            // 
            // 
            // ����
            // !���
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // FILTER_UNKNOWN
            // FILTER_HIGHPASS
            // FILTER_BANDPASS
            // FILTER_NOTCH
            // FILTER_PEAKING_EQ
            // FILTER_LOW_SHELF
            // FILTER_HIGH_SHELF
            // FILTER_ALLPASS
            // FILTER_PASSTHROUGH
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // FILTER_SLOPE_1POLE_12dB
            // FILTER_SLOPE_1POLE_18dB
            // FILTER_SLOPE_1POLE_24dB
            // FILTER_SLOPE_12dB
            namespace CVMixPlateReverbProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixPlateverbDesc_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // H�\$WH��0H��H���kZ��H�D�
            // H���
            // 2��������������̰��������������H��)D
            // H�l$ VWATH��`���
            // @SH�� ��KF
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // 
            // �
            // H���
            // 2��������������̰��������������H��)D
            // H�\$L�D$H�T$UVWATAUAVAWH��H��
            // @SH�� ��KF
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // 
            // 
            // 
            // �����
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // @SH�� H��H���
            // L�A
            
            // H�\$WH�� H����H���
            // H�\$H�l$H�t$ WATAUAVAWH�� L�rL�-�>
            // ���������������H��)D
            // H�\$H�t$WH�� H���
            // �
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // 
            // 
            // 
            // `����
            // 
            // 
            // 
            // 
            // 
            // 
            // �����
            // �����
            // �����
            // 
            // 
            // 
            // 
            // 
            // @SH�� H��H���
            // L�!�
            // H�\$WH�� H�ً�H���
            // ���
            // ���������������H��)D
            // @SH�� ���
            // �
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // 
            // 
            // `����
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �
            // H�ɾ
            // 2��������������̰��������������H��)D
            // H�\$H�l$H�t$H�|$ AVH��03�I��H��L��@8��
            // @SH�� ��KF
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // 
            // 
            // 
            // �����
            // 
            // 
            // @���
            // �����
            // ����
            // @SH�� H��H���
            // L���
            // H�\$WH�� H����H���
            // H�\$H�l$H�t$ WATAUAVAWH�� H�rL�-�'
            // ���������������H��)D
            // H�\$WH�� H���
            // �
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // �����
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // 
            // 
            // H�\$WH��0H��H�����H��@
            // H�a�
            // 2��������������̰��������������H��)D
            // H�\$ VH�� H��H�L$0H�T$0I��H�L$8�,���H�H�
            // @SH�� ��KF
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // 
            // 
            // 
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // �����
            // ����
            // 
            // 
            // MPropertySuppressExpr
            // MPropertyFriendlyName
            // 
            // MPropertySuppressExpr
            // MPropertyFriendlyName
            // 
            // 
            // �����
            // �����
            // 
            // 
            // ����
            // h����
            // ����
            // �����
            // 
            // 
            // 
            // 
            // 
            // p>���
            // p����
            // �����
            // 
            // 
            // 
            // 
            // 
            // @SH�� H��H��
            // L�Ѭ
            // H�\$WH�� ��H���|�����t��
            // H��UVATAUH�h�H��
            // ���������������H��)D
            // ���������������H��)D
            // �
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // H�\$WH�� H�gz
            // 3���������������@SH�� H�;�B
            // H��(H����
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // H��H�I�J3
            // H�\$H�l$H�t$H�|$ AVH��0H�L��H��H��H�II��H�p�
            !
            // H�H�`h���������.}AF
            // .}AF
            // �
            // M��D��H��H�I�.A3
            // H����������������
            // L��D��H�II��H�H���
            // 
            // L��H�I��23
            // H��H�I��<3
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // �
            // H�\$H�l$H�t$WAVAWH��0H�L��L��H��H�IA��I��H�h� 
            // H��(H��P�@H��(��������������H�IH�H�`X�����M��D��H��H�I�.A3
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H��H�IH�H���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // H�\$H�l$H�t$H�|$ AVH�� E3����A���H��A��tH�YHcqH��H�H;�s"H�K8H��tH�H;����P L�s8H��@H;�rދGD�w����v����uH���
            // H�t$ AVH�� M��H��D9A(��
            // H�E�
            // 9Q(������������Hc��
            // 
            // 
            // 
            // H�g
            // L�
            A����
            // ��t
            �
            // 
            // H�	g
            // H��
            // H�A������������H�yK
            // H�ag
            // H�\$H�Q3�L��D��9��
            namespace CVoiceContainerMultiBlender {
                constexpr std::ptrdiff_t m_soundsToPlay = 0xA8; // CSoundContainerReferenceArray
                constexpr std::ptrdiff_t m_flBlendFactor = 0xE0; // float32
                constexpr std::ptrdiff_t m_flCrossover = 0xE4; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �`���
            // �Y���
            // �Y���
            // �Y���
            // 
            // 
            // MKV3TransferName
            // MKV3TransferName
            // MKV3TransferName
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // ����
            // �H���
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // ণ��
            // 
            // �)���
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // PR���
            // p~���
            // 
            // 
            // 
            //  ����
            // 
            // 
            // 
            // 
            // 
            // 
            // �S���
            // 
            // 
            // 
            // 
            // 
            // 
            // `V���
            // 
            // 
            // 
            // �q���
            // 
            // �����
            // MKV3TransferName
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // p����
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // �^���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �,���
            // 
            // 
            // ����
            // !���
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // FILTER_UNKNOWN
            // FILTER_HIGHPASS
            // FILTER_BANDPASS
            // FILTER_NOTCH
            // FILTER_PEAKING_EQ
            // FILTER_LOW_SHELF
            // FILTER_HIGH_SHELF
            // FILTER_ALLPASS
            // FILTER_PASSTHROUGH
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // FILTER_SLOPE_1POLE_12dB
            // FILTER_SLOPE_1POLE_18dB
            // FILTER_SLOPE_1POLE_24dB
            // FILTER_SLOPE_12dB
            // FILTER_SLOPE_24dB
            // FILTER_SLOPE_36dB
            // FILTER_SLOPE_48dB
            // FILTER_SLOPE_MAX
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // LFO_SHAPE_SQUARE
            // LFO_SHAPE_TRI
            // LFO_SHAPE_SAW
            // LFO_SHAPE_NOISE
            // 
            // 
            // 
            // 
            // 
            // 
            // PANNER_TYPE_EQUAL_POWER
            // 
            // 
            // 
            // SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT
            // SUBGRAPH_INTERPOLATION_KEEP_LAST_SUBGRAPH_RUNNING
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // VMIX_CHAN_LEFT
            // VMIX_CHAN_RIGHT
            // VMIX_CHAN_SWAP
            namespace CVMixVsndInput {
                constexpr std::ptrdiff_t m_defaultValue = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_nProcessor = 0x18; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            namespace CVoiceContainerStaticAdditiveSynth__CGainScalePerInstance {
                constexpr std::ptrdiff_t m_flMinVolume = 0x0; // float32
                constexpr std::ptrdiff_t m_nInstancesAtMinVolume = 0x4; // int32
                constexpr std::ptrdiff_t m_flMaxVolume = 0x8; // float32
                constexpr std::ptrdiff_t m_nInstancesAtMaxVolume = 0xC; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // �
            // H���;
            // 2��������������̰��������������H��)D
            // H�\$H�t$H�|$AVH��0H�I��H��L���
            // H�\$H�t$WH�� �m�
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // H�\$H�l$H�t$WAVAWH��@3�H�rM��H�Z D�L��H����E��u9�9����t3��
            // H�\$WH�� ��H���L�����t��
            // 3���������������@SH�� H�;�B
            // H��(H����
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // H��H�I�J3
            // H�\$H�l$H�t$H�|$ AVH��0H�L��H��H��H�II��H�p�
            !
            // H�H�`h���������.}AF
            // .}AF
            // �
            // M��D��H��H�I�.A3
            // H����������������
            // L��D��H�II��H�H���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // H�\$H�t$H�|$ AVH�� I��L��H��D9A(��
            // H�A ������������@WH��0H��I��H�I L��H��t3L�ZH�@M�
            // 3���������������@SH�� H�;�B
            // ��ufAn��[��A
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // H�\$H�t$H�|$ AVH�� I��L��H��D9A(��
            // H�A ������������@WH��0H��I��H�I L��H��t3L�ZH�@M�
            // 3���������������@SH�� H�;�B
            // ��ufAn��[��A
            // H�i
            // H��(H�I����2�H��(�������������H�9�
            // ��t
            �
            // 
            // H��
            // H�9�
            // H�A������������H�yK
            // H��
            // H�\$H�t$WH�� H�AH��H���
            // ��t
            �
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �4���
            // P����
            // 
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // 
            // p����
            // �����
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // 
            // p����
            // �����
            // 
            // 
            // 
            // 
            // 
            // ����
            // �����
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // H�\$WH�� ��H���l�����tH��R#
            // 3���������������@SH�� H�;�B
            // H��(H����
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // H��H�I�J3
            // H�\$H�l$H�t$H�|$ AVH��0H�L��H��H��H�II��H�p�
            !
            // H�H�`h���������.}AF
            // .}AF
            // �
            // M��D��H��H�I�.A3
            // H����������������
            // L��D��H�II��H�H���
            // 
            // H�\$H�t$WH��0H��H���֌��H��@
            // H��}.
            // 2��������������̰��������������H��)D
            // @SVWH��0H�iV#
            // H�\$H�t$WH�� H���
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // ���������������H��)D
            // D���
            // H�\$WH�� ��H��������t��
            // 3���������������@SH�� H�;�B
            // H��(H����
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // H��H�I�J3
            // H�\$H�l$H�t$H�|$ AVH��0H�L��H��H��H�II��H�p�
            !
            // H�H�`h���������.}AF
            // .}AF
            // �
            // M��D��H��H�I�.A3
            // H����������������
            // L��D��H�II��H�H���
            // 
            // H�\$H�l$H�t$H�|$ AVH��0H��H�������H��@
            // H���
            // 2��������������̰��������������H��)D
            // @SVWH��0L�d$XH��L��L�t$`L�|$h��
            // H�\$H�t$WH�� H���
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // ���������������H��)D
            // D���
            // @SH�� H��H�`
            // H�\$H�t$WH��@H��@
            // H�\$WH�� ��H���L=����t��
            // H�\$UVWATAWH��`H�rH���
            // H��H�XH�hH�pH�x AVH��`)p�I��)x�H���=`
            // ���������������H��)D
            // H�\$WH��@H��H�
            H����
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // 2��������������̰��������������H��)D
            // 
            // 
            // 
            // ����
            // ����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // @SH�� H��袷��H��+
            // L��<
            // H�\$H�t$WH�� H�ً�H���
            // H�\$H�t$H�|$ UATAUAVAWH��$ ���H���
            // H�\$WH�� I��I������H�H�������
            // @SH��`H���
            // H�\$WH��@H��H�
            H����
            // H��H�XH�pH�xUH�h�H���
            // ���������������H��)D
            // 2��������������̰��������������H��)D
            // H�H��H���
            // p����
            // 
            // �����
            // h����
            // 
            // 
            // 
            // �
            // H��y.
            // 2��������������̰��������������H��)D
            // @SVAVH��@H��L�d$p�@
            // @SH�� I��H��t H�H�����
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // ���
            // A���������������2��������������̰��������������H��)D
            // H�\$WH�� ��H��������t��
            // 3���������������@SH�� H�;�B
            // H��(H����
            // H��HH��H�D$ ����H�IL�D$ �D$(
            namespace CVoiceContainerSelector {
                constexpr std::ptrdiff_t m_mode = 0xA8; // PlayBackMode_t
                constexpr std::ptrdiff_t m_soundsToPlay = 0xB0; // CSoundContainerReferenceArray
                constexpr std::ptrdiff_t m_fProbabilityWeights = 0xE8; // CUtlVector<float32>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // 
            // 
            // 
            // H�\$WH��0H��@
            // H�9�*
            // @SH��@)t$ W��qI��/���
            // `����
            // ����
            // 
            // 
            // @SH�� H��H�0�1
            // �
            // @SH�� H����tH��'
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �����
            // 
            // 
            // 
            // kBranch
            // 
            // kMatch
            // 
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // SOS_GROUPTYPE_STATIC
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // SOS_SETPARAM_SORTTYPE_LOWEST
            // 
            // 
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // SOS_LIMIT_SORTTYPE_LOWEST
            // 
            // MPropertyFriendlyName
            // 
            // SOS_STOPTYPE_TIME
            // 
            // SOS_STOPTYPE_OPVAR
            // 
            // 
            // 
            // P����
            //  ����
            // D����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            //  3���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // SNDLVL_20dB
            // SNDLVL_25dB
            // SNDLVL_30dB
            // SNDLVL_35dB
            // SNDLVL_40dB
            // SNDLVL_45dB
            // SNDLVL_50dB
            // SNDLVL_55dB
            // SNDLVL_IDLE
            // SNDLVL_60dB
            // SNDLVL_65dB
            // SNDLVL_STATIC
            // SNDLVL_70dB
            // SNDLVL_NORM
            // SNDLVL_75dB
            // SNDLVL_80dB
            // SNDLVL_TALKING
            // SNDLVL_85dB
            // SNDLVL_90dB
            // SNDLVL_95dB
            // SNDLVL_100dB
            // SNDLVL_105dB
            // SNDLVL_110dB
            // SNDLVL_120dB
            // SNDLVL_130dB
            // SNDLVL_GUNFIRE
            // SNDLVL_140dB
            // SNDLVL_150dB
            // SNDLVL_180dB
            // 
            // 
            // �,���
            // �*���
            // �(���
            // �%���
            // 
            // ����
            // ����
            // 
            // p.���
            // �-���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CSosGroupActionTimeBlockLimitSchema {
                constexpr std::ptrdiff_t m_nMaxCount = 0x8; // int32
                constexpr std::ptrdiff_t m_flMaxDuration = 0xC; // float32
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // 
            // 
            // @SH�� H��H���1
            // H�\$H�t$WH��@H��@
            // H�\$WH�� H�ً�H�� H�9
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // 
            // 
            // @SH�� H��H�p�1
            // H�\$H�t$H�|$ UH��H��@H��@
            // H�\$WH�� H�ً�H��0H�9
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // �
            // H���*
            // H�L$UVWAUH�l$�H��
            // �̛��
            // X����
            // �����
            // 
            // 
            // 
            // H�\$H�t$WH��0H��@
            // H���*
            // H�L$AWH��p�QM����yA�x(
            // Û��
            // �����
            // 
            // 
            // @SH�� H��H�p�1
            // �
            // @SH�� H����tH��'
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // 
            // 
            // 
            // �
            // H�q�*
            // L�D$SH��p�QI�؉T$ ��yA�x(
            //  ����
            // �����
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // 
            // 
            // �����
            // 
            // �����
            // 
            // �����
            // `����
            // h����
            // 
            // �����
            // 
            // �����
            // ����
            // 
            // 
            // 
            // ����
            // �����
            // 
            // �����
            // 
            // �����
            // 
            // 
            // �����
            // `����
            // 
            // �����
            // 
            // �����
            // p����
            // 
            // �����
            // 
            // �����
            // 
            // �����
            // 
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // H��XL��E���
            // P+���
            // �)���
            // �&���
            // �#���
            // � ���
            // 0���
            // �.���
            // 0���
            // 
            // .���
            // `-���
            // p/���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CSosGroupActionMemberCountEnvelopeSchema {
                constexpr std::ptrdiff_t m_nBaseCount = 0x8; // int32
                constexpr std::ptrdiff_t m_nTargetCount = 0xC; // int32
                constexpr std::ptrdiff_t m_flBaseValue = 0x10; // float32
                constexpr std::ptrdiff_t m_flTargetValue = 0x14; // float32
                constexpr std::ptrdiff_t m_flAttack = 0x18; // float32
                constexpr std::ptrdiff_t m_flDecay = 0x1C; // float32
                constexpr std::ptrdiff_t m_resultVarName = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_bSaveToGroup = 0x28; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // �&���
            // 
            // 
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // 
            // 
            // �=���
            // 8����
            // x����
            // 
            // 
            // >���
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // �>���
            // 
            // MPropertyFriendlyName
            // MPropertyAttributeRange
            // 
            // X=���
            // `?���
            // 8>���
            // 
            // �?���
            // ���
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // �����
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �`���
            // �Y���
            // �Y���
            // �Y���
            // 
            // 
            // MKV3TransferName
            // MKV3TransferName
            // MKV3TransferName
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // ����
            // �H���
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // ণ��
            // 
            // �)���
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // PR���
            // p~���
            // 
            // 
            // 
            //  ����
            // 
            // 
            // 
            // 
            // 
            // 
            // �S���
            // 
            // 
            // 
            // 
            // 
            // 
            // `V���
            // 
            // 
            // 
            // �q���
            // 
            // �����
            // MKV3TransferName
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // p����
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // �^���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �,���
            // 
            // 
            // ����
            // !���
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // FILTER_UNKNOWN
            // FILTER_HIGHPASS
            // FILTER_BANDPASS
            // FILTER_NOTCH
            // FILTER_PEAKING_EQ
            // FILTER_LOW_SHELF
            // FILTER_HIGH_SHELF
            // FILTER_ALLPASS
            // FILTER_PASSTHROUGH
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // FILTER_SLOPE_1POLE_12dB
            // FILTER_SLOPE_1POLE_18dB
            // FILTER_SLOPE_1POLE_24dB
            namespace CVMixDualCompressorProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixDualCompressorDesc_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // H�\$WH��0H��H������H��@
            // H���
            // 2��������������̰��������������H��)D
            // L��SUVWATH��`I�8�����M�kM��M�s�H��M�{�L��A�kH����
            // @SH�� ��KF
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // `#���
            // 
            // ����
            // 
            // 
            // 
            // 
            // 
            // �����
            // p ���
            // 
            // @SH�� H��H���
            // L�a�
            // H�\$WH�� H����H���
            // H�\$H�t$WH�� H���
            // ���������������H��)D
            // H�\$WH�� H���
            // �
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // 
            // 
            // 
            // �����
            // 
            // �����
            // 
            // 
            // MPropertyStartGroup
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // @����
            // h����
            // 
            // @����
            // �����
            // 
            // 
            // MPropertyStartGroup
            // MPropertyFriendlyName
            // 
            // 
            // MPropertySuppressExpr
            // MPropertyFriendlyName
            // MPropertySuppressExpr
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // 
            // H�\$H�t$H�|$UH��H��0H��H������H�wt
            // H�q
            // 2��������������̰��������������H��)D
            // H��SWAWH��
            // @SH�� ��KF
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // 
            // L��H�I��23
            // H��H�I��<3
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // �
            // H�\$H�l$H�t$WAVAWH��0H�L��L��H��H�IA��I��H�h� 
            // H��(H��P�@H��(��������������H�IH�H�`X�����M��D��H��H�I�.A3
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H��H�IH�H���
            // H�\$H�t$WH�� ǁ�
            // 3���������������@SH�� H�;�B
            // H��(H����
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // H��H�I�J3
            // H�\$H�l$H�t$H�|$ AVH��0H�L��H��H��H�II��H�p�
            !
            // H�H�`h���������.}AF
            // .}AF
            // �
            // M��D��H��H�I�.A3
            // H����������������
            // L��D��H�II��H�H���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // H�\$H�t$H�|$ AVH�� I��L��H��D9A(��
            // H�A ������������@WH��0H��I��H�I L��H��t3L�ZH�@M�
            // 3���������������@SH�� H�;�B
            // ��ufAn��[��A
            // 
            // 
            // 
            // H�g
            // H���
            // H�A������������H�yK
            // H�	g
            // L��A���xH�A;��
            // ��t
            �
            // 
            // H�ag
            // H���
            // H�A������������H�yK
            // 
            // DA0������������H�l$H�t$WH��0�A I��H��H����tH�A�L�D$ H��E3�H���P�G �G$���H�\$@u3ɋы��
            H�W(H��H��H�H�<�H;�t$@
            // 3���������������@SH�� H�;�B
            // �y 
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��P8H��H;�u�H�\$0H�t$8H�� _�������������H��HH��)t$03��D$ 
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��PHH��H;�u�H�\$0H�t$8H�� _�������������H��H�XH�hH�pH�x AVH��@I��H��L
            // H�\$H�l$H�t$WATAUAVAWH��`H�H��E��L�D$ M��)t$PH��)|$@H��A�E3�H���PL�C@���*�H���%S���C$���uL�4%
            // H�\$H�t$WH�� �A$����
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // 
            // H�\$H�t$WH�� �A\3��qH��H�٩
            // 3���������������@SH�� H�;�B
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // �A0�������������H�\$WH��@H�H��H���P(��tH��tH9_u�C8H�\$PH��@_�H�L�D$ H��H�D$ ����H���D$(
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��P@H��H;�u�H�\$0H�t$8H�� _�������������H�\$H�t$WH�� �A$�����u3��H�
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // H�\$H�l$H�t$ AVH��0H�L��I��L�D$ H��H��A�E3�I���P3�9s ~8H�|$@3��C$���u3��H�K(H�L��I��H��P`��H��;s |�H�|$@H�\$HH�l$PH�
            // H�H�`h���������.}AF
            // .}AF
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�tH�@��H����
            // M��D��H��H�I�.A3
            // 3���������������@SH�� H�;�B
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H����
            // 
            // 
            // 
            // H�\$H�t$WH�� �AT3��q@��H�٩
            // 3���������������@SH�� H�;�B
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // �A0�������������H�\$WH��@H�H��H���P(��tH��tH9_u�C8H�\$PH��@_�H�L�D$ H��H�D$ ����H���D$(
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��P@H��H;�u�H�\$0H�t$8H�� _�������������H�\$H�t$WH�� �A$�����u3��H�
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // H�\$H�l$H�t$ AVH��0H�L��I��L�D$ H��H��A�E3�I���P3�9s ~8H�|$@3��C$���u3��H�K(H�L��I��H��P`��H��;s |�H�|$@H�\$HH�l$PH�
            // H�H�`h���������.}AF
            // .}AF
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�tH�@��H����
            // M��D��H��H�I�.A3
            // 3���������������@SH�� H�;�B
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H����
            // 
            // DA0������������H�l$H�t$WH��0�A I��H��H����tH�A�L�D$ H��E3�H���P�G �G$���H�\$@u3ɋы��
            H�W(H��H��H�H�<�H;�t$@
            // 3���������������@SH�� H�;�B
            // �y 
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��P8H��H;�u�H�\$0H�t$8H�� _�������������H��HH��)t$03��D$ 
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��PHH��H;�u�H�\$0H�t$8H�� _�������������H��H�XH�hH�pH�x AVH��@I��H��L
            // H��fD�H L�@H�PSUWATH��
            // ���
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // H�\$H�t$WH�� �A`
            // 3���������������@SH�� H�;�B
            // ���������������H��)D
            // �A0�������������H�\$WH��@H�H��H���P(��tH��tH9_u�C8H�\$PH��@_�H�L�D$ H��H�D$ ����H���D$(
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��P@H��H;�u�H�\$0H�t$8H�� _�������������H�\$H�t$WH�� �A$�����u3��H�
            // ���������������H��)D
            // �q�������������H��fD�H L�@H�PSUWATH��
            // H�H�`h���������.}AF
            // .}AF
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�tH�@��H����
            // M��D��H��H�I�.A3
            // 3���������������@SH�� H�;�B
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H����
            // 
            // H�\$H�t$H�|$ AVH�� I��L��H��D9A(��
            // H�A ������������@WH��0H��I��H�I L��H��t3L�ZH�@M�
            // �
            // ��u
            A�A�
            // H�\$H�l$H�t$H�|$ AVH�� E3����A���H��A��tH�YHcqH��H�H;�s"H�K8H��tH�H;����P L�s8H��@H;�rދGD�w����v����uH���
            // H�t$ AVH�� M��H��D9A(��
            // H���
            // 9Q(������������Hc��
            // 
            // 
            // 
            // H��'
            // H�)�
            // H�A������������H�yK
            // H��'
            // H�
            A�
            // ��t
            �
            // 
            // H�(
            // H�	�
            // H�A������������H�yK
            // H�9(
            // H�
            A�
            // ��t
            �
            // 
            // H�a(
            // H��
            // H�A������������H�yK
            // H��(
            // H�
            A�
            // ��t
            �
            // 
            // DA0������������H�l$H�t$WH��0�A I��H��H����tH�A�L�D$ H��E3�H���P�G �G$���H�\$@u3ɋы��
            H�W(H��H��H�H�<�H;�t$@
            // 3���������������@SH�� H�;�B
            // �y 
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��P8H��H;�u�H�\$0H�t$8H�� _�������������H��HH��)t$03��D$ 
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��PHH��H;�u�H�\$0H�t$8H�� _�������������H��H�XH�hH�pH�x AVH��@I��H��L
            // fD�L$ L�D$SVWATAUAWH��
            namespace CVoiceContainerSwitch {
                constexpr std::ptrdiff_t m_soundsToPlay = 0xA8; // CUtlVector<CSoundContainerReference>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // ণ��
            // 
            // �)���
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // PR���
            // p~���
            // 
            // 
            // 
            //  ����
            // 
            // 
            // 
            // 
            // 
            // 
            // �S���
            // 
            // 
            // 
            // 
            // 
            // 
            // `V���
            // 
            // 
            // 
            // �q���
            // 
            // �����
            // MKV3TransferName
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // p����
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // �^���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �,���
            // 
            // 
            // ����
            // !���
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // FILTER_UNKNOWN
            // FILTER_HIGHPASS
            // FILTER_BANDPASS
            // FILTER_NOTCH
            // FILTER_PEAKING_EQ
            // FILTER_LOW_SHELF
            // FILTER_HIGH_SHELF
            // FILTER_ALLPASS
            // FILTER_PASSTHROUGH
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // FILTER_SLOPE_1POLE_12dB
            // FILTER_SLOPE_1POLE_18dB
            // FILTER_SLOPE_1POLE_24dB
            // FILTER_SLOPE_12dB
            // FILTER_SLOPE_24dB
            // FILTER_SLOPE_36dB
            // FILTER_SLOPE_48dB
            // FILTER_SLOPE_MAX
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // LFO_SHAPE_SQUARE
            // LFO_SHAPE_TRI
            // LFO_SHAPE_SAW
            // LFO_SHAPE_NOISE
            // 
            // 
            // 
            // 
            // 
            // 
            // PANNER_TYPE_EQUAL_POWER
            // 
            // 
            // 
            // SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT
            // SUBGRAPH_INTERPOLATION_KEEP_LAST_SUBGRAPH_RUNNING
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // VMIX_CHAN_LEFT
            // VMIX_CHAN_RIGHT
            // VMIX_CHAN_SWAP
            // VMIX_CHAN_MONO
            // VMIX_CHAN_MID_SIDE
            // 
            // 
            // 
            // 
            // �y���
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // CMD_INVALID
            // CMD_CONTROL_INPUT_STORE
            // CMD_CONTROL_INPUT_STORE_DB
            // CMD_CONTROL_TRANSIENT_INPUT_STORE
            // CMD_CONTROL_TRANSIENT_INPUT_RESET
            // CMD_CONTROL_OUTPUT_STORE
            // CMD_CONTROL_EVALUATE_CURVE
            // CMD_CONTROL_COPY
            // CMD_CONTROL_COND_COPY_IF_NEGATIVE
            // CMD_CONTROL_REMAP_LINEAR
            // CMD_CONTROL_REMAP_SINE
            // CMD_CONTROL_REMAP_LOGLINEAR
            // CMD_CONTROL_MAX
            // CMD_CONTROL_RESET_TIMER
            // CMD_CONTROL_INCREMENT_TIMER
            // CMD_CONTROL_EVAL_ENVELOPE
            // CMD_CONTROL_SINE_BLEND
            // CMD_PROCESSOR_SET_CONTROL_VALUE
            namespace CVMixControlMeter {
                constexpr std::ptrdiff_t m_nValueIndex = 0x10; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // @SH�� H��H���
            // L�A
            
            // H�\$WH�� H����H���
            // H�\$H�l$H�t$ WATAUAVAWH�� L�rL�-�>
            // ���������������H��)D
            // H�\$H�t$WH�� H���
            // �
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // 
            // 
            // 
            // `����
            // 
            // 
            // 
            // 
            // 
            // 
            // �����
            // �����
            // �����
            // 
            // 
            // 
            // 
            // 
            // @SH�� H��H���
            // L�!�
            // H�\$WH�� H�ً�H���
            // ���
            // ���������������H��)D
            // @SH�� ���
            // �
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // 
            // 
            // `����
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �
            // H�ɾ
            // 2��������������̰��������������H��)D
            // H�\$H�l$H�t$H�|$ AVH��03�I��H��L��@8��
            // @SH�� ��KF
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // 
            // 
            // 
            // �����
            // 
            // 
            // @���
            // �����
            // ����
            // @SH�� H��H���
            // L���
            // H�\$WH�� H����H���
            // H�\$H�l$H�t$ WATAUAVAWH�� H�rL�-�'
            // ���������������H��)D
            // H�\$WH�� H���
            // �
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // �����
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // 
            // 
            // H�\$WH��0H��H�����H��@
            // H�a�
            // 2��������������̰��������������H��)D
            // H�\$ VH�� H��H�L$0H�T$0I��H�L$8�,���H�H�
            // @SH�� ��KF
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // 
            // 
            // 
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // �����
            // ����
            // 
            // 
            // MPropertySuppressExpr
            // MPropertyFriendlyName
            // 
            // MPropertySuppressExpr
            // MPropertyFriendlyName
            // 
            // 
            // �����
            // �����
            // 
            // 
            // ����
            // h����
            // ����
            // �����
            // 
            // 
            // 
            // 
            // 
            // p>���
            // p����
            // �����
            // 
            // 
            // 
            // 
            // 
            // @SH�� H��H��
            // L�Ѭ
            // H�\$WH�� ��H���|�����t��
            // H��UVATAUH�h�H��
            // ���������������H��)D
            // ���������������H��)D
            // �
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // H�\$WH�� H�gz
            // 3���������������@SH�� H�;�B
            // H��(H����
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // H��H�I�J3
            // H�\$H�l$H�t$H�|$ AVH��0H�L��H��H��H�II��H�p�
            !
            // H�H�`h���������.}AF
            // .}AF
            // �
            // M��D��H��H�I�.A3
            // H����������������
            // L��D��H�II��H�H���
            // 
            // L��H�I��23
            // H��H�I��<3
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // �
            // H�\$H�l$H�t$WAVAWH��0H�L��L��H��H�IA��I��H�h� 
            // H��(H��P�@H��(��������������H�IH�H�`X�����M��D��H��H�I�.A3
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H��H�IH�H���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // H�\$H�l$H�t$H�|$ AVH�� E3����A���H��A��tH�YHcqH��H�H;�s"H�K8H��tH�H;����P L�s8H��@H;�rދGD�w����v����uH���
            // H�t$ AVH�� M��H��D9A(��
            // H�E�
            // 9Q(������������Hc��
            // 
            // 
            // 
            // H�g
            // L�
            A����
            // ��t
            �
            // 
            // H�	g
            // H��
            // H�A������������H�yK
            // H�ag
            // H�\$H�Q3�L��D��9��
            // ��t
            �
            // 
            // H�\$WH�� ��H��������t�H
            // 3���������������@SH�� H�;�B
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // �A0�������������H�\$WH��@H�H��H���P(��tH��tH9_u�C8H�\$PH��@_�H�L�D$ H��H�D$ ����H���D$(
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��P@H��H;�u�H�\$0H�t$8H�� _�������������H�\$H�t$WH�� �A$�����u3��H�
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // H�\$H�t$WH��0H�H��I��L�D$ H��H��A�E3�H���P�C$���uH�%
            // H�H�`h���������.}AF
            // .}AF
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�tH�@��H����
            // M��D��H��H�I�.A3
            // 3���������������@SH�� H�;�B
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H����
            // 
            // 
            // DA0������������H�l$H�t$WH��0�A I��H��H����tH�A�L�D$ H��E3�H���P�G �G$���H�\$@u3ɋы��
            H�W(H��H��H�H�<�H;�t$@
            // 3���������������@SH�� H�;�B
            // �y 
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��P8H��H;�u�H�\$0H�t$8H�� _�������������H��HH��)t$03��D$ 
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��PHH��H;�u�H�\$0H�t$8H�� _�������������H��H�XH�hH�pH�x AVH��@I��H��L
            // H��H�XfD�H L�@UVWATAUAVAWH���
            // H�\$H�t$WH�� �A$����
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // 
            // 
            // DA0������������H�l$H�t$WH��0�A I��H��H����tH�A�L�D$ H��E3�H���P�G �G$���H�\$@u3ɋы��
            H�W(H��H��H�H�<�H;�t$@
            // 3���������������@SH�� H�;�B
            // �y 
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��P8H��H;�u�H�\$0H�t$8H�� _�������������H��HH��)t$03��D$ 
            namespace CVoiceContainerEnum {
                constexpr std::ptrdiff_t m_soundsToPlay = 0xA8; // CSoundContainerReferenceArray
                constexpr std::ptrdiff_t m_iSelection = 0xE0; // int32
                constexpr std::ptrdiff_t m_flCrossfadeTime = 0xE4; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // 
            // 
            // 
            // �
            // H�q�*
            // L�D$SH��p�QI�؉T$ ��yA�x(
            //  ����
            // �����
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // 
            // 
            // �����
            // 
            // �����
            // 
            // �����
            // `����
            // h����
            // 
            // �����
            // 
            // �����
            // ����
            // 
            // 
            // 
            // ����
            // �����
            // 
            // �����
            // 
            // �����
            // 
            // 
            // �����
            // `����
            // 
            // �����
            // 
            // �����
            // p����
            // 
            // �����
            // 
            // �����
            // 
            // �����
            // 
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // H��XL��E���
            // P+���
            // �)���
            // �&���
            // �#���
            // � ���
            // 0���
            // �.���
            // 0���
            // 
            // .���
            // `-���
            // p/���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CSosGroupActionTimeLimitSchema {
                constexpr std::ptrdiff_t m_flMaxDuration = 0x8; // float32
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            namespace VMixVocoderDesc_t {
                constexpr std::ptrdiff_t m_nBandCount = 0x0; // int32
                constexpr std::ptrdiff_t m_flBandwidth = 0x4; // float32
                constexpr std::ptrdiff_t m_fldBModGain = 0x8; // float32
                constexpr std::ptrdiff_t m_flFreqRangeStart = 0xC; // float32
                constexpr std::ptrdiff_t m_flFreqRangeEnd = 0x10; // float32
                constexpr std::ptrdiff_t m_fldBUnvoicedGain = 0x14; // float32
                constexpr std::ptrdiff_t m_flAttackTimeMS = 0x18; // float32
                constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x1C; // float32
                constexpr std::ptrdiff_t m_nDebugBand = 0x20; // int32
                constexpr std::ptrdiff_t m_bPeakMode = 0x24; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            namespace VMixUtilityDesc_t {
                constexpr std::ptrdiff_t m_nOp = 0x0; // VMixChannelOperation_t
                constexpr std::ptrdiff_t m_flInputPan = 0x4; // float32
                constexpr std::ptrdiff_t m_flOutputBalance = 0x8; // float32
                constexpr std::ptrdiff_t m_fldbOutputGain = 0xC; // float32
                constexpr std::ptrdiff_t m_bBassMono = 0x10; // bool
                constexpr std::ptrdiff_t m_flBassFreq = 0x14; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // 
            // �
            // H���
            // 2��������������̰��������������H��)D
            // H�\$VWATAUAWH��P���
            // @SH�� ��KF
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // ����
            // 0����
            // @����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // @SH�� H��H��
            // L��
            // H�\$WH�� H�ً�H���
            // H��UVATAUH��8���H��
            // ���������������H��)D
            // @SH�� ���
            // �
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // 
            // 
            // MPropertyFriendlyName
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // H�\$WH��0H��H������H��@
            // H���
            // 2��������������̰��������������H��)D
            // L��SUVWATH��`I�8�����M�kM��M�s�H��M�{�L��A�kH����
            // @SH�� ��KF
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // `#���
            // 
            // ����
            // 
            // 
            // 
            // 
            // 
            // �����
            // p ���
            // 
            // @SH�� H��H���
            // L�a�
            // H�\$WH�� H����H���
            // H�\$H�t$WH�� H���
            // ���������������H��)D
            // H�\$WH�� H���
            // �
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // 
            // 
            // 
            // �����
            // 
            // �����
            // 
            // 
            // MPropertyStartGroup
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // @����
            // h����
            // 
            // @����
            // �����
            // 
            // 
            // MPropertyStartGroup
            // MPropertyFriendlyName
            // 
            // 
            // MPropertySuppressExpr
            // MPropertyFriendlyName
            // MPropertySuppressExpr
            // MPropertyFriendlyName
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // 
            // H�\$H�t$H�|$UH��H��0H��H������H�wt
            // H�q
            // 2��������������̰��������������H��)D
            // H��SWAWH��
            // @SH�� ��KF
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // 
            // L��H�I��23
            // H��H�I��<3
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // �
            // H�\$H�l$H�t$WAVAWH��0H�L��L��H��H�IA��I��H�h� 
            // H��(H��P�@H��(��������������H�IH�H�`X�����M��D��H��H�I�.A3
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H��H�IH�H���
            // H�\$H�t$WH�� ǁ�
            // 3���������������@SH�� H�;�B
            // H��(H����
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // H��H�I�J3
            // H�\$H�l$H�t$H�|$ AVH��0H�L��H��H��H�II��H�p�
            !
            // H�H�`h���������.}AF
            // .}AF
            // �
            // M��D��H��H�I�.A3
            // H����������������
            // L��D��H�II��H�H���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // H�\$H�t$H�|$ AVH�� I��L��H��D9A(��
            // H�A ������������@WH��0H��I��H�I L��H��t3L�ZH�@M�
            // 3���������������@SH�� H�;�B
            // ��ufAn��[��A
            // 
            // 
            // 
            // H�g
            // H���
            // H�A������������H�yK
            // H�	g
            // L��A���xH�A;��
            // ��t
            �
            // 
            // H�ag
            // H���
            // H�A������������H�yK
            // 
            // DA0������������H�l$H�t$WH��0�A I��H��H����tH�A�L�D$ H��E3�H���P�G �G$���H�\$@u3ɋы��
            H�W(H��H��H�H�<�H;�t$@
            // 3���������������@SH�� H�;�B
            // �y 
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��P8H��H;�u�H�\$0H�t$8H�� _�������������H��HH��)t$03��D$ 
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��PHH��H;�u�H�\$0H�t$8H�� _�������������H��H�XH�hH�pH�x AVH��@I��H��L
            // H�\$H�l$H�t$WATAUAVAWH��`H�H��E��L�D$ M��)t$PH��)|$@H��A�E3�H���PL�C@���*�H���%S���C$���uL�4%
            // H�\$H�t$WH�� �A$����
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // 
            // H�\$H�t$WH�� �A\3��qH��H�٩
            // 3���������������@SH�� H�;�B
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // �A0�������������H�\$WH��@H�H��H���P(��tH��tH9_u�C8H�\$PH��@_�H�L�D$ H��H�D$ ����H���D$(
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��P@H��H;�u�H�\$0H�t$8H�� _�������������H�\$H�t$WH�� �A$�����u3��H�
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // H�\$H�l$H�t$ AVH��0H�L��I��L�D$ H��H��A�E3�I���P3�9s ~8H�|$@3��C$���u3��H�K(H�L��I��H��P`��H��;s |�H�|$@H�\$HH�l$PH�
            // H�H�`h���������.}AF
            // .}AF
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�tH�@��H����
            // M��D��H��H�I�.A3
            // 3���������������@SH�� H�;�B
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H����
            // 
            // 
            // 
            // H�\$H�t$WH�� �AT3��q@��H�٩
            // 3���������������@SH�� H�;�B
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // �A0�������������H�\$WH��@H�H��H���P(��tH��tH9_u�C8H�\$PH��@_�H�L�D$ H��H�D$ ����H���D$(
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��P@H��H;�u�H�\$0H�t$8H�� _�������������H�\$H�t$WH�� �A$�����u3��H�
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // H�\$H�l$H�t$ AVH��0H�L��I��L�D$ H��H��A�E3�I���P3�9s ~8H�|$@3��C$���u3��H�K(H�L��I��H��P`��H��;s |�H�|$@H�\$HH�l$PH�
            // H�H�`h���������.}AF
            // .}AF
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�tH�@��H����
            // M��D��H��H�I�.A3
            // 3���������������@SH�� H�;�B
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H����
            // 
            // DA0������������H�l$H�t$WH��0�A I��H��H����tH�A�L�D$ H��E3�H���P�G �G$���H�\$@u3ɋы��
            H�W(H��H��H�H�<�H;�t$@
            // 3���������������@SH�� H�;�B
            // �y 
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��P8H��H;�u�H�\$0H�t$8H�� _�������������H��HH��)t$03��D$ 
            // H�\$H�t$WH�� �A$�����u3��H�Y(HcA H�<�H;�t�H���H��PHH��H;�u�H�\$0H�t$8H�� _�������������H��H�XH�hH�pH�x AVH��@I��H��L
            // H��fD�H L�@H�PSUWATH��
            // ���
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H�\$WH�� �A$���u3��H�Y(HcA H�<�H;�t�
            // H�\$H�t$WH�� �A`
            // 3���������������@SH�� H�;�B
            // ���������������H��)D
            namespace CVoiceContainerLoopTrigger {
                constexpr std::ptrdiff_t m_sound = 0xA8; // CSoundContainerReference
                constexpr std::ptrdiff_t m_flRetriggerTimeMin = 0xC0; // float32
                constexpr std::ptrdiff_t m_flRetriggerTimeMax = 0xC4; // float32
                constexpr std::ptrdiff_t m_flFadeTime = 0xC8; // float32
                constexpr std::ptrdiff_t m_bCrossFade = 0xCC; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // 
            // p����
            // �����
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // 
            // p����
            // �����
            // 
            // 
            // 
            // 
            // 
            // ����
            // �����
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // 
            // 
            // 
            // 
            // 
            // H�\$WH�� ��H���l�����tH��R#
            // 3���������������@SH�� H�;�B
            // H��(H����
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // H��H�I�J3
            // H�\$H�l$H�t$H�|$ AVH��0H�L��H��H��H�II��H�p�
            !
            // H�H�`h���������.}AF
            // .}AF
            // �
            // M��D��H��H�I�.A3
            // H����������������
            // L��D��H�II��H�H���
            // 
            // H�\$H�t$WH��0H��H���֌��H��@
            // H��}.
            // 2��������������̰��������������H��)D
            // @SVWH��0H�iV#
            // H�\$H�t$WH�� H���
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // ���������������H��)D
            // D���
            // H�\$WH�� ��H��������t��
            // 3���������������@SH�� H�;�B
            // H��(H����
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // H��H�I�J3
            // H�\$H�l$H�t$H�|$ AVH��0H�L��H��H��H�II��H�p�
            !
            // H�H�`h���������.}AF
            // .}AF
            // �
            // M��D��H��H�I�.A3
            // H����������������
            // L��D��H�II��H�H���
            // 
            // H�\$H�l$H�t$H�|$ AVH��0H��H�������H��@
            // H���
            // 2��������������̰��������������H��)D
            // @SVWH��0L�d$XH��L��L�t$`L�|$h��
            // H�\$H�t$WH�� H���
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // ���������������H��)D
            // D���
            // @SH�� H��H�`
            // H�\$H�t$WH��@H��@
            // H�\$WH�� ��H���L=����t��
            // H�\$UVWATAWH��`H�rH���
            // H��H�XH�hH�pH�x AVH��`)p�I��)x�H���=`
            // ���������������H��)D
            // H�\$WH��@H��H�
            H����
            // H��H�XH�pH�xUH�h�H���
            // L��I�[WH��
            // 2��������������̰��������������H��)D
            // 2��������������̰��������������H��)D
            // 
            // 
            // 
            // ����
            // ����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // @SH�� H��袷��H��+
            // L��<
            // H�\$H�t$WH�� H�ً�H���
            // H�\$H�t$H�|$ UATAUAVAWH��$ ���H���
            // H�\$WH�� I��I������H�H�������
            // @SH��`H���
            // H�\$WH��@H��H�
            H����
            // H��H�XH�pH�xUH�h�H���
            // ���������������H��)D
            // 2��������������̰��������������H��)D
            // H�H��H���
            // p����
            // 
            // �����
            // h����
            // 
            // 
            // 
            // �
            // H��y.
            // 2��������������̰��������������H��)D
            // @SVAVH��@H��L�d$p�@
            // @SH�� I��H��t H�H�����
            // @WH��0H�IH��H��tH�H��0_H�`h�BH�\$@H�Z����?v��H��rH��
            // @SH��0H��H�IH��tJH��P ��t@H�[H��)t$ H��P@��W�H���H*�H��P fn�����^�fZ�(t$ H��0[�W�H��0[�������������T
            // �
            // 2��������������̰��������������H��)D
            // ���
            // A���������������2��������������̰��������������H��)D
            // H�\$WH�� ��H��������t��
            // 3���������������@SH�� H�;�B
            // H��(H����
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // H��H�I�J3
            // H�\$H�l$H�t$H�|$ AVH��0H�L��H��H��H�II��H�p�
            !
            // H�H�`h���������.}AF
            // .}AF
            // �
            // M��D��H��H�I�.A3
            // H����������������
            // L��D��H�II��H�H���
            // 
            // H�\$H�t$H�|$ AVH�� I��L��H��D9A(��
            // H�A ������������@WH��0H��I��H�I L��H��t3L�ZH�@M�
            // �
            // ��u
            A�A�
            // 
            // 
            // H���
            // H��w
            // H�A������������H�yK
            // H�\$WH�� ��H���������t��
            // 3���������������@SH�� H�;�B
            // H��(H����
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // H��H�I�J3
            // H�\$H�l$H�t$H�|$ AVH��0H�L��H��H��H�II��H�p�
            !
            // H�H�`h���������.}AF
            // .}AF
            // �
            // M��D��H��H�I�.A3
            // H����������������
            // L��D��H�II��H�H���
            // 
            // H�\$H�t$H�|$ AVH�� I��L��H��D9A(��
            // H�A ������������@WH��0H��I��H�I L��H��t3L�ZH�@M�
            // 3���������������@SH�� H�;�B
            // ��ufAn��[��A
            // H�\$H�l$H�t$H�|$ AVH�� E3����A���H��A��tH�YHcqH��H�H;�s"H�K8H��tH�H;����P L�s8H��@H;�rދGD�w����v����uH���
            // H�t$ AVH�� M��H��D9A(��
            // H�A�
            // 9Q(������������Hc��
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // H�\$H�l$H�t$H�|$ AVH�� E3����A���H��A��tH�YHcqH��H�H;�s"H�K8H��tH�H;����P L�s8H��@H;�rދGD�w����v����uH���
            // H�t$ AVH�� M��H��D9A(��
            // H�A�
            // 9Q(������������Hc��
            // 
            // H���
            // H��a
            // H�A������������H�yK
            // H���
            // L�A���
            // ��t
            �
            // 
            // H��
            // H�i^
            // H�A������������H�yK
            // H�	�
            // H�
            A�
            // ��t
            �
            // 
            // H�1�
            // H�I[
            // H�A������������H�yK
            // H�Y�
            // H�
            A�
            // ��t
            �
            // 
            // H���
            // H�)X
            // H�A������������H�yK
            // H�)�
            // @SH�� H�AH��H���
            // ��t
            �
            // 
            // L��H�I��23
            // H��H�I��<3
            // H��HH��H�D$ ����H�IL�D$ �D$(
            // �
            // �
            // H�\$H�l$H�t$WAVAWH��0H�L��L��H��H�IA��I��H�h� 
            // H��(H��P�@H��(��������������H�IH�H�`X�����M��D��H��H�I�.A3
            // H�IH�H�`X�����M��D��H��H�I�.A3
            // 2��������������̰��������������H��)D
            // �
            // L��SH��`H�Y3�H����
            // L��L��H�II��H�H�`H������������H����������������
            // H�A���
            // H�Y�
            // @SH�� H�AH��H���
            // ��t
            �
            // 
            // @SH�� H�l$0H��H�I ��H�|$@H��t
            H��
            // 3���������������@SH�� H�;�B
            // H�I H�H�`�����@SH�� H��H�I H��PH�H��H�� [H���
            // H�I H�H�`0�����H��(H�I H��P����H��(���������H�I H�H�`P�����H�I H�H�`H�����H�I H�H�`p�����H�I H�H�`@�����H�I H�H�`8�����
            // H�I H�H�`@�����H�I H�H�`8�����@SH��0H��)t$ H�I (�H��Ph��uK.5�
            // H�I H�H�`P�����H�I H�H�`H�����H�I H�H�`p�����H�I H�H�`@�����H�I H�H�`8�����@SH��0H��)t$ H�I (�H��Ph��uK.5�
            // H�\$H�t$H�|$AVH��0H�H��H�I I��L��H�xH��PA�H�\$ L��H��I����H�\$@H�t$HH�|$PH��0A^���������H�\$H�l$H�t$H�|$ AVH��0H�H��
            // H�H�`h���������.}AF
            // .}AF
            namespace CVoiceContainerDecayingSineWave {
                constexpr std::ptrdiff_t m_flFrequency = 0xA8; // float32
                constexpr std::ptrdiff_t m_flDecayTime = 0xAC; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 0\���
            // d\���
            // 
            // �\���
            // �����
            // 8>���
            // 
            // 
            // �\���
            // �\���
            // MPropertyFriendlyName
            // MPropertyAttributeRange
            // 
            // 
            // H]���
            // �\���
            // 
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // 
            // 
            // �]���
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // P����
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 0����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 0b���
            // 
            // 
            // 
            // 
            // 
            // 
            // �2���
            // 
            // 
            // 
            // 
            // 
            // 
            // H��(�����H��t�
            // H��@
            // H��(�����H��t�
            // H��@
            // 3���������������@SH�� H�;�B
            // @SH�� H��H�����
            // 3���������������@SH�� H�;�B
            // 3���������������@SH�� H�;�B
            // 2��������������̰��������������H��)D
            // @SH�� H�I���PH��H��H�� [H�%�^
            // H��@
            // 2��������������̰��������������H��)D
            // 3���������������@SH�� H�;�B
            // 2��������������̰��������������H��)D
            // A�
            // 3���������������@SH�� H�;�B
            // A�
            // 2��������������̰��������������H��)D
            // �
            // 3���������������@SH�� H�;�B
            // 2��������������̰��������������H��)D
            // 2��������������̰��������������H��)D
            // @SH��0H�H���P@H��t8H�H���P@H�\�
            // �
            // 2��������������̰��������������H��)D
            // �
            // 
            // H�QH�e,
            // H�QH��G
            // H��(�����H��t�
            // H�QHH��4
            // 3���������������@SH�� H�;�B
            // @SH�� H��H�����
            // 3���������������@SH�� H�;�B
            // 3���������������@SH�� H�;�B
            // �AU������������H�\$H�t$H�|$UH�l$�H���
            // H�Q8I��H��tI������I��B�<
            // H�Q0H�H
            // 2��������������̰��������������H��)D
            // �AX�������������ATH��@���0
            // 2��������������̰��������������H��)D
            // A�
            // 3���������������@SH�� H�;�B
            // A�
            // 2��������������̰��������������H��)D
            // �
            // 3���������������@SH�� H�;�B
            // H��(H�QxI��H��t*�:
            // 2��������������̰��������������H��)D
            // @SH��0H�H���P@H��t8H�H���P@H�\�
            // �
            // �AW������������H�\$H�t$ WH��
            // �
            // 
            // @SH�� H���rH��H��:
            // H�\$UVWAVAWH��H��@H��(
            // H�9!
            // H�\$WH�� H���:
            // 
            // H�\$WH��0H��H���
            // H�Q�
            // @SH�� H��H��蟎��H��H�� [������@SH�� H��H������H��H�� [钹����@SH�� H��H���_���H��H�� [�2�����@SH�� H��H���?���H��H�� [�Ҿ����
            // H�\$VWAWH��0L��I�ع�
            // @SH�� H��H���
            // H�\$H�t$ WH��@H��@
            // H�y!
            // H�\$WH�� H��
            // 
            // H�\$H�t$H�|$ AVH��
            // H�1�?
            // @SH�� H��H��蟍��H��H�� [�������@SH�� H��H������H��H�� [������@SH�� H��H���_���H��H�� [�2�����@SH�� H��H���?���H��H�� [�������
            // H�L��H��I��H� �H�L��H��I��H�`8H�L��H��I��H�`(H�L��H��I��H�`@H�L��H��I��H�`0H�L��H��I��H�`H�\$H�t$WH�� H��D
            // @SH�� H��H���
            // L���
            // H��!
            // H�\$WH�� H�
            // 
            // H�\$H�l$H�t$ WH��p
            // H���
            // @SH�� H��H�������H��H�� [������@SH�� H��H���ߍ��H��H�� [������@SH�� H��H��迍��H��H�� [�R�����@SH�� H��H��蟍��H��H�� [�������
            // H�\$H�t$WH�� H��I��
            // @SH�� H��H��
            // L���
            // H��!
            // H�\$WH�� H�
            // 
            // H�\$H�l$H�t$ WH��p
            // H�9�
            // @SH�� H��H������H��H�� [钹����@SH�� H��H���_���H��H�� [�2�����@SH�� H��H���?���H��H�� [�Ҿ����@SH�� H��H������H��H�� [�r�����
            // H�\$WH�� H��I�ع 	
            // @SH�� H��H���
            // H�\$H�t$ WH��@H��@
            // H�i!
            // H�\$WH�� H��
            // 
            // H�\$WH��0H��H���'
            // H���
            // @SH�� H��H�������H��H�� [������@SH�� H��H���ߏ��H��H�� [鲜����@SH�� H��H��迏��H��H�� [�R�����@SH�� H��H��蟏��H��H�� [������
            // @SWATAUH��(L��I�ع�
            // @SH�� H��H���
            // H�\$H�t$ WH��@H��@
            // H��!
            // H�\$WH�� H��
            // 
            // H�\$H�l$H�t$ WH��p
            // H���
            // @SH�� H��H���_���H��H�� [�2�����@SH�� H��H���?���H��H�� [�Ҿ����@SH�� H��H������H��H�� [�r�����@SH�� H��H�������H��H�� [������
            // @SAVAWH�� L��I�ع
            // @SH�� H��H��
            // L��
            namespace CVMixDelayProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixDelayDesc_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // �����
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // �&���
            // 
            // 
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // 
            // 
            // �=���
            // 8����
            // x����
            // 
            // 
            // >���
            // MPropertyFriendlyName
            // 
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // �>���
            // 
            // MPropertyFriendlyName
            // MPropertyAttributeRange
            // 
            // X=���
            // `?���
            // 8>���
            // 
            // �?���
            // ���
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // �����
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �`���
            // �Y���
            // �Y���
            // �Y���
            // 
            // 
            // MKV3TransferName
            // MKV3TransferName
            // MKV3TransferName
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // ����
            // �H���
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // ণ��
            // 
            // �)���
            // 
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // PR���
            // p~���
            // 
            // 
            // 
            //  ����
            // 
            // 
            // 
            // 
            // 
            // 
            // �S���
            // 
            // 
            // 
            // 
            // 
            // 
            // `V���
            // 
            // 
            // 
            // �q���
            // 
            // �����
            // MKV3TransferName
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // p����
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // �^���
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // �,���
            // 
            namespace CVMixBoxverb2ProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixBoxverbDesc_t
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            namespace VMixFilterDesc_t {
                constexpr std::ptrdiff_t m_nFilterType = 0x0; // VMixFilterType_t
                constexpr std::ptrdiff_t m_nFilterSlope = 0x2; // VMixFilterSlope_t
                constexpr std::ptrdiff_t m_bEnabled = 0x3; // bool
                constexpr std::ptrdiff_t m_fldbGain = 0x4; // float32
                constexpr std::ptrdiff_t m_flCutoffFreq = 0x8; // float32
                constexpr std::ptrdiff_t m_flQ = 0xC; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            namespace VMixOscDesc_t {
                constexpr std::ptrdiff_t oscType = 0x0; // VMixLFOShape_t
                constexpr std::ptrdiff_t m_freq = 0x4; // float32
                constexpr std::ptrdiff_t m_flPhase = 0x8; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // 
            // 
            // ����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // �����
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            // 
            namespace CVMixAutoFilterProcessorDesc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixAutoFilterDesc_t
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // 
            // 
            // 
            namespace VMixFlangerDesc_t {
                constexpr std::ptrdiff_t m_bPhaseInvert = 0x0; // bool
                constexpr std::ptrdiff_t m_flGlideTime = 0x4; // float32
                constexpr std::ptrdiff_t m_flDelay = 0x8; // float32
                constexpr std::ptrdiff_t m_flOutputGain = 0xC; // float32
                constexpr std::ptrdiff_t m_flFeedbackGain = 0x10; // float32
                constexpr std::ptrdiff_t m_flFeedforwardGain = 0x14; // float32
                constexpr std::ptrdiff_t m_flModRate = 0x18; // float32
                constexpr std::ptrdiff_t m_flModDepth = 0x1C; // float32
                constexpr std::ptrdiff_t m_bApplyAntialiasing = 0x20; // bool
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // �����
            // 
            // 
            namespace VMixDynamicsDesc_t {
                constexpr std::ptrdiff_t m_fldbGain = 0x0; // float32
                constexpr std::ptrdiff_t m_fldbNoiseGateThreshold = 0x4; // float32
                constexpr std::ptrdiff_t m_fldbCompressionThreshold = 0x8; // float32
                constexpr std::ptrdiff_t m_fldbLimiterThreshold = 0xC; // float32
                constexpr std::ptrdiff_t m_fldbKneeWidth = 0x10; // float32
                constexpr std::ptrdiff_t m_flRatio = 0x14; // float32
                constexpr std::ptrdiff_t m_flLimiterRatio = 0x18; // float32
                constexpr std::ptrdiff_t m_flAttackTimeMS = 0x1C; // float32
                constexpr std::ptrdiff_t m_flReleaseTimeMS = 0x20; // float32
                constexpr std::ptrdiff_t m_flRMSTimeMS = 0x24; // float32
                constexpr std::ptrdiff_t m_flWetMix = 0x28; // float32
                constexpr std::ptrdiff_t m_bPeakMode = 0x2C; // bool
            }
        }
    }
}
