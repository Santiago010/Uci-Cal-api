/** @file SystemOrbitalEphemerisType.h
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

#ifndef ASB_UCI_TYPE_SYSTEMORBITALEPHEMERISTYPE_H
#define ASB_UCI_TYPE_SYSTEMORBITALEPHEMERISTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../../cppInterface/2.3.2/include/uci/type/SystemOrbitalEphemerisType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class OrbitalEphemerisParametersType;
class OrbitalEphemerisType;
class SystemID_Type;
class SystemOrbitalEphemerisID_Type;

/** Indicates the Ephemeris ID, System's ID, the parameters used for creating the ephemeris, and the ephemeris data. */
class SystemOrbitalEphemerisType : public virtual uci::type::SystemOrbitalEphemerisType {
public:
  /** The constructor */
  SystemOrbitalEphemerisType();

  /** The copy constructor
    *
    * @param rhs The SystemOrbitalEphemerisType to copy from
    */
  SystemOrbitalEphemerisType(const SystemOrbitalEphemerisType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The SystemOrbitalEphemerisType to move from
    */
  SystemOrbitalEphemerisType(SystemOrbitalEphemerisType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The SystemOrbitalEphemerisType to copy from
    * @return The SystemOrbitalEphemerisType that was assigned
    */
  SystemOrbitalEphemerisType& operator=(const SystemOrbitalEphemerisType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The SystemOrbitalEphemerisType to move from
    * @return The SystemOrbitalEphemerisType that was assigned
    */
  SystemOrbitalEphemerisType& operator=(SystemOrbitalEphemerisType&& rhs) = delete;

  /** The destructor */
  virtual ~SystemOrbitalEphemerisType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::SystemOrbitalEphemerisType whose contents are to be used to set this
    *      uci::type::SystemOrbitalEphemerisType's contents.
    */
  void copy(const uci::type::SystemOrbitalEphemerisType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::SystemOrbitalEphemerisType whose contents are to be used to set this
    *      uci::type::SystemOrbitalEphemerisType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::SystemOrbitalEphemerisType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the EphemerisID field contained in this message fragment
    *
    * @return The const reference to the accessor to the EphemerisID field.
    */
  const uci::type::SystemOrbitalEphemerisID_Type& getEphemerisID() const override;

  /** Returns the accessor to the EphemerisID field contained in this message fragment
    *
    * @return The reference to the accessor to the EphemerisID field.
    */
  uci::type::SystemOrbitalEphemerisID_Type& getEphemerisID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SystemOrbitalEphemerisType& setEphemerisID(const uci::type::SystemOrbitalEphemerisID_Type& accessor) override;

  /** Returns the accessor to the SystemID field contained in this message fragment
    *
    * @return The const reference to the accessor to the SystemID field.
    */
  const uci::type::SystemID_Type& getSystemID() const override;

  /** Returns the accessor to the SystemID field contained in this message fragment
    *
    * @return The reference to the accessor to the SystemID field.
    */
  uci::type::SystemID_Type& getSystemID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SystemOrbitalEphemerisType& setSystemID(const uci::type::SystemID_Type& accessor) override;

  /** Returns the accessor to the Parameters field contained in this message fragment
    *
    * @return The const reference to the accessor to the Parameters field.
    */
  const uci::type::OrbitalEphemerisParametersType& getParameters() const override;

  /** Returns the accessor to the Parameters field contained in this message fragment
    *
    * @return The reference to the accessor to the Parameters field.
    */
  uci::type::OrbitalEphemerisParametersType& getParameters() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SystemOrbitalEphemerisType& setParameters(const uci::type::OrbitalEphemerisParametersType& accessor) override;

  /** Returns the accessor to the Ephemeris field contained in this message fragment
    *
    * @return The const reference to the accessor to the Ephemeris field.
    */
  const uci::type::OrbitalEphemerisType& getEphemeris() const override;

  /** Returns the accessor to the Ephemeris field contained in this message fragment
    *
    * @return The reference to the accessor to the Ephemeris field.
    */
  uci::type::OrbitalEphemerisType& getEphemeris() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SystemOrbitalEphemerisType& setEphemeris(const uci::type::OrbitalEphemerisType& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<SystemOrbitalEphemerisType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::SystemOrbitalEphemerisType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::SystemOrbitalEphemerisType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<SystemOrbitalEphemerisID_Type> ephemerisID_Accessor;
  std::unique_ptr<SystemID_Type> systemID_Accessor;
  std::unique_ptr<OrbitalEphemerisParametersType> parameters_Accessor;
  std::unique_ptr<OrbitalEphemerisType> ephemeris_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_SYSTEMORBITALEPHEMERISTYPE_H
