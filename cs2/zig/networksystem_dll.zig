// Generated using https://github.com/ikhsanprasetyo/source2-dumper
// 2026-04-02 19:15:51.295207800 +07:00

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
