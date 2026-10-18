// Generated using https://github.com/ikhsanprasetyo/source2-dumper
// 2026-10-18 23:50:54.228183200 +07:00

pub const source2_dumper = struct {
    pub const interfaces = struct {
        // Module: animationsystem.dll
        pub const animationsystem_dll = struct {
            pub const AnimationSystemUtils_001: usize = 0x2ACE78;
            pub const AnimationSystem_001: usize = 0x2A4C98;
        };
        // Module: client.dll
        pub const client_dll = struct {
            pub const GameClientExports001: usize = 0x10B9CC8;
            pub const GameMovement001: usize = 0x10B38D0;
            pub const PanoramaUIClient001: usize = 0x10A8280;
            pub const Source2Client002: usize = 0x10B9D20;
            pub const Source2ClientConfig001: usize = 0x10AEE10;
            pub const Source2ClientPrediction001: usize = 0x10AEAD0;
            pub const Source2ClientUI001: usize = 0x10AED30;
        };
        // Module: engine2.dll
        pub const engine2_dll = struct {
            pub const BenchmarkService001: usize = 0x548C50;
            pub const BlackBoxVersion001: usize = 0x54AFD0;
            pub const BugService001: usize = 0x581A90;
            pub const ClientServerEngineLoopService_001: usize = 0x54AAF0;
            pub const EngineServiceMgr001: usize = 0x5BAE80;
            pub const GameEventSystemClientV001: usize = 0x5BF750;
            pub const GameEventSystemServerV001: usize = 0x5BF920;
            pub const GameResourceServiceClientV001: usize = 0x548D50;
            pub const GameResourceServiceServerV001: usize = 0x548DB0;
            pub const GameServerData001: usize = 0x548740;
            pub const GameUIService_001: usize = 0x582180;
            pub const HeapCompactionService001: usize = 0x548EB0;
            pub const HostStateMgr001: usize = 0x54A9E0;
            pub const INETSUPPORT_001: usize = 0x54B098;
            pub const InputService_001: usize = 0x5828C0;
            pub const KeyValueCache001: usize = 0x54AA90;
            pub const MapListService_001: usize = 0x549040;
            pub const NetworkClientService_001: usize = 0x5B8790;
            pub const NetworkP2PService_001: usize = 0x549400;
            pub const NetworkServerService_001: usize = 0x5495C0;
            pub const NetworkService_001: usize = 0x549800;
            pub const RenderService_001: usize = 0x549840;
            pub const ScreenshotService001: usize = 0x549D60;
            pub const ServerUploadGameStats001: usize = 0x5488E0;
            pub const SimpleEngineLoopService_001: usize = 0x54AC30;
            pub const SoundService_001: usize = 0x549FC0;
            pub const Source2EngineToClient001: usize = 0x5480A0;
            pub const Source2EngineToClientStringTable001: usize = 0x5484B0;
            pub const Source2EngineToServer001: usize = 0x548530;
            pub const Source2EngineToServerStringTable001: usize = 0x548560;
            pub const SplitScreenService_001: usize = 0x54A230;
            pub const StatsService_001: usize = 0x54A480;
            pub const TextMessageMgr_001: usize = 0x54B0A0;
            pub const ToolGameSimulationDispatcher_001: usize = 0x5BDC60;
            pub const ToolGameSimulationSystem_001: usize = 0x54AD70;
            pub const ToolService_001: usize = 0x54A650;
            pub const UserInfoChangeService_001: usize = 0x54A690;
            pub const VCvarQuery001: usize = 0x544ED0;
            pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x54B050;
            pub const VEngineEffects001: usize = 0x54C108;
            pub const VEngineVGui001: usize = 0x548A70;
            pub const VProfService_001: usize = 0x54A700;
            pub const VoiceServer002: usize = 0x54C130;
            pub const XboxSystemInterface001: usize = 0x54C158;
        };
        // Module: filesystem_stdio.dll
        pub const filesystem_stdio_dll = struct {
            pub const VBaseFileSystem011: usize = 0x56E78;
            pub const VFileSystem017: usize = 0x56E70;
            pub const VNewAsyncFileSystem001: usize = 0x56C40;
        };
        // Module: host.dll
        pub const host_dll = struct {
            pub const DACGameManager001: usize = 0x39A320;
            pub const DebugDrawQueueManager001: usize = 0x39A410;
            pub const GameModelInfoClient001: usize = 0x39A480;
            pub const GameModelInfoServer001: usize = 0x39A450;
            pub const GameSystem2HostHook: usize = 0x39A4C0;
            pub const HostUtils001: usize = 0x39A4F0;
            pub const PredictionDiffManager001: usize = 0x39A760;
            pub const SaveRestoreDataVersion001: usize = 0x39A910;
            pub const Source2Host001: usize = 0x39A940;
        };
        // Module: imemanager.dll
        pub const imemanager_dll = struct {
            pub const IMEManager001: usize = 0x20F00;
        };
        // Module: inputsystem.dll
        pub const inputsystem_dll = struct {
            pub const InputStackSystemVersion001: usize = 0x28590;
            pub const InputSystemVersion001: usize = 0x29C70;
        };
        // Module: localize.dll
        pub const localize_dll = struct {
            pub const Localize_001: usize = 0x20B60;
        };
        // Module: materialsystem2.dll
        pub const materialsystem2_dll = struct {
            pub const FontManager_001: usize = 0x108750;
            pub const MaterialUtils_001: usize = 0x101E10;
            pub const PostProcessingSystem_001: usize = 0x101D20;
            pub const TextLayout_001: usize = 0x101DA0;
            pub const VMaterialSystem2_001: usize = 0x1078B0;
        };
        // Module: meshsystem.dll
        pub const meshsystem_dll = struct {
            pub const MeshSystem001: usize = 0xD7550;
        };
        // Module: navsystem.dll
        pub const navsystem_dll = struct {
            pub const NavSystem001: usize = 0x9CEF0;
        };
        // Module: networksystem.dll
        pub const networksystem_dll = struct {
            pub const FlattenedSerializersVersion001: usize = 0x242B18;
            pub const NetworkMessagesVersion001: usize = 0x275DC8;
            pub const NetworkSystemUtilsVersion001: usize = 0x26B380;
            pub const NetworkSystemVersion001: usize = 0x26B110;
            pub const SerializedEntitiesVersion001: usize = 0x26B370;
        };
        // Module: p4lib.dll
        pub const p4lib_dll = struct {
            pub const VP4003: usize = 0x1A0DA18F;
        };
        // Module: panorama_nov8.dll
        pub const panorama_nov8_dll = struct {
            pub const PanoramaUIEngine001: usize = 0x4A3540;
        };
        // Module: panorama_text_pango.dll
        pub const panorama_text_pango_dll = struct {
            pub const PanoramaTextServices001: usize = 0x2AE7B0;
        };
        // Module: particles.dll
        pub const particles_dll = struct {
            pub const ParticleSystemMgr003: usize = 0x2EC780;
        };
        // Module: rendersystemdx11.dll
        pub const rendersystemdx11_dll = struct {
            pub const RenderDeviceMgr001: usize = 0x19E770;
            pub const RenderUtils_001: usize = 0x19F058;
        };
        // Module: rendersystemdx9.dll
        pub const rendersystemdx9_dll = struct {
            pub const RenderDeviceMgr001: usize = 0x188850;
            pub const RenderUtils_001: usize = 0x189138;
            pub const VRenderDeviceMgrBackdoor001: usize = 0x1888E0;
        };
        // Module: resourcesystem.dll
        pub const resourcesystem_dll = struct {
            pub const ResourceSystem013: usize = 0x64750;
        };
        // Module: scenefilecache.dll
        pub const scenefilecache_dll = struct {
            pub const ResponseRulesCache001: usize = 0x2FE90;
            pub const SceneFileCache002: usize = 0x2FF50;
        };
        // Module: scenesystem.dll
        pub const scenesystem_dll = struct {
            pub const SceneSystem_002: usize = 0x2DE040;
            pub const SceneUtils_001: usize = 0x2CBB40;
        };
        // Module: schemasystem.dll
        pub const schemasystem_dll = struct {
            pub const SchemaSystem_001: usize = 0x59580;
        };
        // Module: server.dll
        pub const server_dll = struct {
            pub const GameMovement001: usize = 0x11F10B0;
            pub const Source2GameClients001: usize = 0x11F8A20;
            pub const Source2GameDirector001: usize = 0x11F8F70;
            pub const Source2GameEntities001: usize = 0x11F89F0;
            pub const Source2Server001: usize = 0x11F89A0;
            pub const Source2ServerConfig001: usize = 0x11EF248;
            pub const Source2ServerSerializers002: usize = 0x11F6B10;
        };
        // Module: soundsystem.dll
        pub const soundsystem_dll = struct {
            pub const SoundOpSystem001: usize = 0x1E3E50;
            pub const SoundOpSystemEdit001: usize = 0x1E3DF8;
            pub const SoundSystem001: usize = 0x1E3A50;
            pub const VMixEditTool001: usize = 0x58D565F;
        };
        // Module: valve_avi.dll
        pub const valve_avi_dll = struct {
            pub const VAvi001: usize = 0xEC40;
        };
        // Module: valve_bink.dll
        pub const valve_bink_dll = struct {
            pub const VBik001: usize = 0xDC40;
        };
        // Module: vphysics2.dll
        pub const vphysics2_dll = struct {
            pub const VPhysics2_Handle_Interface_001: usize = 0x2FBFB0;
            pub const VPhysics2_Interface_001: usize = 0x2FC010;
        };
        // Module: vscript.dll
        pub const vscript_dll = struct {
            pub const VScriptManager010: usize = 0xBBDA8;
        };
        // Module: vstdlib.dll
        pub const vstdlib_dll = struct {
            pub const ConfigurationSystem_001: usize = 0x7EAB0;
            pub const EventSystem001: usize = 0x6F098;
            pub const TestScriptMgr001: usize = 0x75C30;
            pub const VEngineCvar007: usize = 0x7F030;
            pub const VProcessUtils002: usize = 0x75A80;
            pub const VStringTokenSystem001: usize = 0x75D18;
        };
        // Module: worldrenderer.dll
        pub const worldrenderer_dll = struct {
            pub const WorldRendererMgr001: usize = 0x12C340;
        };
    };
};
