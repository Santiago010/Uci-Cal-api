/** @file SubsystemBIT_CommandMDT.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:15 PM
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

#ifndef ASB_UCI_TYPE_SUBSYSTEMBIT_COMMANDMDT_H
#define ASB_UCI_TYPE_SUBSYSTEMBIT_COMMANDMDT_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/CommandBaseType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SubsystemBIT_CommandMDT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class CapabilityCommandFrequencyType;
class SubsystemBIT_CommandType;
class SubsystemID_Type;

/** See annotations in child elements and messages/elements that use this type for details. */
class SubsystemBIT_CommandMDT : public virtual uci::type::SubsystemBIT_CommandMDT, public virtual CommandBaseType {
public:
  /** The constructor */
  SubsystemBIT_CommandMDT();

  /** The copy constructor
    *
    * @param rhs The SubsystemBIT_CommandMDT to copy from
    */
  SubsystemBIT_CommandMDT(const SubsystemBIT_CommandMDT& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The SubsystemBIT_CommandMDT to move from
    */
  SubsystemBIT_CommandMDT(SubsystemBIT_CommandMDT&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The SubsystemBIT_CommandMDT to copy from
    * @return The SubsystemBIT_CommandMDT that was assigned
    */
  SubsystemBIT_CommandMDT& operator=(const SubsystemBIT_CommandMDT& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The SubsystemBIT_CommandMDT to move from
    * @return The SubsystemBIT_CommandMDT that was assigned
    */
  SubsystemBIT_CommandMDT& operator=(SubsystemBIT_CommandMDT&& rhs) = delete;

  /** The destructor */
  ~SubsystemBIT_CommandMDT() override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::SubsystemBIT_CommandMDT whose contents are to be used to set this
    *      uci::type::SubsystemBIT_CommandMDT's contents.
    */
  void copy(const uci::type::SubsystemBIT_CommandMDT& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::SubsystemBIT_CommandMDT whose contents are to be used to set this
    *      uci::type::SubsystemBIT_CommandMDT's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::SubsystemBIT_CommandMDT& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the SubsystemID field contained in this message fragment
    *
    * @return The const reference to the accessor to the SubsystemID field.
    */
  const uci::type::SubsystemID_Type& getSubsystemID() const override;

  /** Returns the accessor to the SubsystemID field contained in this message fragment
    *
    * @return The reference to the accessor to the SubsystemID field.
    */
  uci::type::SubsystemID_Type& getSubsystemID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemBIT_CommandMDT& setSubsystemID(const uci::type::SubsystemID_Type& accessor) override;

  /** Returns the accessor to the CommandType field contained in this message fragment
    *
    * @return The const reference to the accessor to the CommandType field.
    */
  const uci::type::SubsystemBIT_CommandType& getCommandType() const override;

  /** Returns the accessor to the CommandType field contained in this message fragment
    *
    * @return The reference to the accessor to the CommandType field.
    */
  uci::type::SubsystemBIT_CommandType& getCommandType() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemBIT_CommandMDT& setCommandType(const uci::type::SubsystemBIT_CommandType& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CapabilityCommandFrequencyType& getFrequency_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::CapabilityCommandFrequencyType& getFrequency() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CapabilityCommandFrequencyType& getFrequency() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemBIT_CommandMDT& setFrequency(const uci::type::CapabilityCommandFrequencyType& accessor) override;

  /** Returns whether this optional field Frequencyis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasFrequency() const noexcept override;

  /** Enables the optional field such that getFrequency will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CapabilityCommandFrequencyType& enableFrequency(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemBIT_CommandMDT& clearFrequency() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<SubsystemBIT_CommandMDT> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::SubsystemBIT_CommandMDT& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::SubsystemBIT_CommandMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<SubsystemID_Type> subsystemID_Accessor;
  std::unique_ptr<SubsystemBIT_CommandType> commandType_Accessor;
  std::unique_ptr<CapabilityCommandFrequencyType> frequency_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_SUBSYSTEMBIT_COMMANDMDT_H
