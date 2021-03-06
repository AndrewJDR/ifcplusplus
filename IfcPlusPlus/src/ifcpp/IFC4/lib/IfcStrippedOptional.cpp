/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcStrippedOptional.h"

// TYPE IfcStrippedOptional = BOOLEAN;
IfcStrippedOptional::IfcStrippedOptional( bool value ) { m_value = value; }
shared_ptr<BuildingObject> IfcStrippedOptional::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcStrippedOptional> copy_self( new IfcStrippedOptional() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcStrippedOptional::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCSTRIPPEDOPTIONAL("; }
	if( m_value == false )
	{
		stream << ".F.";
	}
	else if( m_value == true )
	{
		stream << ".T.";
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcStrippedOptional::toString() const
{
	if( m_value == false )
	{
		return L"false";
	}
	else if( m_value == true )
	{
		return L"true";
	}
	return L"";
}
shared_ptr<IfcStrippedOptional> IfcStrippedOptional::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcStrippedOptional>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcStrippedOptional>(); }
	shared_ptr<IfcStrippedOptional> type_object( new IfcStrippedOptional() );
	readBool( arg, type_object->m_value );
	return type_object;
}
