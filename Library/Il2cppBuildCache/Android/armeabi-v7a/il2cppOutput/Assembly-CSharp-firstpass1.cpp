#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Collections.Generic.List`1<System.Collections.Hashtable>
struct List_1_t38F0D192849B37DF15B4CD534811FD98C322E0AA;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Rect[]
struct RectU5BU5D_tD4F5052A6F89820365269FF4CA7C3EB1ACD4B1EE;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Color[0...,0...]
struct ColorU5BU2CU5D_t2A69031E1324100032C060CCDC143348C8EBAB4D;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// iTween
struct iTween_t95300D70E560085F44AAEB18AF385AF38A945781;
// iTween/<Start>d__229
struct U3CStartU3Ed__229_t210BF015B3C6AAC89B9D2E49350BF871E003E2C9;
// iTween/<TweenDelay>d__145
struct U3CTweenDelayU3Ed__145_tDFD7668C11AACDF79728F0A6B35B38A97E2AD599;
// iTween/<TweenRestart>d__147
struct U3CTweenRestartU3Ed__147_t9FEDF04F43FD04D6D48FA47101B41825BDF790C0;
// iTween/ApplyTween
struct ApplyTween_tC02BE78D922139D55C4223CBCCD337C142B7CA9B;
// iTween/CRSpline
struct CRSpline_t429347A25B9800EE44747924086632B4A5459E61;
// iTween/EasingFunction
struct EasingFunction_tF18C9A158889607A429ECF7BFEFC204E5D41D500;

