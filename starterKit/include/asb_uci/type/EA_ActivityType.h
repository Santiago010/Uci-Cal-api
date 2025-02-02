/** @file EA_ActivityType.h
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

#ifndef ASB_UCI_TYPE_EA_ACTIVITYTYPE_H
#define ASB_UCI_TYPE_EA_ACTIVITYTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/ConsentEnum.h"
#include "../../../include/asb_uci/type/SharedRF_ApertureActivityBaseType.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EA_ActivityType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class EA_DetailsType;
class SystemID_Type;

/** See annotations in child elements and messages/elements that use this type for details. */
class EA_ActivityType : public virtual uci::type::EA_ActivityType, public virtual SharedRF_ApertureActivityBaseType {
public:
  /** Indicates the unique ID of a system to be protected by the electronic attack. [Occurrences: Minimum: 0; Maximum:
    * MAX_LENGTH]
    */
  using ProtectedEntityID = asb_uci::base::BoundedList<uci::type::SystemID_Type, uci::type::accessorType::systemID_Type, asb_uci::type::SystemID_Type>;

  /** The constructor */
  EA_ActivityType();

  /** The copy constructor
    *
    * @param rhs The EA_ActivityType to copy from
    */
  EA_ActivityType(const EA_ActivityType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The EA_ActivityType to move from
    */
  EA_ActivityType(EA_ActivityType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The EA_ActivityType to copy from
    * @return The EA_ActivityType that was assigned
    */
  EA_ActivityType& operator=(const EA_ActivityType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The EA_ActivityType to move from
    * @return The EA_ActivityType that was assigned
    */
  EA_ActivityType& operator=(EA_ActivityType&& rhs) = delete;

  /** The destructor */
  ~EA_ActivityType() override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::EA_ActivityType whose contents are to be used to set this uci::type::EA_ActivityType's
    *      contents.
    */
  void copy(const uci::type::EA_ActivityType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::EA_ActivityType whose contents are to be used to set this uci::type::EA_ActivityType's
    *      contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::EA_ActivityType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the EA_Details field contained in this message fragment
    *
    * @return The const reference to the accessor to the EA_Details field.
    */
  const uci::type::EA_DetailsType& getEA_Details() const override;

  /** Returns the accessor to the EA_Details field contained in this message fragment
    *
    * @return The reference to the accessor to the EA_Details field.
    */
  uci::type::EA_DetailsType& getEA_Details() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::EA_ActivityType& setEA_Details(const uci::type::EA_DetailsType& accessor) override;

  /** Returns the accessor to the ProtectedEntityID field contained in this message fragment
    *
    * @return The const reference to the accessor to the ProtectedEntityID field.
    */
  const uci::type::EA_ActivityType::ProtectedEntityID& getProtectedEntityID() const override;

  /** Returns the accessor to the ProtectedEntityID field contained in this message fragment
    *
    * @return The reference to the accessor to the ProtectedEntityID field.
    */
  uci::type::EA_ActivityType::ProtectedEntityID& getProtectedEntityID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::EA_ActivityType& setProtectedEntityID(const uci::type::EA_ActivityType::ProtectedEntityID& accessor) override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Boolean getConsentRequired() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::EA_ActivityType& setConsentRequired(xs::Boolean value) override;

  /** Returns whether this optional field ConsentRequiredis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasConsentRequired() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::EA_ActivityType& clearConsentRequired() noexcept override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ConsentEnum& getConsentState_() const;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::ConsentEnum& getConsentState() const override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ConsentEnum& getConsentState() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::EA_ActivityType& setConsentState(const uci::type::ConsentEnum& accessor) override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param value The accessor to use to set the contents of the message fragment that this accessor provides access to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::EA_ActivityType& setConsentState(uci::type::ConsentEnum::EnumerationItem value) override;

  /** Returns whether this optional field ConsentStateis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasConsentState() const noexcept override;

  /** Enables the optional field such that getConsentState will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ConsentEnum& enableConsentState(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::EA_ActivityType& clearConsentState() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<EA_ActivityType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::EA_ActivityType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::EA_ActivityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<EA_DetailsType> eA_Details_Accessor;
  std::unique_ptr<ProtectedEntityID> protectedEntityID_Accessor;
  boost::optional<asb_xs::Boolean> consentRequired_Accessor;
  std::unique_ptr<ConsentEnum> consentState_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_EA_ACTIVITYTYPE_H
