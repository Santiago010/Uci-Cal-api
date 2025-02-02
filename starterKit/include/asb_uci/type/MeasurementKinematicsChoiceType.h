/** @file MeasurementKinematicsChoiceType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:13 PM
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

#ifndef ASB_UCI_TYPE_MEASUREMENTKINEMATICSCHOICETYPE_H
#define ASB_UCI_TYPE_MEASUREMENTKINEMATICSCHOICETYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../../cppInterface/2.3.2/include/uci/base/Accessor.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MeasurementKinematicsChoiceType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class ECEF_KinematicsType;
class EquatorialKinematicsType;
class KinematicsType;
class LOS_MeasurementWithUncertaintyType;
class OrbitalKinematicsChoiceType;

/** See annotations in child elements and messages/elements that use this type for details. */
class MeasurementKinematicsChoiceType : public virtual uci::type::MeasurementKinematicsChoiceType {
public:
  /** The constructor */
  MeasurementKinematicsChoiceType();

  /** The copy constructor
    *
    * @param rhs The MeasurementKinematicsChoiceType to copy from
    */
  MeasurementKinematicsChoiceType(const MeasurementKinematicsChoiceType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The MeasurementKinematicsChoiceType to move from
    */
  MeasurementKinematicsChoiceType(MeasurementKinematicsChoiceType&& rhs) = delete;

  /** The assignment operator [not supported]
    *
    * @param rhs The MeasurementKinematicsChoiceType to copy from
    * @return The MeasurementKinematicsChoiceType that was assigned
    */
  MeasurementKinematicsChoiceType& operator=(const MeasurementKinematicsChoiceType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The MeasurementKinematicsChoiceType to move from
    * @return The MeasurementKinematicsChoiceType that was assigned
    */
  MeasurementKinematicsChoiceType& operator=(MeasurementKinematicsChoiceType&& rhs) = delete;

  /** The destructor */
  virtual ~MeasurementKinematicsChoiceType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::MeasurementKinematicsChoiceType whose contents are to be used to set this
    *      uci::type::MeasurementKinematicsChoiceType's contents.
    */
  void copy(const uci::type::MeasurementKinematicsChoiceType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::MeasurementKinematicsChoiceType whose contents are to be used to set this
    *      uci::type::MeasurementKinematicsChoiceType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::MeasurementKinematicsChoiceType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** This method returns this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active.
    *
    * @return The selected item's enumerated value
    */
  uci::type::MeasurementKinematicsChoiceType::MeasurementKinematicsChoiceTypeChoice getMeasurementKinematicsChoiceTypeChoiceOrdinal() const noexcept override;

  /** This method is used to set this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active. There are two mechanisms that can be used to set a choice's "selection
    * ordinal." The first mechanism is by invoking this method. The second mechanism is by invoking one of the set methods
    * associated with one of the elements contained in this choice. Once this method is invoked, the value returned by
    * getMeasurementKinematicsChoiceTypeChoiceOrdinal() will be the ordinal specified when this method was invoked. In
    * addition, the access methods associated with the chosen element will be enabled and will provide access to the chosen
    * element.
    *
    * @param ordinal The ordinal to set this choice's selected ordinal to.
    * @param type The type of data that is to be made available when the ordinal is set.
    * @return A reference to the object on which this method was called.
    */
  uci::type::MeasurementKinematicsChoiceType& setMeasurementKinematicsChoiceTypeChoiceOrdinal(uci::type::MeasurementKinematicsChoiceType::MeasurementKinematicsChoiceTypeChoice ordinal, uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the accessor to the LOS_AzEl field contained in this message fragment
    *
    * @return The const reference to the accessor to the LOS_AzEl field.
    */
  uci::type::LOS_MeasurementWithUncertaintyType& getLOS_AzEl_() const;

  /** Returns the accessor to the LOS_AzEl field contained in this message fragment
    *
    * @return The reference to the accessor to the LOS_AzEl field.
    */
  const uci::type::LOS_MeasurementWithUncertaintyType& getLOS_AzEl() const override;

  /** Returns the accessor to the LOS_AzEl field contained in this message fragment
    *
    * @return The reference to the accessor to the LOS_AzEl field.
    */
  uci::type::LOS_MeasurementWithUncertaintyType& getLOS_AzEl() override;

  /** Sets this choice's choice to be lOS_AzEl and initializes lOS_AzEl to be the specified value. A deep copy will be used
    * by this method to set lOS_AzEl
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::MeasurementKinematicsChoiceType& setLOS_AzEl(const uci::type::LOS_MeasurementWithUncertaintyType& accessor) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by LOS_AzEl.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by LOS_AzEl, false otherwise.
    */
  bool isLOS_AzEl() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by LOS_AzEl.
    *
    * @param method name of calling method
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by LOS_AzEl.
    */
  uci::type::LOS_MeasurementWithUncertaintyType& chooseLOS_AzEl(const std::string& method, uci::base::accessorType::AccessorType type = uci::base::accessorType::null);

  /** Sets this choice's "selection ordinal" to the choice identified by LOS_AzEl.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by LOS_AzEl.
    */
  uci::type::LOS_MeasurementWithUncertaintyType& chooseLOS_AzEl(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the accessor to the LOS_Equatorial field contained in this message fragment
    *
    * @return The const reference to the accessor to the LOS_Equatorial field.
    */
  uci::type::EquatorialKinematicsType& getLOS_Equatorial_() const;

  /** Returns the accessor to the LOS_Equatorial field contained in this message fragment
    *
    * @return The reference to the accessor to the LOS_Equatorial field.
    */
  const uci::type::EquatorialKinematicsType& getLOS_Equatorial() const override;

  /** Returns the accessor to the LOS_Equatorial field contained in this message fragment
    *
    * @return The reference to the accessor to the LOS_Equatorial field.
    */
  uci::type::EquatorialKinematicsType& getLOS_Equatorial() override;

  /** Sets this choice's choice to be lOS_Equatorial and initializes lOS_Equatorial to be the specified value. A deep copy
    * will be used by this method to set lOS_Equatorial
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::MeasurementKinematicsChoiceType& setLOS_Equatorial(const uci::type::EquatorialKinematicsType& accessor) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by LOS_Equatorial.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by LOS_Equatorial, false otherwise.
    */
  bool isLOS_Equatorial() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by LOS_Equatorial.
    *
    * @param method name of calling method
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by LOS_Equatorial.
    */
  uci::type::EquatorialKinematicsType& chooseLOS_Equatorial(const std::string& method, uci::base::accessorType::AccessorType type = uci::base::accessorType::null);

  /** Sets this choice's "selection ordinal" to the choice identified by LOS_Equatorial.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by LOS_Equatorial.
    */
  uci::type::EquatorialKinematicsType& chooseLOS_Equatorial(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the accessor to the Orbital field contained in this message fragment
    *
    * @return The const reference to the accessor to the Orbital field.
    */
  uci::type::OrbitalKinematicsChoiceType& getOrbital_() const;

  /** Returns the accessor to the Orbital field contained in this message fragment
    *
    * @return The const reference to the accessor to the Orbital field.
    */
  const uci::type::OrbitalKinematicsChoiceType& getOrbital() const override;

  /** Returns the accessor to the Orbital field contained in this message fragment
    *
    * @return The reference to the accessor to the Orbital field.
    */
  uci::type::OrbitalKinematicsChoiceType& getOrbital() override;

  /** Sets this choice's choice to be Orbital and initializes Orbital to be the specified value. A deep copy will be used
    * by this method to set Orbital
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::MeasurementKinematicsChoiceType& setOrbital(const uci::type::OrbitalKinematicsChoiceType& accessor) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by Orbital.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by Orbital, false otherwise.
    */
  bool isOrbital() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by Orbital.
    *
    * @param method name of calling method
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by Orbital.
    */
  uci::type::OrbitalKinematicsChoiceType& chooseOrbital(const std::string& method, uci::base::accessorType::AccessorType type = uci::base::accessorType::null);

  /** Sets this choice's "selection ordinal" to the choice identified by Orbital.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by Orbital.
    */
  uci::type::OrbitalKinematicsChoiceType& chooseOrbital(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the accessor to the WGS field contained in this message fragment
    *
    * @return The const reference to the accessor to the WGS field.
    */
  uci::type::KinematicsType& getWGS_() const;

  /** Returns the accessor to the WGS field contained in this message fragment
    *
    * @return The reference to the accessor to the WGS field.
    */
  const uci::type::KinematicsType& getWGS() const override;

  /** Returns the accessor to the WGS field contained in this message fragment
    *
    * @return The reference to the accessor to the WGS field.
    */
  uci::type::KinematicsType& getWGS() override;

  /** Sets this choice's choice to be wGS and initializes wGS to be the specified value. A deep copy will be used by this
    * method to set wGS
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::MeasurementKinematicsChoiceType& setWGS(const uci::type::KinematicsType& accessor) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by WGS.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by WGS, false otherwise.
    */
  bool isWGS() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by WGS.
    *
    * @param method name of calling method
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by WGS.
    */
  uci::type::KinematicsType& chooseWGS(const std::string& method, uci::base::accessorType::AccessorType type = uci::base::accessorType::null);

  /** Sets this choice's "selection ordinal" to the choice identified by WGS.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by WGS.
    */
  uci::type::KinematicsType& chooseWGS(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the accessor to the ECEF_Kinematics field contained in this message fragment
    *
    * @return The const reference to the accessor to the ECEF_Kinematics field.
    */
  uci::type::ECEF_KinematicsType& getECEF_Kinematics_() const;

  /** Returns the accessor to the ECEF_Kinematics field contained in this message fragment
    *
    * @return The reference to the accessor to the ECEF_Kinematics field.
    */
  const uci::type::ECEF_KinematicsType& getECEF_Kinematics() const override;

  /** Returns the accessor to the ECEF_Kinematics field contained in this message fragment
    *
    * @return The reference to the accessor to the ECEF_Kinematics field.
    */
  uci::type::ECEF_KinematicsType& getECEF_Kinematics() override;

  /** Sets this choice's choice to be eCEF_Kinematics and initializes eCEF_Kinematics to be the specified value. A deep
    * copy will be used by this method to set eCEF_Kinematics
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::MeasurementKinematicsChoiceType& setECEF_Kinematics(const uci::type::ECEF_KinematicsType& accessor) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by ECEF_Kinematics.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by ECEF_Kinematics, false
    *      otherwise.
    */
  bool isECEF_Kinematics() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by ECEF_Kinematics.
    *
    * @param method name of calling method
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by ECEF_Kinematics.
    */
  uci::type::ECEF_KinematicsType& chooseECEF_Kinematics(const std::string& method, uci::base::accessorType::AccessorType type = uci::base::accessorType::null);

  /** Sets this choice's "selection ordinal" to the choice identified by ECEF_Kinematics.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by ECEF_Kinematics.
    */
  uci::type::ECEF_KinematicsType& chooseECEF_Kinematics(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<MeasurementKinematicsChoiceType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::MeasurementKinematicsChoiceType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::MeasurementKinematicsChoiceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<LOS_MeasurementWithUncertaintyType> lOS_AzEl_Accessor;
  std::unique_ptr<EquatorialKinematicsType> lOS_Equatorial_Accessor;
  std::unique_ptr<OrbitalKinematicsChoiceType> orbital_Accessor;
  std::unique_ptr<KinematicsType> wGS_Accessor;
  std::unique_ptr<ECEF_KinematicsType> eCEF_Kinematics_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_MEASUREMENTKINEMATICSCHOICETYPE_H
