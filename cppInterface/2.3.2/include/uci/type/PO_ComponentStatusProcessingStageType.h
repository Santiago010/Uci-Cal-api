/** @file PO_ComponentStatusProcessingStageType.h
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

#ifndef UCI_TYPE_PO_COMPONENTSTATUSPROCESSINGSTAGETYPE_H
#define UCI_TYPE_PO_COMPONENTSTATUSPROCESSINGSTAGETYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "ComponentControlsStatusType.h"
#include "PO_ComponentStatusProcessingStageSettingsType.h"
#include "PO_FPA_ID_Type.h"
#include "PO_ProcessingStageID_Type.h"

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
class PO_ComponentStatusProcessingStageType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new PO_ComponentStatusProcessingStageType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PO_ComponentStatusProcessingStageType.
    */
  static UCI_EXPORT PO_ComponentStatusProcessingStageType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new PO_ComponentStatusProcessingStageType initializing the data accessed by the new
    * PO_ComponentStatusProcessingStageType using the data accessed by the specified PO_ComponentStatusProcessingStageType
    * (cloning).
    *
    * @param accessor The PO_ComponentStatusProcessingStageType that provides access to the data that is to be used to
    *      initialize the data accessed by the new created PO_ComponentStatusProcessingStageType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PO_ComponentStatusProcessingStageType.
    */
  static UCI_EXPORT PO_ComponentStatusProcessingStageType& create(const PO_ComponentStatusProcessingStageType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified PO_ComponentStatusProcessingStageType. Use of the specified accessor after it has
    * been destroyed will result in undefined behavior.
    *
    * @param accessor The PO_ComponentStatusProcessingStageType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(PO_ComponentStatusProcessingStageType& accessor);

  /** Returns this accessor's type constant, i.e. pO_ComponentStatusProcessingStageType.
    *
    * @return This accessor's type constant, i.e. pO_ComponentStatusProcessingStageType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::pO_ComponentStatusProcessingStageType;
  }

  /** Returns the version that was initialized from the uci:version attribute of PO_ComponentStatusProcessingStageType.
    *
    * @return The version that was initialized from the uci:version attribute of PO_ComponentStatusProcessingStageType.
    */
  static std::string getUCITypeVersion() {
    return "001.000.001.001";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const PO_ComponentStatusProcessingStageType& accessor) = 0;

  /** Processing stages process the optical data produced by one or more Focal Plane Arrays (FPAs). This field specifies
    * those FPAs whose generated data is processed by this stage. This information is useful in identifying which
    * processing stage to configure if required. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::PO_FPA_ID_Type, uci::type::accessorType::pO_FPA_ID_Type> FPA_ID;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * ProcessingStageID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      ProcessingStageID.
    */
  virtual const uci::type::PO_ProcessingStageID_Type& getProcessingStageID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ProcessingStageID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ProcessingStageID.
    */
  virtual uci::type::PO_ProcessingStageID_Type& getProcessingStageID() = 0;

  /** Sets the complex content identified by ProcessingStageID to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ProcessingStageID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusProcessingStageType& setProcessingStageID(const uci::type::PO_ProcessingStageID_Type& value) = 0;

  /** Returns a const reference to the bounded list identified by FPA_ID.
    *
    * @return A const reference to the bounded list identified by FPA_ID.
    */
  virtual const uci::type::PO_ComponentStatusProcessingStageType::FPA_ID& getFPA_ID() const = 0;

  /** Returns a reference to the bounded list identified by FPA_ID.
    *
    * @return A reference to the bounded list identified by FPA_ID.
    */
  virtual uci::type::PO_ComponentStatusProcessingStageType::FPA_ID& getFPA_ID() = 0;

  /** Sets the bounded list identified by FPA_ID.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusProcessingStageType& setFPA_ID(const uci::type::PO_ComponentStatusProcessingStageType::FPA_ID& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * ProcessingStageControlsStatus.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      ProcessingStageControlsStatus.
    */
  virtual const uci::type::ComponentControlsStatusType& getProcessingStageControlsStatus() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by
    * ProcessingStageControlsStatus.
    *
    * @return A reference to the accessor that provides access to the complex content identified by
    *      ProcessingStageControlsStatus.
    */
  virtual uci::type::ComponentControlsStatusType& getProcessingStageControlsStatus() = 0;

  /** Sets the complex content identified by ProcessingStageControlsStatus to the contents of the complex content accessed
    * by the specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ProcessingStageControlsStatus.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusProcessingStageType& setProcessingStageControlsStatus(const uci::type::ComponentControlsStatusType& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Settings.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Settings.
    */
  virtual const uci::type::PO_ComponentStatusProcessingStageSettingsType& getSettings() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Settings.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Settings.
    */
  virtual uci::type::PO_ComponentStatusProcessingStageSettingsType& getSettings() = 0;

  /** Sets the complex content identified by Settings to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Settings.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusProcessingStageType& setSettings(const uci::type::PO_ComponentStatusProcessingStageSettingsType& value) = 0;

  /** Returns whether the Element identified by Settings exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Settings is enabled or not.
    */
  virtual bool hasSettings() const = 0;

  /** Enables the Element identified by Settings.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by Settings.
    */
  virtual uci::type::PO_ComponentStatusProcessingStageSettingsType& enableSettings(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Settings.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusProcessingStageType& clearSettings() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  PO_ComponentStatusProcessingStageType() {
  }

  /** The destructor [only available to derived classes]. */
  ~PO_ComponentStatusProcessingStageType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The PO_ComponentStatusProcessingStageType to copy from.
    */
  PO_ComponentStatusProcessingStageType(const PO_ComponentStatusProcessingStageType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this PO_ComponentStatusProcessingStageType to the contents of the
    * PO_ComponentStatusProcessingStageType on the right hand side (rhs) of the assignment operator [only available to
    * derived classes].
    *
    * @param rhs The PO_ComponentStatusProcessingStageType on the right hand side (rhs) of the assignment operator whose
    *      contents are used to set the contents of this PO_ComponentStatusProcessingStageType.
    * @return A reference to this PO_ComponentStatusProcessingStageType.
    */
  PO_ComponentStatusProcessingStageType& operator=(const PO_ComponentStatusProcessingStageType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_PO_COMPONENTSTATUSPROCESSINGSTAGETYPE_H

