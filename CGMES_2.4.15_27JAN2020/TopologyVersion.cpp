#include <sstream>
#include "BaseClass.hpp"
#include "TopologyVersion.hpp"

#include "String.hpp"
#include "String.hpp"
#include "Date.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"

using namespace CIMPP;

TopologyVersion::TopologyVersion(): date(nullptr) {};

TopologyVersion::~TopologyVersion() {};




bool assign_TopologyVersion_date(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(TopologyVersion* element = dynamic_cast<TopologyVersion*>(BaseClass_ptr1)) {
                element->date = dynamic_cast<Date*>(BaseClass_ptr2);
                if(element->date != nullptr)
                        return true;
        }
        return false;
}









bool assign_TopologyVersion_baseUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TopologyVersion* element = dynamic_cast<TopologyVersion*>(BaseClass_ptr1)) {
		element->baseUML = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TopologyVersion_baseURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TopologyVersion* element = dynamic_cast<TopologyVersion*>(BaseClass_ptr1)) {
		element->baseURI = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_TopologyVersion_differenceModelURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TopologyVersion* element = dynamic_cast<TopologyVersion*>(BaseClass_ptr1)) {
		element->differenceModelURI = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TopologyVersion_entsoeUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TopologyVersion* element = dynamic_cast<TopologyVersion*>(BaseClass_ptr1)) {
		element->entsoeUML = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TopologyVersion_entsoeURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TopologyVersion* element = dynamic_cast<TopologyVersion*>(BaseClass_ptr1)) {
		element->entsoeURI = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TopologyVersion_modelDescriptionURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TopologyVersion* element = dynamic_cast<TopologyVersion*>(BaseClass_ptr1)) {
		element->modelDescriptionURI = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TopologyVersion_namespaceRDF(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TopologyVersion* element = dynamic_cast<TopologyVersion*>(BaseClass_ptr1)) {
		element->namespaceRDF = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TopologyVersion_namespaceUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TopologyVersion* element = dynamic_cast<TopologyVersion*>(BaseClass_ptr1)) {
		element->namespaceUML = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TopologyVersion_shortName(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TopologyVersion* element = dynamic_cast<TopologyVersion*>(BaseClass_ptr1)) {
		element->shortName = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

namespace CIMPP {
	BaseClass* TopologyVersion_factory() {
		return new TopologyVersion;
	}
}

void TopologyVersion::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:TopologyVersion"), &TopologyVersion_factory));
}

void TopologyVersion::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:TopologyVersion.baseUML"), &assign_TopologyVersion_baseUML));
	assign_map.insert(std::make_pair(std::string("cim:TopologyVersion.baseURI"), &assign_TopologyVersion_baseURI));
		assign_map.insert(std::make_pair(std::string("cim:TopologyVersion.differenceModelURI"), &assign_TopologyVersion_differenceModelURI));
	assign_map.insert(std::make_pair(std::string("cim:TopologyVersion.entsoeUML"), &assign_TopologyVersion_entsoeUML));
	assign_map.insert(std::make_pair(std::string("cim:TopologyVersion.entsoeURI"), &assign_TopologyVersion_entsoeURI));
	assign_map.insert(std::make_pair(std::string("cim:TopologyVersion.modelDescriptionURI"), &assign_TopologyVersion_modelDescriptionURI));
	assign_map.insert(std::make_pair(std::string("cim:TopologyVersion.namespaceRDF"), &assign_TopologyVersion_namespaceRDF));
	assign_map.insert(std::make_pair(std::string("cim:TopologyVersion.namespaceUML"), &assign_TopologyVersion_namespaceUML));
	assign_map.insert(std::make_pair(std::string("cim:TopologyVersion.shortName"), &assign_TopologyVersion_shortName));
}

void TopologyVersion::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
			assign_map.insert(std::make_pair(std::string("cim:TopologyVersion.date"), &assign_TopologyVersion_date));
							}

const char TopologyVersion::debugName[] = "TopologyVersion";
const char* TopologyVersion::debugString()
{
	return TopologyVersion::debugName;
}

const BaseClassDefiner TopologyVersion::declare()
{
	return BaseClassDefiner(TopologyVersion::addConstructToMap, TopologyVersion::addPrimitiveAssignFnsToMap, TopologyVersion::addClassAssignFnsToMap, TopologyVersion::debugName);
}


