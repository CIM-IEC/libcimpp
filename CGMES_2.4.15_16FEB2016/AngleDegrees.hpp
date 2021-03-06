#ifndef AngleDegrees_H
#define AngleDegrees_H

#include <string>
#include <istream>

#include "BaseClass.hpp"

namespace CIMPP
{
	class AngleDegrees : public BaseClass
	{
	
	public:
		AngleDegrees();
		virtual ~AngleDegrees();
		AngleDegrees(long double value);
		static const BaseClassDefiner declare();
		AngleDegrees& operator=(long double &rop);
		AngleDegrees& operator+=(const AngleDegrees& rhs);
		AngleDegrees& operator-=(const AngleDegrees& rhs);
		AngleDegrees& operator*=(const AngleDegrees& rhs);
		AngleDegrees& operator/=(const AngleDegrees& rhs);
		friend std::istream& operator>>(std::istream& lop, AngleDegrees& rop);
		operator long double();
	
		long double value = 0.0;
		bool initialized = false;
	
		static const char debugName[];
		virtual const char* debugString();
		
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
	};
}
#endif
