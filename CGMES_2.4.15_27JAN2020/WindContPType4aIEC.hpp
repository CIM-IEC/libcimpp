#ifndef WindContPType4aIEC_H
#define WindContPType4aIEC_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP {


class WindTurbineType4aIEC;
	/*
	P control model Type 4A.  Reference: IEC Standard 61400-27-1 Section 6.6.5.4.
	*/
	class WindContPType4aIEC: public IdentifiedObject
	{

	public:
					CIMPP::PU dpmax; 	/* Maximum wind turbine power ramp rate (). It is project dependent parameter. Default: nullptr */
					CIMPP::Seconds tpord; 	/* Time constant in power order lag (). It is type dependent parameter. Default: nullptr */
					CIMPP::Seconds tufilt; 	/* Voltage measurement filter time constant (). It is type dependent parameter. Default: nullptr */
					CIMPP::WindTurbineType4aIEC* WindTurbineType4aIEC; 	/* Wind turbine type 4A model with which this wind control P type 4A model is associated. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		WindContPType4aIEC();
		virtual ~WindContPType4aIEC();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* WindContPType4aIEC_factory();
}
#endif
