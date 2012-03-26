/*
 *	server/zone/objects/player/sui/messagebox/SuiMessageBox.h generated by engine3 IDL compiler 0.60
 */

#ifndef SUIMESSAGEBOX_H_
#define SUIMESSAGEBOX_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

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
namespace objects {
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

#include "server/zone/packets/ui/SuiCreatePageMessage.h"

#include "engine/lua/LuaObject.h"

#include "engine/service/proto/BaseMessage.h"

#include "server/zone/objects/player/sui/SuiBox.h"

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sui {
namespace messagebox {

class SuiMessageBox : public SuiBox {
public:
	SuiMessageBox(CreatureObject* player, unsigned int windowType);

	BaseMessage* generateMessage();

	bool isMessageBox();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	SuiMessageBox(DummyConstructorParameter* param);

	virtual ~SuiMessageBox();

	friend class SuiMessageBoxHelper;
};

} // namespace messagebox
} // namespace sui
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sui::messagebox;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sui {
namespace messagebox {

class SuiMessageBoxImplementation : public SuiBoxImplementation {

public:
	SuiMessageBoxImplementation(CreatureObject* player, unsigned int windowType);

	SuiMessageBoxImplementation(DummyConstructorParameter* param);

	BaseMessage* generateMessage();

	bool isMessageBox();

	WeakReference<SuiMessageBox*> _this;

	operator const SuiMessageBox*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~SuiMessageBoxImplementation();

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

	friend class SuiMessageBox;
};

class SuiMessageBoxAdapter : public SuiBoxAdapter {
public:
	SuiMessageBoxAdapter(SuiMessageBox* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	BaseMessage* generateMessage();

	bool isMessageBox();

};

class SuiMessageBoxHelper : public DistributedObjectClassHelper, public Singleton<SuiMessageBoxHelper> {
	static SuiMessageBoxHelper* staticInitializer;

public:
	SuiMessageBoxHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<SuiMessageBoxHelper>;
};

} // namespace messagebox
} // namespace sui
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sui::messagebox;

#endif /*SUIMESSAGEBOX_H_*/
