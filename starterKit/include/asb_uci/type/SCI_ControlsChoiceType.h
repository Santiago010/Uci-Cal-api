/** @file SCI_ControlsChoiceType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:11 PM
 *
 * <pre>
 * Unclassified               U N C L A S S I F I E D               Unclassified
 *
 * DISTRIBUTION STATEMENT D: Distribution authorized to Department of Defense
 *    and U.S. DoD contractors only, Critical Technology, Export Controlled,
 *    26 January 2023. Other requests for this document shall be referred to
 *    AFLCMC/XA (OAMO), Wright-Patterson AFB OH 45433.
 *
 * DESTRUCTION NOTICE: Destroy by any method that will prevent disclosure of
 *    contents or reconstruction of the document.
 *
 * WARNING - This document contains technical data whose export is restricted
 *    by the Arms Export Control Act (Section 2751 of Title 22, United States
 *    Code) or the Export Control Reform Act of 2018 (Chapter 58 Sections
 *    4801-4852 of Title 50, United States Code). Violations of these export
 *    laws are subject to severe criminal penalties. Disseminate in accordance
 *    with provisions of DoD Directive 5230.25 and DoD Instruction 2040.02.
 *
 * Controlled by: USAF
 * Controlled by: AFLCMC/XA (OAMO)
 * CUI Category(ies): CTI, EXPT
 * Distribution Statement D
 * POC: Wayne Artuso, 937-713-5124
 *
 * CUI//SP-CTI/SP-EXPT
 * </pre>
 *
 */

#ifndef ASB_UCI_TYPE_SCI_CONTROLSCHOICETYPE_H
#define ASB_UCI_TYPE_SCI_CONTROLSCHOICETYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "SCI_ControlsEnum.h"
#include "SCI_ControlsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/Accessor.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SCI_ControlsChoiceType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** (U) All currently valid SCI controls from the published register PERMISSIBLE VALUES The permissible values for this
  * simple type are defined in the Controlled Value Enumeration: CVEnumISMSCIControls.xml
  */
class SCI_ControlsChoiceType : public virtual uci::type::SCI_ControlsChoiceType {
public:
  /** The constructor */
  SCI_ControlsChoiceType();

