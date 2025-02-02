/** @file ReconnaissanceStatusType.h
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

#ifndef ASB_UCI_TYPE_RECONNAISSANCESTATUSTYPE_H
#define ASB_UCI_TYPE_RECONNAISSANCESTATUSTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/CapabilityAvailabilityEnum.h"
#include "../../../include/asb_uci/type/RECCE_SystemEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ReconnaissanceStatusType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** See annotations in child elements and messages/elements that use this type for details. */
class ReconnaissanceStatusType : public virtual uci::type::ReconnaissanceStatusType {
public:
  /** The constructor */
  ReconnaissanceStatusType();

  /** The copy constructor
    *
    * @param rhs The ReconnaissanceStatusType to copy from
    */
  ReconnaissanceStatusType(const ReconnaissanceStatusType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The ReconnaissanceStatusType to move from
    */
  ReconnaissanceStatusType(ReconnaissanceStatusType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The ReconnaissanceStatusType to copy from
    * @return The ReconnaissanceStatusType that was assigned
    */
  ReconnaissanceStatusType& operator=(const ReconnaissanceStatusType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The ReconnaissanceStatusType to move from
    * @return The ReconnaissanceStatusType that was assigned
    */
  ReconnaissanceStatusType& operator=(ReconnaissanceStatusType&& rhs) = delete;

  /** The destructor */
  virtual ~ReconnaissanceStatusType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::ReconnaissanceStatusType whose contents are to be used to set this
    *      uci::type::ReconnaissanceStatusType's contents.
    */
  void copy(const uci::type::ReconnaissanceStatusType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::ReconnaissanceStatusType whose contents are to be used to set this
    *      uci::type::ReconnaissanceStatusType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::ReconnaissanceStatusType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the contents of the message's SystemType field
    *
    * @return The contents of the SystemType field
    */
  const uci::type::RECCE_SystemEnum& getSystemType() const override;

  /** Returns the contents of the message's SystemType field
    *
    * @return The contents of the SystemType field
    */
  uci::type::RECCE_SystemEnum& getSystemType() override;

  /** Sets the contents of the message's SystemType field
    *
    * @param accessor The accessor to use to set the SystemType field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::ReconnaissanceStatusType& setSystemType(const uci::type::RECCE_SystemEnum& accessor) override;

  /** Sets the contents of the message's SystemType field
    *
    * @param value The new value to set the SystemType field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::ReconnaissanceStatusType& setSystemType(uci::type::RECCE_SystemEnum::EnumerationItem value) override;

  /** Returns the contents of the message's SystemStatus field
    *
    * @return The contents of the SystemStatus field
    */
  const uci::type::CapabilityAvailabilityEnum& getSystemStatus() const override;

  /** Returns the contents of the message's SystemStatus field
    *
    * @return The contents of the SystemStatus field
    */
  uci::type::CapabilityAvailabilityEnum& getSystemStatus() override;

  /** Sets the contents of the message's SystemStatus field
    *
    * @param accessor The accessor to use to set the SystemStatus field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::ReconnaissanceStatusType& setSystemStatus(const uci::type::CapabilityAvailabilityEnum& accessor) override;

  /** Sets the contents of the message's SystemStatus field
    *
    * @param value The new value to set the SystemStatus field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::ReconnaissanceStatusType& setSystemStatus(uci::type::CapabilityAvailabilityEnum::EnumerationItem value) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<ReconnaissanceStatusType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::ReconnaissanceStatusType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::ReconnaissanceStatusType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<RECCE_SystemEnum> systemType_Accessor;
  std::unique_ptr<CapabilityAvailabilityEnum> systemStatus_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_RECONNAISSANCESTATUSTYPE_H
