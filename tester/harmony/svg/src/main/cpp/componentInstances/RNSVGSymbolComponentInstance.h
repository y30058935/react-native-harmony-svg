#pragma once
#include "RNSVGBaseComponentInstance.h"
#include "RNOH/CppComponentInstance.h"
// #include "SwiperNode.h"
// #include "EventEmitters.h"
#include <folly/dynamic.h>
#include <math.h>  
#include "ShadowNodes.h"
#include "SvgSymbol.h"

namespace rnoh {
namespace svg {
class RNSVGSymbolComponentInstance : public RNSVGBaseComponentInstance<facebook::react::RNSVGSymbolShadowNode> {

 

public:
    RNSVGSymbolComponentInstance(Context context);


      

      

     void UpdateElementProps(SharedConcreteProps const &props) override;

};

} // namespace svg
} // namespace rnoh