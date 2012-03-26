/*
 *	server/zone/objects/tangible/wearables/ClothingObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef CLOTHINGOBJECT_H_
#define CLOTHINGOBJECT_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "server/zone/objects/manufactureschematic/craftingvalues/CraftingValues.h"

#include "server/zone/objects/tangible/wearables/WearableObject.h"

#include "engine/lua/LuaObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace wearables {

class ClothingObject : public WearableObject {
public:
	ClothingObject();

	void initializeTransientMembers();

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	ClothingObject(DummyConstructorParameter* param);

	virtual ~ClothingObject();

	friend class ClothingObjectHelper;
};

} // namespace wearables
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::wearables;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace wearables {

class ClothingObjectImplementation : public WearableObjectImplementation {

public:
	ClothingObjectImplementation();

	ClothingObjectImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	WeakReference<ClothingObject*> _this;

	operator const ClothingObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~ClothingObjectImplementation();

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

	friend class ClothingObject;
};

class ClothingObjectAdapter : public WearableObjectAdapter {
public:
	ClothingObjectAdapter(ClothingObject* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

};

class ClothingObjectHelper : public DistributedObjectClassHelper, public Singleton<ClothingObjectHelper> {
	static ClothingObjectHelper* staticInitializer;

public:
	ClothingObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ClothingObjectHelper>;
};

} // namespace wearables
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::wearables;

#endif /*CLOTHINGOBJECT_H_*/
