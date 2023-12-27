#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Oculus\Platform\AbuseReport.hpp"
#include "Oculus\Platform\AbuseReportOptions.hpp"
#include "Oculus\Platform\AbuseReportType.hpp"
#include "Oculus\Platform\AbuseReportVideoMode.hpp"
#include "Oculus\Platform\AccountAgeCategory.hpp"
#include "Oculus\Platform\AchievementType.hpp"
#include "Oculus\Platform\Achievements.hpp"
#include "Oculus\Platform\AdvancedAbuseReportOptions.hpp"
#include "Oculus\Platform\AndroidPlatform.hpp"
#include "Oculus\Platform\AppAgeCategory.hpp"
#include "Oculus\Platform\AppStatus.hpp"
#include "Oculus\Platform\Application.hpp"
#include "Oculus\Platform\ApplicationLifecycle.hpp"
#include "Oculus\Platform\ApplicationOptions.hpp"
#include "Oculus\Platform\AssetFile.hpp"
#include "Oculus\Platform\Avatar.hpp"
#include "Oculus\Platform\AvatarEditorOptions.hpp"
#include "Oculus\Platform\CAPI.hpp"
#include "Oculus\Platform\Callback.hpp"
#include "Oculus\Platform\CallbackRunner.hpp"
#include "Oculus\Platform\ChallengeCreationType.hpp"
#include "Oculus\Platform\ChallengeOptions.hpp"
#include "Oculus\Platform\ChallengeViewerFilter.hpp"
#include "Oculus\Platform\ChallengeVisibility.hpp"
#include "Oculus\Platform\Challenges.hpp"
#include "Oculus\Platform\Core.hpp"
#include "Oculus\Platform\DeviceApplicationIntegrity.hpp"
#include "Oculus\Platform\Entitlements.hpp"
#include "Oculus\Platform\GroupPresence.hpp"
#include "Oculus\Platform\GroupPresenceOptions.hpp"
#include "Oculus\Platform\IAP.hpp"
#include "Oculus\Platform\IMicrophone.hpp"
#include "Oculus\Platform\IVoipPCMSource.hpp"
#include "Oculus\Platform\InitConfigOptions.hpp"
#include "Oculus\Platform\InviteOptions.hpp"
#include "Oculus\Platform\KeyValuePairType.hpp"
#include "Oculus\Platform\LanguagePack.hpp"
#include "Oculus\Platform\LaunchResult.hpp"
#include "Oculus\Platform\LaunchType.hpp"
#include "Oculus\Platform\LeaderboardFilterType.hpp"
#include "Oculus\Platform\LeaderboardStartAt.hpp"
#include "Oculus\Platform\Leaderboards.hpp"
#include "Oculus\Platform\Livestreaming.hpp"
#include "Oculus\Platform\LivestreamingAudience.hpp"
#include "Oculus\Platform\LivestreamingMicrophoneStatus.hpp"
#include "Oculus\Platform\LivestreamingStartStatus.hpp"
#include "Oculus\Platform\LogEventName.hpp"
#include "Oculus\Platform\LogEventParameter.hpp"
#include "Oculus\Platform\Media.hpp"
#include "Oculus\Platform\MediaContentType.hpp"
#include "Oculus\Platform\Message.hpp"
#include "Oculus\Platform\MessageWithAbuseReportRecording.hpp"
#include "Oculus\Platform\MessageWithAchievementDefinitions.hpp"
#include "Oculus\Platform\MessageWithAchievementProgressList.hpp"
#include "Oculus\Platform\MessageWithAchievementUpdate.hpp"
#include "Oculus\Platform\MessageWithAppDownloadProgressResult.hpp"
#include "Oculus\Platform\MessageWithAppDownloadResult.hpp"
#include "Oculus\Platform\MessageWithApplicationInviteList.hpp"
#include "Oculus\Platform\MessageWithApplicationVersion.hpp"
#include "Oculus\Platform\MessageWithAssetDetails.hpp"
#include "Oculus\Platform\MessageWithAssetDetailsList.hpp"
#include "Oculus\Platform\MessageWithAssetFileDeleteResult.hpp"
#include "Oculus\Platform\MessageWithAssetFileDownloadCancelResult.hpp"
#include "Oculus\Platform\MessageWithAssetFileDownloadResult.hpp"
#include "Oculus\Platform\MessageWithAssetFileDownloadUpdate.hpp"
#include "Oculus\Platform\MessageWithAvatarEditorResult.hpp"
#include "Oculus\Platform\MessageWithBlockedUserList.hpp"
#include "Oculus\Platform\MessageWithChallenge.hpp"
#include "Oculus\Platform\MessageWithChallengeEntryList.hpp"
#include "Oculus\Platform\MessageWithChallengeList.hpp"
#include "Oculus\Platform\MessageWithDataStoreUnderPrivateUserDataStore.hpp"
#include "Oculus\Platform\MessageWithDataStoreUnderPublicUserDataStore.hpp"
#include "Oculus\Platform\MessageWithDestinationList.hpp"
#include "Oculus\Platform\MessageWithGroupPresenceJoinIntent.hpp"
#include "Oculus\Platform\MessageWithGroupPresenceLeaveIntent.hpp"
#include "Oculus\Platform\MessageWithHttpTransferUpdate.hpp"
#include "Oculus\Platform\MessageWithInstalledApplicationList.hpp"
#include "Oculus\Platform\MessageWithInvitePanelResultInfo.hpp"
#include "Oculus\Platform\MessageWithLaunchBlockFlowResult.hpp"
#include "Oculus\Platform\MessageWithLaunchFriendRequestFlowResult.hpp"
#include "Oculus\Platform\MessageWithLaunchInvitePanelFlowResult.hpp"
#include "Oculus\Platform\MessageWithLaunchReportFlowResult.hpp"
#include "Oculus\Platform\MessageWithLaunchUnblockFlowResult.hpp"
#include "Oculus\Platform\MessageWithLeaderboardDidUpdate.hpp"
#include "Oculus\Platform\MessageWithLeaderboardEntryList.hpp"
#include "Oculus\Platform\MessageWithLeaderboardList.hpp"
#include "Oculus\Platform\MessageWithLinkedAccountList.hpp"
#include "Oculus\Platform\MessageWithLivestreamingApplicationStatus.hpp"
#include "Oculus\Platform\MessageWithLivestreamingStartResult.hpp"
#include "Oculus\Platform\MessageWithLivestreamingStatus.hpp"
#include "Oculus\Platform\MessageWithLivestreamingVideoStats.hpp"
#include "Oculus\Platform\MessageWithMicrophoneAvailabilityState.hpp"
#include "Oculus\Platform\MessageWithNetSyncConnection.hpp"
#include "Oculus\Platform\MessageWithNetSyncSessionList.hpp"
#include "Oculus\Platform\MessageWithNetSyncSessionsChangedNotification.hpp"
#include "Oculus\Platform\MessageWithNetSyncSetSessionPropertyResult.hpp"
#include "Oculus\Platform\MessageWithNetSyncVoipAttenuationValueList.hpp"
#include "Oculus\Platform\MessageWithOrgScopedID.hpp"
#include "Oculus\Platform\MessageWithParty.hpp"
#include "Oculus\Platform\MessageWithPartyID.hpp"
#include "Oculus\Platform\MessageWithPartyUnderCurrentParty.hpp"
#include "Oculus\Platform\MessageWithPartyUpdateNotification.hpp"
#include "Oculus\Platform\MessageWithPidList.hpp"
#include "Oculus\Platform\MessageWithPlatformInitialize.hpp"
#include "Oculus\Platform\MessageWithProductList.hpp"
#include "Oculus\Platform\MessageWithPurchase.hpp"
#include "Oculus\Platform\MessageWithPurchaseList.hpp"
#include "Oculus\Platform\MessageWithRejoinDialogResult.hpp"
#include "Oculus\Platform\MessageWithSdkAccountList.hpp"
#include "Oculus\Platform\MessageWithSendInvitesResult.hpp"
#include "Oculus\Platform\MessageWithShareMediaResult.hpp"
#include "Oculus\Platform\MessageWithString.hpp"
#include "Oculus\Platform\MessageWithSystemVoipState.hpp"
#include "Oculus\Platform\MessageWithUser.hpp"
#include "Oculus\Platform\MessageWithUserAccountAgeCategory.hpp"
#include "Oculus\Platform\MessageWithUserCapabilityList.hpp"
#include "Oculus\Platform\MessageWithUserDataStoreUpdateResponse.hpp"
#include "Oculus\Platform\MessageWithUserList.hpp"
#include "Oculus\Platform\MessageWithUserProof.hpp"
#include "Oculus\Platform\MessageWithUserReportID.hpp"
#include "Oculus\Platform\Message_1.hpp"
#include "Oculus\Platform\MultiplayerErrorErrorKey.hpp"
#include "Oculus\Platform\MultiplayerErrorOptions.hpp"
#include "Oculus\Platform\NetSync.hpp"
#include "Oculus\Platform\NetSyncConnectionStatus.hpp"
#include "Oculus\Platform\NetSyncDisconnectReason.hpp"
#include "Oculus\Platform\NetSyncOptions.hpp"
#include "Oculus\Platform\NetSyncVoipMicSource.hpp"
#include "Oculus\Platform\NetSyncVoipStreamMode.hpp"
#include "Oculus\Platform\Notifications.hpp"
#include "Oculus\Platform\Packet.hpp"
#include "Oculus\Platform\Parties.hpp"
#include "Oculus\Platform\PartyMicState.hpp"
#include "Oculus\Platform\PartyUpdateAction.hpp"
#include "Oculus\Platform\PermissionGrantStatus.hpp"
#include "Oculus\Platform\PermissionType.hpp"
#include "Oculus\Platform\PlatformInitializeResult.hpp"
#include "Oculus\Platform\PlatformInternal.hpp"
#include "Oculus\Platform\PlatformSettings.hpp"
#include "Oculus\Platform\ReportRequestResponse.hpp"
#include "Oculus\Platform\Request.hpp"
#include "Oculus\Platform\Request_1.hpp"
#include "Oculus\Platform\RichPresence.hpp"
#include "Oculus\Platform\RichPresenceExtraContext.hpp"
#include "Oculus\Platform\RichPresenceOptions.hpp"
#include "Oculus\Platform\RosterOptions.hpp"
#include "Oculus\Platform\SdkAccountType.hpp"
#include "Oculus\Platform\ServiceProvider.hpp"
#include "Oculus\Platform\ShareMediaStatus.hpp"
#include "Oculus\Platform\StandalonePlatform.hpp"
#include "Oculus\Platform\StandalonePlatformSettings.hpp"
#include "Oculus\Platform\SystemVoipStatus.hpp"
#include "Oculus\Platform\TimeWindow.hpp"
#include "Oculus\Platform\UserAgeCategory.hpp"
#include "Oculus\Platform\UserDataStore.hpp"
#include "Oculus\Platform\UserOptions.hpp"
#include "Oculus\Platform\UserOrdering.hpp"
#include "Oculus\Platform\UserPresenceStatus.hpp"
#include "Oculus\Platform\Users.hpp"
#include "Oculus\Platform\Voip.hpp"
#include "Oculus\Platform\VoipAudioSourceHiLevel.hpp"
#include "Oculus\Platform\VoipBitrate.hpp"
#include "Oculus\Platform\VoipDtxState.hpp"
#include "Oculus\Platform\VoipMuteState.hpp"
#include "Oculus\Platform\VoipOptions.hpp"
#include "Oculus\Platform\VoipPCMSourceNative.hpp"
#include "Oculus\Platform\VoipSampleRate.hpp"
#include "Oculus\Platform\Vrcamera.hpp"
#include "Oculus\Platform\WindowsPlatform.hpp"
#ifdef __cpp_modules
export module Platform;
#endif
