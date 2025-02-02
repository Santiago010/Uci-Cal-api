/** @file PO_ComponentLensAssemblyType.h
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

#ifndef ASB_UCI_TYPE_PO_COMPONENTLENSASSEMBLYTYPE_H
#define ASB_UCI_TYPE_PO_COMPONENTLENSASSEMBLYTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_ComponentLensAssemblyType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class ComponentControllabilityB_Type;
class PO_ComponentLensAssemblyFieldOfViewType;
class PO_ComponentLensAssemblyFocusType;
class PO_ComponentSettingsFocusSweepSettingsType;
class PO_FPA_ID_Type;
class PO_LensID_Type;

/** See annotations in child elements and messages/elements that use this type for details. */
class PO_ComponentLensAssemblyType : public virtual uci::type::PO_ComponentLensAssemblyType {
public:
  /** Lens exist within the optical pathway that leads to one or more Focal Plane Arrays (FPAs). This field specifies those
    * FPAs that are associated with this lens, i.e. those FPAs that record light that passes through this lens.
    * [Occurrences: Minimum: 1; Maximum: MAX_LENGTH]
    */
  using FPA_ID = asb_uci::base::BoundedList<uci::type::PO_FPA_ID_Type, uci::type::accessorType::pO_FPA_ID_Type, asb_uci::type::PO_FPA_ID_Type>;

  /** The constructor */
  PO_ComponentLensAssemblyType();

  /** The copy constructor
    *
    * @param rhs The PO_ComponentLensAssemblyType to copy from
    */
  PO_ComponentLensAssemblyType(const PO_ComponentLensAssemblyType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The PO_ComponentLensAssemblyType to move from
    */
  PO_ComponentLensAssemblyType(PO_ComponentLensAssemblyType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The PO_ComponentLensAssemblyType to copy from
    * @return The PO_ComponentLensAssemblyType that was assigned
    */
  PO_ComponentLensAssemblyType& operator=(const PO_ComponentLensAssemblyType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The PO_ComponentLensAssemblyType to move from
    * @return The PO_ComponentLensAssemblyType that was assigned
    */
  PO_ComponentLensAssemblyType& operator=(PO_ComponentLensAssemblyType&& rhs) = delete;

  /** The destructor */
  virtual ~PO_ComponentLensAssemblyType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::PO_ComponentLensAssemblyType whose contents are to be used to set this
    *      uci::type::PO_ComponentLensAssemblyType's contents.
    */
  void copy(const uci::type::PO_ComponentLensAssemblyType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::PO_ComponentLensAssemblyType whose contents are to be used to set this
    *      uci::type::PO_ComponentLensAssemblyType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::PO_ComponentLensAssemblyType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the LensID field contained in this message fragment
    *
    * @return The const reference to the accessor to the LensID field.
    */
  const uci::type::PO_LensID_Type& getLensID() const override;

  /** Returns the accessor to the LensID field contained in this message fragment
    *
    * @return The reference to the accessor to the LensID field.
    */
  uci::type::PO_LensID_Type& getLensID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ComponentLensAssemblyType& setLensID(const uci::type::PO_LensID_Type& accessor) override;

  /** Returns the accessor to the FPA_ID field contained in this message fragment
    *
    * @return The const reference to the accessor to the FPA_ID field.
    */
  const uci::type::PO_ComponentLensAssemblyType::FPA_ID& getFPA_ID() const override;

  /** Returns the accessor to the FPA_ID field contained in this message fragment
    *
    * @return The reference to the accessor to the FPA_ID field.
    */
  uci::type::PO_ComponentLensAssemblyType::FPA_ID& getFPA_ID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ComponentLensAssemblyType& setFPA_ID(const uci::type::PO_ComponentLensAssemblyType::FPA_ID& accessor) override;

  /** Returns the accessor to the FOV field contained in this message fragment
    *
    * @return The const reference to the accessor to the FOV field.
    */
  const uci::type::PO_ComponentLensAssemblyFieldOfViewType& getFOV() const override;

  /** Returns the accessor to the FOV field contained in this message fragment
    *
    * @return The reference to the accessor to the FOV field.
    */
  uci::type::PO_ComponentLensAssemblyFieldOfViewType& getFOV() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ComponentLensAssemblyType& setFOV(const uci::type::PO_ComponentLensAssemblyFieldOfViewType& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PO_ComponentLensAssemblyFocusType& getFocus_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::PO_ComponentLensAssemblyFocusType& getFocus() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PO_ComponentLensAssemblyFocusType& getFocus() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ComponentLensAssemblyType& setFocus(const uci::type::PO_ComponentLensAssemblyFocusType& accessor) override;

  /** Returns whether this optional field Focusis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasFocus() const noexcept override;

  /** Enables the optional field such that getFocus will return the optional field and not throw an exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PO_ComponentLensAssemblyFocusType& enableFocus(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ComponentLensAssemblyType& clearFocus() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PO_ComponentSettingsFocusSweepSettingsType& getFocusSweepSettings_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::PO_ComponentSettingsFocusSweepSettingsType& getFocusSweepSettings() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PO_ComponentSettingsFocusSweepSettingsType& getFocusSweepSettings() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ComponentLensAssemblyType& setFocusSweepSettings(const uci::type::PO_ComponentSettingsFocusSweepSettingsType& accessor) override;

  /** Returns whether this optional field FocusSweepSettingsis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasFocusSweepSettings() const noexcept override;

  /** Enables the optional field such that getFocusSweepSettings will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PO_ComponentSettingsFocusSweepSettingsType& enableFocusSweepSettings(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ComponentLensAssemblyType& clearFocusSweepSettings() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ComponentControllabilityB_Type& getControllability_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::ComponentControllabilityB_Type& getControllability() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ComponentControllabilityB_Type& getControllability() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ComponentLensAssemblyType& setControllability(const uci::type::ComponentControllabilityB_Type& accessor) override;

  /** Returns whether this optional field Controllabilityis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasControllability() const noexcept override;

  /** Enables the optional field such that getControllability will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ComponentControllabilityB_Type& enableControllability(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ComponentLensAssemblyType& clearControllability() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<PO_ComponentLensAssemblyType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::PO_ComponentLensAssemblyType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::PO_ComponentLensAssemblyType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<PO_LensID_Type> lensID_Accessor;
  std::unique_ptr<FPA_ID> fPA_ID_Accessor;
  std::unique_ptr<PO_ComponentLensAssemblyFieldOfViewType> fOV_Accessor;
  std::unique_ptr<PO_ComponentLensAssemblyFocusType> focus_Accessor;
  std::unique_ptr<PO_ComponentSettingsFocusSweepSettingsType> focusSweepSettings_Accessor;
  std::unique_ptr<ComponentControllabilityB_Type> controllability_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_PO_COMPONENTLENSASSEMBLYTYPE_H
