// Generated using https://github.com/ikhsanprasetyo/Source2Dumped
// 2026-03-30 05:58:07.794201800 UTC

pub const source2_dumper = struct {
    pub const schemas = struct {
        // Module: networksystem.dll
        // Class count: 1
        // Enum count: 1
        pub const networksystem_dll = struct {
            // Alignment: 4
            // Member count: 4
            pub const OutOfPVSUpdates_t = enum(u32) {
                OOPVSUpdates_OptOut = 0x0,
                OOPVSUpdates_OptIn = 0x1,
                OOPVSUpdates_Default = 0x2,
                OOPVSUpdates_Count = 0x3
            };
            // Parent: None
            // Field count: 1
            pub const ChangeAccessorFieldPathIndex_t = struct {
                pub const m_Value: usize = 0x0; // int32
            };
        };
    };
};
