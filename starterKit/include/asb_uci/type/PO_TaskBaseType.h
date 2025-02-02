/** @file PO_TaskBaseType.h
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

#ifndef ASB_UCI_TYPE_PO_TASKBASETYPE_H
#define ASB_UCI_TYPE_PO_TASKBASETYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/NIIRS_Type.h"
#include "../../../include/asb_uci/type/PO_CapabilityEnum.h"
#include "../../../include/asb_uci/type/PairIdentifierEnum.h"
#include "../../../include/asb_uci/type/SensorSpectrumEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_TaskBaseType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class LocatedEllipseType;
class OpticalCollectionConstraintsType;
class PO_ProductOutputCommandImageryType;

/** See annotations in child elements and messages/elements that use this type for details. */
class PO_TaskBaseType : public virtual uci::type::PO_TaskBaseType {
public:
  /** Indicates the spectrum that will be used for the PO Collection. List size for this element is based on "Select All
    * That Apply" condition. [Occurrences: Minimum: 0; Maximum: 14]
    */
  using SensorSpectrum = asb_uci::base::BoundedList<uci::type::SensorSpectrumEnum, uci::type::accessorType::sensorSpectrumEnum, asb_uci::type::SensorSpectrumEnum>;

  /** Indicates a desired output Product of the Task. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  using Output = asb_uci::base::BoundedList<uci::type::PO_ProductOutputCommandImageryType, uci::type::accessorType::pO_ProductOutputCommandImageryType, asb_uci::type::PO_ProductOutputCommandImageryType>;

  /** The constructor */
  PO_TaskBaseType();

