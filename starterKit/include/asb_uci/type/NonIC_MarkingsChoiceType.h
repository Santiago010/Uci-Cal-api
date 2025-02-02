/** @file NonIC_MarkingsChoiceType.h
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

#ifndef ASB_UCI_TYPE_NONIC_MARKINGSCHOICETYPE_H
#define ASB_UCI_TYPE_NONIC_MARKINGSCHOICETYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "NonIC_MarkingsEnum.h"
#include "NonIC_MarkingsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/Accessor.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/NonIC_MarkingsChoiceType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** (U) All currently valid Non-IC markings from the published register PERMISSIBLE VALUES The permissible values for
  * this simple type are defined in the Controlled Value Enumeration: CVEnumISMNonIC.xml
  */
class NonIC_MarkingsChoiceType : public virtual uci::type::NonIC_MarkingsChoiceType {
public:
  /** The constructor */
  NonIC_MarkingsChoiceType();

  /** The copy constructor
    *
    * @param rhs The NonIC_MarkingsChoiceType to copy from
    */
  NonIC_MarkingsChoiceType(const NonIC_MarkingsChoiceType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The NonIC_MarkingsChoiceType to move from
    */
  NonIC_MarkingsChoiceType(NonIC_MarkingsChoiceType&& rhs) = delete;

  /** The assignment operator [not supported]
    *
    * @param rhs The NonIC_MarkingsChoiceType to copy from
    * @return The NonIC_MarkingsChoiceType that was assigned
    */
  NonIC_MarkingsChoiceType& operator=(const NonIC_MarkingsChoiceType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The NonIC_MarkingsChoiceType to move from
    * @return The NonIC_MarkingsChoiceType that was assigned
    */
  NonIC_MarkingsChoiceType& operator=(NonIC_MarkingsChoiceType&& rhs) = delete;

  /** The destructor */
  virtual ~NonIC_MarkingsChoiceType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::NonIC_MarkingsChoiceType whose contents are to be used to set this
    *      uci::type::NonIC_MarkingsChoiceType's contents.
    */
  void copy(const uci::type::NonIC_MarkingsChoiceType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::NonIC_MarkingsChoiceType whose contents are to be used to set this
    *      uci::type::NonIC_MarkingsChoiceType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::NonIC_MarkingsChoiceType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** This method returns this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active.
    *
    * @return The selected item's enumerated value
    */
  uci::type::NonIC_MarkingsChoiceType::NonIC_MarkingsChoiceTypeChoice getNonIC_MarkingsChoiceTypeChoiceOrdinal() const noexcept override;

  /** This method is used to set this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active. There are two mechanisms that can be used to set a choice's "selection
    * ordinal." The first mechanism is by invoking this method. The second mechanism is by invoking one of the set methods
    * associated with one of the elements contained in this choice. Once this method is invoked, the value returned by
    * getNonIC_MarkingsChoiceTypeChoiceOrdinal() will be the ordinal specified when this method was invoked. In addition,
    * the access methods associated with the chosen element will be enabled and will provide access to the chosen element.
    *
    * @param ordinal The ordinal to set this choice's selected ordinal to.
    * @param type The type of data that is to be made available when the ordinal is set.
    * @return A reference to the object on which this method was called.
    */
  uci::type::NonIC_MarkingsChoiceType& setNonIC_MarkingsChoiceTypeChoiceOrdinal(uci::type::NonIC_MarkingsChoiceType::NonIC_MarkingsChoiceTypeChoice ordinal, uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the contents of the message's StandardMarking item
    *
    * @return The contents of the StandardMarking item
    */
  uci::type::NonIC_MarkingsEnum& getStandardMarking_() const;

  /** Returns the contents of the message's StandardMarking item
    *
    * @return The contents of the StandardMarking item
    */
  const uci::type::NonIC_MarkingsEnum& getStandardMarking() const override;

  /** Returns the contents of the message's StandardMarking item
    *
    * @return The contents of the StandardMarking item
    */
  uci::type::NonIC_MarkingsEnum& getStandardMarking() override;

  /** Sets this choice's choice to be StandardMarking and initializes StandardMarking to be the specified value
    *
    * @param accessor The new value to set the StandardMarking item to
    * @return A reference to the object on which this method was called.
    */
  uci::type::NonIC_MarkingsChoiceType& setStandardMarking(const uci::type::NonIC_MarkingsEnum& accessor) override;

  /** Sets this choice's choice to be StandardMarking and initializes StandardMarking to be the specified value
    *
    * @param value The new value to set the StandardMarking item to
    * @return A reference to the object on which this method was called.
    */
  uci::type::NonIC_MarkingsChoiceType& setStandardMarking(uci::type::NonIC_MarkingsEnum::EnumerationItem value) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by StandardMarking.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by StandardMarking, false
    *      otherwise.
    */
  bool isStandardMarking() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by StandardMarking.
    *
    * @param method name of calling method
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by StandardMarking.
    */
  uci::type::NonIC_MarkingsEnum& chooseStandardMarking(const std::string& method, uci::base::accessorType::AccessorType type = uci::base::accessorType::null);

  /** Sets this choice's "selection ordinal" to the choice identified by StandardMarking.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by StandardMarking.
    */
  uci::type::NonIC_MarkingsEnum& chooseStandardMarking(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::NonIC_MarkingsType& getAlternateMarking_() const;

  /** Returns the contents of the message's AlternateMarking item
    *
    * @return The contents of the AlternateMarking field
    */
  const uci::type::NonIC_MarkingsType& getAlternateMarking() const override;

  /** Returns the contents of the message's AlternateMarking item
    *
    * @return The contents of the AlternateMarking field
    */
  uci::type::NonIC_MarkingsType& getAlternateMarking() override;

  /** Sets this choice's choice to be AlternateMarking and initializes AlternateMarking to be the specified value
    *
    * @param value The new value to set AlternateMarking to
    * @return A reference to the object on which this method was called.
    */
  uci::type::NonIC_MarkingsChoiceType& setAlternateMarking(const uci::type::NonIC_MarkingsType& value) override;

  /** Sets this choice's choice to be AlternateMarking and initializes AlternateMarking to be the specified value
    *
    * @param value The new value to set AlternateMarking to
    * @return A reference to the object on which this method was called.
    */
  uci::type::NonIC_MarkingsChoiceType& setAlternateMarking(const std::string& value) override;

  /** Sets this choice's choice to be AlternateMarking and initializes AlternateMarking to be the specified value
    *
    * @param value The new value to set AlternateMarking to
    * @return A reference to the object on which this method was called.
    */
  uci::type::NonIC_MarkingsChoiceType& setAlternateMarking(const char * value) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by AlternateMarking.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by AlternateMarking, false
    *      otherwise.
    */
  bool isAlternateMarking() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by AlternateMarking.
    *
    * @param method name of calling method
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by AlternateMarking.
    */
  uci::type::NonIC_MarkingsType& chooseAlternateMarking(const std::string& method, uci::base::accessorType::AccessorType type = uci::base::accessorType::null);

  /** Sets this choice's "selection ordinal" to the choice identified by AlternateMarking.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by AlternateMarking.
    */
  uci::type::NonIC_MarkingsType& chooseAlternateMarking(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<NonIC_MarkingsChoiceType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::NonIC_MarkingsChoiceType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::NonIC_MarkingsChoiceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<NonIC_MarkingsEnum> standardMarking_Accessor;
  std::unique_ptr<NonIC_MarkingsType> alternateMarking_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_NONIC_MARKINGSCHOICETYPE_H
