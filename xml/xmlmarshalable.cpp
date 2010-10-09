/*
 * COPYRIGHT AND PERMISSION NOTICE
 * 
 * Copyright (c) 2010, Arne Welzel, <arne.welzel@googlemail.com>
 * 		 
 * All rights reserved.
 * 		 
 * Permission to use, copy, modify, and distribute this software for any purpose
 * with or without fee is hereby granted, provided that the above copyright
 * notice and this permission notice appear in all copies.
 * 	 
 * THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT OF THIRD PARTY RIGHTS. IN
 * NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE
 * OR OTHER DEALINGS IN THE SOFTWARE.
 * 		 
 * Except as contained in this notice, the name of a copyright holder shall not
 * be used in advertising or otherwise to promote the sale, use or other dealings
 * in this Software without prior written authorization of the copyright holder.
 */

#include "xmlmarshalable.h"
#include "typedefs.h"
#include <string>
#include <iostream>

using namespace std;

namespace LIBRARY_NAMESPACE {

static void putDepth(int depth) {
	for (int i = 0; i < depth; i++) {
		cout << " ";
	}
}

static void putMarshalable(int depth, XmlMarshalable *m)
{
	putDepth(depth);
	list<STRP> attributes = m->getXmlAttributes();
	list<STRP> namespaces = m->getXmlNamespaceDefinitions();

	cout << "<";

	if (m->getXmlNamespace().first.length() > 0)
		cout << m->getXmlNamespace().first << ":";

	cout << m->getXmlElementName();

	if ((attributes.size() + namespaces.size()) > 0) {
		cout << endl;
	}

	list<STRP>::iterator nit = namespaces.begin();
	list<STRP>::iterator nend = namespaces.end();

	for (/* */; nit != nend; nit++) {
		if (nit != namespaces.begin())
			cout << endl;

		putDepth(depth + 1);
		cout << nit->first << ":" << nit->second;
	}

	list<STRP>::iterator ait = attributes.begin();
	list<STRP>::iterator aend = attributes.end();

	for (/* */; ait != aend; ait++) {
		if (ait != attributes.begin())
			cout << endl;
		putDepth(depth + 1);
		cout << ait->first << "=\"" << ait->second << "\"";;
	}
	cout << ">" << endl;


	list<XmlMarshalable *> children = m->getXmlChildren();
	list<XmlMarshalable *>::iterator it = children.begin();
	list<XmlMarshalable *>::iterator end = children.end();
	for (/* */; it != end; it++)
		putMarshalable(depth + 2, *it);

	if (m->getXmlElementValue().length() > 0) {
		cout << m->getXmlElementValue() << endl;
	}

	putDepth(depth);
	cout << "</";
	if (m->getXmlNamespace().first.length() > 0)
		cout << m->getXmlNamespace().first << ":";
	cout << m->getXmlElementName();
	cout << ">" << endl;
}

void XmlMarshalable::putXmlMarshalable(XmlMarshalable *m)
{
	putMarshalable(0, m);
}

} // namespace
