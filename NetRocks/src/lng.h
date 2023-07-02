#pragma once

enum LanguageID
{
	MTitle,
	MDescription,
	MOK,
	MCancel,
	MRetry,
	MSkip,
	MError,

	MRecoveryDir,

	MPluginOptionsTitle,
	MEnableDesktopNotifications,
	MEnterExecRemotely,
	MSmartSymlinksCopy,
	MUMaskOverride,
	MRememberDirectory,
	MConnPoolExpiration,
	MConnectUsingProxy,
	MEditTSocksConfig,

	MRememberChoice,
	MOperationFailed,
	MCouldNotConnect,
	MWrongPath,

	MLoginAuthTitle,
	MLoginAuthRetryTitle,
	MLoginAuthTo,
	MLoginAuthRetryTo,

	MProtocol,
	MHost,
	MPort,
	MLoginMode,
	MPasswordModeNoPassword,
	MPasswordModeAskPassword,
	MPasswordModeSavedPassword,
	MUserName,
	MPassword,
	MDirectory,
	MKeepAlive,
	MCodepage,
	MDisplayName,
	MProtocolOptions,
	MSave,
	MConnect,
	MSaveConnect,

	MCreateSiteConnection,
	MEditHost,

	MXferCopyDownloadTitle,
	MXferCopyUploadTitle,
	MXferCopyCrossloadTitle,
	MXferMoveDownloadTitle,
	MXferMoveUploadTitle,
	MXferMoveCrossloadTitle,
	MXferRenameTitle,

	MXferCopyDownloadText,
	MXferCopyUploadText,
	MXferCopyCrossloadText,
	MXferMoveDownloadText,
	MXferMoveUploadText,
	MXferMoveCrossloadText,
	MXferRenameText,

	MXferDOAText,

	MXferDOAAsk,
	MXferDOAOverwrite,

	MXferDOASkip,
	MXferDOAOverwriteIfNewer,

	MXferDOAResume,
	MXferDOACreateDifferentName,

	MXferConfirmOverwriteNotify,

	MXferCurrentFile,
	MXferFileSize,
	MXferAllSize,
	MXferCount,
	MXferOf,

	MXferFileTimeSpent,
	MXferRemain,
	MXferAllTimeSpent,
	MXferSpeedCurrent,
	MXferAverage, 

	MBackground,
	MPause,
	MResume,
	MErrorActionReset,

	MProceedCopyDownload,
	MProceedCopyUpload,
	MProceedCopyCrossload,
	MProceedMoveDownload,
	MProceedMoveUpload,
	MProceedMoveCrossload,
	MProceedRename,
	MProceedChangeMode,

	MDestinationExists,
	MSourceInfo,
	MDestinationInfo,
	MOverwriteOptions,

	MRemoveTitle,
	MRemoveText,
	MProceedRemoval,

	MRemoveSitesTitle,
	MRemoveSitesText,
	MCopySitesTitle,
	MCopySitesText,
	MMoveSitesTitle,
	MMoveSitesText,
	MImportCopySitesTitle,
	MImportCopySitesText,
	MImportMoveSitesTitle,
	MImportMoveSitesText,
	MExportCopySitesTitle,
	MExportCopySitesText,
	MExportMoveSitesTitle,
	MExportMoveSitesText,

	MMakeDirTitle,
	MMakeDirText,
	MProceedMakeDir,

	MConnectProgressTitle,
	MGetModeProgressTitle,
	MChangeModeProgressTitle,
	MEnumDirProgressTitle,
	MCreateDirProgressTitle,
	MExecuteProgressTitle,

	MAbortTitle,
	MAbortText,
	MAbortConfirm,
	MAbortNotConfirm,

	MAbortingOperationTitle,
	MBreakConnection,

	MNotificationSuccess,
	MNotificationFailed,
	MNotificationUpload,
	MNotificationDownload,
	MNotificationCrossload,
	MNotificationRename,

