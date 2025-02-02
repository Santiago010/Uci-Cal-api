/** @file CountryCodeType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:12 PM
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

#ifndef ASB_UCI_TYPE_COUNTRYCODETYPE_H
#define ASB_UCI_TYPE_COUNTRYCODETYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/GENC_CountryNameEnum.h"
#include "../../../include/asb_uci/type/OperatorUniqueNameEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/Accessor.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CountryCodeType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** See annotations in child elements and messages/elements that use this type for details. */
class CountryCodeType : public virtual uci::type::CountryCodeType {
public:
  /** The constructor */
  CountryCodeType();

  /** The copy constructor
    *
    * @param rhs The CountryCodeType to copy from
    */
  CountryCodeType(const CountryCodeType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The CountryCodeType to move from
    */
  CountryCodeType(CountryCodeType&& rhs) = delete;

  /** The assignment operator [not supported]
    *
    * @param rhs The CountryCodeType to copy from
    * @return The CountryCodeType that was assigned
    */
  CountryCodeType& operator=(const CountryCodeType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The CountryCodeType to move from
    * @return The CountryCodeType that was assigned
    */
  CountryCodeType& operator=(CountryCodeType&& rhs) = delete;

  /** The destructor */
  virtual ~CountryCodeType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::CountryCodeType whose contents are to be used to set this uci::type::CountryCodeType's
    *      contents.
    */
  void copy(const uci::type::CountryCodeType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::CountryCodeType whose contents are to be used to set this uci::type::CountryCodeType's
    *      contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::CountryCodeType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** This method returns this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active.
    *
    * @return The selected item's enumerated value
    */
  uci::type::CountryCodeType::CountryCodeTypeChoice getCountryCodeTypeChoiceOrdinal() const noexcept override;

  /** This method is used to set this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active. There are two mechanisms that can be used to set a choice's "selection
    * ordinal." The first mechanism is by invoking this method. The second mechanism is by invoking one of the set methods
    * associated with one of the elements contained in this choice. Once this method is invoked, the value returned by
    * getCountryCodeTypeChoiceOrdinal() will be the ordinal specified when this method was invoked. In addition, the access
    * methods associated with the chosen element will be enabled and will provide access to the chosen element.
    *
    * @param ordinal The ordinal to set this choice's selected ordinal to.
    * @param type The type of data that is to be made available when the ordinal is set.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CountryCodeType& setCountryCodeTypeChoiceOrdinal(uci::type::CountryCodeType::CountryCodeTypeChoice ordinal, uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the contents of the message's CountryName item
    *
    * @return The contents of the CountryName item
    */
  uci::type::GENC_CountryNameEnum& getCountryName_() const;

  /** Returns the contents of the message's CountryName item
    *
    * @return The contents of the CountryName item
    */
  const uci::type::GENC_CountryNameEnum& getCountryName() const override;

  /** Returns the contents of the message's CountryName item
    *
    * @return The contents of the CountryName item
    */
  uci::type::GENC_CountryNameEnum& getCountryName() override;

  /** Sets this choice's choice to be CountryName and initializes CountryName to be the specified value
    *
    * @param accessor The new value to set the CountryName item to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CountryCodeType& setCountryName(const uci::type::GENC_CountryNameEnum& accessor) override;

  /** Sets this choice's choice to be CountryName and initializes CountryName to be the specified value
    *
    * @param value The new value to set the CountryName item to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CountryCodeType& setCountryName(uci::type::GENC_CountryNameEnum::EnumerationItem value) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by CountryName.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by CountryName, false otherwise.
    */
  bool isCountryName() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by CountryName.
    *
    * @param method name of calling method
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by CountryName.
    */
  uci::type::GENC_CountryNameEnum& chooseCountryName(const std::string& method, uci::base::accessorType::AccessorType type = uci::base::accessorType::null);

  /** Sets this choice's "selection ordinal" to the choice identified by CountryName.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by CountryName.
    */
  uci::type::GENC_CountryNameEnum& chooseCountryName(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the contents of the message's OperatorUniqueAssetName item
    *
    * @return The contents of the OperatorUniqueAssetName item
    */
  uci::type::OperatorUniqueNameEnum& getOperatorUniqueAssetName_() const;

  /** Returns the contents of the message's OperatorUniqueAssetName item
    *
    * @return The contents of the OperatorUniqueAssetName item
    */
  const uci::type::OperatorUniqueNameEnum& getOperatorUniqueAssetName() const override;

  /** Returns the contents of the message's OperatorUniqueAssetName item
    *
    * @return The contents of the OperatorUniqueAssetName item
    */
  uci::type::OperatorUniqueNameEnum& getOperatorUniqueAssetName() override;

  /** Sets this choice's choice to be OperatorUniqueAssetName and initializes OperatorUniqueAssetName to be the specified
    * value
    *
    * @param accessor The new value to set the OperatorUniqueAssetName item to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CountryCodeType& setOperatorUniqueAssetName(const uci::type::OperatorUniqueNameEnum& accessor) override;

  /** Sets this choice's choice to be OperatorUniqueAssetName and initializes OperatorUniqueAssetName to be the specified
    * value
    *
    * @param value The new value to set the OperatorUniqueAssetName item to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CountryCodeType& setOperatorUniqueAssetName(uci::type::OperatorUniqueNameEnum::EnumerationItem value) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by OperatorUniqueAssetName.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by OperatorUniqueAssetName, false
    *      otherwise.
    */
  bool isOperatorUniqueAssetName() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by OperatorUniqueAssetName.
    *
    * @param method name of calling method
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by OperatorUniqueAssetName.
    */
  uci::type::OperatorUniqueNameEnum& chooseOperatorUniqueAssetName(const std::string& method, uci::base::accessorType::AccessorType type = uci::base::accessorType::null);

  /** Sets this choice's "selection ordinal" to the choice identified by OperatorUniqueAssetName.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by OperatorUniqueAssetName.
    */
  uci::type::OperatorUniqueNameEnum& chooseOperatorUniqueAssetName(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<CountryCodeType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::CountryCodeType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::CountryCodeType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<GENC_CountryNameEnum> countryName_Accessor;
  std::unique_ptr<OperatorUniqueNameEnum> operatorUniqueAssetName_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_COUNTRYCODETYPE_H
