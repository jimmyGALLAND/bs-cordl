#ifdef __cpp_modules
module;
#endif

#pragma once
#include "UnityEngine\EventSystems\AbstractEventData.hpp"
#include "UnityEngine\EventSystems\AxisEventData.hpp"
#include "UnityEngine\EventSystems\BaseEventData.hpp"
#include "UnityEngine\EventSystems\BaseInput.hpp"
#include "UnityEngine\EventSystems\BaseInputModule.hpp"
#include "UnityEngine\EventSystems\BaseRaycaster.hpp"
#include "UnityEngine\EventSystems\EventHandle.hpp"
#include "UnityEngine\EventSystems\EventSystem.hpp"
#include "UnityEngine\EventSystems\EventTrigger.hpp"
#include "UnityEngine\EventSystems\EventTriggerType.hpp"
#include "UnityEngine\EventSystems\ExecuteEvents.hpp"
#include "UnityEngine\EventSystems\IBeginDragHandler.hpp"
#include "UnityEngine\EventSystems\ICancelHandler.hpp"
#include "UnityEngine\EventSystems\IDeselectHandler.hpp"
#include "UnityEngine\EventSystems\IDragHandler.hpp"
#include "UnityEngine\EventSystems\IDropHandler.hpp"
#include "UnityEngine\EventSystems\IEndDragHandler.hpp"
#include "UnityEngine\EventSystems\IEventSystemHandler.hpp"
#include "UnityEngine\EventSystems\IInitializePotentialDragHandler.hpp"
#include "UnityEngine\EventSystems\IMoveHandler.hpp"
#include "UnityEngine\EventSystems\IPointerClickHandler.hpp"
#include "UnityEngine\EventSystems\IPointerDownHandler.hpp"
#include "UnityEngine\EventSystems\IPointerEnterHandler.hpp"
#include "UnityEngine\EventSystems\IPointerExitHandler.hpp"
#include "UnityEngine\EventSystems\IPointerMoveHandler.hpp"
#include "UnityEngine\EventSystems\IPointerUpHandler.hpp"
#include "UnityEngine\EventSystems\IScrollHandler.hpp"
#include "UnityEngine\EventSystems\ISelectHandler.hpp"
#include "UnityEngine\EventSystems\ISubmitHandler.hpp"
#include "UnityEngine\EventSystems\IUpdateSelectedHandler.hpp"
#include "UnityEngine\EventSystems\MoveDirection.hpp"
#include "UnityEngine\EventSystems\OVRInputModule.hpp"
#include "UnityEngine\EventSystems\OVRPhysicsRaycaster.hpp"
#include "UnityEngine\EventSystems\OVRPointerEventData.hpp"
#include "UnityEngine\EventSystems\Physics2DRaycaster.hpp"
#include "UnityEngine\EventSystems\PhysicsRaycaster.hpp"
#include "UnityEngine\EventSystems\PointerEventData.hpp"
#include "UnityEngine\EventSystems\PointerEventDataExtension.hpp"
#include "UnityEngine\EventSystems\PointerInputModule.hpp"
#include "UnityEngine\EventSystems\RaycastResult.hpp"
#include "UnityEngine\EventSystems\RaycasterManager.hpp"
#include "UnityEngine\EventSystems\StandaloneInputModule.hpp"
#include "UnityEngine\EventSystems\TouchInputModule.hpp"
#include "UnityEngine\EventSystems\UIBehaviour.hpp"
#ifdef __cpp_modules
export module EventSystems;
#endif
