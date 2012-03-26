/*
 *	server/zone/objects/area/CampSiteObserver.h generated by engine3 IDL compiler 0.60
 */

#ifndef CAMPSITEOBSERVER_H_
#define CAMPSITEOBSERVER_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

#include "server/zone/objects/area/CampSiteActiveArea.h"

#include "server/zone/objects/scene/ObserverEventType.h"

#include "engine/util/Observer.h"

#include "engine/util/Observable.h"

namespace server {
namespace zone {
namespace objects {
namespace area {

class CampSiteObserver : public Observer {
public:
	CampSiteObserver(CampSiteActiveArea* area);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	CampSiteObserver(DummyConstructorParameter* param);

	virtual ~CampSiteObserver();

	friend class CampSiteObserverHelper;
};

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

namespace server {
namespace zone {
namespace objects {
namespace area {

class CampSiteObserverImplementation : public ObserverImplementation, public Logger {
protected:
	ManagedWeakReference<CampSiteActiveArea* > campArea;

public:
	CampSiteObserverImplementation(CampSiteActiveArea* area);

	CampSiteObserverImplementation(DummyConstructorParameter* param);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	WeakReference<CampSiteObserver*> _this;

	operator const CampSiteObserver*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~CampSiteObserverImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();
	bool readObjectMember(ObjectInputStream* stream, const String& name);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class CampSiteObserver;
};

class CampSiteObserverAdapter : public ObserverAdapter {
public:
	CampSiteObserverAdapter(CampSiteObserver* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

};

class CampSiteObserverHelper : public DistributedObjectClassHelper, public Singleton<CampSiteObserverHelper> {
	static CampSiteObserverHelper* staticInitializer;

public:
	CampSiteObserverHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<CampSiteObserverHelper>;
};

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

#endif /*CAMPSITEOBSERVER_H_*/
