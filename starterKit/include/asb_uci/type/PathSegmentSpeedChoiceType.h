/** @file PathSegmentSpeedChoiceType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:14 PM
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

#ifndef ASB_UCI_TYPE_PATHSEGMENTSPEEDCHOICETYPE_H
#define ASB_UCI_TYPE_PATHSEGMENTSPEEDCHOICETYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/MachType.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/Accessor.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PathSegmentSpeedChoiceType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class PathSegmentSpeedValueType;

/** See annotations in child elements and messages/elements that use this type for details. */
class PathSegmentSpeedChoiceType : public virtual uci::type::PathSegmentSpeedChoiceType {
public:
  /** The constructor */
  PathSegmentSpeedChoiceType();

  /** The copy constructor
    *
    * @param rhs The PathSegmentSpeedChoiceType to copy from
    */
  PathSegmentSpeedChoiceType(const PathSegmentSpeedChoiceType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The PathSegmentSpeedChoiceType to move from
    */
  PathSegmentSpeedChoiceType(PathSegmentSpeedChoiceType&& rhs) = delete;

  /** The assignment operator [not supported]
    *
    * @param rhs The PathSegmentSpeedChoiceType to copy from
    * @return The PathSegmentSpeedChoiceType that was assigned
    */
  PathSegmentSpeedChoiceType& operator=(const PathSegmentSpeedChoiceType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The PathSegmentSpeedChoiceType to move from
    * @return The PathSegmentSpeedChoiceType that was assigned
    */
  PathSegmentSpeedChoiceType& operator=(PathSegmentSpeedChoiceType&& rhs) = delete;

  /** The destructor */
  virtual ~PathSegmentSpeedChoiceType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::PathSegmentSpeedChoiceType whose contents are to be used to set this
    *      uci::type::PathSegmentSpeedChoiceType's contents.
    */
  void copy(const uci::type::PathSegmentSpeedChoiceType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::PathSegmentSpeedChoiceType whose contents are to be used to set this
    *      uci::type::PathSegmentSpeedChoiceType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::PathSegmentSpeedChoiceType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** This method returns this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active.
    *
    * @return The selected item's enumerated value
    */
  uci::type::PathSegmentSpeedChoiceType::PathSegmentSpeedChoiceTypeChoice getPathSegmentSpeedChoiceTypeChoiceOrdinal() const noexcept override;

  /** This method is used to set this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active. There are two mechanisms that can be used to set a choice's "selection
    * ordinal." The first mechanism is by invoking this method. The second mechanism is by invoking one of the set methods
    * associated with one of the elements contained in this choice. Once this method is invoked, the value returned by
    * getPathSegmentSpeedChoiceTypeChoiceOrdinal() will be the ordinal specified when this method was invoked. In addition,
    * the access methods associated with the chosen element will be enabled and will provide access to the chosen element.
    *
    * @param ordinal The ordinal to set this choice's selected ordinal to.
    * @param type The type of data that is to be made available when the ordinal is set.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PathSegmentSpeedChoiceType& setPathSegmentSpeedChoiceTypeChoiceOrdinal(uci::type::PathSegmentSpeedChoiceType::PathSegmentSpeedChoiceTypeChoice ordinal, uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the accessor to the SpeedValue field contained in this message fragment
    *
    * @return The const reference to the accessor to the SpeedValue field.
    */
  uci::type::PathSegmentSpeedValueType& getSpeedValue_() const;

  /** Returns the accessor to the SpeedValue field contained in this message fragment
    *
    * @return The reference to the accessor to the SpeedValue field.
    */
  const uci::type::PathSegmentSpeedValueType& getSpeedValue() const override;

  /** Returns the accessor to the SpeedValue field contained in this message fragment
    *
    * @return The reference to the accessor to the SpeedValue field.
    */
  uci::type::PathSegmentSpeedValueType& getSpeedValue() override;

  /** Sets this choice's choice to be speedValue and initializes speedValue to be the specified value. A deep copy will be
    * used by this method to set speedValue
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PathSegmentSpeedChoiceType& setSpeedValue(const uci::type::PathSegmentSpeedValueType& accessor) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by SpeedValue.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by SpeedValue, false otherwise.
    */
  bool isSpeedValue() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by SpeedValue.
    *
    * @param method name of calling method
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by SpeedValue.
    */
  uci::type::PathSegmentSpeedValueType& chooseSpeedValue(const std::string& method, uci::base::accessorType::AccessorType type = uci::base::accessorType::null);

  /** Sets this choice's "selection ordinal" to the choice identified by SpeedValue.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by SpeedValue.
    */
  uci::type::PathSegmentSpeedValueType& chooseSpeedValue(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the contents of the message's MachValue item
    *
    * @return The contents of the MachValue field
    */
  uci::type::MachTypeValue getMachValue() const override;

  /** Sets this choice's choice to be MachValue and initializes MachValue to be the specified value
    *
    * @param value The new value to set MachValue to
    * @return A reference to the object on which this method was called.
    */
  uci::type::PathSegmentSpeedChoiceType& setMachValue(uci::type::MachTypeValue value) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by MachValue.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by MachValue, false otherwise.
    */
  bool isMachValue() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by MachValue. */
  void chooseMachValue();

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<PathSegmentSpeedChoiceType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::PathSegmentSpeedChoiceType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::PathSegmentSpeedChoiceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<PathSegmentSpeedValueType> speedValue_Accessor;
  boost::optional<asb_xs::Double> machValue_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_PATHSEGMENTSPEEDCHOICETYPE_H
