// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ModuleManager.h"

#include "SIMPLE_Common.h"

class FSIMPLEModule : public IModuleInterface {
public:
  /** IModuleInterface implementation */
  virtual void StartupModule() override;
  virtual void ShutdownModule() override;

private:
  /** Handle to the opencv dll */
  void* SIMPLELibraryHandle;
};
