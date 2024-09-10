#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "BeatSaber/AvatarCore/AbstractAdapterInstallerSO.hpp"
#include "BeatSaber/AvatarCore/Avatar.hpp"
#include "BeatSaber/AvatarCore/AvatarController.hpp"
#include "BeatSaber/AvatarCore/AvatarDisplayContext.hpp"
#include "BeatSaber/AvatarCore/AvatarEditorFlowCoordinator.hpp"
#include "BeatSaber/AvatarCore/AvatarHeadOffset.hpp"
#include "BeatSaber/AvatarCore/AvatarPoseData.hpp"
#include "BeatSaber/AvatarCore/AvatarPromoView.hpp"
#include "BeatSaber/AvatarCore/AvatarSelectionView.hpp"
#include "BeatSaber/AvatarCore/AvatarShadowController.hpp"
#include "BeatSaber/AvatarCore/AvatarSystem.hpp"
#include "BeatSaber/AvatarCore/AvatarSystemCollection.hpp"
#include "BeatSaber/AvatarCore/AvatarSystemIdentifier.hpp"
#include "BeatSaber/AvatarCore/AvatarVisualController.hpp"
#include "BeatSaber/AvatarCore/AvatarsAsyncInstaller.hpp"
#include "BeatSaber/AvatarCore/BeatAvatarSelectionView.hpp"
#include "BeatSaber/AvatarCore/BinaryReadWriteHelper.hpp"
#include "BeatSaber/AvatarCore/ConnectedPlayerAvatarPoseDataProvider.hpp"
#include "BeatSaber/AvatarCore/ConnectedPlayerAvatarVisualDataProvider.hpp"
#include "BeatSaber/AvatarCore/ConnectedPlayerName.hpp"
#include "BeatSaber/AvatarCore/ConnectedPlayerOptionalAvatarDataProvider.hpp"
#include "BeatSaber/AvatarCore/IAvatarPoseDataProvider.hpp"
#include "BeatSaber/AvatarCore/IAvatarPoseRestriction.hpp"
#include "BeatSaber/AvatarCore/IAvatarSystem.hpp"
#include "BeatSaber/AvatarCore/IAvatarSystemMetadata.hpp"
#include "BeatSaber/AvatarCore/IAvatarVisualDataProvider.hpp"
#include "BeatSaber/AvatarCore/IOptionalAvatarDataProvider.hpp"
#include "BeatSaber/AvatarCore/LimitAvatarPoseRestriction.hpp"
#include "BeatSaber/AvatarCore/LobbyAvatarInstaller.hpp"
#include "BeatSaber/AvatarCore/MultiplayerAvatarAudioController.hpp"
#include "BeatSaber/AvatarCore/MultiplayerAvatarPoseController.hpp"
#include "BeatSaber/AvatarCore/MultiplayerGameAvatarInstaller.hpp"
#include "BeatSaber/AvatarCore/NoAvatarPoseRestriction.hpp"
#include "BeatSaber/AvatarCore/OptionalAvatarData.hpp"
#include "BeatSaber/AvatarCore/OptionalAvatarDataPacket.hpp"
#include "BeatSaber/AvatarCore/OptionalAvatarDataSender.hpp"
#include "BeatSaber/AvatarCore/OptionalAvatarDataSyncHandler.hpp"
#include "BeatSaber/AvatarCore/StaticAvatarVisualDataProvider.hpp"
#ifdef __cpp_modules
                    export module AvatarCore;
                    #endif
                
