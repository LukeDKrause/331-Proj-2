/* Node.h  */
/* Node class */

#ifndef _NODE_H_
#define _NODE_H_

#include "Record.h"
#include <vector>

class Node
{
	private:

		std::vector<Record> record_vector;

	public:

		Node();
		Node(std::vector<Record>);

};

#endif