  /** The copy constructor
    *
    * @param rhs The PO_TaskBaseType to copy from
    */
  PO_TaskBaseType(const PO_TaskBaseType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The PO_TaskBaseType to move from
    */
  PO_TaskBaseType(PO_TaskBaseType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The PO_TaskBaseType to copy from
    * @return The PO_TaskBaseType that was assigned
    */
  PO_TaskBaseType& operator=(const PO_TaskBaseType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The PO_TaskBaseType to move from
    * @return The PO_TaskBaseType that was assigned
    */
  PO_TaskBaseType& operator=(PO_TaskBaseType&& rhs) = delete;

  /** The destructor */
  virtual ~PO_TaskBaseType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::PO_TaskBaseType whose contents are to be used to set this uci::type::PO_TaskBaseType's
    *      contents.
    */
  void copy(const uci::type::PO_TaskBaseType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::PO_TaskBaseType whose contents are to be used to set this uci::type::PO_TaskBaseType's
    *      contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::PO_TaskBaseType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the contents of the message's Capability field
    *
    * @return The contents of the Capability field
    */
  const uci::type::PO_CapabilityEnum& getCapability() const override;

  /** Returns the contents of the message's Capability field
    *
    * @return The contents of the Capability field
    */
  uci::type::PO_CapabilityEnum& getCapability() override;

  /** Sets the contents of the message's Capability field
    *
    * @param accessor The accessor to use to set the Capability field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_TaskBaseType& setCapability(const uci::type::PO_CapabilityEnum& accessor) override;

  /** Sets the contents of the message's Capability field
    *
    * @param value The new value to set the Capability field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_TaskBaseType& setCapability(uci::type::PO_CapabilityEnum::EnumerationItem value) override;

  /** Returns the accessor to the SensorSpectrum field contained in this message fragment
    *
    * @return The const reference to the accessor to the SensorSpectrum field.
    */
  const uci::type::PO_TaskBaseType::SensorSpectrum& getSensorSpectrum() const override;

  /** Returns the accessor to the SensorSpectrum field contained in this message fragment
    *
    * @return The reference to the accessor to the SensorSpectrum field.
    */
  uci::type::PO_TaskBaseType::SensorSpectrum& getSensorSpectrum() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_TaskBaseType& setSensorSpectrum(const uci::type::PO_TaskBaseType::SensorSpectrum& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::LocatedEllipseType& getLookAtCoords_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::LocatedEllipseType& getLookAtCoords() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::LocatedEllipseType& getLookAtCoords() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_TaskBaseType& setLookAtCoords(const uci::type::LocatedEllipseType& accessor) override;

  /** Returns whether this optional field LookAtCoordsis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasLookAtCoords() const noexcept override;

  /** Enables the optional field such that getLookAtCoords will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::LocatedEllipseType& enableLookAtCoords(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_TaskBaseType& clearLookAtCoords() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::NIIRS_Type& getMinimumNIIRS_() const;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  const uci::type::NIIRS_Type& getMinimumNIIRS() const override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::NIIRS_Type& getMinimumNIIRS() override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_TaskBaseType& setMinimumNIIRS(const uci::type::NIIRS_Type& value) override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_TaskBaseType& setMinimumNIIRS(const std::string& value) override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_TaskBaseType& setMinimumNIIRS(const char* value) override;

  /** Returns whether this optional field minimumNIIRS_is available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasMinimumNIIRS() const noexcept override;

  /** Enables the optional field such that getMinimumNIIRS will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The value of the optional field
    */
  uci::type::NIIRS_Type& enableMinimumNIIRS(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_TaskBaseType& clearMinimumNIIRS() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::NIIRS_Type& getDesiredNIIRS_() const;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  const uci::type::NIIRS_Type& getDesiredNIIRS() const override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::NIIRS_Type& getDesiredNIIRS() override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_TaskBaseType& setDesiredNIIRS(const uci::type::NIIRS_Type& value) override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_TaskBaseType& setDesiredNIIRS(const std::string& value) override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_TaskBaseType& setDesiredNIIRS(const char* value) override;

  /** Returns whether this optional field desiredNIIRS_is available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasDesiredNIIRS() const noexcept override;

  /** Enables the optional field such that getDesiredNIIRS will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The value of the optional field
    */
  uci::type::NIIRS_Type& enableDesiredNIIRS(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_TaskBaseType& clearDesiredNIIRS() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::OpticalCollectionConstraintsType& getCollectionConstraints_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::OpticalCollectionConstraintsType& getCollectionConstraints() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::OpticalCollectionConstraintsType& getCollectionConstraints() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_TaskBaseType& setCollectionConstraints(const uci::type::OpticalCollectionConstraintsType& accessor) override;

  /** Returns whether this optional field CollectionConstraintsis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasCollectionConstraints() const noexcept override;

  /** Enables the optional field such that getCollectionConstraints will return the optional field and not throw an
    * exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::OpticalCollectionConstraintsType& enableCollectionConstraints(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_TaskBaseType& clearCollectionConstraints() noexcept override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PairIdentifierEnum& getPairIdentifier_() const;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::PairIdentifierEnum& getPairIdentifier() const override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PairIdentifierEnum& getPairIdentifier() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_TaskBaseType& setPairIdentifier(const uci::type::PairIdentifierEnum& accessor) override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param value The accessor to use to set the contents of the message fragment that this accessor provides access to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_TaskBaseType& setPairIdentifier(uci::type::PairIdentifierEnum::EnumerationItem value) override;

  /** Returns whether this optional field PairIdentifieris available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasPairIdentifier() const noexcept override;

  /** Enables the optional field such that getPairIdentifier will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PairIdentifierEnum& enablePairIdentifier(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_TaskBaseType& clearPairIdentifier() noexcept override;

  /** Returns the accessor to the Output field contained in this message fragment
    *
    * @return The const reference to the accessor to the Output field.
    */
  const uci::type::PO_TaskBaseType::Output& getOutput() const override;

  /** Returns the accessor to the Output field contained in this message fragment
    *
    * @return The reference to the accessor to the Output field.
    */
  uci::type::PO_TaskBaseType::Output& getOutput() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_TaskBaseType& setOutput(const uci::type::PO_TaskBaseType::Output& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<PO_TaskBaseType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::PO_TaskBaseType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::PO_TaskBaseType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<PO_CapabilityEnum> capability_Accessor;
  std::unique_ptr<SensorSpectrum> sensorSpectrum_Accessor;
  std::unique_ptr<LocatedEllipseType> lookAtCoords_Accessor;
  std::unique_ptr<NIIRS_Type> minimumNIIRS_Accessor;
  std::unique_ptr<NIIRS_Type> desiredNIIRS_Accessor;
  std::unique_ptr<OpticalCollectionConstraintsType> collectionConstraints_Accessor;
  std::unique_ptr<PairIdentifierEnum> pairIdentifier_Accessor;
  std::unique_ptr<Output> output_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_PO_TASKBASETYPE_H