  /** The copy constructor
    *
    * @param rhs The SCI_ControlsChoiceType to copy from
    */
  SCI_ControlsChoiceType(const SCI_ControlsChoiceType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The SCI_ControlsChoiceType to move from
    */
  SCI_ControlsChoiceType(SCI_ControlsChoiceType&& rhs) = delete;

  /** The assignment operator [not supported]
    *
    * @param rhs The SCI_ControlsChoiceType to copy from
    * @return The SCI_ControlsChoiceType that was assigned
    */
  SCI_ControlsChoiceType& operator=(const SCI_ControlsChoiceType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The SCI_ControlsChoiceType to move from
    * @return The SCI_ControlsChoiceType that was assigned
    */
  SCI_ControlsChoiceType& operator=(SCI_ControlsChoiceType&& rhs) = delete;

  /** The destructor */
  virtual ~SCI_ControlsChoiceType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::SCI_ControlsChoiceType whose contents are to be used to set this
    *      uci::type::SCI_ControlsChoiceType's contents.
    */
  void copy(const uci::type::SCI_ControlsChoiceType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::SCI_ControlsChoiceType whose contents are to be used to set this
    *      uci::type::SCI_ControlsChoiceType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::SCI_ControlsChoiceType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** This method returns this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active.
    *
    * @return The selected item's enumerated value
    */
  uci::type::SCI_ControlsChoiceType::SCI_ControlsChoiceTypeChoice getSCI_ControlsChoiceTypeChoiceOrdinal() const noexcept override;

  /** This method is used to set this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active. There are two mechanisms that can be used to set a choice's "selection
    * ordinal." The first mechanism is by invoking this method. The second mechanism is by invoking one of the set methods
    * associated with one of the elements contained in this choice. Once this method is invoked, the value returned by
    * getSCI_ControlsChoiceTypeChoiceOrdinal() will be the ordinal specified when this method was invoked. In addition, the
    * access methods associated with the chosen element will be enabled and will provide access to the chosen element.
    *
    * @param ordinal The ordinal to set this choice's selected ordinal to.
    * @param type The type of data that is to be made available when the ordinal is set.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SCI_ControlsChoiceType& setSCI_ControlsChoiceTypeChoiceOrdinal(uci::type::SCI_ControlsChoiceType::SCI_ControlsChoiceTypeChoice ordinal, uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the contents of the message's StandardCompartment item
    *
    * @return The contents of the StandardCompartment item
    */
  uci::type::SCI_ControlsEnum& getStandardCompartment_() const;

  /** Returns the contents of the message's StandardCompartment item
    *
    * @return The contents of the StandardCompartment item
    */
  const uci::type::SCI_ControlsEnum& getStandardCompartment() const override;

  /** Returns the contents of the message's StandardCompartment item
    *
    * @return The contents of the StandardCompartment item
    */
  uci::type::SCI_ControlsEnum& getStandardCompartment() override;

  /** Sets this choice's choice to be StandardCompartment and initializes StandardCompartment to be the specified value
    *
    * @param accessor The new value to set the StandardCompartment item to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SCI_ControlsChoiceType& setStandardCompartment(const uci::type::SCI_ControlsEnum& accessor) override;

  /** Sets this choice's choice to be StandardCompartment and initializes StandardCompartment to be the specified value
    *
    * @param value The new value to set the StandardCompartment item to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SCI_ControlsChoiceType& setStandardCompartment(uci::type::SCI_ControlsEnum::EnumerationItem value) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by StandardCompartment.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by StandardCompartment, false
    *      otherwise.
    */
  bool isStandardCompartment() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by StandardCompartment.
    *
    * @param method name of calling method
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by StandardCompartment.
    */
  uci::type::SCI_ControlsEnum& chooseStandardCompartment(const std::string& method, uci::base::accessorType::AccessorType type = uci::base::accessorType::null);

  /** Sets this choice's "selection ordinal" to the choice identified by StandardCompartment.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by StandardCompartment.
    */
  uci::type::SCI_ControlsEnum& chooseStandardCompartment(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::SCI_ControlsType& getSubCompartment_() const;

  /** Returns the contents of the message's SubCompartment item
    *
    * @return The contents of the SubCompartment field
    */
  const uci::type::SCI_ControlsType& getSubCompartment() const override;

  /** Returns the contents of the message's SubCompartment item
    *
    * @return The contents of the SubCompartment field
    */
  uci::type::SCI_ControlsType& getSubCompartment() override;

  /** Sets this choice's choice to be SubCompartment and initializes SubCompartment to be the specified value
    *
    * @param value The new value to set SubCompartment to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SCI_ControlsChoiceType& setSubCompartment(const uci::type::SCI_ControlsType& value) override;

  /** Sets this choice's choice to be SubCompartment and initializes SubCompartment to be the specified value
    *
    * @param value The new value to set SubCompartment to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SCI_ControlsChoiceType& setSubCompartment(const std::string& value) override;

  /** Sets this choice's choice to be SubCompartment and initializes SubCompartment to be the specified value
    *
    * @param value The new value to set SubCompartment to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SCI_ControlsChoiceType& setSubCompartment(const char * value) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by SubCompartment.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by SubCompartment, false otherwise.
    */
  bool isSubCompartment() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by SubCompartment.
    *
    * @param method name of calling method
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by SubCompartment.
    */
  uci::type::SCI_ControlsType& chooseSubCompartment(const std::string& method, uci::base::accessorType::AccessorType type = uci::base::accessorType::null);

  /** Sets this choice's "selection ordinal" to the choice identified by SubCompartment.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by SubCompartment.
    */
  uci::type::SCI_ControlsType& chooseSubCompartment(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<SCI_ControlsChoiceType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::SCI_ControlsChoiceType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

  /** 
    *
    * @param accessor .
    * @param propTree .
    * @param nodeName .
    * @param createNode .
    * @param addTypeAttribute .
    * @param checkIfDerivation .
    * @param topLevel .
    * @return .
    */
  static std::string serialize(const uci::type::SCI_ControlsChoiceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<SCI_ControlsEnum> standardCompartment_Accessor;
  std::unique_ptr<SCI_ControlsType> subCompartment_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_SCI_CONTROLSCHOICETYPE_H
