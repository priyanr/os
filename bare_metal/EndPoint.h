/*
 * EndPoint.h
 *
 *  Created on: 8 Aug 2013
 *      Author: simon
 */

#ifndef ENDPOINT_H_
#define ENDPOINT_H_

#include "Usb.h"

namespace USB
{

struct EndPoint
{
	EndPoint(unsigned int maxSize);			//EP zero
	EndPoint(EndpointDescriptor &rOther);

	EndpointDescriptor m_descriptor;
};

} /* namespace USB */
#endif /* ENDPOINT_H_ */
