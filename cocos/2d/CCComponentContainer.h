/****************************************************************************
Copyright (c) 2013 cocos2d-x.org

http://www.cocos2d-x.org

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/

#ifndef __CC_FRAMEWORK_COMCONTAINER_H__
#define __CC_FRAMEWORK_COMCONTAINER_H__

#include "CCDictionary.h"

NS_CC_BEGIN

class Component;
class Node;

class CC_DLL ComponentContainer
{
protected:
    /**
     * @js ctor
     */
    ComponentContainer(Node *pNode);
    
public:
    /**
     * @js NA
     * @lua NA
     */
    virtual ~ComponentContainer(void);
    virtual Component* get(const char *pName) const;
    virtual bool add(Component *pCom);
    virtual bool remove(const char *pName);
    virtual void removeAll();
    virtual void visit(float fDelta);
public:
    bool isEmpty() const;
    
private:
    void alloc(void);
    
private:
    Dictionary *_components;        ///< Dictionary of components
    Node *_owner;
    
    friend class Node;
};

NS_CC_END

#endif  // __FUNDATION__CCCOMPONENT_H__