IL2CPP_EXTERN_C RuntimeClass* Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralB0658EBD7117F5F9DCFBFF0FBF0210D62373F387;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__229_System_Collections_IEnumerator_Reset_m9F25413A5951DD398188178C039616261591C965_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTweenDelayU3Ed__145_System_Collections_IEnumerator_Reset_mD4024FC45843B807A7B51CE2A00E9F53FE218F9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTweenRestartU3Ed__147_System_Collections_IEnumerator_Reset_m28032EE62D571A8BDC9F10AA14F62D3185D9C62A_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// iTween/<Start>d__229
struct U3CStartU3Ed__229_t210BF015B3C6AAC89B9D2E49350BF871E003E2C9  : public RuntimeObject
{
public:
	// System.Int32 iTween/<Start>d__229::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object iTween/<Start>d__229::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// iTween iTween/<Start>d__229::<>4__this
	iTween_t95300D70E560085F44AAEB18AF385AF38A945781 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__229_t210BF015B3C6AAC89B9D2E49350BF871E003E2C9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__229_t210BF015B3C6AAC89B9D2E49350BF871E003E2C9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__229_t210BF015B3C6AAC89B9D2E49350BF871E003E2C9, ___U3CU3E4__this_2)); }
	inline iTween_t95300D70E560085F44AAEB18AF385AF38A945781 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline iTween_t95300D70E560085F44AAEB18AF385AF38A945781 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(iTween_t95300D70E560085F44AAEB18AF385AF38A945781 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// iTween/<TweenDelay>d__145
struct U3CTweenDelayU3Ed__145_tDFD7668C11AACDF79728F0A6B35B38A97E2AD599  : public RuntimeObject
{
public:
	// System.Int32 iTween/<TweenDelay>d__145::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object iTween/<TweenDelay>d__145::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// iTween iTween/<TweenDelay>d__145::<>4__this
	iTween_t95300D70E560085F44AAEB18AF385AF38A945781 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTweenDelayU3Ed__145_tDFD7668C11AACDF79728F0A6B35B38A97E2AD599, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTweenDelayU3Ed__145_tDFD7668C11AACDF79728F0A6B35B38A97E2AD599, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTweenDelayU3Ed__145_tDFD7668C11AACDF79728F0A6B35B38A97E2AD599, ___U3CU3E4__this_2)); }
	inline iTween_t95300D70E560085F44AAEB18AF385AF38A945781 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline iTween_t95300D70E560085F44AAEB18AF385AF38A945781 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(iTween_t95300D70E560085F44AAEB18AF385AF38A945781 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// iTween/<TweenRestart>d__147
struct U3CTweenRestartU3Ed__147_t9FEDF04F43FD04D6D48FA47101B41825BDF790C0  : public RuntimeObject
{
public:
	// System.Int32 iTween/<TweenRestart>d__147::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object iTween/<TweenRestart>d__147::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// iTween iTween/<TweenRestart>d__147::<>4__this
	iTween_t95300D70E560085F44AAEB18AF385AF38A945781 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTweenRestartU3Ed__147_t9FEDF04F43FD04D6D48FA47101B41825BDF790C0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTweenRestartU3Ed__147_t9FEDF04F43FD04D6D48FA47101B41825BDF790C0, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTweenRestartU3Ed__147_t9FEDF04F43FD04D6D48FA47101B41825BDF790C0, ___U3CU3E4__this_2)); }
	inline iTween_t95300D70E560085F44AAEB18AF385AF38A945781 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline iTween_t95300D70E560085F44AAEB18AF385AF38A945781 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(iTween_t95300D70E560085F44AAEB18AF385AF38A945781 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// iTween/CRSpline
struct CRSpline_t429347A25B9800EE44747924086632B4A5459E61  : public RuntimeObject
{
public:
	// UnityEngine.Vector3[] iTween/CRSpline::pts
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___pts_0;

public:
	inline static int32_t get_offset_of_pts_0() { return static_cast<int32_t>(offsetof(CRSpline_t429347A25B9800EE44747924086632B4A5459E61, ___pts_0)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_pts_0() const { return ___pts_0; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_pts_0() { return &___pts_0; }
	inline void set_pts_0(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___pts_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pts_0), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Space
struct Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// iTween/EaseType
struct EaseType_t4FE49F1E6C1A7C72DA5D69E00415688BBB22225F 
{
public:
	// System.Int32 iTween/EaseType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EaseType_t4FE49F1E6C1A7C72DA5D69E00415688BBB22225F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// iTween/LoopType
struct LoopType_t4AAAC202279BC6068022810DD0E39051B1262F4C 
{
public:
	// System.Int32 iTween/LoopType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoopType_t4AAAC202279BC6068022810DD0E39051B1262F4C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// iTween/NamedValueColor
struct NamedValueColor_t928FAA12AEA9B2099C8A618533E58AACC2CF0597 
{
public:
	// System.Int32 iTween/NamedValueColor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NamedValueColor_t928FAA12AEA9B2099C8A618533E58AACC2CF0597, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// iTween/Defaults
struct Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF  : public RuntimeObject
{
public:

public:
};

struct Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_StaticFields
{
public:
	// System.Single iTween/Defaults::time
	float ___time_0;
	// System.Single iTween/Defaults::delay
	float ___delay_1;
	// iTween/NamedValueColor iTween/Defaults::namedColorValue
	int32_t ___namedColorValue_2;
	// iTween/LoopType iTween/Defaults::loopType
	int32_t ___loopType_3;
	// iTween/EaseType iTween/Defaults::easeType
	int32_t ___easeType_4;
	// System.Single iTween/Defaults::lookSpeed
	float ___lookSpeed_5;
	// System.Boolean iTween/Defaults::isLocal
	bool ___isLocal_6;
	// UnityEngine.Space iTween/Defaults::space
	int32_t ___space_7;
	// System.Boolean iTween/Defaults::orientToPath
	bool ___orientToPath_8;
	// UnityEngine.Color iTween/Defaults::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_9;
	// System.Single iTween/Defaults::updateTimePercentage
	float ___updateTimePercentage_10;
	// System.Single iTween/Defaults::updateTime
	float ___updateTime_11;
	// System.Single iTween/Defaults::lookAhead
	float ___lookAhead_12;
	// System.Boolean iTween/Defaults::useRealTime
	bool ___useRealTime_13;
	// UnityEngine.Vector3 iTween/Defaults::up
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___up_14;

public:
	inline static int32_t get_offset_of_time_0() { return static_cast<int32_t>(offsetof(Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_StaticFields, ___time_0)); }
	inline float get_time_0() const { return ___time_0; }
	inline float* get_address_of_time_0() { return &___time_0; }
	inline void set_time_0(float value)
	{
		___time_0 = value;
	}

	inline static int32_t get_offset_of_delay_1() { return static_cast<int32_t>(offsetof(Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_StaticFields, ___delay_1)); }
	inline float get_delay_1() const { return ___delay_1; }
	inline float* get_address_of_delay_1() { return &___delay_1; }
	inline void set_delay_1(float value)
	{
		___delay_1 = value;
	}

	inline static int32_t get_offset_of_namedColorValue_2() { return static_cast<int32_t>(offsetof(Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_StaticFields, ___namedColorValue_2)); }
	inline int32_t get_namedColorValue_2() const { return ___namedColorValue_2; }
	inline int32_t* get_address_of_namedColorValue_2() { return &___namedColorValue_2; }
	inline void set_namedColorValue_2(int32_t value)
	{
		___namedColorValue_2 = value;
	}

	inline static int32_t get_offset_of_loopType_3() { return static_cast<int32_t>(offsetof(Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_StaticFields, ___loopType_3)); }
	inline int32_t get_loopType_3() const { return ___loopType_3; }
	inline int32_t* get_address_of_loopType_3() { return &___loopType_3; }
	inline void set_loopType_3(int32_t value)
	{
		___loopType_3 = value;
	}

	inline static int32_t get_offset_of_easeType_4() { return static_cast<int32_t>(offsetof(Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_StaticFields, ___easeType_4)); }
	inline int32_t get_easeType_4() const { return ___easeType_4; }
	inline int32_t* get_address_of_easeType_4() { return &___easeType_4; }
	inline void set_easeType_4(int32_t value)
	{
		___easeType_4 = value;
	}

	inline static int32_t get_offset_of_lookSpeed_5() { return static_cast<int32_t>(offsetof(Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_StaticFields, ___lookSpeed_5)); }
	inline float get_lookSpeed_5() const { return ___lookSpeed_5; }
	inline float* get_address_of_lookSpeed_5() { return &___lookSpeed_5; }
	inline void set_lookSpeed_5(float value)
	{
		___lookSpeed_5 = value;
	}

	inline static int32_t get_offset_of_isLocal_6() { return static_cast<int32_t>(offsetof(Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_StaticFields, ___isLocal_6)); }
	inline bool get_isLocal_6() const { return ___isLocal_6; }
	inline bool* get_address_of_isLocal_6() { return &___isLocal_6; }
	inline void set_isLocal_6(bool value)
	{
		___isLocal_6 = value;
	}

	inline static int32_t get_offset_of_space_7() { return static_cast<int32_t>(offsetof(Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_StaticFields, ___space_7)); }
	inline int32_t get_space_7() const { return ___space_7; }
	inline int32_t* get_address_of_space_7() { return &___space_7; }
	inline void set_space_7(int32_t value)
	{
		___space_7 = value;
	}

	inline static int32_t get_offset_of_orientToPath_8() { return static_cast<int32_t>(offsetof(Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_StaticFields, ___orientToPath_8)); }
	inline bool get_orientToPath_8() const { return ___orientToPath_8; }
	inline bool* get_address_of_orientToPath_8() { return &___orientToPath_8; }
	inline void set_orientToPath_8(bool value)
	{
		___orientToPath_8 = value;
	}

	inline static int32_t get_offset_of_color_9() { return static_cast<int32_t>(offsetof(Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_StaticFields, ___color_9)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_9() const { return ___color_9; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_9() { return &___color_9; }
	inline void set_color_9(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_9 = value;
	}

	inline static int32_t get_offset_of_updateTimePercentage_10() { return static_cast<int32_t>(offsetof(Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_StaticFields, ___updateTimePercentage_10)); }
	inline float get_updateTimePercentage_10() const { return ___updateTimePercentage_10; }
	inline float* get_address_of_updateTimePercentage_10() { return &___updateTimePercentage_10; }
	inline void set_updateTimePercentage_10(float value)
	{
		___updateTimePercentage_10 = value;
	}

	inline static int32_t get_offset_of_updateTime_11() { return static_cast<int32_t>(offsetof(Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_StaticFields, ___updateTime_11)); }
	inline float get_updateTime_11() const { return ___updateTime_11; }
	inline float* get_address_of_updateTime_11() { return &___updateTime_11; }
	inline void set_updateTime_11(float value)
	{
		___updateTime_11 = value;
	}

	inline static int32_t get_offset_of_lookAhead_12() { return static_cast<int32_t>(offsetof(Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_StaticFields, ___lookAhead_12)); }
	inline float get_lookAhead_12() const { return ___lookAhead_12; }
	inline float* get_address_of_lookAhead_12() { return &___lookAhead_12; }
	inline void set_lookAhead_12(float value)
	{
		___lookAhead_12 = value;
	}

	inline static int32_t get_offset_of_useRealTime_13() { return static_cast<int32_t>(offsetof(Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_StaticFields, ___useRealTime_13)); }
	inline bool get_useRealTime_13() const { return ___useRealTime_13; }
	inline bool* get_address_of_useRealTime_13() { return &___useRealTime_13; }
	inline void set_useRealTime_13(bool value)
	{
		___useRealTime_13 = value;
	}

	inline static int32_t get_offset_of_up_14() { return static_cast<int32_t>(offsetof(Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_StaticFields, ___up_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_up_14() const { return ___up_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_up_14() { return &___up_14; }
	inline void set_up_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___up_14 = value;
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// iTween/ApplyTween
struct ApplyTween_tC02BE78D922139D55C4223CBCCD337C142B7CA9B  : public MulticastDelegate_t
{
public:

public:
};


// iTween/EasingFunction
struct EasingFunction_tF18C9A158889607A429ECF7BFEFC204E5D41D500  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// iTween
struct iTween_t95300D70E560085F44AAEB18AF385AF38A945781  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String iTween::id
	String_t* ___id_5;
	// System.String iTween::type
	String_t* ___type_6;
	// System.String iTween::method
	String_t* ___method_7;
	// iTween/EaseType iTween::easeType
	int32_t ___easeType_8;
	// System.Single iTween::time
	float ___time_9;
	// System.Single iTween::delay
	float ___delay_10;
	// iTween/LoopType iTween::loopType
	int32_t ___loopType_11;
	// System.Boolean iTween::isRunning
	bool ___isRunning_12;
	// System.Boolean iTween::isPaused
	bool ___isPaused_13;
	// System.String iTween::_name
	String_t* ____name_14;
	// System.Single iTween::runningTime
	float ___runningTime_15;
	// System.Single iTween::percentage
	float ___percentage_16;
	// System.Single iTween::delayStarted
	float ___delayStarted_17;
	// System.Boolean iTween::kinematic
	bool ___kinematic_18;
	// System.Boolean iTween::isLocal
	bool ___isLocal_19;
	// System.Boolean iTween::loop
	bool ___loop_20;
	// System.Boolean iTween::reverse
	bool ___reverse_21;
	// System.Boolean iTween::wasPaused
	bool ___wasPaused_22;
	// System.Boolean iTween::physics
	bool ___physics_23;
	// System.Collections.Hashtable iTween::tweenArguments
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___tweenArguments_24;
	// UnityEngine.Space iTween::space
	int32_t ___space_25;
	// iTween/EasingFunction iTween::ease
	EasingFunction_tF18C9A158889607A429ECF7BFEFC204E5D41D500 * ___ease_26;
	// iTween/ApplyTween iTween::apply
	ApplyTween_tC02BE78D922139D55C4223CBCCD337C142B7CA9B * ___apply_27;
	// UnityEngine.AudioSource iTween::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_28;
	// UnityEngine.Vector3[] iTween::vector3s
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___vector3s_29;
	// UnityEngine.Vector2[] iTween::vector2s
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___vector2s_30;
	// UnityEngine.Color[0...,0...] iTween::colors
	ColorU5BU2CU5D_t2A69031E1324100032C060CCDC143348C8EBAB4D* ___colors_31;
	// System.Single[] iTween::floats
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___floats_32;
	// UnityEngine.Rect[] iTween::rects
	RectU5BU5D_tD4F5052A6F89820365269FF4CA7C3EB1ACD4B1EE* ___rects_33;
	// iTween/CRSpline iTween::path
	CRSpline_t429347A25B9800EE44747924086632B4A5459E61 * ___path_34;
	// UnityEngine.Vector3 iTween::preUpdate
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___preUpdate_35;
	// UnityEngine.Vector3 iTween::postUpdate
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___postUpdate_36;
	// iTween/NamedValueColor iTween::namedcolorvalue
	int32_t ___namedcolorvalue_37;
	// System.Single iTween::lastRealTime
	float ___lastRealTime_38;
	// System.Boolean iTween::useRealTime
	bool ___useRealTime_39;
	// UnityEngine.Transform iTween::thisTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___thisTransform_40;

public:
	inline static int32_t get_offset_of_id_5() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___id_5)); }
	inline String_t* get_id_5() const { return ___id_5; }
	inline String_t** get_address_of_id_5() { return &___id_5; }
	inline void set_id_5(String_t* value)
	{
		___id_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_5), (void*)value);
	}

	inline static int32_t get_offset_of_type_6() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___type_6)); }
	inline String_t* get_type_6() const { return ___type_6; }
	inline String_t** get_address_of_type_6() { return &___type_6; }
	inline void set_type_6(String_t* value)
	{
		___type_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_6), (void*)value);
	}

	inline static int32_t get_offset_of_method_7() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___method_7)); }
	inline String_t* get_method_7() const { return ___method_7; }
	inline String_t** get_address_of_method_7() { return &___method_7; }
	inline void set_method_7(String_t* value)
	{
		___method_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_7), (void*)value);
	}

	inline static int32_t get_offset_of_easeType_8() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___easeType_8)); }
	inline int32_t get_easeType_8() const { return ___easeType_8; }
	inline int32_t* get_address_of_easeType_8() { return &___easeType_8; }
	inline void set_easeType_8(int32_t value)
	{
		___easeType_8 = value;
	}

	inline static int32_t get_offset_of_time_9() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___time_9)); }
	inline float get_time_9() const { return ___time_9; }
	inline float* get_address_of_time_9() { return &___time_9; }
	inline void set_time_9(float value)
	{
		___time_9 = value;
	}

	inline static int32_t get_offset_of_delay_10() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___delay_10)); }
	inline float get_delay_10() const { return ___delay_10; }
	inline float* get_address_of_delay_10() { return &___delay_10; }
	inline void set_delay_10(float value)
	{
		___delay_10 = value;
	}

	inline static int32_t get_offset_of_loopType_11() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___loopType_11)); }
	inline int32_t get_loopType_11() const { return ___loopType_11; }
	inline int32_t* get_address_of_loopType_11() { return &___loopType_11; }
	inline void set_loopType_11(int32_t value)
	{
		___loopType_11 = value;
	}

	inline static int32_t get_offset_of_isRunning_12() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___isRunning_12)); }
	inline bool get_isRunning_12() const { return ___isRunning_12; }
	inline bool* get_address_of_isRunning_12() { return &___isRunning_12; }
	inline void set_isRunning_12(bool value)
	{
		___isRunning_12 = value;
	}

	inline static int32_t get_offset_of_isPaused_13() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___isPaused_13)); }
	inline bool get_isPaused_13() const { return ___isPaused_13; }
	inline bool* get_address_of_isPaused_13() { return &___isPaused_13; }
	inline void set_isPaused_13(bool value)
	{
		___isPaused_13 = value;
	}

	inline static int32_t get_offset_of__name_14() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ____name_14)); }
	inline String_t* get__name_14() const { return ____name_14; }
	inline String_t** get_address_of__name_14() { return &____name_14; }
	inline void set__name_14(String_t* value)
	{
		____name_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_14), (void*)value);
	}

	inline static int32_t get_offset_of_runningTime_15() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___runningTime_15)); }
	inline float get_runningTime_15() const { return ___runningTime_15; }
	inline float* get_address_of_runningTime_15() { return &___runningTime_15; }
	inline void set_runningTime_15(float value)
	{
		___runningTime_15 = value;
	}

	inline static int32_t get_offset_of_percentage_16() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___percentage_16)); }
	inline float get_percentage_16() const { return ___percentage_16; }
	inline float* get_address_of_percentage_16() { return &___percentage_16; }
	inline void set_percentage_16(float value)
	{
		___percentage_16 = value;
	}

	inline static int32_t get_offset_of_delayStarted_17() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___delayStarted_17)); }
	inline float get_delayStarted_17() const { return ___delayStarted_17; }
	inline float* get_address_of_delayStarted_17() { return &___delayStarted_17; }
	inline void set_delayStarted_17(float value)
	{
		___delayStarted_17 = value;
	}

	inline static int32_t get_offset_of_kinematic_18() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___kinematic_18)); }
	inline bool get_kinematic_18() const { return ___kinematic_18; }
	inline bool* get_address_of_kinematic_18() { return &___kinematic_18; }
	inline void set_kinematic_18(bool value)
	{
		___kinematic_18 = value;
	}

	inline static int32_t get_offset_of_isLocal_19() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___isLocal_19)); }
	inline bool get_isLocal_19() const { return ___isLocal_19; }
	inline bool* get_address_of_isLocal_19() { return &___isLocal_19; }
	inline void set_isLocal_19(bool value)
	{
		___isLocal_19 = value;
	}

	inline static int32_t get_offset_of_loop_20() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___loop_20)); }
	inline bool get_loop_20() const { return ___loop_20; }
	inline bool* get_address_of_loop_20() { return &___loop_20; }
	inline void set_loop_20(bool value)
	{
		___loop_20 = value;
	}

	inline static int32_t get_offset_of_reverse_21() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___reverse_21)); }
	inline bool get_reverse_21() const { return ___reverse_21; }
	inline bool* get_address_of_reverse_21() { return &___reverse_21; }
	inline void set_reverse_21(bool value)
	{
		___reverse_21 = value;
	}

	inline static int32_t get_offset_of_wasPaused_22() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___wasPaused_22)); }
	inline bool get_wasPaused_22() const { return ___wasPaused_22; }
	inline bool* get_address_of_wasPaused_22() { return &___wasPaused_22; }
	inline void set_wasPaused_22(bool value)
	{
		___wasPaused_22 = value;
	}

	inline static int32_t get_offset_of_physics_23() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___physics_23)); }
	inline bool get_physics_23() const { return ___physics_23; }
	inline bool* get_address_of_physics_23() { return &___physics_23; }
	inline void set_physics_23(bool value)
	{
		___physics_23 = value;
	}

	inline static int32_t get_offset_of_tweenArguments_24() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___tweenArguments_24)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_tweenArguments_24() const { return ___tweenArguments_24; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_tweenArguments_24() { return &___tweenArguments_24; }
	inline void set_tweenArguments_24(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___tweenArguments_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenArguments_24), (void*)value);
	}

	inline static int32_t get_offset_of_space_25() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___space_25)); }
	inline int32_t get_space_25() const { return ___space_25; }
	inline int32_t* get_address_of_space_25() { return &___space_25; }
	inline void set_space_25(int32_t value)
	{
		___space_25 = value;
	}

	inline static int32_t get_offset_of_ease_26() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___ease_26)); }
	inline EasingFunction_tF18C9A158889607A429ECF7BFEFC204E5D41D500 * get_ease_26() const { return ___ease_26; }
	inline EasingFunction_tF18C9A158889607A429ECF7BFEFC204E5D41D500 ** get_address_of_ease_26() { return &___ease_26; }
	inline void set_ease_26(EasingFunction_tF18C9A158889607A429ECF7BFEFC204E5D41D500 * value)
	{
		___ease_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ease_26), (void*)value);
	}

	inline static int32_t get_offset_of_apply_27() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___apply_27)); }
	inline ApplyTween_tC02BE78D922139D55C4223CBCCD337C142B7CA9B * get_apply_27() const { return ___apply_27; }
	inline ApplyTween_tC02BE78D922139D55C4223CBCCD337C142B7CA9B ** get_address_of_apply_27() { return &___apply_27; }
	inline void set_apply_27(ApplyTween_tC02BE78D922139D55C4223CBCCD337C142B7CA9B * value)
	{
		___apply_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___apply_27), (void*)value);
	}

	inline static int32_t get_offset_of_audioSource_28() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___audioSource_28)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_28() const { return ___audioSource_28; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_28() { return &___audioSource_28; }
	inline void set_audioSource_28(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_28), (void*)value);
	}

	inline static int32_t get_offset_of_vector3s_29() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___vector3s_29)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_vector3s_29() const { return ___vector3s_29; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_vector3s_29() { return &___vector3s_29; }
	inline void set_vector3s_29(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___vector3s_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vector3s_29), (void*)value);
	}

	inline static int32_t get_offset_of_vector2s_30() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___vector2s_30)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_vector2s_30() const { return ___vector2s_30; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_vector2s_30() { return &___vector2s_30; }
	inline void set_vector2s_30(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___vector2s_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vector2s_30), (void*)value);
	}

	inline static int32_t get_offset_of_colors_31() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___colors_31)); }
	inline ColorU5BU2CU5D_t2A69031E1324100032C060CCDC143348C8EBAB4D* get_colors_31() const { return ___colors_31; }
	inline ColorU5BU2CU5D_t2A69031E1324100032C060CCDC143348C8EBAB4D** get_address_of_colors_31() { return &___colors_31; }
	inline void set_colors_31(ColorU5BU2CU5D_t2A69031E1324100032C060CCDC143348C8EBAB4D* value)
	{
		___colors_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colors_31), (void*)value);
	}

	inline static int32_t get_offset_of_floats_32() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___floats_32)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_floats_32() const { return ___floats_32; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_floats_32() { return &___floats_32; }
	inline void set_floats_32(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___floats_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___floats_32), (void*)value);
	}

	inline static int32_t get_offset_of_rects_33() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___rects_33)); }
	inline RectU5BU5D_tD4F5052A6F89820365269FF4CA7C3EB1ACD4B1EE* get_rects_33() const { return ___rects_33; }
	inline RectU5BU5D_tD4F5052A6F89820365269FF4CA7C3EB1ACD4B1EE** get_address_of_rects_33() { return &___rects_33; }
	inline void set_rects_33(RectU5BU5D_tD4F5052A6F89820365269FF4CA7C3EB1ACD4B1EE* value)
	{
		___rects_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rects_33), (void*)value);
	}

	inline static int32_t get_offset_of_path_34() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___path_34)); }
	inline CRSpline_t429347A25B9800EE44747924086632B4A5459E61 * get_path_34() const { return ___path_34; }
	inline CRSpline_t429347A25B9800EE44747924086632B4A5459E61 ** get_address_of_path_34() { return &___path_34; }
	inline void set_path_34(CRSpline_t429347A25B9800EE44747924086632B4A5459E61 * value)
	{
		___path_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_34), (void*)value);
	}

	inline static int32_t get_offset_of_preUpdate_35() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___preUpdate_35)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_preUpdate_35() const { return ___preUpdate_35; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_preUpdate_35() { return &___preUpdate_35; }
	inline void set_preUpdate_35(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___preUpdate_35 = value;
	}

	inline static int32_t get_offset_of_postUpdate_36() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___postUpdate_36)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_postUpdate_36() const { return ___postUpdate_36; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_postUpdate_36() { return &___postUpdate_36; }
	inline void set_postUpdate_36(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___postUpdate_36 = value;
	}

	inline static int32_t get_offset_of_namedcolorvalue_37() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___namedcolorvalue_37)); }
	inline int32_t get_namedcolorvalue_37() const { return ___namedcolorvalue_37; }
	inline int32_t* get_address_of_namedcolorvalue_37() { return &___namedcolorvalue_37; }
	inline void set_namedcolorvalue_37(int32_t value)
	{
		___namedcolorvalue_37 = value;
	}

	inline static int32_t get_offset_of_lastRealTime_38() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___lastRealTime_38)); }
	inline float get_lastRealTime_38() const { return ___lastRealTime_38; }
	inline float* get_address_of_lastRealTime_38() { return &___lastRealTime_38; }
	inline void set_lastRealTime_38(float value)
	{
		___lastRealTime_38 = value;
	}

	inline static int32_t get_offset_of_useRealTime_39() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___useRealTime_39)); }
	inline bool get_useRealTime_39() const { return ___useRealTime_39; }
	inline bool* get_address_of_useRealTime_39() { return &___useRealTime_39; }
	inline void set_useRealTime_39(bool value)
	{
		___useRealTime_39 = value;
	}

	inline static int32_t get_offset_of_thisTransform_40() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781, ___thisTransform_40)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_thisTransform_40() const { return ___thisTransform_40; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_thisTransform_40() { return &___thisTransform_40; }
	inline void set_thisTransform_40(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___thisTransform_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___thisTransform_40), (void*)value);
	}
};

