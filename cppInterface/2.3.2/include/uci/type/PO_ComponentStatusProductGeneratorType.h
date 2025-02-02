/** @file PO_ComponentStatusProductGeneratorType.h
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

#ifndef UCI_TYPE_PO_COMPONENTSTATUSPRODUCTGENERATORTYPE_H
#define UCI_TYPE_PO_COMPONENTSTATUSPRODUCTGENERATORTYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "ComponentControlsStatusType.h"
#include "PO_ComponentStatusOutputProductSettingsType.h"
#include "PO_ComponentStatusProductGeneratorSettingsType.h"
#include "PO_FPA_ID_Type.h"
#include "PO_ProductGeneratorID_Type.h"

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
class PO_ComponentStatusProductGeneratorType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new PO_ComponentStatusProductGeneratorType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PO_ComponentStatusProductGeneratorType.
    */
  static UCI_EXPORT PO_ComponentStatusProductGeneratorType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new PO_ComponentStatusProductGeneratorType initializing the data accessed by the new
    * PO_ComponentStatusProductGeneratorType using the data accessed by the specified
    * PO_ComponentStatusProductGeneratorType (cloning).
    *
    * @param accessor The PO_ComponentStatusProductGeneratorType that provides access to the data that is to be used to
    *      initialize the data accessed by the new created PO_ComponentStatusProductGeneratorType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PO_ComponentStatusProductGeneratorType.
    */
  static UCI_EXPORT PO_ComponentStatusProductGeneratorType& create(const PO_ComponentStatusProductGeneratorType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified PO_ComponentStatusProductGeneratorType. Use of the specified accessor after it has
    * been destroyed will result in undefined behavior.
    *
    * @param accessor The PO_ComponentStatusProductGeneratorType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(PO_ComponentStatusProductGeneratorType& accessor);

  /** Returns this accessor's type constant, i.e. pO_ComponentStatusProductGeneratorType.
    *
    * @return This accessor's type constant, i.e. pO_ComponentStatusProductGeneratorType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::pO_ComponentStatusProductGeneratorType;
  }

  /** Returns the version that was initialized from the uci:version attribute of PO_ComponentStatusProductGeneratorType.
    *
    * @return The version that was initialized from the uci:version attribute of PO_ComponentStatusProductGeneratorType.
    */
  static std::string getUCITypeVersion() {
    return "002.000.001.001";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const PO_ComponentStatusProductGeneratorType& accessor) = 0;

  /** Processing stages process the optical data produced by one or more Focal Plane Arrays (FPAs). This field specifies
    * those FPAs whose generated data is processed by this stage. This information is useful in identifying which
    * processing stage to configure if required. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::PO_FPA_ID_Type, uci::type::accessorType::pO_FPA_ID_Type> FPA_ID;

  /** Indicates the settings that apply to this output product. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::PO_ComponentStatusOutputProductSettingsType, uci::type::accessorType::pO_ComponentStatusOutputProductSettingsType> OutputProductSettings;

  /** Returns a const reference to the accessor that provides access to the complex content identified by GeneratorID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by GeneratorID.
    */
  virtual const uci::type::PO_ProductGeneratorID_Type& getGeneratorID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by GeneratorID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by GeneratorID.
    */
  virtual uci::type::PO_ProductGeneratorID_Type& getGeneratorID() = 0;

  /** Sets the complex content identified by GeneratorID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by GeneratorID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusProductGeneratorType& setGeneratorID(const uci::type::PO_ProductGeneratorID_Type& value) = 0;

  /** Returns a const reference to the bounded list identified by FPA_ID.
    *
    * @return A const reference to the bounded list identified by FPA_ID.
    */
  virtual const uci::type::PO_ComponentStatusProductGeneratorType::FPA_ID& getFPA_ID() const = 0;

  /** Returns a reference to the bounded list identified by FPA_ID.
    *
    * @return A reference to the bounded list identified by FPA_ID.
    */
  virtual uci::type::PO_ComponentStatusProductGeneratorType::FPA_ID& getFPA_ID() = 0;

  /** Sets the bounded list identified by FPA_ID.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusProductGeneratorType& setFPA_ID(const uci::type::PO_ComponentStatusProductGeneratorType::FPA_ID& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * ProductGeneratorStatus.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      ProductGeneratorStatus.
    */
  virtual const uci::type::ComponentControlsStatusType& getProductGeneratorStatus() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ProductGeneratorStatus.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ProductGeneratorStatus.
    */
  virtual uci::type::ComponentControlsStatusType& getProductGeneratorStatus() = 0;

  /** Sets the complex content identified by ProductGeneratorStatus to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ProductGeneratorStatus.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusProductGeneratorType& setProductGeneratorStatus(const uci::type::ComponentControlsStatusType& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * ProductGeneratorSettings.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      ProductGeneratorSettings.
    */
  virtual const uci::type::PO_ComponentStatusProductGeneratorSettingsType& getProductGeneratorSettings() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by
    * ProductGeneratorSettings.
    *
    * @return A reference to the accessor that provides access to the complex content identified by
    *      ProductGeneratorSettings.
    */
  virtual uci::type::PO_ComponentStatusProductGeneratorSettingsType& getProductGeneratorSettings() = 0;

  /** Sets the complex content identified by ProductGeneratorSettings to the contents of the complex content accessed by
    * the specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ProductGeneratorSettings.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusProductGeneratorType& setProductGeneratorSettings(const uci::type::PO_ComponentStatusProductGeneratorSettingsType& value) = 0;

  /** Returns whether the Element identified by ProductGeneratorSettings exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ProductGeneratorSettings is enabled or not.
    */
  virtual bool hasProductGeneratorSettings() const = 0;

  /** Enables the Element identified by ProductGeneratorSettings.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by
    *      ProductGeneratorSettings.
    */
  virtual uci::type::PO_ComponentStatusProductGeneratorSettingsType& enableProductGeneratorSettings(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ProductGeneratorSettings.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusProductGeneratorType& clearProductGeneratorSettings() = 0;

  /** Returns a const reference to the bounded list identified by OutputProductSettings.
    *
    * @return A const reference to the bounded list identified by OutputProductSettings.
    */
  virtual const uci::type::PO_ComponentStatusProductGeneratorType::OutputProductSettings& getOutputProductSettings() const = 0;

  /** Returns a reference to the bounded list identified by OutputProductSettings.
    *
    * @return A reference to the bounded list identified by OutputProductSettings.
    */
  virtual uci::type::PO_ComponentStatusProductGeneratorType::OutputProductSettings& getOutputProductSettings() = 0;

  /** Sets the bounded list identified by OutputProductSettings.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusProductGeneratorType& setOutputProductSettings(const uci::type::PO_ComponentStatusProductGeneratorType::OutputProductSettings& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  PO_ComponentStatusProductGeneratorType() {
  }

  /** The destructor [only available to derived classes]. */
  ~PO_ComponentStatusProductGeneratorType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The PO_ComponentStatusProductGeneratorType to copy from.
    */
  PO_ComponentStatusProductGeneratorType(const PO_ComponentStatusProductGeneratorType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this PO_ComponentStatusProductGeneratorType to the contents of the
    * PO_ComponentStatusProductGeneratorType on the right hand side (rhs) of the assignment operator [only available to
    * derived classes].
    *
    * @param rhs The PO_ComponentStatusProductGeneratorType on the right hand side (rhs) of the assignment operator whose
    *      contents are used to set the contents of this PO_ComponentStatusProductGeneratorType.
    * @return A reference to this PO_ComponentStatusProductGeneratorType.
    */
  PO_ComponentStatusProductGeneratorType& operator=(const PO_ComponentStatusProductGeneratorType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_PO_COMPONENTSTATUSPRODUCTGENERATORTYPE_H

