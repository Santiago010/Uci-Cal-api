/** @file EA_TaskProtectedAssetsType.h
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

#ifndef ASB_UCI_TYPE_EA_TASKPROTECTEDASSETSTYPE_H
#define ASB_UCI_TYPE_EA_TASKPROTECTEDASSETSTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EA_TaskProtectedAssetsType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class ProtectedAssetAndThreatType;

/** See annotations in child elements and messages/elements that use this type for details. */
class EA_TaskProtectedAssetsType : public virtual uci::type::EA_TaskProtectedAssetsType {
public:
  /** Indicates the identity and priority of protected assets. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  using ProtectedAsset = asb_uci::base::BoundedList<uci::type::ProtectedAssetAndThreatType, uci::type::accessorType::protectedAssetAndThreatType, asb_uci::type::ProtectedAssetAndThreatType>;

  /** The constructor */
  EA_TaskProtectedAssetsType();

  /** The copy constructor
    *
    * @param rhs The EA_TaskProtectedAssetsType to copy from
    */
  EA_TaskProtectedAssetsType(const EA_TaskProtectedAssetsType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The EA_TaskProtectedAssetsType to move from
    */
  EA_TaskProtectedAssetsType(EA_TaskProtectedAssetsType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The EA_TaskProtectedAssetsType to copy from
    * @return The EA_TaskProtectedAssetsType that was assigned
    */
  EA_TaskProtectedAssetsType& operator=(const EA_TaskProtectedAssetsType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The EA_TaskProtectedAssetsType to move from
    * @return The EA_TaskProtectedAssetsType that was assigned
    */
  EA_TaskProtectedAssetsType& operator=(EA_TaskProtectedAssetsType&& rhs) = delete;

  /** The destructor */
  virtual ~EA_TaskProtectedAssetsType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::EA_TaskProtectedAssetsType whose contents are to be used to set this
    *      uci::type::EA_TaskProtectedAssetsType's contents.
    */
  void copy(const uci::type::EA_TaskProtectedAssetsType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::EA_TaskProtectedAssetsType whose contents are to be used to set this
    *      uci::type::EA_TaskProtectedAssetsType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::EA_TaskProtectedAssetsType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the contents of the message's ProtectAll field
    *
    * @return The contents of the ProtectAll field
    */
  xs::Boolean getProtectAll() const override;

  /** Sets the contents of the message's ProtectAll field
    *
    * @param value The new value to set the ProtectAll field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::EA_TaskProtectedAssetsType& setProtectAll(xs::Boolean value) override;

  /** Returns the contents of the message's SelfProtect field
    *
    * @return The contents of the SelfProtect field
    */
  xs::Boolean getSelfProtect() const override;

  /** Sets the contents of the message's SelfProtect field
    *
    * @param value The new value to set the SelfProtect field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::EA_TaskProtectedAssetsType& setSelfProtect(xs::Boolean value) override;

  /** Returns the accessor to the ProtectedAsset field contained in this message fragment
    *
    * @return The const reference to the accessor to the ProtectedAsset field.
    */
  const uci::type::EA_TaskProtectedAssetsType::ProtectedAsset& getProtectedAsset() const override;

  /** Returns the accessor to the ProtectedAsset field contained in this message fragment
    *
    * @return The reference to the accessor to the ProtectedAsset field.
    */
  uci::type::EA_TaskProtectedAssetsType::ProtectedAsset& getProtectedAsset() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::EA_TaskProtectedAssetsType& setProtectedAsset(const uci::type::EA_TaskProtectedAssetsType::ProtectedAsset& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<EA_TaskProtectedAssetsType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::EA_TaskProtectedAssetsType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::EA_TaskProtectedAssetsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  asb_xs::Boolean protectAll_Accessor{false};
  asb_xs::Boolean selfProtect_Accessor{false};
  std::unique_ptr<ProtectedAsset> protectedAsset_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_EA_TASKPROTECTEDASSETSTYPE_H