struct iTween_t95300D70E560085F44AAEB18AF385AF38A945781_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.Collections.Hashtable> iTween::tweens
	List_1_t38F0D192849B37DF15B4CD534811FD98C322E0AA * ___tweens_4;

public:
	inline static int32_t get_offset_of_tweens_4() { return static_cast<int32_t>(offsetof(iTween_t95300D70E560085F44AAEB18AF385AF38A945781_StaticFields, ___tweens_4)); }
	inline List_1_t38F0D192849B37DF15B4CD534811FD98C322E0AA * get_tweens_4() const { return ___tweens_4; }
	inline List_1_t38F0D192849B37DF15B4CD534811FD98C322E0AA ** get_address_of_tweens_4() { return &___tweens_4; }
	inline void set_tweens_4(List_1_t38F0D192849B37DF15B4CD534811FD98C322E0AA * value)
	{
		___tweens_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweens_4), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, const RuntimeMethod* method);
// System.Void iTween::TweenStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iTween_TweenStart_mB8C55F9D3EC87D6FF593D3492B792D95EC1A5639 (iTween_t95300D70E560085F44AAEB18AF385AF38A945781 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803 (RuntimeArray * ___sourceArray0, RuntimeArray * ___destinationArray1, int32_t ___length2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E (float ___f0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519 (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void iTween/<Start>d__229::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__229__ctor_m8F24D3D40555E13FE34CB70A98E9952CC8E7253C (U3CStartU3Ed__229_t210BF015B3C6AAC89B9D2E49350BF871E003E2C9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void iTween/<Start>d__229::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__229_System_IDisposable_Dispose_m92134A039174A87DC7E0C916D59BEB4514C6E748 (U3CStartU3Ed__229_t210BF015B3C6AAC89B9D2E49350BF871E003E2C9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean iTween/<Start>d__229::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__229_MoveNext_mC6859319A54536C509DD731D34005CCF3CCE94FB (U3CStartU3Ed__229_t210BF015B3C6AAC89B9D2E49350BF871E003E2C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0658EBD7117F5F9DCFBFF0FBF0210D62373F387);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	iTween_t95300D70E560085F44AAEB18AF385AF38A945781 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		iTween_t95300D70E560085F44AAEB18AF385AF38A945781 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0045;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if(delay > 0){
		iTween_t95300D70E560085F44AAEB18AF385AF38A945781 * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get_delay_10();
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			goto IL_004c;
		}
	}
	{
		// yield return StartCoroutine("TweenDelay");
		iTween_t95300D70E560085F44AAEB18AF385AF38A945781 * L_6 = V_1;
		NullCheck(L_6);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_7;
		L_7 = MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E(L_6, _stringLiteralB0658EBD7117F5F9DCFBFF0FBF0210D62373F387, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0045:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_004c:
	{
		// TweenStart();
		iTween_t95300D70E560085F44AAEB18AF385AF38A945781 * L_8 = V_1;
		NullCheck(L_8);
		iTween_TweenStart_mB8C55F9D3EC87D6FF593D3492B792D95EC1A5639(L_8, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object iTween/<Start>d__229::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__229_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBB88335678E7D81E793223A00AFBDEAA09F1C766 (U3CStartU3Ed__229_t210BF015B3C6AAC89B9D2E49350BF871E003E2C9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void iTween/<Start>d__229::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__229_System_Collections_IEnumerator_Reset_m9F25413A5951DD398188178C039616261591C965 (U3CStartU3Ed__229_t210BF015B3C6AAC89B9D2E49350BF871E003E2C9 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__229_System_Collections_IEnumerator_Reset_m9F25413A5951DD398188178C039616261591C965_RuntimeMethod_var)));
	}
}
// System.Object iTween/<Start>d__229::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__229_System_Collections_IEnumerator_get_Current_mE7829016E3C50439BC065BBD81118C9DC30DDECE (U3CStartU3Ed__229_t210BF015B3C6AAC89B9D2E49350BF871E003E2C9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void iTween/<TweenDelay>d__145::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTweenDelayU3Ed__145__ctor_m6C0427191B5A024C4774941632A489AA7A234F2C (U3CTweenDelayU3Ed__145_tDFD7668C11AACDF79728F0A6B35B38A97E2AD599 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void iTween/<TweenDelay>d__145::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTweenDelayU3Ed__145_System_IDisposable_Dispose_m3F20E4668261A583595CD339AA201CE0C25FECA5 (U3CTweenDelayU3Ed__145_tDFD7668C11AACDF79728F0A6B35B38A97E2AD599 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean iTween/<TweenDelay>d__145::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTweenDelayU3Ed__145_MoveNext_mD7D795C897A544BD2E38FA561FEE2B99DFADB7D8 (U3CTweenDelayU3Ed__145_tDFD7668C11AACDF79728F0A6B35B38A97E2AD599 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	iTween_t95300D70E560085F44AAEB18AF385AF38A945781 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		iTween_t95300D70E560085F44AAEB18AF385AF38A945781 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0043;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// delayStarted = Time.time;
		iTween_t95300D70E560085F44AAEB18AF385AF38A945781 * L_4 = V_1;
		float L_5;
		L_5 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_delayStarted_17(L_5);
		// yield return new WaitForSeconds (delay);
		iTween_t95300D70E560085F44AAEB18AF385AF38A945781 * L_6 = V_1;
		NullCheck(L_6);
		float L_7 = L_6->get_delay_10();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_8 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_8, L_7, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0043:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if(wasPaused){
		iTween_t95300D70E560085F44AAEB18AF385AF38A945781 * L_9 = V_1;
		NullCheck(L_9);
		bool L_10 = L_9->get_wasPaused_22();
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		// wasPaused=false;
		iTween_t95300D70E560085F44AAEB18AF385AF38A945781 * L_11 = V_1;
		NullCheck(L_11);
		L_11->set_wasPaused_22((bool)0);
		// TweenStart();
		iTween_t95300D70E560085F44AAEB18AF385AF38A945781 * L_12 = V_1;
		NullCheck(L_12);
		iTween_TweenStart_mB8C55F9D3EC87D6FF593D3492B792D95EC1A5639(L_12, /*hidden argument*/NULL);
	}

IL_005f:
	{
		// }
		return (bool)0;
	}
}
// System.Object iTween/<TweenDelay>d__145::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTweenDelayU3Ed__145_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m66DFFBE807362719FC5EEA972B4E7D6C319C8783 (U3CTweenDelayU3Ed__145_tDFD7668C11AACDF79728F0A6B35B38A97E2AD599 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void iTween/<TweenDelay>d__145::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTweenDelayU3Ed__145_System_Collections_IEnumerator_Reset_mD4024FC45843B807A7B51CE2A00E9F53FE218F9F (U3CTweenDelayU3Ed__145_tDFD7668C11AACDF79728F0A6B35B38A97E2AD599 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTweenDelayU3Ed__145_System_Collections_IEnumerator_Reset_mD4024FC45843B807A7B51CE2A00E9F53FE218F9F_RuntimeMethod_var)));
	}
}
// System.Object iTween/<TweenDelay>d__145::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTweenDelayU3Ed__145_System_Collections_IEnumerator_get_Current_m85FD8B9C06CA1F6E6A1BF1FCDBBF6BE7101C445E (U3CTweenDelayU3Ed__145_tDFD7668C11AACDF79728F0A6B35B38A97E2AD599 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void iTween/<TweenRestart>d__147::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTweenRestartU3Ed__147__ctor_mE08EE7BA4F930D67013395AFC84437EE8C16FA30 (U3CTweenRestartU3Ed__147_t9FEDF04F43FD04D6D48FA47101B41825BDF790C0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void iTween/<TweenRestart>d__147::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTweenRestartU3Ed__147_System_IDisposable_Dispose_m3AFDF686D9437F1FF3F454554C03CB34DB964CC8 (U3CTweenRestartU3Ed__147_t9FEDF04F43FD04D6D48FA47101B41825BDF790C0 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean iTween/<TweenRestart>d__147::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTweenRestartU3Ed__147_MoveNext_mD5C70D05B296626FC05CF769E1BA1230F04A0CF3 (U3CTweenRestartU3Ed__147_t9FEDF04F43FD04D6D48FA47101B41825BDF790C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	iTween_t95300D70E560085F44AAEB18AF385AF38A945781 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		iTween_t95300D70E560085F44AAEB18AF385AF38A945781 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0050;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if(delay > 0){
		iTween_t95300D70E560085F44AAEB18AF385AF38A945781 * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get_delay_10();
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			goto IL_0057;
		}
	}
	{
		// delayStarted = Time.time;
		iTween_t95300D70E560085F44AAEB18AF385AF38A945781 * L_6 = V_1;
		float L_7;
		L_7 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_delayStarted_17(L_7);
		// yield return new WaitForSeconds (delay);
		iTween_t95300D70E560085F44AAEB18AF385AF38A945781 * L_8 = V_1;
		NullCheck(L_8);
		float L_9 = L_8->get_delay_10();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_10 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_10, L_9, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0050:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0057:
	{
		// loop=true;
		iTween_t95300D70E560085F44AAEB18AF385AF38A945781 * L_11 = V_1;
		NullCheck(L_11);
		L_11->set_loop_20((bool)1);
		// TweenStart();
		iTween_t95300D70E560085F44AAEB18AF385AF38A945781 * L_12 = V_1;
		NullCheck(L_12);
		iTween_TweenStart_mB8C55F9D3EC87D6FF593D3492B792D95EC1A5639(L_12, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object iTween/<TweenRestart>d__147::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTweenRestartU3Ed__147_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m65EE627CEAB996B19BE26607B6D52A46F388004C (U3CTweenRestartU3Ed__147_t9FEDF04F43FD04D6D48FA47101B41825BDF790C0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void iTween/<TweenRestart>d__147::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTweenRestartU3Ed__147_System_Collections_IEnumerator_Reset_m28032EE62D571A8BDC9F10AA14F62D3185D9C62A (U3CTweenRestartU3Ed__147_t9FEDF04F43FD04D6D48FA47101B41825BDF790C0 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTweenRestartU3Ed__147_System_Collections_IEnumerator_Reset_m28032EE62D571A8BDC9F10AA14F62D3185D9C62A_RuntimeMethod_var)));
	}
}
// System.Object iTween/<TweenRestart>d__147::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTweenRestartU3Ed__147_System_Collections_IEnumerator_get_Current_mD7648EFD7A1D5EDA8112F7C20B9D969C92CFC078 (U3CTweenRestartU3Ed__147_t9FEDF04F43FD04D6D48FA47101B41825BDF790C0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ApplyTween_tC02BE78D922139D55C4223CBCCD337C142B7CA9B (ApplyTween_tC02BE78D922139D55C4223CBCCD337C142B7CA9B * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void iTween/ApplyTween::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplyTween__ctor_m8F86E936234E32ADD96D31BFDC92A7DAE1E474BA (ApplyTween_tC02BE78D922139D55C4223CBCCD337C142B7CA9B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void iTween/ApplyTween::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplyTween_Invoke_m6E38C54B424B207CC6F7C023DE067E65D2F1924C (ApplyTween_tC02BE78D922139D55C4223CBCCD337C142B7CA9B * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult iTween/ApplyTween::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ApplyTween_BeginInvoke_m9AD9948C0FC0215D1C5AC6C5F845B5290A81C3CD (ApplyTween_tC02BE78D922139D55C4223CBCCD337C142B7CA9B * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void iTween/ApplyTween::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplyTween_EndInvoke_m2215CED0B51051B1996B7447D8B4C0AC60A06C41 (ApplyTween_tC02BE78D922139D55C4223CBCCD337C142B7CA9B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void iTween/CRSpline::.ctor(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRSpline__ctor_m3D2F6425CEAB4906A9EC33BC126782A7EC3AB813 (CRSpline_t429347A25B9800EE44747924086632B4A5459E61 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___pts0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public CRSpline(params Vector3[] pts) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.pts = new Vector3[pts.Length];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = ___pts0;
		NullCheck(L_0);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		__this->set_pts_0(L_1);
		// Array.Copy(pts, this.pts, pts.Length);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_2 = ___pts0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_3 = __this->get_pts_0();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_4 = ___pts0;
		NullCheck(L_4);
		Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803((RuntimeArray *)(RuntimeArray *)L_2, (RuntimeArray *)(RuntimeArray *)L_3, ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 iTween/CRSpline::Interp(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CRSpline_Interp_m72A3614CCB884C11C14104FF410087CCA0795C54 (CRSpline_t429347A25B9800EE44747924086632B4A5459E61 * __this, float ___t0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// int numSections = pts.Length - 3;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = __this->get_pts_0();
		NullCheck(L_0);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), (int32_t)3));
		// int currPt = Mathf.Min(Mathf.FloorToInt(t * (float) numSections), numSections - 1);
		float L_1 = ___t0;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(((float)il2cpp_codegen_multiply((float)L_1, (float)((float)((float)L_2)))), /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(L_3, ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_5;
		// float u = t * (float) numSections - (float) currPt;
		float L_6 = ___t0;
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		V_2 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_6, (float)((float)((float)L_7)))), (float)((float)((float)L_8))));
		// Vector3 a = pts[currPt];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_9 = __this->get_pts_0();
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		// Vector3 b = pts[currPt + 1];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_13 = __this->get_pts_0();
		int32_t L_14 = V_1;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_4 = L_16;
		// Vector3 c = pts[currPt + 2];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_17 = __this->get_pts_0();
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)2));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_5 = L_20;
		// Vector3 d = pts[currPt + 3];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_21 = __this->get_pts_0();
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)3));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_6 = L_24;
		// return .5f*((-a+3f*b-3f*c+d)*(u*u*u)+(2f*a-5f*b+4f*c-d)*(u*u)+(-a+c)*u+2f*b);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_25, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline((3.0f), L_27, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_26, L_28, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline((3.0f), L_30, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_29, L_31, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_32, L_33, /*hidden argument*/NULL);
		float L_35 = V_2;
		float L_36 = V_2;
		float L_37 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_34, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_35, (float)L_36)), (float)L_37)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline((2.0f), L_39, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline((5.0f), L_41, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_40, L_42, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline((4.0f), L_44, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_43, L_45, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_46, L_47, /*hidden argument*/NULL);
		float L_49 = V_2;
		float L_50 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		L_51 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_48, ((float)il2cpp_codegen_multiply((float)L_49, (float)L_50)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_38, L_51, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		L_54 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_53, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56;
		L_56 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_54, L_55, /*hidden argument*/NULL);
		float L_57 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58;
		L_58 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_56, L_57, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59;
		L_59 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_52, L_58, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline((2.0f), L_60, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
		L_62 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_59, L_61, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		L_63 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline((0.5f), L_62, /*hidden argument*/NULL);
		return L_63;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void iTween/Defaults::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Defaults__cctor_mE5CA6AF2AFA40737EE9ACD683F6D8925351E177C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float time = 1f;
		((Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_il2cpp_TypeInfo_var))->set_time_0((1.0f));
		// public static float delay = 0f;
		((Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_il2cpp_TypeInfo_var))->set_delay_1((0.0f));
		// public static NamedValueColor namedColorValue = NamedValueColor._Color;
		((Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_il2cpp_TypeInfo_var))->set_namedColorValue_2(0);
		// public static LoopType loopType = LoopType.none;
		((Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_il2cpp_TypeInfo_var))->set_loopType_3(0);
		// public static EaseType easeType = iTween.EaseType.easeOutExpo;
		((Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_il2cpp_TypeInfo_var))->set_easeType_4(((int32_t)16));
		// public static float lookSpeed = 3f;
		((Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_il2cpp_TypeInfo_var))->set_lookSpeed_5((3.0f));
		// public static bool isLocal = false;
		((Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_il2cpp_TypeInfo_var))->set_isLocal_6((bool)0);
		// public static Space space = Space.Self;
		((Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_il2cpp_TypeInfo_var))->set_space_7(1);
		// public static bool orientToPath = false;
		((Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_il2cpp_TypeInfo_var))->set_orientToPath_8((bool)0);
		// public static Color color = Color.white;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		((Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_il2cpp_TypeInfo_var))->set_color_9(L_0);
		// public static float updateTimePercentage = .05f;
		((Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_il2cpp_TypeInfo_var))->set_updateTimePercentage_10((0.0500000007f));
		// public static float updateTime = 1f*updateTimePercentage;
		float L_1 = ((Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_il2cpp_TypeInfo_var))->get_updateTimePercentage_10();
		((Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_il2cpp_TypeInfo_var))->set_updateTime_11(((float)il2cpp_codegen_multiply((float)(1.0f), (float)L_1)));
		// public static float lookAhead = .05f;
		((Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_il2cpp_TypeInfo_var))->set_lookAhead_12((0.0500000007f));
		// public static bool useRealTime = false; // Added by PressPlay
		((Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_il2cpp_TypeInfo_var))->set_useRealTime_13((bool)0);
		// public static Vector3 up = Vector3.up;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		((Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tF3827DFA42F09A2712BAFA27F71CBF5E8E2BD3BF_il2cpp_TypeInfo_var))->set_up_14(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  float DelegatePInvokeWrapper_EasingFunction_tF18C9A158889607A429ECF7BFEFC204E5D41D500 (EasingFunction_tF18C9A158889607A429ECF7BFEFC204E5D41D500 * __this, float ___start0, float ___end1, float ___Value2, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc)(float, float, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	float returnValue = il2cppPInvokeFunc(___start0, ___end1, ___Value2);

	return returnValue;
}
// System.Void iTween/EasingFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasingFunction__ctor_m4A84FB7503F0246A6879EB416088047BAE5E56B4 (EasingFunction_tF18C9A158889607A429ECF7BFEFC204E5D41D500 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Single iTween/EasingFunction::Invoke(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EasingFunction_Invoke_m7127272210B26B1B52705AFA6E28073E4B18D46A (EasingFunction_tF18C9A158889607A429ECF7BFEFC204E5D41D500 * __this, float ___start0, float ___end1, float ___Value2, const RuntimeMethod* method)
{
	float result = 0.0f;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef float (*FunctionPointerType) (float, float, float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___start0, ___end1, ___Value2, targetMethod);
			}
			else
			{
				// closed
				typedef float (*FunctionPointerType) (void*, float, float, float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___start0, ___end1, ___Value2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< float, float, float, float >::Invoke(targetMethod, targetThis, ___start0, ___end1, ___Value2);
					else
						result = GenericVirtFuncInvoker3< float, float, float, float >::Invoke(targetMethod, targetThis, ___start0, ___end1, ___Value2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< float, float, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___start0, ___end1, ___Value2);
					else
						result = VirtFuncInvoker3< float, float, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___start0, ___end1, ___Value2);
				}
			}
			else
			{
				typedef float (*FunctionPointerType) (void*, float, float, float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___start0, ___end1, ___Value2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult iTween/EasingFunction::BeginInvoke(System.Single,System.Single,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EasingFunction_BeginInvoke_mDD565ABAFDB7CED147DC0D963B6658F651BF93A1 (EasingFunction_tF18C9A158889607A429ECF7BFEFC204E5D41D500 * __this, float ___start0, float ___end1, float ___Value2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___start0);
	__d_args[1] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___end1);
	__d_args[2] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___Value2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Single iTween/EasingFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EasingFunction_EndInvoke_mE53BA1AA6E1380482DB0A23E38CD1BE72037661A (EasingFunction_tF18C9A158889607A429ECF7BFEFC204E5D41D500 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(float*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a1;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a1;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a1;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
