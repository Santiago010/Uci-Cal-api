/** @file RF_ResourceAllocationRequestRF_RemovalType.h
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

#ifndef ASB_UCI_TYPE_RF_RESOURCEALLOCATIONREQUESTRF_REMOVALTYPE_H
#define ASB_UCI_TYPE_RF_RESOURCEALLOCATIONREQUESTRF_REMOVALTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RF_ResourceAllocationRequestRF_RemovalType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class AntennaAndResourceInstanceType;

/** Defines content necessary when an allocation or part of an allocation is being ended by the requesting Capability. */
class RF_ResourceAllocationRequestRF_RemovalType : public virtual uci::type::RF_ResourceAllocationRequestRF_RemovalType {
public:
  /** Antenna and associated resource. [Occurrences: Minimum: 1; Maximum: MAX_LENGTH] */
  using AntennaAndResourceInstance = asb_uci::base::BoundedList<uci::type::AntennaAndResourceInstanceType, uci::type::accessorType::antennaAndResourceInstanceType, asb_uci::type::AntennaAndResourceInstanceType>;

  /** The constructor */
  RF_ResourceAllocationRequestRF_RemovalType();

  /** The copy constructor
    *
    * @param rhs The RF_ResourceAllocationRequestRF_RemovalType to copy from
    */
  RF_ResourceAllocationRequestRF_RemovalType(const RF_ResourceAllocationRequestRF_RemovalType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The RF_ResourceAllocationRequestRF_RemovalType to move from
    */
  RF_ResourceAllocationRequestRF_RemovalType(RF_ResourceAllocationRequestRF_RemovalType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The RF_ResourceAllocationRequestRF_RemovalType to copy from
    * @return The RF_ResourceAllocationRequestRF_RemovalType that was assigned
    */
  RF_ResourceAllocationRequestRF_RemovalType& operator=(const RF_ResourceAllocationRequestRF_RemovalType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The RF_ResourceAllocationRequestRF_RemovalType to move from
    * @return The RF_ResourceAllocationRequestRF_RemovalType that was assigned
    */
  RF_ResourceAllocationRequestRF_RemovalType& operator=(RF_ResourceAllocationRequestRF_RemovalType&& rhs) = delete;

  /** The destructor */
  virtual ~RF_ResourceAllocationRequestRF_RemovalType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::RF_ResourceAllocationRequestRF_RemovalType whose contents are to be used to set this
    *      uci::type::RF_ResourceAllocationRequestRF_RemovalType's contents.
    */
  void copy(const uci::type::RF_ResourceAllocationRequestRF_RemovalType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::RF_ResourceAllocationRequestRF_RemovalType whose contents are to be used to set this
    *      uci::type::RF_ResourceAllocationRequestRF_RemovalType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::RF_ResourceAllocationRequestRF_RemovalType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::UnsignedInt getRF_ThreadInstanceIndex() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::RF_ResourceAllocationRequestRF_RemovalType& setRF_ThreadInstanceIndex(xs::UnsignedInt value) override;

  /** Returns whether this optional field RF_ThreadInstanceIndexis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasRF_ThreadInstanceIndex() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::RF_ResourceAllocationRequestRF_RemovalType& clearRF_ThreadInstanceIndex() noexcept override;

  /** Returns the accessor to the AntennaAndResourceInstance field contained in this message fragment
    *
    * @return The const reference to the accessor to the AntennaAndResourceInstance field.
    */
  const uci::type::RF_ResourceAllocationRequestRF_RemovalType::AntennaAndResourceInstance& getAntennaAndResourceInstance() const override;

  /** Returns the accessor to the AntennaAndResourceInstance field contained in this message fragment
    *
    * @return The reference to the accessor to the AntennaAndResourceInstance field.
    */
  uci::type::RF_ResourceAllocationRequestRF_RemovalType::AntennaAndResourceInstance& getAntennaAndResourceInstance() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RF_ResourceAllocationRequestRF_RemovalType& setAntennaAndResourceInstance(const uci::type::RF_ResourceAllocationRequestRF_RemovalType::AntennaAndResourceInstance& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<RF_ResourceAllocationRequestRF_RemovalType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::RF_ResourceAllocationRequestRF_RemovalType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::RF_ResourceAllocationRequestRF_RemovalType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  boost::optional<asb_xs::UnsignedInt> rF_ThreadInstanceIndex_Accessor;
  std::unique_ptr<AntennaAndResourceInstance> antennaAndResourceInstance_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_RF_RESOURCEALLOCATIONREQUESTRF_REMOVALTYPE_H
