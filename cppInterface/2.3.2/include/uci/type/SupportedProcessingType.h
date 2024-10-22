/** @file SupportedProcessingType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:08 PM
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

#ifndef UCI_TYPE_SUPPORTEDPROCESSINGTYPE_H
#define UCI_TYPE_SUPPORTEDPROCESSINGTYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "ProcessingParametersPET.h"
#include "ProcessingTypeEnum.h"

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
class SupportedProcessingType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new SupportedProcessingType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed SupportedProcessingType.
    */
  static UCI_EXPORT SupportedProcessingType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new SupportedProcessingType initializing the data accessed by the new
    * SupportedProcessingType using the data accessed by the specified SupportedProcessingType (cloning).
    *
    * @param accessor The SupportedProcessingType that provides access to the data that is to be used to initialize the
    *      data accessed by the new created SupportedProcessingType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed SupportedProcessingType.
    */
  static UCI_EXPORT SupportedProcessingType& create(const SupportedProcessingType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified SupportedProcessingType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The SupportedProcessingType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(SupportedProcessingType& accessor);

  /** Returns this accessor's type constant, i.e. supportedProcessingType.
    *
    * @return This accessor's type constant, i.e. supportedProcessingType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::supportedProcessingType;
  }

  /** Returns the version that was initialized from the uci:version attribute of SupportedProcessingType.
    *
    * @return The version that was initialized from the uci:version attribute of SupportedProcessingType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const SupportedProcessingType& accessor) = 0;

  /** The actual type of processing that will occur on products to produce another product. List size for this element
    * allows for the selection of all applicable values. List size for this element is based on "Select All That Apply"
    * condition. [Occurrences: Minimum: 1; Maximum: 32]
    */
  typedef uci::base::BoundedList<uci::type::ProcessingTypeEnum, uci::type::accessorType::processingTypeEnum> ProcessingType;

  /** Returns a const reference to the bounded list identified by ProcessingType.
    *
    * @return A const reference to the bounded list identified by ProcessingType.
    */
  virtual const uci::type::SupportedProcessingType::ProcessingType& getProcessingType() const = 0;

  /** Returns a reference to the bounded list identified by ProcessingType.
    *
    * @return A reference to the bounded list identified by ProcessingType.
    */
  virtual uci::type::SupportedProcessingType::ProcessingType& getProcessingType() = 0;

  /** Sets the bounded list identified by ProcessingType.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SupportedProcessingType& setProcessingType(const uci::type::SupportedProcessingType::ProcessingType& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * ProcessingParameters.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      ProcessingParameters.
    */
  virtual const uci::type::ProcessingParametersPET& getProcessingParameters() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ProcessingParameters.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ProcessingParameters.
    */
  virtual uci::type::ProcessingParametersPET& getProcessingParameters() = 0;

  /** Sets the complex content identified by ProcessingParameters to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ProcessingParameters.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SupportedProcessingType& setProcessingParameters(const uci::type::ProcessingParametersPET& value) = 0;

  /** Returns whether the Element identified by ProcessingParameters exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ProcessingParameters is enabled or not.
    */
  virtual bool hasProcessingParameters() const = 0;

  /** Enables the Element identified by ProcessingParameters.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by ProcessingParameters.
    */
  virtual uci::type::ProcessingParametersPET& enableProcessingParameters(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ProcessingParameters.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SupportedProcessingType& clearProcessingParameters() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  SupportedProcessingType() {
  }

  /** The destructor [only available to derived classes]. */
  ~SupportedProcessingType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The SupportedProcessingType to copy from.
    */
  SupportedProcessingType(const SupportedProcessingType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this SupportedProcessingType to the contents of the
    * SupportedProcessingType on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The SupportedProcessingType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this SupportedProcessingType.
    * @return A reference to this SupportedProcessingType.
    */
  SupportedProcessingType& operator=(const SupportedProcessingType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_SUPPORTEDPROCESSINGTYPE_H

