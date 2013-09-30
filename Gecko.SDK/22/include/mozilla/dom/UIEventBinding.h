/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_UIEventBinding_h__
#define mozilla_dom_UIEventBinding_h__

#include "EventBinding.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/DOMJSClass.h"
#include "mozilla/dom/DOMJSProxyHandler.h"
#include "nsIDOMWindow.h"

class XPCWrappedNativeScope;
class nsDOMUIEvent;

class nsIDOMWindow;


namespace mozilla {
namespace dom {

template <>
struct PrototypeTraits<prototypes::id::UIEvent>
{
  enum
  {
    Depth = 1
  };
  typedef nsDOMUIEvent NativeType;
};
template <>
struct PrototypeIDMap<nsDOMUIEvent>
{
  enum
  {
    PrototypeID = prototypes::id::UIEvent
  };
};
} // namespace dom
} // namespace mozilla


namespace mozilla {
namespace dom {

struct UIEventInit : public EventInit {
  UIEventInit() {}
  bool Init(JSContext* cx, JSObject* scopeObj, const JS::Value& val);
  bool ToObject(JSContext* cx, JSObject* parentObject, JS::Value *vp);

  bool Init(const nsAString& aJSON)
  {
    mozilla::Maybe<JSAutoRequest> ar;
    mozilla::Maybe<JSAutoCompartment> ac;
    jsval json = JSVAL_VOID;
    JSContext* cx = ParseJSON(aJSON, ar, ac, json);
    NS_ENSURE_TRUE(cx, false);
    return Init(cx, nullptr, json);
  }
  UIEventInit& AsMutable() const
  {
    return *const_cast<UIEventInit*>(this);
  }

  int32_t mDetail;
  nsRefPtr<nsIDOMWindow> mView;
private:
  // Disallow copy-construction
  UIEventInit(const UIEventInit&) MOZ_DELETE;
  static bool InitIds(JSContext* cx);
  static bool initedIds;
  static jsid detail_id;
  static jsid view_id;
};
struct UIEventInitInitializer : public UIEventInit {
  UIEventInitInitializer() {
    // Safe to pass a null context if we pass a null value
    Init(nullptr, nullptr, JS::NullValue());
  }
};

namespace UIEventBinding {

  extern const NativePropertyHooks sNativePropertyHooks;

  void
  CreateInterfaceObjects(JSContext* aCx, JSObject* aGlobal, JSObject** protoAndIfaceArray);

  inline JSObject* GetProtoObject(JSContext* aCx, JSObject* aGlobal)
  {

    /* Get the interface prototype object for this class.  This will create the
       object as needed. */

    /* Make sure our global is sane.  Hopefully we can remove this sometime */
    if (!(js::GetObjectClass(aGlobal)->flags & JSCLASS_DOM_GLOBAL)) {
      return NULL;
    }
    /* Check to see whether the interface objects are already installed */
    JSObject** protoAndIfaceArray = GetProtoAndIfaceArray(aGlobal);
    JSObject* cachedObject = protoAndIfaceArray[prototypes::id::UIEvent];
    if (!cachedObject) {
      CreateInterfaceObjects(aCx, aGlobal, protoAndIfaceArray);
      cachedObject = protoAndIfaceArray[prototypes::id::UIEvent];
    }

    /* cachedObject might _still_ be null, but that's OK */
    return cachedObject;
  }

  inline JSObject* GetConstructorObject(JSContext* aCx, JSObject* aGlobal)
  {

    /* Get the interface object for this class.  This will create the object as
       needed. */

    /* Make sure our global is sane.  Hopefully we can remove this sometime */
    if (!(js::GetObjectClass(aGlobal)->flags & JSCLASS_DOM_GLOBAL)) {
      return NULL;
    }
    /* Check to see whether the interface objects are already installed */
    JSObject** protoAndIfaceArray = GetProtoAndIfaceArray(aGlobal);
    JSObject* cachedObject = protoAndIfaceArray[constructors::id::UIEvent];
    if (!cachedObject) {
      CreateInterfaceObjects(aCx, aGlobal, protoAndIfaceArray);
      cachedObject = protoAndIfaceArray[constructors::id::UIEvent];
    }

    /* cachedObject might _still_ be null, but that's OK */
    return cachedObject;
  }

  JSObject*
  DefineDOMInterface(JSContext* aCx, JSObject* aGlobal, jsid id, bool* aEnabled);

  extern DOMJSClass Class;

  JSObject*
  Wrap(JSContext* aCx, JSObject* aScope, nsDOMUIEvent* aObject, nsWrapperCache* aCache);

  template <class T>
  inline JSObject* Wrap(JSContext* aCx, JSObject* aScope, T* aObject)
  {
    return Wrap(aCx, aScope, aObject, aObject);
  }

} // namespace UIEventBinding



} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_UIEventBinding_h__
