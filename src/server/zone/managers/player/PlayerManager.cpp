/*
 *	server/zone/managers/player/PlayerManager.cpp generated by engine3 IDL compiler 0.55
 */

#include "PlayerManager.h"

#include "PlayerManagerImplementation.h"

#include "../item/ItemManager.h"

#include "../guild/GuildManager.h"

#include "../../objects/player/Player.h"

#include "../../objects/tangible/TangibleObject.h"

#include "server/zone/ZoneClient.h"

#include "PlayerMap.h"

/*
 *	PlayerManagerStub
 */

PlayerManager::PlayerManager(ItemManager* itemManager, ZoneProcessServerImplementation* processor) {
	_impl = new PlayerManagerImplementation(itemManager, processor);
	_impl->_setStub(this);
}

PlayerManager::PlayerManager(DummyConstructorParameter* param) {
	_impl = NULL;
}

PlayerManager::~PlayerManager() {
}

void PlayerManager::stop() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _impl)->stop();
}

bool PlayerManager::create(Player* player, unsigned int sessionkey) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);
		method.addUnsignedIntParameter(sessionkey);

		return method.executeWithBooleanReturn();
	} else
		return ((PlayerManagerImplementation*) _impl)->create(player, sessionkey);
}

bool PlayerManager::validateName(string& name) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addAsciiParameter(name);

		return method.executeWithBooleanReturn();
	} else
		return ((PlayerManagerImplementation*) _impl)->validateName(name);
}

BaseMessage* PlayerManager::checkPlayerName(const string& name, const string& species) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addAsciiParameter(name);
		method.addAsciiParameter(species);

		return (BaseMessage*) method.executeWithObjectReturn();
	} else
		return ((PlayerManagerImplementation*) _impl)->checkPlayerName(name, species);
}

BaseMessage* PlayerManager::attemptPlayerCreation(Player* player, ZoneClient* client) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(player);
		method.addObjectParameter(client);

		return (BaseMessage*) method.executeWithObjectReturn();
	} else
		return ((PlayerManagerImplementation*) _impl)->attemptPlayerCreation(player, client);
}

Player* PlayerManager::load(unsigned long long charid) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addUnsignedLongParameter(charid);

		return (Player*) method.executeWithObjectReturn();
	} else
		return ((PlayerManagerImplementation*) _impl)->load(charid);
}

void PlayerManager::unload(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _impl)->unload(player);
}

void PlayerManager::handleAbortTradeMessage(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _impl)->handleAbortTradeMessage(player);
}

void PlayerManager::handleAddItemMessage(Player* player, unsigned long long itemID) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addObjectParameter(player);
		method.addUnsignedLongParameter(itemID);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _impl)->handleAddItemMessage(player, itemID);
}

void PlayerManager::handleGiveMoneyMessage(Player* player, unsigned int value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addObjectParameter(player);
		method.addUnsignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _impl)->handleGiveMoneyMessage(player, value);
}

void PlayerManager::handleAcceptTransactionMessage(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _impl)->handleAcceptTransactionMessage(player);
}

void PlayerManager::handleUnAcceptTransactionMessage(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _impl)->handleUnAcceptTransactionMessage(player);
}

void PlayerManager::handleVerifyTradeMessage(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _impl)->handleVerifyTradeMessage(player);
}

void PlayerManager::moveItem(Player* sender, Player* receiver, TangibleObject* item) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addObjectParameter(sender);
		method.addObjectParameter(receiver);
		method.addObjectParameter(item);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _impl)->moveItem(sender, receiver, item);
}

void PlayerManager::doBankTip(Player* sender, Player* receiver, int tipAmount, bool updateTipTo) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addObjectParameter(sender);
		method.addObjectParameter(receiver);
		method.addSignedIntParameter(tipAmount);
		method.addBooleanParameter(updateTipTo);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _impl)->doBankTip(sender, receiver, tipAmount, updateTipTo);
}

void PlayerManager::doCashTip(Player* sender, Player* receiver, int tipAmount, bool updateTipTo) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);
		method.addObjectParameter(sender);
		method.addObjectParameter(receiver);
		method.addSignedIntParameter(tipAmount);
		method.addBooleanParameter(updateTipTo);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _impl)->doCashTip(sender, receiver, tipAmount, updateTipTo);
}

