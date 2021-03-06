#include <sstream>
#include "DiagramObject.hpp"
#include "TextDiagramObject.hpp"

#include "String.hpp"

using namespace CIMPP;

TextDiagramObject::TextDiagramObject() {};

TextDiagramObject::~TextDiagramObject() {};




bool assign_TextDiagramObject_text(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TextDiagramObject* element = dynamic_cast<TextDiagramObject*>(BaseClass_ptr1)) {
		element->text = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

namespace CIMPP {
	BaseClass* TextDiagramObject_factory() {
		return new TextDiagramObject;
	}
}

void TextDiagramObject::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:TextDiagramObject"), &TextDiagramObject_factory));
}

void TextDiagramObject::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:TextDiagramObject.text"), &assign_TextDiagramObject_text));
}

void TextDiagramObject::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	}

const char TextDiagramObject::debugName[] = "TextDiagramObject";
const char* TextDiagramObject::debugString()
{
	return TextDiagramObject::debugName;
}

const BaseClassDefiner TextDiagramObject::declare()
{
	return BaseClassDefiner(TextDiagramObject::addConstructToMap, TextDiagramObject::addPrimitiveAssignFnsToMap, TextDiagramObject::addClassAssignFnsToMap, TextDiagramObject::debugName);
}


