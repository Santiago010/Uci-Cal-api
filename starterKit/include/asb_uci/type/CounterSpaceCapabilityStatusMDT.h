/** @file CounterSpaceCapabilityStatusMDT.h
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

#ifndef ASB_UCI_TYPE_COUNTERSPACECAPABILITYSTATUSMDT_H
#define ASB_UCI_TYPE_COUNTERSPACECAPABILITYSTATUSMDT_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/CapabilityStatusBaseType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CounterSpaceCapabilityStatusMDT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class CapabilityStatusType;

/** Status data type for a CounterSpace capability. */
class CounterSpaceCapabilityStatusMDT : public virtual uci::type::CounterSpaceCapabilityStatusMDT, public virtual CapabilityStatusBaseType {
public:
  /** Indicates the high level availability/state of a Capability instance. [Occurrences: Minimum: 1; Maximum: MAX_LENGTH] */
  using CapabilityStatus = asb_uci::base::BoundedList<uci::type::CapabilityStatusType, uci::type::accessorType::capabilityStatusType, asb_uci::type::CapabilityStatusType>;

  /** The constructor */
  CounterSpaceCapabilityStatusMDT();

  /** The copy constructor
    *
    * @param rhs The CounterSpaceCapabilityStatusMDT to copy from
    */
  CounterSpaceCapabilityStatusMDT(const CounterSpaceCapabilityStatusMDT& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The CounterSpaceCapabilityStatusMDT to move from
    */
  CounterSpaceCapabilityStatusMDT(CounterSpaceCapabilityStatusMDT&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The CounterSpaceCapabilityStatusMDT to copy from
    * @return The CounterSpaceCapabilityStatusMDT that was assigned
    */
  CounterSpaceCapabilityStatusMDT& operator=(const CounterSpaceCapabilityStatusMDT& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The CounterSpaceCapabilityStatusMDT to move from
    * @return The CounterSpaceCapabilityStatusMDT that was assigned
    */
  CounterSpaceCapabilityStatusMDT& operator=(CounterSpaceCapabilityStatusMDT&& rhs) = delete;

  /** The destructor */
  ~CounterSpaceCapabilityStatusMDT() override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::CounterSpaceCapabilityStatusMDT whose contents are to be used to set this
    *      uci::type::CounterSpaceCapabilityStatusMDT's contents.
    */
  void copy(const uci::type::CounterSpaceCapabilityStatusMDT& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::CounterSpaceCapabilityStatusMDT whose contents are to be used to set this
    *      uci::type::CounterSpaceCapabilityStatusMDT's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::CounterSpaceCapabilityStatusMDT& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the CapabilityStatus field contained in this message fragment
    *
    * @return The const reference to the accessor to the CapabilityStatus field.
    */
  const uci::type::CounterSpaceCapabilityStatusMDT::CapabilityStatus& getCapabilityStatus() const override;

  /** Returns the accessor to the CapabilityStatus field contained in this message fragment
    *
    * @return The reference to the accessor to the CapabilityStatus field.
    */
  uci::type::CounterSpaceCapabilityStatusMDT::CapabilityStatus& getCapabilityStatus() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CounterSpaceCapabilityStatusMDT& setCapabilityStatus(const uci::type::CounterSpaceCapabilityStatusMDT::CapabilityStatus& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<CounterSpaceCapabilityStatusMDT> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::CounterSpaceCapabilityStatusMDT& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::CounterSpaceCapabilityStatusMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<CapabilityStatus> capabilityStatus_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_COUNTERSPACECAPABILITYSTATUSMDT_H
