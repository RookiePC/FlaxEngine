// Copyright (c) 2012-2019 Wojciech Figat. All rights reserved.

#pragma once

#if PLATFORM_TOOLS_MAC

#include "../../PlatformTools.h"

/// <summary>
/// The Mac platform support tools.
/// </summary>
class MacPlatformTools : public PlatformTools
{
private:
    ArchitectureType _arch;

public:

    MacPlatformTools(ArchitectureType arch);

    // [PlatformTools]
    const Char* GetDisplayName() const override;
    const Char* GetName() const override;
    PlatformType GetPlatform() const override;
    ArchitectureType GetArchitecture() const override;
    bool OnDeployBinaries(CookingData& data) override;
};

#endif