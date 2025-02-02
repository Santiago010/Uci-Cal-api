/** @file PO_ActivityCommandType.h
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

#ifndef ASB_UCI_TYPE_PO_ACTIVITYCOMMANDTYPE_H
#define ASB_UCI_TYPE_PO_ACTIVITYCOMMANDTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/ActivityCommandBaseType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_ActivityCommandType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class PO_CollectionConstraintsSettingsType;
class PO_ComponentSettingsType;
class PO_SubCapabilitySettingsType;
class PO_TargetType;
class PO_TrackDetailsType;

/** See annotations in child elements and messages/elements that use this type for details. */
class PO_ActivityCommandType : public virtual uci::type::PO_ActivityCommandType, public virtual ActivityCommandBaseType {
public:
  /** This field contains the settings that will override the current subcapability settings in the activity being
    * adjusted. These changes, however, do not impact the default settings for the associated subcapability. [Occurrences:
    * Minimum: 0; Maximum: MAX_LENGTH]
    */
  using ChangeSubCapability = asb_uci::base::BoundedList<uci::type::PO_SubCapabilitySettingsType, uci::type::accessorType::pO_SubCapabilitySettingsType, asb_uci::type::PO_SubCapabilitySettingsType>;

  /** This field contains the set of settings that will override the current component settings in the activity being
    * adjusted. These changes, however, do not impact the default settings for the associated component. [Occurrences:
    * Minimum: 0; Maximum: MAX_LENGTH]
    */
  using ChangeComponentSettings = asb_uci::base::BoundedList<uci::type::PO_ComponentSettingsType, uci::type::accessorType::pO_ComponentSettingsType, asb_uci::type::PO_ComponentSettingsType>;

  /** The constructor */
  PO_ActivityCommandType();

  /** The copy constructor
    *
    * @param rhs The PO_ActivityCommandType to copy from
    */
  PO_ActivityCommandType(const PO_ActivityCommandType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The PO_ActivityCommandType to move from
    */
  PO_ActivityCommandType(PO_ActivityCommandType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The PO_ActivityCommandType to copy from
    * @return The PO_ActivityCommandType that was assigned
    */
  PO_ActivityCommandType& operator=(const PO_ActivityCommandType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The PO_ActivityCommandType to move from
    * @return The PO_ActivityCommandType that was assigned
    */
  PO_ActivityCommandType& operator=(PO_ActivityCommandType&& rhs) = delete;

  /** The destructor */
  ~PO_ActivityCommandType() override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::PO_ActivityCommandType whose contents are to be used to set this
    *      uci::type::PO_ActivityCommandType's contents.
    */
  void copy(const uci::type::PO_ActivityCommandType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::PO_ActivityCommandType whose contents are to be used to set this
    *      uci::type::PO_ActivityCommandType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::PO_ActivityCommandType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PO_TargetType& getPointing_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::PO_TargetType& getPointing() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PO_TargetType& getPointing() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ActivityCommandType& setPointing(const uci::type::PO_TargetType& accessor) override;

  /** Returns whether this optional field Pointingis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasPointing() const noexcept override;

  /** Enables the optional field such that getPointing will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PO_TargetType& enablePointing(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ActivityCommandType& clearPointing() noexcept override;

  /** Returns the accessor to the ChangeSubCapability field contained in this message fragment
    *
    * @return The const reference to the accessor to the ChangeSubCapability field.
    */
  const uci::type::PO_ActivityCommandType::ChangeSubCapability& getChangeSubCapability() const override;

  /** Returns the accessor to the ChangeSubCapability field contained in this message fragment
    *
    * @return The reference to the accessor to the ChangeSubCapability field.
    */
  uci::type::PO_ActivityCommandType::ChangeSubCapability& getChangeSubCapability() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ActivityCommandType& setChangeSubCapability(const uci::type::PO_ActivityCommandType::ChangeSubCapability& accessor) override;

  /** Returns the accessor to the ChangeComponentSettings field contained in this message fragment
    *
    * @return The const reference to the accessor to the ChangeComponentSettings field.
    */
  const uci::type::PO_ActivityCommandType::ChangeComponentSettings& getChangeComponentSettings() const override;

  /** Returns the accessor to the ChangeComponentSettings field contained in this message fragment
    *
    * @return The reference to the accessor to the ChangeComponentSettings field.
    */
  uci::type::PO_ActivityCommandType::ChangeComponentSettings& getChangeComponentSettings() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ActivityCommandType& setChangeComponentSettings(const uci::type::PO_ActivityCommandType::ChangeComponentSettings& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PO_CollectionConstraintsSettingsType& getChangeCollectionConstraints_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::PO_CollectionConstraintsSettingsType& getChangeCollectionConstraints() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PO_CollectionConstraintsSettingsType& getChangeCollectionConstraints() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ActivityCommandType& setChangeCollectionConstraints(const uci::type::PO_CollectionConstraintsSettingsType& accessor) override;

  /** Returns whether this optional field ChangeCollectionConstraintsis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasChangeCollectionConstraints() const noexcept override;

  /** Enables the optional field such that getChangeCollectionConstraints will return the optional field and not throw an
    * exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PO_CollectionConstraintsSettingsType& enableChangeCollectionConstraints(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ActivityCommandType& clearChangeCollectionConstraints() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PO_TrackDetailsType& getChangeTrack_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::PO_TrackDetailsType& getChangeTrack() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PO_TrackDetailsType& getChangeTrack() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ActivityCommandType& setChangeTrack(const uci::type::PO_TrackDetailsType& accessor) override;

  /** Returns whether this optional field ChangeTrackis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasChangeTrack() const noexcept override;

  /** Enables the optional field such that getChangeTrack will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PO_TrackDetailsType& enableChangeTrack(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ActivityCommandType& clearChangeTrack() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<PO_ActivityCommandType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::PO_ActivityCommandType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::PO_ActivityCommandType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<PO_TargetType> pointing_Accessor;
  std::unique_ptr<ChangeSubCapability> changeSubCapability_Accessor;
  std::unique_ptr<ChangeComponentSettings> changeComponentSettings_Accessor;
  std::unique_ptr<PO_CollectionConstraintsSettingsType> changeCollectionConstraints_Accessor;
  std::unique_ptr<PO_TrackDetailsType> changeTrack_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_PO_ACTIVITYCOMMANDTYPE_H
