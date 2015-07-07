/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2013 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This code is generated, do not edit by hand. **/

#include "ro.mihaiblaga.imei.ImeiModule.h"

#include "AndroidUtil.h"
#include "EventEmitter.h"
#include "JNIUtil.h"
#include "JSException.h"
#include "Proxy.h"
#include "ProxyFactory.h"
#include "TypeConverter.h"
#include "V8Util.h"



#include "ro.mihaiblaga.imei.ExampleProxy.h"

#include "org.appcelerator.kroll.KrollModule.h"

#define TAG "ImeiModule"

using namespace v8;

		namespace ro {
		namespace mihaiblaga {
		namespace imei {


Persistent<FunctionTemplate> ImeiModule::proxyTemplate = Persistent<FunctionTemplate>();
jclass ImeiModule::javaClass = NULL;

ImeiModule::ImeiModule(jobject javaObject) : titanium::Proxy(javaObject)
{
}

void ImeiModule::bindProxy(Handle<Object> exports)
{
	if (proxyTemplate.IsEmpty()) {
		getProxyTemplate();
	}

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("Imei");

	Local<Function> proxyConstructor = proxyTemplate->GetFunction();
	Local<Object> moduleInstance = proxyConstructor->NewInstance();
	exports->Set(nameSymbol, moduleInstance);
}

void ImeiModule::dispose()
{
	LOGD(TAG, "dispose()");
	if (!proxyTemplate.IsEmpty()) {
		proxyTemplate.Dispose();
		proxyTemplate = Persistent<FunctionTemplate>();
	}

	titanium::KrollModule::dispose();
}

Handle<FunctionTemplate> ImeiModule::getProxyTemplate()
{
	if (!proxyTemplate.IsEmpty()) {
		return proxyTemplate;
	}

	LOGD(TAG, "GetProxyTemplate");

	javaClass = titanium::JNIUtil::findClass("ro/mihaiblaga/imei/ImeiModule");
	HandleScope scope;

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("Imei");

	Handle<FunctionTemplate> t = titanium::Proxy::inheritProxyTemplate(
		titanium::KrollModule::getProxyTemplate()
, javaClass, nameSymbol);

	proxyTemplate = Persistent<FunctionTemplate>::New(t);
	proxyTemplate->Set(titanium::Proxy::inheritSymbol,
		FunctionTemplate::New(titanium::Proxy::inherit<ImeiModule>)->GetFunction());

	titanium::ProxyFactory::registerProxyPair(javaClass, *proxyTemplate);

	// Method bindings --------------------------------------------------------
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "isDateAutomatic", ImeiModule::isDateAutomatic);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "getImei", ImeiModule::getImei);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "example", ImeiModule::example);

	Local<ObjectTemplate> prototypeTemplate = proxyTemplate->PrototypeTemplate();
	Local<ObjectTemplate> instanceTemplate = proxyTemplate->InstanceTemplate();

	// Delegate indexed property get and set to the Java proxy.
	instanceTemplate->SetIndexedPropertyHandler(titanium::Proxy::getIndexedProperty,
		titanium::Proxy::setIndexedProperty);

	// Constants --------------------------------------------------------------

	// Dynamic properties -----------------------------------------------------
	instanceTemplate->SetAccessor(String::NewSymbol("exampleProp"),
			ImeiModule::getter_exampleProp
			, ImeiModule::setter_exampleProp
, Handle<Value>(), DEFAULT);

	// Accessors --------------------------------------------------------------

	return proxyTemplate;
}

// Methods --------------------------------------------------------------------
Handle<Value> ImeiModule::isDateAutomatic(const Arguments& args)
{
	LOGD(TAG, "isDateAutomatic()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ImeiModule::javaClass, "isDateAutomatic", "()Ljava/lang/Integer;");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'isDateAutomatic' with signature '()Ljava/lang/Integer;'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jobject jResult = (jobject)env->CallObjectMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Handle<Value> jsException = titanium::JSException::fromJavaException();
		env->ExceptionClear();
		return jsException;
	}

	if (jResult == NULL) {
		return Null();
	}

	Handle<Value> v8Result = titanium::TypeConverter::javaObjectToJsValue(env, jResult);

	env->DeleteLocalRef(jResult);


	return v8Result;

}
Handle<Value> ImeiModule::getImei(const Arguments& args)
{
	LOGD(TAG, "getImei()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ImeiModule::javaClass, "getImei", "()Ljava/lang/String;");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getImei' with signature '()Ljava/lang/String;'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jstring jResult = (jstring)env->CallObjectMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Handle<Value> jsException = titanium::JSException::fromJavaException();
		env->ExceptionClear();
		return jsException;
	}

	if (jResult == NULL) {
		return Null();
	}

	Handle<Value> v8Result = titanium::TypeConverter::javaStringToJsString(env, jResult);

	env->DeleteLocalRef(jResult);


	return v8Result;

}
Handle<Value> ImeiModule::example(const Arguments& args)
{
	LOGD(TAG, "example()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ImeiModule::javaClass, "example", "()Ljava/lang/String;");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'example' with signature '()Ljava/lang/String;'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jstring jResult = (jstring)env->CallObjectMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Handle<Value> jsException = titanium::JSException::fromJavaException();
		env->ExceptionClear();
		return jsException;
	}

	if (jResult == NULL) {
		return Null();
	}

	Handle<Value> v8Result = titanium::TypeConverter::javaStringToJsString(env, jResult);

	env->DeleteLocalRef(jResult);


	return v8Result;

}

// Dynamic property accessors -------------------------------------------------

Handle<Value> ImeiModule::getter_exampleProp(Local<String> property, const AccessorInfo& info)
{
	LOGD(TAG, "get exampleProp");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ImeiModule::javaClass, "getExampleProp", "()Ljava/lang/String;");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getExampleProp' with signature '()Ljava/lang/String;'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(info.Holder());

	if (!proxy) {
		return Undefined();
	}

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jstring jResult = (jstring)env->CallObjectMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Handle<Value> jsException = titanium::JSException::fromJavaException();
		env->ExceptionClear();
		return jsException;
	}

	if (jResult == NULL) {
		return Null();
	}

	Handle<Value> v8Result = titanium::TypeConverter::javaStringToJsString(env, jResult);

	env->DeleteLocalRef(jResult);


	return v8Result;

}

void ImeiModule::setter_exampleProp(Local<String> property, Local<Value> value, const AccessorInfo& info)
{
	LOGD(TAG, "set exampleProp");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment, exampleProp wasn't set");
		return;
	}

	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ImeiModule::javaClass, "setExampleProp", "(Ljava/lang/String;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setExampleProp' with signature '(Ljava/lang/String;)V'";
			LOGE(TAG, error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(info.Holder());
	if (!proxy) {
		return;
	}

	jvalue jArguments[1];

	
	
	if (!value->IsNull()) {
		Local<Value> arg_0 = value;
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaString(env, arg_0);
	} else {
		jArguments[0].l = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



				env->DeleteLocalRef(jArguments[0].l);


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




}



		} // imei
		} // mihaiblaga
		} // ro