bool PlayerManager::modifyOfflineBank(Player* sender, string& receiverName, int creditAmount) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);
		method.addObjectParameter(sender);
		method.addAsciiParameter(receiverName);
		method.addSignedIntParameter(creditAmount);

		return method.executeWithBooleanReturn();
	} else
		return ((PlayerManagerImplementation*) _impl)->modifyOfflineBank(sender, receiverName, creditAmount);
}

bool PlayerManager::modifyRecipientOfflineBank(string& recipient, int creditAmount) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);
		method.addAsciiParameter(recipient);
		method.addSignedIntParameter(creditAmount);

		return method.executeWithBooleanReturn();
	} else
		return ((PlayerManagerImplementation*) _impl)->modifyRecipientOfflineBank(recipient, creditAmount);
}

void PlayerManager::updatePlayerCreditsFromDatabase(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _impl)->updatePlayerCreditsFromDatabase(player);
}

void PlayerManager::updatePlayerCreditsToDatabase(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _impl)->updatePlayerCreditsToDatabase(player);
}

void PlayerManager::updatePlayerAppearanceToDatabase(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _impl)->updatePlayerAppearanceToDatabase(player);
}

void PlayerManager::updatePlayerBaseHAMToDatabase(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _impl)->updatePlayerBaseHAMToDatabase(player);
}

void PlayerManager::updateOtherFriendlists(Player* player, bool status) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);
		method.addObjectParameter(player);
		method.addBooleanParameter(status);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _impl)->updateOtherFriendlists(player, status);
}

void PlayerManager::setGuildManager(GuildManager* gmanager) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);
		method.addObjectParameter(gmanager);

		method.executeWithVoidReturn();
	} else
		((PlayerManagerImplementation*) _impl)->setGuildManager(gmanager);
}

Player* PlayerManager::putPlayer(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);
		method.addObjectParameter(player);

		return (Player*) method.executeWithObjectReturn();
	} else
		return ((PlayerManagerImplementation*) _impl)->putPlayer(player);
}

Player* PlayerManager::getPlayer(string& name) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);
		method.addAsciiParameter(name);

		return (Player*) method.executeWithObjectReturn();
	} else
		return ((PlayerManagerImplementation*) _impl)->getPlayer(name);
}

GuildManager* PlayerManager::getGuildManager() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);

		return (GuildManager*) method.executeWithObjectReturn();
	} else
		return ((PlayerManagerImplementation*) _impl)->getGuildManager();
}

PlayerMap* PlayerManager::getPlayerMap() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);

		return (PlayerMap*) method.executeWithObjectReturn();
	} else
		return ((PlayerManagerImplementation*) _impl)->getPlayerMap();
}

/*
 *	PlayerManagerAdapter
 */

PlayerManagerAdapter::PlayerManagerAdapter(PlayerManagerImplementation* obj) : DistributedObjectAdapter((DistributedObjectServant*) obj) {
}

