/** @file PO_ComponentStatusLensAssemblyType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:07 PM
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

#ifndef UCI_TYPE_PO_COMPONENTSTATUSLENSASSEMBLYTYPE_H
#define UCI_TYPE_PO_COMPONENTSTATUSLENSASSEMBLYTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "ComponentControlsStatusType.h"
#include "PO_ComponentStatusFocusSweepSettingsType.h"
#include "PO_ComponentStatusLensAssemblyFieldOfViewType.h"
#include "PO_ComponentStatusLensAssemblyFocusType.h"
#include "PO_LensID_Type.h"

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all base data types are declared */
namespace base {

class AbstractServiceBusConnection;

} // namespace base
} // namespace uci

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** See annotations in child elements and messages/elements that use this type for details. */
class PO_ComponentStatusLensAssemblyType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new PO_ComponentStatusLensAssemblyType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PO_ComponentStatusLensAssemblyType.
    */
  static UCI_EXPORT PO_ComponentStatusLensAssemblyType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new PO_ComponentStatusLensAssemblyType initializing the data accessed by the new
    * PO_ComponentStatusLensAssemblyType using the data accessed by the specified PO_ComponentStatusLensAssemblyType
    * (cloning).
    *
    * @param accessor The PO_ComponentStatusLensAssemblyType that provides access to the data that is to be used to
    *      initialize the data accessed by the new created PO_ComponentStatusLensAssemblyType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PO_ComponentStatusLensAssemblyType.
    */
  static UCI_EXPORT PO_ComponentStatusLensAssemblyType& create(const PO_ComponentStatusLensAssemblyType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified PO_ComponentStatusLensAssemblyType. Use of the specified accessor after it has
    * been destroyed will result in undefined behavior.
    *
    * @param accessor The PO_ComponentStatusLensAssemblyType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(PO_ComponentStatusLensAssemblyType& accessor);

  /** Returns this accessor's type constant, i.e. pO_ComponentStatusLensAssemblyType.
    *
    * @return This accessor's type constant, i.e. pO_ComponentStatusLensAssemblyType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::pO_ComponentStatusLensAssemblyType;
  }

  /** Returns the version that was initialized from the uci:version attribute of PO_ComponentStatusLensAssemblyType.
    *
    * @return The version that was initialized from the uci:version attribute of PO_ComponentStatusLensAssemblyType.
    */
  static std::string getUCITypeVersion() {
    return "002.000.001.001";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const PO_ComponentStatusLensAssemblyType& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by LensID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by LensID.
    */
  virtual const uci::type::PO_LensID_Type& getLensID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by LensID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by LensID.
    */
  virtual uci::type::PO_LensID_Type& getLensID() = 0;

  /** Sets the complex content identified by LensID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by LensID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusLensAssemblyType& setLensID(const uci::type::PO_LensID_Type& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * LensControlsStatus.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      LensControlsStatus.
    */
  virtual const uci::type::ComponentControlsStatusType& getLensControlsStatus() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by LensControlsStatus.
    *
    * @return A reference to the accessor that provides access to the complex content identified by LensControlsStatus.
    */
  virtual uci::type::ComponentControlsStatusType& getLensControlsStatus() = 0;

  /** Sets the complex content identified by LensControlsStatus to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by LensControlsStatus.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusLensAssemblyType& setLensControlsStatus(const uci::type::ComponentControlsStatusType& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by FOV.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by FOV.
    */
  virtual const uci::type::PO_ComponentStatusLensAssemblyFieldOfViewType& getFOV() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by FOV.
    *
    * @return A reference to the accessor that provides access to the complex content identified by FOV.
    */
  virtual uci::type::PO_ComponentStatusLensAssemblyFieldOfViewType& getFOV() = 0;

  /** Sets the complex content identified by FOV to the contents of the complex content accessed by the specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by FOV.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusLensAssemblyType& setFOV(const uci::type::PO_ComponentStatusLensAssemblyFieldOfViewType& value) = 0;

  /** Returns whether the Element identified by FOV exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by FOV is enabled or not.
    */
  virtual bool hasFOV() const = 0;

  /** Enables the Element identified by FOV.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by FOV.
    */
  virtual uci::type::PO_ComponentStatusLensAssemblyFieldOfViewType& enableFOV(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by FOV.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusLensAssemblyType& clearFOV() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Focus.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Focus.
    */
  virtual const uci::type::PO_ComponentStatusLensAssemblyFocusType& getFocus() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Focus.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Focus.
    */
  virtual uci::type::PO_ComponentStatusLensAssemblyFocusType& getFocus() = 0;

  /** Sets the complex content identified by Focus to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Focus.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusLensAssemblyType& setFocus(const uci::type::PO_ComponentStatusLensAssemblyFocusType& value) = 0;

  /** Returns whether the Element identified by Focus exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Focus is enabled or not.
    */
  virtual bool hasFocus() const = 0;

  /** Enables the Element identified by Focus.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by Focus.
    */
  virtual uci::type::PO_ComponentStatusLensAssemblyFocusType& enableFocus(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Focus.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusLensAssemblyType& clearFocus() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * FocusSweepSettings.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      FocusSweepSettings.
    */
  virtual const uci::type::PO_ComponentStatusFocusSweepSettingsType& getFocusSweepSettings() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by FocusSweepSettings.
    *
    * @return A reference to the accessor that provides access to the complex content identified by FocusSweepSettings.
    */
  virtual uci::type::PO_ComponentStatusFocusSweepSettingsType& getFocusSweepSettings() = 0;

  /** Sets the complex content identified by FocusSweepSettings to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by FocusSweepSettings.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusLensAssemblyType& setFocusSweepSettings(const uci::type::PO_ComponentStatusFocusSweepSettingsType& value) = 0;

  /** Returns whether the Element identified by FocusSweepSettings exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by FocusSweepSettings is enabled or not.
    */
  virtual bool hasFocusSweepSettings() const = 0;

  /** Enables the Element identified by FocusSweepSettings.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by FocusSweepSettings.
    */
  virtual uci::type::PO_ComponentStatusFocusSweepSettingsType& enableFocusSweepSettings(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by FocusSweepSettings.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusLensAssemblyType& clearFocusSweepSettings() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  PO_ComponentStatusLensAssemblyType() {
  }

  /** The destructor [only available to derived classes]. */
  ~PO_ComponentStatusLensAssemblyType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The PO_ComponentStatusLensAssemblyType to copy from.
    */
  PO_ComponentStatusLensAssemblyType(const PO_ComponentStatusLensAssemblyType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this PO_ComponentStatusLensAssemblyType to the contents of the
    * PO_ComponentStatusLensAssemblyType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The PO_ComponentStatusLensAssemblyType on the right hand side (rhs) of the assignment operator whose
    *      contents are used to set the contents of this PO_ComponentStatusLensAssemblyType.
    * @return A reference to this PO_ComponentStatusLensAssemblyType.
    */
  PO_ComponentStatusLensAssemblyType& operator=(const PO_ComponentStatusLensAssemblyType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_PO_COMPONENTSTATUSLENSASSEMBLYTYPE_H