	MErrorDownloadTitle,
	MErrorUploadTitle,
	MErrorCrossloadTitle,
	MErrorQueryInfoTitle,
	MErrorCheckDirTitle,
	MErrorEnumDirTitle,
	MErrorMakeDirTitle,
	MErrorRenameTitle,
	MErrorRmDirTitle,
	MErrorRemoveTitle,
	MErrorSetTimes,
	MErrorChangeMode,
	MErrorSymlinkQuery,
	MErrorSymlinkCreate,

	MErrorError,
	MErrorObject,
	MErrorSite,

	MHostLocalName,
	MErrorsStatus,

	MCommandsNotSupportedTitle,
	MCommandsNotSupportedText,
	MCommandNotificationTitle,

	MNewServerIdentityTitle,
	MNewServerIdentitySite,
	MNewServerIdentityText,

	MNewServerIdentityAllowOnce,
	MNewServerIdentityAllowAlways,

	MBackgroundTasksTitle,
	MBackgroundTasksMenuActive,
	MBackgroundTasksMenuPaused,
	MBackgroundTasksMenuComplete,
	MBackgroundTasksMenuAborted,
	MNoBackgrundTasks,

	MConfirmExitFARTitle,
	MConfirmExitFARText,
	MConfirmExitFARQuestion,
	MConfirmExitFARBackgroundTasks,

	MSFTPOptionsTitle,
	MSCPOptionsTitle,
	MSFTPAuthMode,
	MSFTPAuthModeUserPassword,
	MSFTPAuthModeUserPasswordInteractive,
	MSFTPAuthModeKeyFile,
	MSFTPAuthModeSSHAgent,
	MSFTPPrivateKeyPath,
	MSFTPCompression,
	MSFTPCompressionNone,
	MSFTPCompressionIncoming,
	MSFTPCompressionOutgoing,
	MSFTPCompressionAll,
	MSFTPCustomSubsystem,
	MSFTPMaxReadBlockSize,
	MSFTPMaxWriteBlockSize,
	MSFTPTCPNodelay,
	MSFTPTCPQuickAck,
	MSFTPIgnoreTimeAndModeErrors,
	MSFTPConnectRetries,
	MSFTPConnectTimeout,
	MSFTPAllowedHostkeys,
	MSFTPOpenSSHConfigs,
	MSFTPCfgFilesDefault,
	MSFTPCfgFilesNone,
	MSFTPCfgFilesSpecified,
	MSFTPEnableSandbox,

	MSFileOptionsTitle,
	MSFileCommand,
	MSFileExtra,
	MSFileCommandTimeLimit,
	MSFileCommandVarsHint,

	MSMBOptionsTitle,
	MSMBWorkgroup,
	MSMBEnumBySMB,
	MSMBEnumByNMB,

	MNFSOptionsTitle,
	MNFSOverride,
	MNFSHost,
	MNFSUID,
	MNFSGID,
	MNFSGroups,

	MWebDAVOptionsTitle,
	MWebDAVUserAgent,
	MWebDAVUseProxy,
	MWebDAVProxyHost,
	MWebDAVProxyPort,
	MWebDAVAuthProxy,
	MWebDAVProxyUsername,
	MWebDAVProxyPassword,

	MConfirmChangeModeTitle,
	MConfirmChangeModeTextOne,
	MConfirmChangeModeTextMany,
	MRecurseSubdirs,
	MModeUser,
	MModeGroup,
	MModeOther,
	MModeRead,
	MModeWrite,
	MModeExecute,
	MModeSetUID,
	MModeSetGID,
	MModeSticky,

	MFTPOptionsTitle,
	MFTPSOptionsTitle,
	MFTPExplicitEncryption, 
	MSFTPEncryptionProtocol,
	MSFTPListCommand,
	MSFTPServerCodepage,
	MFTPPassiveMode,
	MFTPUseMLSDMLST,
	MFTPCommandsPipelining,
	MFTPRestrictDataPeer,
	MFTPTCPNoDelay,
	MFTPQuickAck

};
