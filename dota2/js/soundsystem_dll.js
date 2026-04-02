// Generated using https://github.com/ikhsanprasetyo/source2-dumper
// 2026-04-02 19:22:16.019179300 +07:00

export const Schemas = {
    soundsystem_dll: {
        SndSeqInstrumentType_t: {
            eSndSeqInstNull: 0x0,
            eSndSeqInstSndEvt: 0x1,
            eSndSeqInstMidiSampler: 0x2,
        },
        EMode_t: {
            Peak: 0x0,
            RMS: 0x1,
        },
        VMixGraphCommandID_t: {
            CMD_INVALID: 0xFFFFFFFFFFFFFFFF,
            CMD_CONTROL_INPUT_STORE: 0x1,
            CMD_CONTROL_INPUT_STORE_DB: 0x2,
            CMD_CONTROL_TRANSIENT_INPUT_STORE: 0x3,
            CMD_CONTROL_TRANSIENT_INPUT_RESET: 0x4,
            CMD_CONTROL_OUTPUT_STORE: 0x5,
            CMD_CONTROL_EVALUATE_CURVE: 0x6,
            CMD_CONTROL_COPY: 0x7,
            CMD_CONTROL_COND_COPY_IF_NEGATIVE: 0x8,
            CMD_CONTROL_REMAP_LINEAR: 0x9,
            CMD_CONTROL_REMAP_SINE: 0xA,
            CMD_CONTROL_REMAP_LOGLINEAR: 0xB,
            CMD_CONTROL_MAX: 0xC,
            CMD_CONTROL_RESET_TIMER: 0xD,
            CMD_CONTROL_INCREMENT_TIMER: 0xE,
            CMD_CONTROL_EVAL_ENVELOPE: 0xF,
            CMD_CONTROL_SINE_BLEND: 0x10,
            CMD_PROCESSOR_SET_CONTROL_VALUE: 0x11,
            CMD_PROCESSOR_SET_NAME_INPUT: 0x12,
            CMD_PROCESSOR_SET_CONTROL_ARRAYVALUE: 0x13,
            CMD_PROCESSOR_STORE_CONTROL_VALUE: 0x14,
            CMD_PROCESSOR_SET_VSND_VALUE: 0x15,
            CMD_SUBMIX_PROCESS: 0x16,
            CMD_SUBMIX_GENERATE: 0x17,
            CMD_SUBMIX_GENERATE_SIDECHAIN: 0x18,
            CMD_SUBMIX_DEBUG: 0x19,
            CMD_SUBMIX_MIX2x1: 0x1A,
            CMD_SUBMIX_OUTPUT: 0x1B,
            CMD_SUBMIX_OUTPUTx2: 0x1C,
            CMD_SUBMIX_COPY: 0x1D,
            CMD_SUBMIX_ACCUMULATE: 0x1E,
            CMD_SUBMIX_METER: 0x1F,
            CMD_SUBMIX_METER_SPECTRUM: 0x20,
            CMD_IMPULSERESPONSE_INPUT_STORE: 0x21,
            CMD_PROCESSOR_SET_IMPULSERESPONSE_VALUE: 0x22,
            CMD_REMAP_VSND_TO_IMPULSERESPONSE: 0x23,
            CMD_IMPULSERESPONSE_RESET: 0x24,
            CMD_BLEND_VSNDS_TO_IMPULSERESPONSE: 0x25,
            CMD_IMPULSERESPONSE_DELAY: 0x26,
        },
        EWaveform: {
            Sine: 0x0,
            Square: 0x1,
            Saw: 0x2,
            Triangle: 0x3,
            Noise: 0x4,
        },
        VMixLFOShape_t: {
            LFO_SHAPE_SINE: 0x0,
            LFO_SHAPE_SQUARE: 0x1,
            LFO_SHAPE_TRI: 0x2,
            LFO_SHAPE_SAW: 0x3,
            LFO_SHAPE_NOISE: 0x4,
        },
        VMixFilterType_t: {
            FILTER_UNKNOWN: 0xFFFFFFFFFFFFFFFF,
            FILTER_LOWPASS: 0x0,
            FILTER_HIGHPASS: 0x1,
            FILTER_BANDPASS: 0x2,
            FILTER_NOTCH: 0x3,
            FILTER_PEAKING_EQ: 0x4,
            FILTER_LOW_SHELF: 0x5,
            FILTER_HIGH_SHELF: 0x6,
            FILTER_ALLPASS: 0x7,
            FILTER_PASSTHROUGH: 0x8,
        },
        SosActionStopType_t: {
            SOS_STOPTYPE_NONE: 0x0,
            SOS_STOPTYPE_TIME: 0x1,
            SOS_STOPTYPE_OPVAR: 0x2,
        },
        SndSeqTrackPlaybackType_t: {
            eSndSeqTrackPlaybackTypeStep: 0x0,
            eSndSeqTrackPlaybackTypeFwd: 0x1,
        },
        SosEditItemType_t: {
            SOS_EDIT_ITEM_TYPE_SOUNDEVENTS: 0x0,
            SOS_EDIT_ITEM_TYPE_SOUNDEVENT: 0x1,
            SOS_EDIT_ITEM_TYPE_LIBRARYSTACKS: 0x2,
            SOS_EDIT_ITEM_TYPE_STACK: 0x3,
            SOS_EDIT_ITEM_TYPE_OPERATOR: 0x4,
            SOS_EDIT_ITEM_TYPE_FIELD: 0x5,
        },
        SndSeqQuantizeType_t: {
            eSndSeqQuantizeInvalid: 0xFFFFFFFFFFFFFFFF,
            eSndSeqQuantizeNone: 0x0,
            eSndSeqQuantizeBeat: 0x1,
            eSndSeqQuantizeBar: 0x2,
            eSndSeqQuantizeSequence: 0x3,
            eSndSeqQuantizeSeek: 0x4,
            eSndSeqQuantizeReset: 0x5,
        },
        PlayBackMode_t: {
            Random: 0x0,
            RandomNoRepeats: 0x1,
            RandomAvoidLast: 0x2,
            Sequential: 0x3,
            RandomWeights: 0x4,
        },
        SosGroupFieldBehavior_t: {
            kIgnore: 0x0,
            kBranch: 0x1,
            kMatch: 0x2,
        },
        SndSeqSyncType_t: {
            eSndSeqSyncTypeNone: 0x0,
            eSndSeqSyncTypeWait: 0x1,
            eSndSeqSyncTypeSeek: 0x2,
        },
        soundlevel_t: {
            SNDLVL_NONE: 0x0,
            SNDLVL_20dB: 0x14,
            SNDLVL_25dB: 0x19,
            SNDLVL_30dB: 0x1E,
            SNDLVL_35dB: 0x23,
            SNDLVL_40dB: 0x28,
            SNDLVL_45dB: 0x2D,
            SNDLVL_50dB: 0x32,
            SNDLVL_55dB: 0x37,
            SNDLVL_IDLE: 0x3C,
            SNDLVL_65dB: 0x41,
            SNDLVL_STATIC: 0x42,
            SNDLVL_70dB: 0x46,
            SNDLVL_NORM: 0x4B,
            SNDLVL_80dB: 0x50,
            SNDLVL_85dB: 0x55,
            SNDLVL_90dB: 0x5A,
            SNDLVL_95dB: 0x5F,
            SNDLVL_100dB: 0x64,
            SNDLVL_105dB: 0x69,
            SNDLVL_110dB: 0x6E,
            SNDLVL_120dB: 0x78,
            SNDLVL_130dB: 0x82,
            SNDLVL_GUNFIRE: 0x8C,
            SNDLVL_150dB: 0x96,
            SNDLVL_180dB: 0xB4,
        },
        VMixPannerType_t: {
            PANNER_TYPE_LINEAR: 0x0,
            PANNER_TYPE_EQUAL_POWER: 0x1,
        },
        VMixChannelOperation_t: {
            VMIX_CHAN_STEREO: 0x0,
            VMIX_CHAN_LEFT: 0x1,
            VMIX_CHAN_RIGHT: 0x2,
            VMIX_CHAN_SWAP: 0x3,
            VMIX_CHAN_MONO: 0x4,
            VMIX_CHAN_MID_SIDE: 0x5,
        },
        EMidiNote: {
            C: 0x0,
            C_Sharp: 0x1,
            D: 0x2,
            D_Sharp: 0x3,
            E: 0x4,
            F: 0x5,
            F_Sharp: 0x6,
            G: 0x7,
            G_Sharp: 0x8,
            A: 0x9,
            A_Sharp: 0xA,
            B: 0xB,
            Count: 0xC,
        },
        SndSeqRegionType_t: {
            eSndSeqRegionTypeNull: 0x0,
            eSndSeqRegionTypeSndEvt: 0x1,
            eSndSeqRegionTypeMidiSeq: 0x2,
        },
        CVSoundFormat_t: {
            PCM16: 0x0,
            PCM8: 0x1,
            MP3: 0x2,
            ADPCM: 0x3,
        },
        VMixFilterSlope_t: {
            FILTER_SLOPE_1POLE_6dB: 0x0,
            FILTER_SLOPE_1POLE_12dB: 0x1,
            FILTER_SLOPE_1POLE_18dB: 0x2,
            FILTER_SLOPE_1POLE_24dB: 0x3,
            FILTER_SLOPE_12dB: 0x4,
            FILTER_SLOPE_24dB: 0x5,
            FILTER_SLOPE_36dB: 0x6,
            FILTER_SLOPE_48dB: 0x7,
        },
        SndSeqPlayerType_t: {
            eSndSeqPlayerNull: 0x0,
            eSndSeqPlayerSndEvt: 0x1,
            eSndSeqPlayerMidiSeq: 0x2,
        },
        SosActionLimitSortType_t: {
            SOS_LIMIT_SORTTYPE_HIGHEST: 0x0,
            SOS_LIMIT_SORTTYPE_LOWEST: 0x1,
        },
        VMixSubgraphSwitchInterpolationType_t: {
            SUBGRAPH_INTERPOLATION_TEMPORAL_CROSSFADE: 0x0,
            SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT: 0x1,
            SUBGRAPH_INTERPOLATION_KEEP_LAST_SUBGRAPH_RUNNING: 0x2,
        },
        SosGroupType_t: {
            SOS_GROUPTYPE_DYNAMIC: 0x0,
            SOS_GROUPTYPE_STATIC: 0x1,
        },
        SosActionSetParamSortType_t: {
            SOS_SETPARAM_SORTTYPE_HIGHEST: 0x0,
            SOS_SETPARAM_SORTTYPE_LOWEST: 0x1,
        },
        SndSeqMidiStatusType_t: {
            SndSeqMidiStatusNoteOff: 0x8,
            SndSeqMidiStatusNoteOn: 0x9,
            SndSeqMidiStatusKeyPressure: 0xA,
            SndSeqMidiStatusCtrlChange: 0xB,
            SndSeqMidiStatusProgramChange: 0xC,
            SndSeqMidiStatusChannelPressure: 0xD,
            SndSeqMidiStatusPitchBend: 0xE,
        },
        CVMixInputBase: {
        },
        CVoiceContainerBlender: {
        },
        CVMixPitchShiftProcessorDesc: {
        },
        VMixFreeverbDesc_t: {
        },
        CVoiceContainerStaticAdditiveSynth__CHarmonic: {
        },
        CVoiceContainerStaticAdditiveSynth__CTone: {
        },
        CSosGroupActionOcclusionSchema: {
        },
        CVoiceContainerRandomSampler: {
        },
        CVMixSteamAudioDirectProcessorDesc: {
        },
        CVMixSteamAudioHRTFProcessorDesc: {
        },
        CVoiceContainerDefault: {
        },
        CVSound: {
        },
        CDSPPresetMixgroupModifierTable: {
        },
        CSosGroupActionSoundeventClusterSchema: {
        },
        CSosGroupActionSetSoundeventParameterSchema: {
        },
        CSoundContainerReference: {
        },
        CVoiceContainerNull: {
        },
        VMixSubgraphSwitchDesc_t: {
        },
        CVoiceContainerAnalysisBase: {
        },
        CSosGroupActionSoundeventMinMaxValuesSchema: {
        },
        CVMixEnvelopeProcessorDesc: {
        },
        CVMixCommand: {
        },
        SamplerVoice_t: {
        },
        CVMixControlInput: {
        },
        CVMixBoxverbProcessorDesc: {
        },
        CVMixDynamicsCompressorProcessorDesc: {
        },
        VMixPannerDesc_t: {
        },
        CSosGroupActionSoundeventPrioritySchema: {
        },
        CVoiceContainerRealtimeFMSineWave: {
        },
        SelectedEditItemInfo_t: {
        },
        VMixModDelayDesc_t: {
        },
        CSndSeqInstSndEvtSchema: {
        },
        CVMixNameInputMeter: {
        },
        CSndSeqInstruments: {
        },
        CVMixDynamics3BandProcessorDesc: {
        },
        VMixBoxverbDesc_t: {
        },
        CSosGroupActionSchema: {
        },
        CSosSoundEventGroupSchema: {
        },
        CSndSeqInstMidiSampler: {
        },
        CSndSeqInstBaseSchema: {
        },
        VMixDynamics3BandDesc_t: {
        },
        CVMixEQ8ProcessorDesc: {
        },
        CDSPMixgroupModifier: {
        },
        CAudioMorphData: {
        },
        VMixDualCompressorDesc_t: {
        },
        CVoiceContainerStaticAdditiveSynth: {
        },
        CVoiceContainerShapedNoise: {
        },
        CDspPresetModifierList: {
        },
        CVoiceContainerBase: {
        },
        CVMixDiffusorProcessorDesc: {
        },
        CVMixUtilityProcessorDesc: {
        },
        CVoiceContainerGranulator: {
        },
        CVMixPresetDSPProcessorDesc: {
        },
        VMixDelayDesc_t: {
        },
        VMixEQ8Desc_t: {
        },
        CVMixDynamicsProcessorDesc: {
        },
        CVMixGraphDescData: {
        },
        CVoiceContainerLoopXFade: {
        },
        VMixPresetDSPDesc_t: {
        },
        CAudioPhonemeTag: {
        },
        CVMixControlInputArray: {
        },
        CVMixNameInput: {
        },
        CSosGroupActionSoundeventCountSchema: {
        },
        CVoiceContainerEnvelopeAnalyzer: {
        },
        CVMixBaseProcessorDesc: {
        },
        CVMixImpulseResponseInput: {
        },
        CVMixSteamAudioHybridReverbProcessorDesc: {
        },
        CSoundEventMetaData: {
        },
        VMixPitchShiftDesc_t: {
        },
        CVMixControlOutput: {
        },
        CVMixModDelayProcessorDesc: {
        },
        CVMixShaperProcessorDesc: {
        },
        CVMixAutomaticControlInput: {
        },
        CAudioEmphasisSample: {
        },
        CVMixOscProcessorDesc: {
        },
        CVMixCurveHeader: {
        },
        CVoiceContainerGenerator: {
        },
        CVoiceContainerSet: {
        },
        VMixConvolutionDesc_t: {
        },
        CVoiceContainerSetElement: {
        },
        CVoiceContainerAsyncGenerator: {
        },
        CSoundInfoHeader: {
        },
        SosEditItemInfo_t: {
        },
        CVMixFlangerProcessorDesc: {
        },
        CVMixEffectChainProcessorDesc: {
        },
        KeyGroup_t: {
        },
        CVMixFreeverbProcessorDesc: {
        },
        VMixPlateverbDesc_t: {
        },
        CVMixConvolutionProcessorDesc: {
        },
        CSoundContainerReferenceArray: {
        },
        CVMixFilterProcessorDesc: {
        },
        CVMixAdditionalOutput: {
        },
        CVoiceContainerTapePlayer: {
        },
        CVMixSubgraphSwitchProcessorDesc: {
        },
        VMixDiffusorDesc_t: {
        },
        CVMixSteamAudioPathingProcessorDesc: {
        },
        CVMixPannerProcessorDesc: {
        },
        VMixDynamicsCompressorDesc_t: {
        },
        CVMixStereoDelayProcessorDesc: {
        },
        VMixShaperDesc_t: {
        },
        VMixEnvelopeDesc_t: {
        },
        CAudioSentence: {
        },
        CVoiceContainerParameterBlender: {
        },
        CVMixAudioMeter: {
        },
        CVMixVocoderProcessorDesc: {
        },
        CSosGroupActionLimitSchema: {
        },
        CVoiceContainerAmpedDecayingSineWave: {
        },
        CVoiceContainerEnvelope: {
        },
        VMixAutoFilterDesc_t: {
        },
        VMixDynamicsBand_t: {
        },
        VMixEffectChainDesc_t: {
        },
        CVMixPlateReverbProcessorDesc: {
        },
        CVoiceContainerMultiBlender: {
        },
        CVMixVsndInput: {
        },
        CVoiceContainerStaticAdditiveSynth__CGainScalePerInstance: {
        },
        VelocityZone_t: {
        },
        CVoiceContainerSelector: {
        },
        CSosGroupActionTimeBlockLimitSchema: {
        },
        CSosGroupActionMemberCountEnvelopeSchema: {
        },
        CVMixDualCompressorProcessorDesc: {
        },
        CVoiceContainerSwitch: {
        },
        CVMixControlMeter: {
        },
        CVoiceContainerEnum: {
        },
        CSosGroupActionTimeLimitSchema: {
        },
        VMixVocoderDesc_t: {
        },
        VMixUtilityDesc_t: {
        },
        CVoiceContainerLoopTrigger: {
        },
        CVoiceContainerDecayingSineWave: {
        },
        CVMixDelayProcessorDesc: {
        },
        CVMixBoxverb2ProcessorDesc: {
        },
        VMixFilterDesc_t: {
        },
        VMixOscDesc_t: {
        },
        CVMixAutoFilterProcessorDesc: {
        },
        ISndSeqInstruments: {
        },
        VMixFlangerDesc_t: {
        },
        VMixDynamicsDesc_t: {
        },
    },
};