Packet* PlayerManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		stop();
		break;
	case 7:
		resp->insertBoolean(create((Player*) inv->getObjectParameter(), inv->getUnsignedIntParameter()));
		break;
	case 8:
		resp->insertBoolean(validateName(inv->getAsciiParameter(_param0_validateName__string_)));
		break;
	case 9:
		resp->insertLong(checkPlayerName(inv->getAsciiParameter(_param0_checkPlayerName__string_string_), inv->getAsciiParameter(_param1_checkPlayerName__string_string_))->_getObjectID());
		break;
	case 10:
		resp->insertLong(attemptPlayerCreation((Player*) inv->getObjectParameter(), (ZoneClient*) inv->getObjectParameter())->_getObjectID());
		break;
	case 11:
		resp->insertLong(load(inv->getUnsignedLongParameter())->_getObjectID());
		break;
	case 12:
		unload((Player*) inv->getObjectParameter());
		break;
	case 13:
		handleAbortTradeMessage((Player*) inv->getObjectParameter());
		break;
	case 14:
		handleAddItemMessage((Player*) inv->getObjectParameter(), inv->getUnsignedLongParameter());
		break;
	case 15:
		handleGiveMoneyMessage((Player*) inv->getObjectParameter(), inv->getUnsignedIntParameter());
		break;
	case 16:
		handleAcceptTransactionMessage((Player*) inv->getObjectParameter());
		break;
	case 17:
		handleUnAcceptTransactionMessage((Player*) inv->getObjectParameter());
		break;
	case 18:
		handleVerifyTradeMessage((Player*) inv->getObjectParameter());
		break;
	case 19:
		moveItem((Player*) inv->getObjectParameter(), (Player*) inv->getObjectParameter(), (TangibleObject*) inv->getObjectParameter());
		break;
	case 20:
		doBankTip((Player*) inv->getObjectParameter(), (Player*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getBooleanParameter());
		break;
	case 21:
		doCashTip((Player*) inv->getObjectParameter(), (Player*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getBooleanParameter());
		break;
	case 22:
		resp->insertBoolean(modifyOfflineBank((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_modifyOfflineBank__Player_string_int_), inv->getSignedIntParameter()));
		break;
	case 23:
		resp->insertBoolean(modifyRecipientOfflineBank(inv->getAsciiParameter(_param0_modifyRecipientOfflineBank__string_int_), inv->getSignedIntParameter()));
		break;
	case 24:
		updatePlayerCreditsFromDatabase((Player*) inv->getObjectParameter());
		break;
	case 25:
		updatePlayerCreditsToDatabase((Player*) inv->getObjectParameter());
		break;
	case 26:
		updatePlayerAppearanceToDatabase((Player*) inv->getObjectParameter());
		break;
	case 27:
		updatePlayerBaseHAMToDatabase((Player*) inv->getObjectParameter());
		break;
	case 28:
		updateOtherFriendlists((Player*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 29:
		setGuildManager((GuildManager*) inv->getObjectParameter());
		break;
	case 30:
		resp->insertLong(putPlayer((Player*) inv->getObjectParameter())->_getObjectID());
		break;
	case 31:
		resp->insertLong(getPlayer(inv->getAsciiParameter(_param0_getPlayer__string_))->_getObjectID());
		break;
	case 32:
		resp->insertLong(getGuildManager()->_getObjectID());
		break;
	case 33:
		resp->insertLong(getPlayerMap()->_getObjectID());
		break;
	default:
		return NULL;
	}

	return resp;
}

void PlayerManagerAdapter::stop() {
	return ((PlayerManagerImplementation*) impl)->stop();
}

bool PlayerManagerAdapter::create(Player* player, unsigned int sessionkey) {
	return ((PlayerManagerImplementation*) impl)->create(player, sessionkey);
}

bool PlayerManagerAdapter::validateName(string& name) {
	return ((PlayerManagerImplementation*) impl)->validateName(name);
}

BaseMessage* PlayerManagerAdapter::checkPlayerName(const string& name, const string& species) {
	return ((PlayerManagerImplementation*) impl)->checkPlayerName(name, species);
}

BaseMessage* PlayerManagerAdapter::attemptPlayerCreation(Player* player, ZoneClient* client) {
	return ((PlayerManagerImplementation*) impl)->attemptPlayerCreation(player, client);
}

Player* PlayerManagerAdapter::load(unsigned long long charid) {
	return ((PlayerManagerImplementation*) impl)->load(charid);
}

void PlayerManagerAdapter::unload(Player* player) {
	return ((PlayerManagerImplementation*) impl)->unload(player);
}

void PlayerManagerAdapter::handleAbortTradeMessage(Player* player) {
	return ((PlayerManagerImplementation*) impl)->handleAbortTradeMessage(player);
}

void PlayerManagerAdapter::handleAddItemMessage(Player* player, unsigned long long itemID) {
	return ((PlayerManagerImplementation*) impl)->handleAddItemMessage(player, itemID);
}

void PlayerManagerAdapter::handleGiveMoneyMessage(Player* player, unsigned int value) {
	return ((PlayerManagerImplementation*) impl)->handleGiveMoneyMessage(player, value);
}

void PlayerManagerAdapter::handleAcceptTransactionMessage(Player* player) {
	return ((PlayerManagerImplementation*) impl)->handleAcceptTransactionMessage(player);
}

void PlayerManagerAdapter::handleUnAcceptTransactionMessage(Player* player) {
	return ((PlayerManagerImplementation*) impl)->handleUnAcceptTransactionMessage(player);
}

void PlayerManagerAdapter::handleVerifyTradeMessage(Player* player) {
	return ((PlayerManagerImplementation*) impl)->handleVerifyTradeMessage(player);
}

void PlayerManagerAdapter::moveItem(Player* sender, Player* receiver, TangibleObject* item) {
	return ((PlayerManagerImplementation*) impl)->moveItem(sender, receiver, item);
}

void PlayerManagerAdapter::doBankTip(Player* sender, Player* receiver, int tipAmount, bool updateTipTo) {
	return ((PlayerManagerImplementation*) impl)->doBankTip(sender, receiver, tipAmount, updateTipTo);
}

void PlayerManagerAdapter::doCashTip(Player* sender, Player* receiver, int tipAmount, bool updateTipTo) {
	return ((PlayerManagerImplementation*) impl)->doCashTip(sender, receiver, tipAmount, updateTipTo);
}

bool PlayerManagerAdapter::modifyOfflineBank(Player* sender, string& receiverName, int creditAmount) {
	return ((PlayerManagerImplementation*) impl)->modifyOfflineBank(sender, receiverName, creditAmount);
}

bool PlayerManagerAdapter::modifyRecipientOfflineBank(string& recipient, int creditAmount) {
	return ((PlayerManagerImplementation*) impl)->modifyRecipientOfflineBank(recipient, creditAmount);
}

void PlayerManagerAdapter::updatePlayerCreditsFromDatabase(Player* player) {
	return ((PlayerManagerImplementation*) impl)->updatePlayerCreditsFromDatabase(player);
}

void PlayerManagerAdapter::updatePlayerCreditsToDatabase(Player* player) {
	return ((PlayerManagerImplementation*) impl)->updatePlayerCreditsToDatabase(player);
}

void PlayerManagerAdapter::updatePlayerAppearanceToDatabase(Player* player) {
	return ((PlayerManagerImplementation*) impl)->updatePlayerAppearanceToDatabase(player);
}

void PlayerManagerAdapter::updatePlayerBaseHAMToDatabase(Player* player) {
	return ((PlayerManagerImplementation*) impl)->updatePlayerBaseHAMToDatabase(player);
}

void PlayerManagerAdapter::updateOtherFriendlists(Player* player, bool status) {
	return ((PlayerManagerImplementation*) impl)->updateOtherFriendlists(player, status);
}

void PlayerManagerAdapter::setGuildManager(GuildManager* gmanager) {
	return ((PlayerManagerImplementation*) impl)->setGuildManager(gmanager);
}

Player* PlayerManagerAdapter::putPlayer(Player* player) {
	return ((PlayerManagerImplementation*) impl)->putPlayer(player);
}

Player* PlayerManagerAdapter::getPlayer(string& name) {
	return ((PlayerManagerImplementation*) impl)->getPlayer(name);
}

GuildManager* PlayerManagerAdapter::getGuildManager() {
	return ((PlayerManagerImplementation*) impl)->getGuildManager();
}

PlayerMap* PlayerManagerAdapter::getPlayerMap() {
	return ((PlayerManagerImplementation*) impl)->getPlayerMap();
}

/*
 *	PlayerManagerHelper
 */

PlayerManagerHelper* PlayerManagerHelper::staticInitializer = PlayerManagerHelper::instance();

PlayerManagerHelper::PlayerManagerHelper() {
	className = "PlayerManager";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void PlayerManagerHelper::finalizeHelper() {
	PlayerManagerHelper::finalize();
}

DistributedObject* PlayerManagerHelper::instantiateObject() {
	return new PlayerManager(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* PlayerManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new PlayerManagerAdapter((PlayerManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	PlayerManagerServant
 */

PlayerManagerServant::PlayerManagerServant() {
	_classHelper = PlayerManagerHelper::instance();
}

PlayerManagerServant::~PlayerManagerServant() {
}

void PlayerManagerServant::_setStub(DistributedObjectStub* stub) {
	_this = (PlayerManager*) stub;
}

DistributedObjectStub* PlayerManagerServant::_getStub() {
	return _this;
}

