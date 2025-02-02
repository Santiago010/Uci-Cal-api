/** @file CapabilityCoverageAreaMDT.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:06 PM
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

#ifndef UCI_TYPE_CAPABILITYCOVERAGEAREAMDT_H
#define UCI_TYPE_CAPABILITYCOVERAGEAREAMDT_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "CapabilityCoverageAreaDataType.h"
#include "CapabilityCoverageAreaID_Type.h"
#include "RequestID_Type.h"

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

/** This represents the characteristics that identify and describe a Capability Coverage Area. */
class CapabilityCoverageAreaMDT : public virtual uci::base::Accessor {
public:

  /** This method constructs a new CapabilityCoverageAreaMDT.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed CapabilityCoverageAreaMDT.
    */
  static UCI_EXPORT CapabilityCoverageAreaMDT& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new CapabilityCoverageAreaMDT initializing the data accessed by the new
    * CapabilityCoverageAreaMDT using the data accessed by the specified CapabilityCoverageAreaMDT (cloning).
    *
    * @param accessor The CapabilityCoverageAreaMDT that provides access to the data that is to be used to initialize the
    *      data accessed by the new created CapabilityCoverageAreaMDT.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed CapabilityCoverageAreaMDT.
    */
  static UCI_EXPORT CapabilityCoverageAreaMDT& create(const CapabilityCoverageAreaMDT& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified CapabilityCoverageAreaMDT. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The CapabilityCoverageAreaMDT that is to be destroyed.
    */
  static UCI_EXPORT void destroy(CapabilityCoverageAreaMDT& accessor);

  /** Returns this accessor's type constant, i.e. capabilityCoverageAreaMDT.
    *
    * @return This accessor's type constant, i.e. capabilityCoverageAreaMDT.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::capabilityCoverageAreaMDT;
  }

  /** Returns the version that was initialized from the uci:version attribute of CapabilityCoverageAreaMDT.
    *
    * @return The version that was initialized from the uci:version attribute of CapabilityCoverageAreaMDT.
    */
  static std::string getUCITypeVersion() {
    return "002.000.002.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const CapabilityCoverageAreaMDT& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * CapabilityCoverageAreaID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      CapabilityCoverageAreaID.
    */
  virtual const uci::type::CapabilityCoverageAreaID_Type& getCapabilityCoverageAreaID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by
    * CapabilityCoverageAreaID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by
    *      CapabilityCoverageAreaID.
    */
  virtual uci::type::CapabilityCoverageAreaID_Type& getCapabilityCoverageAreaID() = 0;

  /** Sets the complex content identified by CapabilityCoverageAreaID to the contents of the complex content accessed by
    * the specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by CapabilityCoverageAreaID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CapabilityCoverageAreaMDT& setCapabilityCoverageAreaID(const uci::type::CapabilityCoverageAreaID_Type& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * CapabilityCoverageAreaRequestID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      CapabilityCoverageAreaRequestID.
    */
  virtual const uci::type::RequestID_Type& getCapabilityCoverageAreaRequestID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by
    * CapabilityCoverageAreaRequestID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by
    *      CapabilityCoverageAreaRequestID.
    */
  virtual uci::type::RequestID_Type& getCapabilityCoverageAreaRequestID() = 0;

  /** Sets the complex content identified by CapabilityCoverageAreaRequestID to the contents of the complex content
    * accessed by the specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by CapabilityCoverageAreaRequestID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CapabilityCoverageAreaMDT& setCapabilityCoverageAreaRequestID(const uci::type::RequestID_Type& value) = 0;

  /** Returns whether the Element identified by CapabilityCoverageAreaRequestID exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by CapabilityCoverageAreaRequestID is enabled or not.
    */
  virtual bool hasCapabilityCoverageAreaRequestID() const = 0;

  /** Enables the Element identified by CapabilityCoverageAreaRequestID.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by
    *      CapabilityCoverageAreaRequestID.
    */
  virtual uci::type::RequestID_Type& enableCapabilityCoverageAreaRequestID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by CapabilityCoverageAreaRequestID.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CapabilityCoverageAreaMDT& clearCapabilityCoverageAreaRequestID() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * CapabilityCoverageAreaDetails.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      CapabilityCoverageAreaDetails.
    */
  virtual const uci::type::CapabilityCoverageAreaDataType& getCapabilityCoverageAreaDetails() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by
    * CapabilityCoverageAreaDetails.
    *
    * @return A reference to the accessor that provides access to the complex content identified by
    *      CapabilityCoverageAreaDetails.
    */
  virtual uci::type::CapabilityCoverageAreaDataType& getCapabilityCoverageAreaDetails() = 0;

  /** Sets the complex content identified by CapabilityCoverageAreaDetails to the contents of the complex content accessed
    * by the specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by CapabilityCoverageAreaDetails.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CapabilityCoverageAreaMDT& setCapabilityCoverageAreaDetails(const uci::type::CapabilityCoverageAreaDataType& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  CapabilityCoverageAreaMDT() {
  }

  /** The destructor [only available to derived classes]. */
  ~CapabilityCoverageAreaMDT() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The CapabilityCoverageAreaMDT to copy from.
    */
  CapabilityCoverageAreaMDT(const CapabilityCoverageAreaMDT& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this CapabilityCoverageAreaMDT to the contents of the
    * CapabilityCoverageAreaMDT on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The CapabilityCoverageAreaMDT on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this CapabilityCoverageAreaMDT.
    * @return A reference to this CapabilityCoverageAreaMDT.
    */
  CapabilityCoverageAreaMDT& operator=(const CapabilityCoverageAreaMDT& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_CAPABILITYCOVERAGEAREAMDT_H

