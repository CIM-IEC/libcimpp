///////////////////////////////////////////////////////////
//  ACLineSegmentPhase.h
//  Implementation of the Class ACLineSegmentPhase
//  Created on:      28-Jan-2016 12:43:13
//  Original author: kdemaree
///////////////////////////////////////////////////////////

#if !defined(EA_FB9F74D4_4CBB_4746_93B3_BD54F12B9B34__INCLUDED_)
#define EA_FB9F74D4_4CBB_4746_93B3_BD54F12B9B34__INCLUDED_

#include "IEC61970/Base/Wires/SinglePhaseKind.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Wires/ACLineSegment.h"
#include "IEC61970/Base/Core/PowerSystemResource.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Represents a single wire of an alternating current line segment.
			 */
			class ACLineSegmentPhase : public IEC61970::Base::Core::PowerSystemResource
			{

			public:
				ACLineSegmentPhase();
				virtual ~ACLineSegmentPhase();
				/**
				 * The phase connection of the wire at both ends.
				 */
				IEC61970::Base::Wires::SinglePhaseKind phase;
				/**
				 * Number designation for this line segment phase. Each line segment phase within
				 * a line segment should have a unique sequence number. This is useful for
				 * unbalanced modeling to bind the mathematical model (PhaseImpedanceData of
				 * PerLengthPhaseImpedance) with the connectivity model (this class) and the
				 * physical model (WirePosition) without tight coupling.
				 */
				IEC61970::Base::Domain::Integer sequenceNumber;
				/**
				 * The line segment to which the phase belongs.
				 */
				IEC61970::Base::Wires::ACLineSegment *ACLineSegment;

			};

		}

	}

}
#endif // !defined(EA_FB9F74D4_4CBB_4746_93B3_BD54F12B9B34__INCLUDED_)