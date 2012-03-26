/*
 *	server/zone/objects/tangible/tool/CraftingStation.cpp generated by engine3 IDL compiler 0.60
 */

#include "CraftingStation.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/templates/SharedObjectTemplate.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	CraftingStationStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6,RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_SENDINPUTHOPPER__CREATUREOBJECT_,RPC_ISCRAFTINGSTATION__,RPC_GETCOMPLEXITYLEVEL__,RPC_GETSTATIONTYPE__,RPC_SETCOMPLEXITYLEVEL__INT_,RPC_FINDCRAFTINGTOOL__CREATUREOBJECT_,RPC_CREATECHILDOBJECTS__};

CraftingStation::CraftingStation() : ToolTangibleObject(DummyConstructorParameter::instance()) {
	CraftingStationImplementation* _implementation = new CraftingStationImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("CraftingStation");
}

CraftingStation::CraftingStation(DummyConstructorParameter* param) : ToolTangibleObject(param) {
	_setClassName("CraftingStation");
}

CraftingStation::~CraftingStation() {
}



void CraftingStation::initializeTransientMembers() {
	CraftingStationImplementation* _implementation = static_cast<CraftingStationImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void CraftingStation::loadTemplateData(SharedObjectTemplate* templateData) {
	CraftingStationImplementation* _implementation = static_cast<CraftingStationImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

void CraftingStation::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player) {
	CraftingStationImplementation* _implementation = static_cast<CraftingStationImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillObjectMenuResponse(menuResponse, player);
}

int CraftingStation::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	CraftingStationImplementation* _implementation = static_cast<CraftingStationImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->handleObjectMenuSelect(player, selectedID);
}

void CraftingStation::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	CraftingStationImplementation* _implementation = static_cast<CraftingStationImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillAttributeList(msg, object);
}

void CraftingStation::sendInputHopper(CreatureObject* player) {
	CraftingStationImplementation* _implementation = static_cast<CraftingStationImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDINPUTHOPPER__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendInputHopper(player);
}

void CraftingStation::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	CraftingStationImplementation* _implementation = static_cast<CraftingStationImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->updateCraftingValues(values, firstUpdate);
}

bool CraftingStation::isCraftingStation() {
	CraftingStationImplementation* _implementation = static_cast<CraftingStationImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISCRAFTINGSTATION__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isCraftingStation();
}

int CraftingStation::getComplexityLevel() {
	CraftingStationImplementation* _implementation = static_cast<CraftingStationImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETCOMPLEXITYLEVEL__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getComplexityLevel();
}

int CraftingStation::getStationType() {
	CraftingStationImplementation* _implementation = static_cast<CraftingStationImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSTATIONTYPE__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getStationType();
}

void CraftingStation::setComplexityLevel(int level) {
	CraftingStationImplementation* _implementation = static_cast<CraftingStationImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETCOMPLEXITYLEVEL__INT_);
		method.addSignedIntParameter(level);

		method.executeWithVoidReturn();
	} else
		_implementation->setComplexityLevel(level);
}

SceneObject* CraftingStation::findCraftingTool(CreatureObject* player) {
	CraftingStationImplementation* _implementation = static_cast<CraftingStationImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_FINDCRAFTINGTOOL__CREATUREOBJECT_);
		method.addObjectParameter(player);

		return static_cast<SceneObject*>(method.executeWithObjectReturn());
	} else
		return _implementation->findCraftingTool(player);
}

void CraftingStation::createChildObjects() {
	CraftingStationImplementation* _implementation = static_cast<CraftingStationImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CREATECHILDOBJECTS__);

		method.executeWithVoidReturn();
	} else
		_implementation->createChildObjects();
}

DistributedObjectServant* CraftingStation::_getImplementation() {

	_updated = true;
	return _impl;
}

void CraftingStation::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	CraftingStationImplementation
 */

CraftingStationImplementation::CraftingStationImplementation(DummyConstructorParameter* param) : ToolTangibleObjectImplementation(param) {
	_initializeImplementation();
}


CraftingStationImplementation::~CraftingStationImplementation() {
}


void CraftingStationImplementation::finalize() {
}

void CraftingStationImplementation::_initializeImplementation() {
	_setClassHelper(CraftingStationHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void CraftingStationImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<CraftingStation*>(stub);
	ToolTangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* CraftingStationImplementation::_getStub() {
	return _this;
}

CraftingStationImplementation::operator const CraftingStation*() {
	return _this;
}

void CraftingStationImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void CraftingStationImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void CraftingStationImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void CraftingStationImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void CraftingStationImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void CraftingStationImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void CraftingStationImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void CraftingStationImplementation::_serializationHelperMethod() {
	ToolTangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("CraftingStation");

}

void CraftingStationImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(CraftingStationImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool CraftingStationImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ToolTangibleObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "CraftingStation.type") {
		TypeInfo<int >::parseFromBinaryStream(&type, stream);
		return true;
	}

	if (_name == "CraftingStation.effectiveness") {
		TypeInfo<float >::parseFromBinaryStream(&effectiveness, stream);
		return true;
	}

	if (_name == "CraftingStation.complexityLevel") {
		TypeInfo<int >::parseFromBinaryStream(&complexityLevel, stream);
		return true;
	}


	return false;
}

void CraftingStationImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = CraftingStationImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int CraftingStationImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ToolTangibleObjectImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "CraftingStation.type";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&type, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "CraftingStation.effectiveness";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<float >::toBinaryStream(&effectiveness, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "CraftingStation.complexityLevel";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&complexityLevel, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return _count + 3;
}

CraftingStationImplementation::CraftingStationImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/tool/CraftingStation.idl():  		Logger.setLoggingName("CraftingStation");
	Logger::setLoggingName("CraftingStation");
	// server/zone/objects/tangible/tool/CraftingStation.idl():  		complexityLevel = 0;
	complexityLevel = 0;
	// server/zone/objects/tangible/tool/CraftingStation.idl():  		effectiveness = 25;
	effectiveness = 25;
}

void CraftingStationImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/tool/CraftingStation.idl():  		super.initializeTransientMembers();
	ToolTangibleObjectImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/tool/CraftingStation.idl():  		Logger.setLoggingName("CraftingStation");
	Logger::setLoggingName("CraftingStation");
}

bool CraftingStationImplementation::isCraftingStation() {
	// server/zone/objects/tangible/tool/CraftingStation.idl():  		return true;
	return true;
}

int CraftingStationImplementation::getComplexityLevel() {
	// server/zone/objects/tangible/tool/CraftingStation.idl():  		return complexityLevel;
	return complexityLevel;
}

int CraftingStationImplementation::getStationType() {
	// server/zone/objects/tangible/tool/CraftingStation.idl():  		return type;
	return type;
}

void CraftingStationImplementation::setComplexityLevel(int level) {
	// server/zone/objects/tangible/tool/CraftingStation.idl():  		complexityLevel = level;
	complexityLevel = level;
}

/*
 *	CraftingStationAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


CraftingStationAdapter::CraftingStationAdapter(CraftingStation* obj) : ToolTangibleObjectAdapter(obj) {
}

void CraftingStationAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		resp->insertSignedInt(handleObjectMenuSelect(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getByteParameter()));
		break;
	case RPC_SENDINPUTHOPPER__CREATUREOBJECT_:
		sendInputHopper(static_cast<CreatureObject*>(inv->getObjectParameter()));
		break;
	case RPC_ISCRAFTINGSTATION__:
		resp->insertBoolean(isCraftingStation());
		break;
	case RPC_GETCOMPLEXITYLEVEL__:
		resp->insertSignedInt(getComplexityLevel());
		break;
	case RPC_GETSTATIONTYPE__:
		resp->insertSignedInt(getStationType());
		break;
	case RPC_SETCOMPLEXITYLEVEL__INT_:
		setComplexityLevel(inv->getSignedIntParameter());
		break;
	case RPC_FINDCRAFTINGTOOL__CREATUREOBJECT_:
		resp->insertLong(findCraftingTool(static_cast<CreatureObject*>(inv->getObjectParameter()))->_getObjectID());
		break;
	case RPC_CREATECHILDOBJECTS__:
		createChildObjects();
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void CraftingStationAdapter::initializeTransientMembers() {
	(static_cast<CraftingStation*>(stub))->initializeTransientMembers();
}

int CraftingStationAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<CraftingStation*>(stub))->handleObjectMenuSelect(player, selectedID);
}

void CraftingStationAdapter::sendInputHopper(CreatureObject* player) {
	(static_cast<CraftingStation*>(stub))->sendInputHopper(player);
}

bool CraftingStationAdapter::isCraftingStation() {
	return (static_cast<CraftingStation*>(stub))->isCraftingStation();
}

int CraftingStationAdapter::getComplexityLevel() {
	return (static_cast<CraftingStation*>(stub))->getComplexityLevel();
}

int CraftingStationAdapter::getStationType() {
	return (static_cast<CraftingStation*>(stub))->getStationType();
}

void CraftingStationAdapter::setComplexityLevel(int level) {
	(static_cast<CraftingStation*>(stub))->setComplexityLevel(level);
}

SceneObject* CraftingStationAdapter::findCraftingTool(CreatureObject* player) {
	return (static_cast<CraftingStation*>(stub))->findCraftingTool(player);
}

void CraftingStationAdapter::createChildObjects() {
	(static_cast<CraftingStation*>(stub))->createChildObjects();
}

/*
 *	CraftingStationHelper
 */

CraftingStationHelper* CraftingStationHelper::staticInitializer = CraftingStationHelper::instance();

CraftingStationHelper::CraftingStationHelper() {
	className = "CraftingStation";

	Core::getObjectBroker()->registerClass(className, this);
}

void CraftingStationHelper::finalizeHelper() {
	CraftingStationHelper::finalize();
}

DistributedObject* CraftingStationHelper::instantiateObject() {
	return new CraftingStation(DummyConstructorParameter::instance());
}

DistributedObjectServant* CraftingStationHelper::instantiateServant() {
	return new CraftingStationImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* CraftingStationHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CraftingStationAdapter(static_cast<CraftingStation*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

