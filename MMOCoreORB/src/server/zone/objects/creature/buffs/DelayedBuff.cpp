/*
 *	server/zone/objects/creature/buffs/DelayedBuff.cpp generated by engine3 IDL compiler 0.60
 */

#include "DelayedBuff.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/creature/buffs/BuffDurationEvent.h"

/*
 *	DelayedBuffStub
 */

enum {RPC_ACTIVATE__ = 6,RPC_DEACTIVATE__,RPC_USECHARGE__CREATUREOBJECT_,RPC_SETUSESREMAINING__INT_};

DelayedBuff::DelayedBuff(CreatureObject* creo, unsigned int buffcrc, int duration) : Buff(DummyConstructorParameter::instance()) {
	DelayedBuffImplementation* _implementation = new DelayedBuffImplementation(creo, buffcrc, duration);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("DelayedBuff");
}

DelayedBuff::DelayedBuff(DummyConstructorParameter* param) : Buff(param) {
	_setClassName("DelayedBuff");
}

DelayedBuff::~DelayedBuff() {
}



void DelayedBuff::activate() {
	DelayedBuffImplementation* _implementation = static_cast<DelayedBuffImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ACTIVATE__);

		method.executeWithVoidReturn();
	} else
		_implementation->activate();
}

void DelayedBuff::deactivate() {
	DelayedBuffImplementation* _implementation = static_cast<DelayedBuffImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DEACTIVATE__);

		method.executeWithVoidReturn();
	} else
		_implementation->deactivate();
}

void DelayedBuff::useCharge(CreatureObject* creature) {
	DelayedBuffImplementation* _implementation = static_cast<DelayedBuffImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_USECHARGE__CREATUREOBJECT_);
		method.addObjectParameter(creature);

		method.executeWithVoidReturn();
	} else
		_implementation->useCharge(creature);
}

void DelayedBuff::setUsesRemaining(int uses) {
	DelayedBuffImplementation* _implementation = static_cast<DelayedBuffImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETUSESREMAINING__INT_);
		method.addSignedIntParameter(uses);

		method.executeWithVoidReturn();
	} else
		_implementation->setUsesRemaining(uses);
}

DistributedObjectServant* DelayedBuff::_getImplementation() {

	_updated = true;
	return _impl;
}

void DelayedBuff::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	DelayedBuffImplementation
 */

DelayedBuffImplementation::DelayedBuffImplementation(DummyConstructorParameter* param) : BuffImplementation(param) {
	_initializeImplementation();
}


DelayedBuffImplementation::~DelayedBuffImplementation() {
}


void DelayedBuffImplementation::finalize() {
}

void DelayedBuffImplementation::_initializeImplementation() {
	_setClassHelper(DelayedBuffHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void DelayedBuffImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<DelayedBuff*>(stub);
	BuffImplementation::_setStub(stub);
}

DistributedObjectStub* DelayedBuffImplementation::_getStub() {
	return _this;
}

DelayedBuffImplementation::operator const DelayedBuff*() {
	return _this;
}

void DelayedBuffImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void DelayedBuffImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void DelayedBuffImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void DelayedBuffImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void DelayedBuffImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void DelayedBuffImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void DelayedBuffImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void DelayedBuffImplementation::_serializationHelperMethod() {
	BuffImplementation::_serializationHelperMethod();

	_setClassName("DelayedBuff");

}

void DelayedBuffImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(DelayedBuffImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool DelayedBuffImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (BuffImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "DelayedBuff.usesRemaining") {
		TypeInfo<int >::parseFromBinaryStream(&usesRemaining, stream);
		return true;
	}


	return false;
}

void DelayedBuffImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = DelayedBuffImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int DelayedBuffImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = BuffImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "DelayedBuff.usesRemaining";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&usesRemaining, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return _count + 1;
}

DelayedBuffImplementation::DelayedBuffImplementation(CreatureObject* creo, unsigned int buffcrc, int duration) : BuffImplementation(creo, buffcrc, 1380, BuffType::FOOD) {
	_initializeImplementation();
	// server/zone/objects/creature/buffs/DelayedBuff.idl():  		usesRemaining = duration;
	usesRemaining = duration;
}

void DelayedBuffImplementation::activate() {
	// server/zone/objects/creature/buffs/DelayedBuff.idl():  		super.activate(false);
	BuffImplementation::activate(false);
}

void DelayedBuffImplementation::deactivate() {
	// server/zone/objects/creature/buffs/DelayedBuff.idl():  		super.deactivate(false);
	BuffImplementation::deactivate(false);
}

void DelayedBuffImplementation::useCharge(CreatureObject* creature) {
	// server/zone/objects/creature/buffs/DelayedBuff.idl():  		usesRemaining = usesRemaining - 1;
	usesRemaining = usesRemaining - 1;
	// server/zone/objects/creature/buffs/DelayedBuff.idl():  	}
	if (usesRemaining < 1){
	// server/zone/objects/creature/buffs/DelayedBuff.idl():  			creature.removeBuff(this);
	creature->removeBuff(_this);
}
}

void DelayedBuffImplementation::setUsesRemaining(int uses) {
	// server/zone/objects/creature/buffs/DelayedBuff.idl():  		usesRemaining = uses;
	usesRemaining = uses;
}

/*
 *	DelayedBuffAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


DelayedBuffAdapter::DelayedBuffAdapter(DelayedBuff* obj) : BuffAdapter(obj) {
}

void DelayedBuffAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_ACTIVATE__:
		activate();
		break;
	case RPC_DEACTIVATE__:
		deactivate();
		break;
	case RPC_USECHARGE__CREATUREOBJECT_:
		useCharge(static_cast<CreatureObject*>(inv->getObjectParameter()));
		break;
	case RPC_SETUSESREMAINING__INT_:
		setUsesRemaining(inv->getSignedIntParameter());
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void DelayedBuffAdapter::activate() {
	(static_cast<DelayedBuff*>(stub))->activate();
}

void DelayedBuffAdapter::deactivate() {
	(static_cast<DelayedBuff*>(stub))->deactivate();
}

void DelayedBuffAdapter::useCharge(CreatureObject* creature) {
	(static_cast<DelayedBuff*>(stub))->useCharge(creature);
}

void DelayedBuffAdapter::setUsesRemaining(int uses) {
	(static_cast<DelayedBuff*>(stub))->setUsesRemaining(uses);
}

/*
 *	DelayedBuffHelper
 */

DelayedBuffHelper* DelayedBuffHelper::staticInitializer = DelayedBuffHelper::instance();

DelayedBuffHelper::DelayedBuffHelper() {
	className = "DelayedBuff";

	Core::getObjectBroker()->registerClass(className, this);
}

void DelayedBuffHelper::finalizeHelper() {
	DelayedBuffHelper::finalize();
}

DistributedObject* DelayedBuffHelper::instantiateObject() {
	return new DelayedBuff(DummyConstructorParameter::instance());
}

DistributedObjectServant* DelayedBuffHelper::instantiateServant() {
	return new DelayedBuffImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* DelayedBuffHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new DelayedBuffAdapter(static_cast<DelayedBuff*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

