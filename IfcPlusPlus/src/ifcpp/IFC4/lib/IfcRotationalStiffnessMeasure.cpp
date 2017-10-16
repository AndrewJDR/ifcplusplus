/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcRotationalStiffnessSelect.h"
#include "ifcpp/IFC4/include/IfcRotationalStiffnessMeasure.h"

// TYPE IfcRotationalStiffnessMeasure = REAL;
IfcRotationalStiffnessMeasure::IfcRotationalStiffnessMeasure() {}
IfcRotationalStiffnessMeasure::IfcRotationalStiffnessMeasure( double value ) { m_value = value; }
IfcRotationalStiffnessMeasure::~IfcRotationalStiffnessMeasure() {}
shared_ptr<IfcPPObject> IfcRotationalStiffnessMeasure::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcRotationalStiffnessMeasure> copy_self( new IfcRotationalStiffnessMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcRotationalStiffnessMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCROTATIONALSTIFFNESSMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcRotationalStiffnessMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcRotationalStiffnessMeasure> IfcRotationalStiffnessMeasure::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcRotationalStiffnessMeasure>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcRotationalStiffnessMeasure>(); }
	shared_ptr<IfcRotationalStiffnessMeasure> type_object( new IfcRotationalStiffnessMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}