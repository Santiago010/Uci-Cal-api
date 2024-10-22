/** @file SAR_SubCapabilityType.h
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

#ifndef ASB_UCI_TYPE_SAR_SUBCAPABILITYTYPE_H
#define ASB_UCI_TYPE_SAR_SUBCAPABILITYTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/DecibelType.h"
#include "../../../include/asb_uci/type/SAR_EllipticityPolicyEnum.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SAR_SubCapabilityType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class RadarPointingTargetType;
class SAR_SubCapabilityClutterParametersType;
class SAR_SubCapabilityNparDetailsType;

/** See annotations in child elements and messages/elements that use this type for details. */
class SAR_SubCapabilityType : public virtual uci::type::SAR_SubCapabilityType {
public:
  /** The constructor */
  SAR_SubCapabilityType();

  /** The copy constructor
    *
    * @param rhs The SAR_SubCapabilityType to copy from
    */
  SAR_SubCapabilityType(const SAR_SubCapabilityType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The SAR_SubCapabilityType to move from
    */
  SAR_SubCapabilityType(SAR_SubCapabilityType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The SAR_SubCapabilityType to copy from
    * @return The SAR_SubCapabilityType that was assigned
    */
  SAR_SubCapabilityType& operator=(const SAR_SubCapabilityType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The SAR_SubCapabilityType to move from
    * @return The SAR_SubCapabilityType that was assigned
    */
  SAR_SubCapabilityType& operator=(SAR_SubCapabilityType&& rhs) = delete;

  /** The destructor */
  virtual ~SAR_SubCapabilityType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::SAR_SubCapabilityType whose contents are to be used to set this
    *      uci::type::SAR_SubCapabilityType's contents.
    */
  void copy(const uci::type::SAR_SubCapabilityType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::SAR_SubCapabilityType whose contents are to be used to set this
    *      uci::type::SAR_SubCapabilityType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::SAR_SubCapabilityType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the RadarPointingTarget field contained in this message fragment
    *
    * @return The const reference to the accessor to the RadarPointingTarget field.
    */
  const uci::type::RadarPointingTargetType& getRadarPointingTarget() const override;

  /** Returns the accessor to the RadarPointingTarget field contained in this message fragment
    *
    * @return The reference to the accessor to the RadarPointingTarget field.
    */
  uci::type::RadarPointingTargetType& getRadarPointingTarget() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SAR_SubCapabilityType& setRadarPointingTarget(const uci::type::RadarPointingTargetType& accessor) override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Boolean getMultiLook() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SAR_SubCapabilityType& setMultiLook(xs::Boolean value) override;

  /** Returns whether this optional field MultiLookis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasMultiLook() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::SAR_SubCapabilityType& clearMultiLook() noexcept override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SAR_EllipticityPolicyEnum& getEllipticityPolicy_() const;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::SAR_EllipticityPolicyEnum& getEllipticityPolicy() const override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SAR_EllipticityPolicyEnum& getEllipticityPolicy() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SAR_SubCapabilityType& setEllipticityPolicy(const uci::type::SAR_EllipticityPolicyEnum& accessor) override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param value The accessor to use to set the contents of the message fragment that this accessor provides access to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SAR_SubCapabilityType& setEllipticityPolicy(uci::type::SAR_EllipticityPolicyEnum::EnumerationItem value) override;

  /** Returns whether this optional field EllipticityPolicyis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasEllipticityPolicy() const noexcept override;

  /** Enables the optional field such that getEllipticityPolicy will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SAR_EllipticityPolicyEnum& enableEllipticityPolicy(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::SAR_SubCapabilityType& clearEllipticityPolicy() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Float getAllowableEllipticityMagnitude() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SAR_SubCapabilityType& setAllowableEllipticityMagnitude(xs::Float value) override;

  /** Returns whether this optional field AllowableEllipticityMagnitudeis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasAllowableEllipticityMagnitude() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::SAR_SubCapabilityType& clearAllowableEllipticityMagnitude() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::DecibelTypeValue getMaximumBeamRolloffDB() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SAR_SubCapabilityType& setMaximumBeamRolloffDB(uci::type::DecibelTypeValue value) override;

  /** Returns whether this optional field MaximumBeamRolloffDBis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasMaximumBeamRolloffDB() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::SAR_SubCapabilityType& clearMaximumBeamRolloffDB() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SAR_SubCapabilityNparDetailsType& getNPAR_Details_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::SAR_SubCapabilityNparDetailsType& getNPAR_Details() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SAR_SubCapabilityNparDetailsType& getNPAR_Details() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SAR_SubCapabilityType& setNPAR_Details(const uci::type::SAR_SubCapabilityNparDetailsType& accessor) override;

  /** Returns whether this optional field NPAR_Detailsis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasNPAR_Details() const noexcept override;

  /** Enables the optional field such that getNPAR_Details will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SAR_SubCapabilityNparDetailsType& enableNPAR_Details(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::SAR_SubCapabilityType& clearNPAR_Details() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SAR_SubCapabilityClutterParametersType& getClutterParameters_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::SAR_SubCapabilityClutterParametersType& getClutterParameters() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SAR_SubCapabilityClutterParametersType& getClutterParameters() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SAR_SubCapabilityType& setClutterParameters(const uci::type::SAR_SubCapabilityClutterParametersType& accessor) override;

  /** Returns whether this optional field ClutterParametersis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasClutterParameters() const noexcept override;

  /** Enables the optional field such that getClutterParameters will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SAR_SubCapabilityClutterParametersType& enableClutterParameters(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::SAR_SubCapabilityType& clearClutterParameters() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<SAR_SubCapabilityType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::SAR_SubCapabilityType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::SAR_SubCapabilityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<RadarPointingTargetType> radarPointingTarget_Accessor;
  boost::optional<asb_xs::Boolean> multiLook_Accessor;
  std::unique_ptr<SAR_EllipticityPolicyEnum> ellipticityPolicy_Accessor;
  boost::optional<asb_xs::Float> allowableEllipticityMagnitude_Accessor;
  boost::optional<DecibelTypeValue> maximumBeamRolloffDB_Accessor;
  std::unique_ptr<SAR_SubCapabilityNparDetailsType> nPAR_Details_Accessor;
  std::unique_ptr<SAR_SubCapabilityClutterParametersType> clutterParameters_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_SAR_SUBCAPABILITYTYPE_H
