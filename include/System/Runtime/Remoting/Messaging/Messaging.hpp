#ifdef __cpp_modules
module;
#endif

#pragma once
#include "System\Runtime\Remoting\Messaging\ArgInfo.hpp"
#include "System\Runtime\Remoting\Messaging\ArgInfoType.hpp"
#include "System\Runtime\Remoting\Messaging\AsyncResult.hpp"
#include "System\Runtime\Remoting\Messaging\CADArgHolder.hpp"
#include "System\Runtime\Remoting\Messaging\CADMessageBase.hpp"
#include "System\Runtime\Remoting\Messaging\CADMethodCallMessage.hpp"
#include "System\Runtime\Remoting\Messaging\CADMethodRef.hpp"
#include "System\Runtime\Remoting\Messaging\CADMethodReturnMessage.hpp"
#include "System\Runtime\Remoting\Messaging\CADObjRef.hpp"
#include "System\Runtime\Remoting\Messaging\CallContext.hpp"
#include "System\Runtime\Remoting\Messaging\CallContextRemotingData.hpp"
#include "System\Runtime\Remoting\Messaging\CallContextSecurityData.hpp"
#include "System\Runtime\Remoting\Messaging\CallType.hpp"
#include "System\Runtime\Remoting\Messaging\ClientContextReplySink.hpp"
#include "System\Runtime\Remoting\Messaging\ClientContextTerminatorSink.hpp"
#include "System\Runtime\Remoting\Messaging\ConstructionCall.hpp"
#include "System\Runtime\Remoting\Messaging\ConstructionCallDictionary.hpp"
#include "System\Runtime\Remoting\Messaging\ConstructionResponse.hpp"
#include "System\Runtime\Remoting\Messaging\EnvoyTerminatorSink.hpp"
#include "System\Runtime\Remoting\Messaging\ErrorMessage.hpp"
#include "System\Runtime\Remoting\Messaging\Header.hpp"
#include "System\Runtime\Remoting\Messaging\HeaderHandler.hpp"
#include "System\Runtime\Remoting\Messaging\IInternalMessage.hpp"
#include "System\Runtime\Remoting\Messaging\IMessage.hpp"
#include "System\Runtime\Remoting\Messaging\IMessageCtrl.hpp"
#include "System\Runtime\Remoting\Messaging\IMessageSink.hpp"
#include "System\Runtime\Remoting\Messaging\IMethodCallMessage.hpp"
#include "System\Runtime\Remoting\Messaging\IMethodMessage.hpp"
#include "System\Runtime\Remoting\Messaging\IMethodReturnMessage.hpp"
#include "System\Runtime\Remoting\Messaging\IllogicalCallContext.hpp"
#include "System\Runtime\Remoting\Messaging\LogicalCallContext.hpp"
#include "System\Runtime\Remoting\Messaging\MCMDictionary.hpp"
#include "System\Runtime\Remoting\Messaging\MessageDictionary.hpp"
#include "System\Runtime\Remoting\Messaging\MethodCall.hpp"
#include "System\Runtime\Remoting\Messaging\MethodResponse.hpp"
#include "System\Runtime\Remoting\Messaging\MethodReturnDictionary.hpp"
#include "System\Runtime\Remoting\Messaging\MonoMethodMessage.hpp"
#include "System\Runtime\Remoting\Messaging\ObjRefSurrogate.hpp"
#include "System\Runtime\Remoting\Messaging\OneWayAttribute.hpp"
#include "System\Runtime\Remoting\Messaging\RemotingSurrogate.hpp"
#include "System\Runtime\Remoting\Messaging\RemotingSurrogateSelector.hpp"
#include "System\Runtime\Remoting\Messaging\ReturnMessage.hpp"
#include "System\Runtime\Remoting\Messaging\ServerContextTerminatorSink.hpp"
#include "System\Runtime\Remoting\Messaging\ServerObjectReplySink.hpp"
#include "System\Runtime\Remoting\Messaging\ServerObjectTerminatorSink.hpp"
#include "System\Runtime\Remoting\Messaging\StackBuilderSink.hpp"
#ifdef __cpp_modules
export module Messaging;
#endif
